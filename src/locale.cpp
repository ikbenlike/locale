#include <optional>
#include <cctype>
#include <stdexcept>
#include <iostream>
#include <vector>
#include <map>
#include <sstream>

#include "lexer.hpp"
#include "locale.hpp"
#include "bison_locale.hpp"
#include "util.hpp"

namespace locale {

locale_parser::parser::symbol_type LocaleLexer::get_token(){
    skip_blanks();
    skip_comments();

    size_t old_line = m_line;
    size_t old_column = m_column;

    std::string token = "";

    if(is_finished()){
        return locale_parser::parser::make_LOCALE_PARSEREOF();
    }
    else if(peek(0) == '<'){
        auto o_token = read_character_name();
        if(!o_token.has_value()){
            return locale_parser::parser::make_LOCALE_PARSERerror();
        }
        token = *o_token;

        if(token.empty()){
            error("Expected characters between '<' and '>'.");
            return locale_parser::parser::make_LOCALE_PARSERerror();
        }

        std::cout << "name: " << token << std::endl;
        return locale_parser::parser::make_CHARACTER_NAME(token);
    }
    else if(peek(0) == m_escape_char){
        size_t radix = 10;
        int (*char_test)(int) = isdigit;
        size_t upper_bound = 3;
        read();

        if(peek(0) == 'd'){
            radix = 10;
            char_test = isdigit;
            read();
        }
        else if(peek(0) == 'x'){
            radix = 16;
            char_test = isxdigit;
            upper_bound = 2;
            read();
        }
        else if(isodigit(peek(0))){
            radix = 8;
            char_test = isodigit;
        }
        else {
            return locale_parser::parser::make_ESCAPE();
        }

        while(char_test(peek(0))){
            token += read();
        }

        if(token.size() < 2 || token.size() > upper_bound){
            error("Character literal can only contain two or three digits");
            return locale_parser::parser::make_LOCALE_PARSERerror();
        }

        auto o_num = parse_num(token, radix);
        if(!o_num.has_value()){
            return locale_parser::parser::make_LOCALE_PARSERerror();
        }

        return locale_parser::parser::make_CHARACTER_LITERAL((uint8_t)*o_num);
    }
    else if(peek(0) == ';'){
        read();
        return locale_parser::parser::make_SEMICOLON();
    }
    else if(peek(0) == '('){
        read();
        return locale_parser::parser::make_BRACKET_OPEN();
    }
    else if(peek(0) == ')'){
        read();
        return locale_parser::parser::make_BRACKET_CLOSE();
    }
    else if(peek(0) == ','){
        read();
        return locale_parser::parser::make_COMMA();
    }
    else if(peek(0) == '"'){
        read();
        while(peek(0) != '"'){
            token += read();
        }
        read();

        return locale_parser::parser::make_STRING(token);
    }
    else if(isdigit(peek(0)) || (peek(0) == '-' && isdigit(peek(1)))){
        do {
            token += read();
        } while(isdigit(peek(0)));

        int16_t result = 0;
        try {
            result = std::stoi(token, nullptr, 10);
        }
        catch(const std::invalid_argument& e){
            error("Conversion of '" + token + "'failed. This is a bug.");
            return locale_parser::parser::make_LOCALE_PARSERerror();
        }
        catch(const std::out_of_range& e){
            error("Conversion of '" + token + "'failed. This is a bug.");
            return locale_parser::parser::make_LOCALE_PARSERerror();
        }

        return locale_parser::parser::make_NUMBER(result);
    }
    else if(!isspace(peek(0))){
        do {
            token += read();
        } while(!isspace(peek(0)) && peek(0) != '\0');

        if(token == "END"){
            return locale_parser::parser::make_END();
        }
        else if(token == "LC_CTYPE"){
            return locale_parser::parser::make_T_LC_CTYPE();
        }
        else if(token == "LC_COLLATE"){
            return locale_parser::parser::make_T_LC_COLLATE();
        }
        else if(token == "LC_MESSAGES"){
            return locale_parser::parser::make_T_LC_MESSAGES();
        }
        else if(token == "LC_MONETARY"){
            return locale_parser::parser::make_T_LC_MONETARY();
        }
        else if(token == "LC_NUMERIC"){
            return locale_parser::parser::make_T_LC_NUMERIC();
        }
        else if(token == "LC_TIME"){
            return locale_parser::parser::make_T_LC_TIME();
        }
        else if(token == "LC_ADDRESS"){
            return locale_parser::parser::make_T_LC_ADDRESS();
        }
        else if(token == "LC_IDENTIFICATION"){
            return locale_parser::parser::make_T_LC_IDENTIFICATION();
        }
        else if(token == "LC_MEASUREMENT"){
            return locale_parser::parser::make_T_LC_MEASUREMENT();
        }
        else if(token == "LC_NAME"){
            return locale_parser::parser::make_T_LC_NAME();
        }
        else if(token == "LC_PAPER"){
            return locale_parser::parser::make_T_LC_PAPER();
        }
        else if(token == "LC_TELEPHONE"){
            return locale_parser::parser::make_T_LC_TELEPHONE();
        }
        else if(token == "UNDEFINED"){
            return locale_parser::parser::make_UNDEFINED();
        }
        else if(token == "copy"){
            return locale_parser::parser::make_COPY();
        }
        else if(token == "order_start"){
            return locale_parser::parser::make_ORDER_START();
        }
        else if(token == "order_end"){
            return locale_parser::parser::make_ORDER_END();
        }
        else if(token == "forward"){
            return locale_parser::parser::make_FORWARD();
        }
        else if(token == "backward"){
            return locale_parser::parser::make_BACKWARD();
        }
        else if(token == "tolower" || token == "toupper"){
            return locale_parser::parser::make_FIELD_CTYPE_PAIRS(token);
        }
        else if(token == "upper" || token == "lower" ||
                token == "digit" || token == "space" ||
                token == "cntrl" || token == "punct" ||
                token == "blank" || token == "xdigit"){
            return locale_parser::parser::make_FIELD_CTYPE_CHARS(token);
        }
        else if(token == "yesexpr" || token == "noexpr" ||
                token == "yesstr" || token == "nostr"){
            return locale_parser::parser::make_FIELD_MESSAGES(token);
        }
        else if(token == "int_curr_symbol" ||
                token == "currency_symbol" ||
                token == "mon_decimal_point" ||
                token == "mon_thousands_sep" ||
                token == "positive_sign" ||
                token == "negative_sign"){
            return locale_parser::parser::make_FIELD_MONETARY_STRING(token);
        }
        else if(token == "int_frac_digits" ||
                token == "frac_digits" ||
                token == "p_cs_precedes" ||
                token == "p_sep_by_space" ||
                token == "n_cs_precedes" ||
                token == "n_sep_by_space" ||
                token == "p_sign_posn" ||
                token == "n_sign_posn" ||
                token == "int_p_cs_precedes" ||
                token == "int_n_cs_precedes" ||
                token == "int_p_sep_by_space" ||
                token == "int_n_sep_by_space" ||
                token == "int_p_sign_posn" ||
                token == "int_n_sign_posn"){
            return locale_parser::parser::make_FIELD_MONETARY_SINGLE_BYTE(token);
        }
        else if(token == "mon_grouping"){
            return locale_parser::parser::make_FIELD_MONETARY_BYTES(token);
        }
        else if(token == "decimal_point" || token == "thousands_sep"){
            return locale_parser::parser::make_FIELD_NUMERIC_STRING(token);
        }
        else if(token == "grouping"){
            return locale_parser::parser::make_FIELD_NUMERIC_BYTES(token);
        }
        else if(token == "d_t_fmt" || token == "d_fmt" ||
                token == "t_fmt_ampm" || token == "date_fmt" ||
                token == "t_fmt"){
            return locale_parser::parser::make_FIELD_TIME_STRING(token);
        }
        else if(token == "abday" || token == "day" ||
                token == "abmon" || token == "mon" ||
                token == "am_pm"){
            return locale_parser::parser::make_FIELD_TIME_MULTIPLE_STRINGS(token);
        }
        else if(token == "postal_fmt" || token == "country_name" ||
                token == "country_post" || token == "country_ab2" ||
                token == "country_ab3" || token == "country_num" ||
                token == "country_car" || token == "country_isbn" ||
                token == "lang_name" || token == "lang_ab" ||
                token == "lang_term" || token == "lang_lib"){
            return locale_parser::parser::make_FIELD_ADDRESS(token);
        }
        else if(token == "title" || token == "source" ||
                token == "address" || token == "contact" ||
                token == "email" || token == "tel" ||
                token == "fax" || token == "language" ||
                token == "territory" || token == "audience" ||
                token == "application" || token == "abbreviation" ||
                token == "revision" || token == "date"){
            return locale_parser::parser::make_FIELD_IDENTIFICATION(token);
        }
        else if(token == "measurement"){
            return locale_parser::parser::make_FIELD_MEASUREMENT(token);
        }
        else if(token == "name_fmt" || token == "name_gen" ||
                token == "name_mr" || token == "name_mrs" ||
                token == "name_miss" || token == "name_ms"){
            return locale_parser::parser::make_FIELD_NAME(token);
        }
        else if(token == "height" || token == "width"){
            return locale_parser::parser::make_FIELD_PAPER(token);
        }
        else if(token == "tel_int_fmt" || token == "tel_dom_fmt" ||
                token == "int_select" || token == "int_prefix"){
            return locale_parser::parser::make_FIELD_TELEPHONE(token);
        }
        else if(token == "comment_char" || token == "escape_char"){
            return locale_parser::parser::make_CONFIG(token);
        }
        else {
            std::cout << "text: " << token << std::endl;
            return locale_parser::parser::make_TEXT(token);
        }
    }
    else if(peek(0) == '\n'){
        read();
        m_column = 1;
        m_line++;
        return locale_parser::parser::make_EOL();
    }

    error("The locale parser entered an unknown state. This is a bug.");
    return locale_parser::parser::make_LOCALE_PARSERerror();
}

LocaleLexer *lexer = nullptr;

void init(std::string name, uint8_t *buffer, size_t size){
    lexer = new LocaleLexer(name, buffer, size);
}

LocaleLexer *get_lexer(){
    return lexer;
}

int parse(){
    locale_parser::parser parser;
    parser.set_debug_level(true);
    return parser.parse();
}

void set_config(std::string conf, std::string value){
    if(conf == "comment_char"){
        lexer->set_comment(value[0]);
    }
    else if(conf == "escape_char"){
        lexer->set_escape(value[0]);
    }
}

bool had_section_ctype(){
    static bool h = false;
    bool t = h;
    h = true;
    return t;
}

bool had_section_collate(){
    static bool h = false;
    bool t = h;
    h = true;
    return t;
}

bool had_section_monetary(){
    static bool h = false;
    bool t = h;
    h = true;
    return t;
}

bool had_section_numeric(){
    static bool h = false;
    bool t = h;
    h = true;
    return t;
}

bool had_section_time(){
    static bool h = false;
    bool t = h;
    h = true;
    return t;
}

bool had_section_messages(){
    static bool h = false;
    bool t = h;
    h = true;
    return t;
}

} //namespace locale
