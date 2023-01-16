#include <optional>
#include <cctype>
#include <stdexcept>
#include <iostream>
#include <vector>
#include <map>
#include <sstream>

#include "lexer.hpp"
#include "charmap.hpp"
#include "bison_charmap.hpp"
#include "util.hpp"

namespace charmap {

charmap_parser::parser::symbol_type CharmapLexer::get_token(){
    skip_blanks();
    skip_comments();

    size_t old_line = m_line;
    size_t old_column = m_column;

    std::string token = "";

    if(is_finished()){
        return charmap_parser::parser::make_CHARMAP_PARSEREOF();
    }
    else if(peek(0) == '<'){
        auto o_token = read_character_name();
        if(!o_token.has_value()){
            return charmap_parser::parser::make_CHARMAP_PARSERerror();
        }
        token = *o_token;

        if(token.empty()){
            error("Expected characters between '<' and '>'.");
            return charmap_parser::parser::make_CHARMAP_PARSERerror();
        }

        if(token == "code_set_name" ||
           token == "mb_cur_max"    ||
           token == "mb_cur_min"    || 
           token == "escape_char"   ||
           token == "comment_char"){
            return charmap_parser::parser::make_CONFIG(token);
        }

        return charmap_parser::parser::make_CHARACTER_NAME(token);
    }
    else if(peek(0) == m_escape_char){
        auto type = charmap_parser::parser::make_CHARACTER_DEC;
        size_t radix = 10;
        int (*char_test)(int) = isdigit;
        size_t upper_bound = 3;
        read();

        if(peek(0) == 'd'){
            radix = 10;
            type = charmap_parser::parser::make_CHARACTER_DEC;
            char_test = isdigit;
            read();
        }
        else if(peek(0) == 'x'){
            radix = 16;
            type = charmap_parser::parser::make_CHARACTER_HEX;
            char_test = isxdigit;
            upper_bound = 2;
            read();
        }
        else if(isodigit(peek(0))){
            radix = 8;
            type = charmap_parser::parser::make_CHARACTER_OCT;
            char_test = isodigit;
        }
        else {
            error("Expected 'd', 'x', or an octal digit.");
            return charmap_parser::parser::make_CHARMAP_PARSERerror();
        }

        while(char_test(peek(0))){
            token += read();
        }

        if(token.size() < 2 || token.size() > upper_bound){
            error("Decimal character literal can only contain two or three digits.");
            return charmap_parser::parser::make_CHARMAP_PARSERerror();
        }

        auto o_num = parse_num(token, radix);
        if(!o_num.has_value()){
            return charmap_parser::parser::make_CHARMAP_PARSERerror();
        }

        return type((uint8_t)*o_num);
    }
    else if(peek(0) == '.' && peek(1) == '.' && peek(2) == '.'){
        read(); read(); read();
        return charmap_parser::parser::make_RANGE();
    }
    else if(peek(0) == '.' && peek(1) == '.'){
        read(); read();
        return charmap_parser::parser::make_RANGE_GNU();
    }
    else if(isdigit(peek(0))){
        do {
            token += read();
        } while(isdigit(peek(0)));

        auto o_num = parse_num(token, 10);
        if(!o_num.has_value()){
            return charmap_parser::parser::make_CHARMAP_PARSERerror();
        }

        return charmap_parser::parser::make_NUMBER((uint8_t)*o_num);
    }
    else if(!isspace(peek(0))){
        do {
            token += read();
        } while(!isspace(peek(0)) && peek(0) != '\0');

        if(token == "CHARMAP"){
            return charmap_parser::parser::make_CHARMAP();
        }
        else if(token == "END"){
            return charmap_parser::parser::make_END();
        }
        else if(token == "WIDTH"){
            return charmap_parser::parser::make_WIDTH();
        }
        else if(token == "WIDTH_DEFAULT"){
            return charmap_parser::parser::make_WIDTH_DEFAULT();
        }

        return charmap_parser::parser::make_TEXT(token);
    }
    else if(peek(0) == '\n'){
        read();
        m_column = 1;
        m_line++;
        return charmap_parser::parser::make_EOL();
    }

    error("The character map parser entered an unknown state. This is a bug.");
    return charmap_parser::parser::make_CHARMAP_PARSERerror();
}

void CharmapLexer::set_cur_max(size_t i){
    m_cur_max = i;
}

void CharmapLexer::set_cur_min(size_t i){
    m_cur_min = i;
}

void CharmapLexer::set_width_default(size_t i){
    m_width_default = i;
}

size_t CharmapLexer::get_width_default(){
    return m_width_default;
}

CharmapLexer *lexer = nullptr;

void init(std::string name, uint8_t *buffer, size_t size){
    lexer = new CharmapLexer(name, buffer, size);
}

CharmapLexer *get_lexer(){
    return lexer;
}

int parse(){
    charmap_parser::parser parser;
    //parser.set_debug_level(true);
    return parser.parse();
}

void set_config(std::string conf, std::string value){
    if(conf == "code_set_name"){
        lexer->set_name(value);
    }
    else if(conf == "escape_char"){
        lexer->set_escape(value[0]);
    }
    else if(conf == "comment_char"){
        lexer->set_comment(value[0]);
    }
}

void set_config(std::string conf, uint8_t value){
    if(conf == "mb_cur_max"){
        lexer->set_cur_max(value);
    }
    else if(conf == "mb_cur_min"){
        lexer->set_cur_min(value);
    }
}

void set_width_default(uint8_t value){
    lexer->set_width_default(value);
}

std::vector<uint8_t> current_value;
std::vector<CharacterDefinition> definitions;
std::map<std::string, size_t> definition_map;

void add_to_value(uint8_t val){
    current_value.push_back(val);
}

void save_definition(std::string name){
    CharacterDefinition def = {
        .name = name,
        .bytes = current_value,
        .width_set = false
    };
    current_value = {};

    definitions.push_back(def);
    definition_map[name] = definitions.size() - 1;
}

std::optional<CharacterDefinition> get_definition(std::string name){
    if(!definition_map.contains(name))
        return {};

    size_t index = definition_map[name];
    return definitions[index];
}

std::string parse_range_int(std::string name, int base){
    auto digitp = &isdigit;
    if(base == 16)
        digitp = &isxdigit;

    size_t begin = 0;
    for(size_t i = name.size() - 1; i >= 0; i--){
        if(!digitp(name[i])){
            begin = i + 1;
            break;
        }
    }

    return name.substr(begin);
}

std::string parse_range_name(std::string name, size_t int_size){
    return name.substr(0, name.size() - int_size);
}

std::string produce_range_name(std::string name, size_t i, size_t base, size_t ndigits){
    std::ostringstream stream;
    if(base == 16)
        stream << std::uppercase << std::hex;
    stream << i;
    auto digits = stream.str();
    if(digits.size() - 1 < ndigits){
        digits = std::string(ndigits - digits.size(), '0') + digits;
    }
    return name + digits;
}

//This function does not consider the case where carry is true
//but the end of the vector is reached. It is assumed the user
//defines characters with enough bytes to hold their value;
//however, this might be considered a bug.
std::vector<uint8_t> produce_range_value(std::vector<uint8_t> val){
    bool carry = false;
    for(auto it = val.rbegin(); it != val.rend(); it++){
        if(it == val.rbegin() || carry){
            if(*it == 0xFF){
                carry = true;
                *it = 0;
                continue;
            }
            (*it)++;
            carry = false;
        }
    }
    return val;
}

void save_range_definition(std::string start, std::string end, int base){
    std::string start_number_string = parse_range_int(start, base);
    std::string end_number_string = parse_range_int(end, base);
    size_t ndigits = start_number_string.size();
    std::string name = parse_range_name(start, ndigits);
    size_t start_number = std::stoull(start_number_string, nullptr, base);
    size_t end_number = std::stoull(end_number_string, nullptr, base);
    std::vector<uint8_t> val = current_value;

    for(size_t i = start_number; i <= end_number; i++){
        std::string full_name = produce_range_name(name, i, base, ndigits);
        save_definition(full_name);
        val = produce_range_value(val);
        current_value = val;
    }
}

void set_character_width(std::string name, size_t width){
    if(!definition_map.contains(name))
        return; //TODO: error reporting

    size_t index = definition_map[name];
    definitions[index].width = width;
    definitions[index].width_set = true;
}

void set_character_range_width(std::string start, std::string end, size_t width){
    if(!definition_map.contains(start) || !definition_map.contains(end))
        return;

    size_t start_index = definition_map[start];
    size_t end_index = definition_map[end];
    for(size_t i = start_index; i <= end_index; i++){
        definitions[i].width = width;
        definitions[i].width_set = true;
    }
}

void finalize(){
    auto width = lexer->get_width_default();
    for(auto it = definitions.begin(); it < definitions.end(); it++){
        if(!it->width_set){
            it->width_set = true;
            it->width = width;
        }
    }
    delete lexer;
    lexer = nullptr;
}

} //namespace charmap
