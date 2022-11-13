#include <optional>
#include <cctype>
#include <stdexcept>
#include <iostream>

#include "lexer.hpp"
#include "charmap.hpp"
#include "bison_charmap.hpp"
#include "util.hpp"

namespace charmap {

int CharmapLexer::get_token(){
    std::cout << "get token" << std::endl;
    for(uint8_t next = peek(0); isblank(next); next = peek(0)){
        read();
    }

    if(m_column == 1){    
        for(uint8_t comment = peek(0); comment == m_comment_char; comment = peek(0)){
            for(uint8_t c = comment; c != '\0'; c = peek(0)){
                read();
                if(c == '\n')
                    break;
            }
            m_line++;
        }
    }

    size_t old_line = m_line;
    size_t old_column = m_column;

    std::string token = "";

    if(is_finished()){
        return EOFT;
    }
    else if(peek(0) == '<'){
        token += read();
        bool escaped = false;
        for(uint8_t c = peek(0); true; c = peek(0)){
            if(c == '\n' || c == '\0'){
                error("Expected a character name, got unexpected EOF or linebreak.");
                return CHARMAP_error;
            }
            else if(!escaped && c == m_escape_char){
                escaped = true;
                read();
                continue;
            }
            else if(c == '>' && !escaped){
                token += read();
                break;
            }

            token += read();
            escaped = false;
        }

        if(token.size() <= 2){
            error("Expected characters between '<' and '>'.");
            return CHARMAP_error;
        }

        charmap_lval.str = token;

        if(token == "<code_set_name>" ||
           token == "<mb_cur_max>"    ||
           token == "<mb_cur_min>"    || 
           token == "<escape_char>"   ||
           token == "<comment_char>"){
            return CONFIG;
        }

        return CHARACTER_NAME;
    }
    else if(peek(0) == m_escape_char){
        charmap_tokentype type = CHARMAP_error;
        size_t radix = 10;
        int (*char_test)(int) = isdigit;
        size_t upper_bound = 3;
        read();

        if(peek(0) == 'd'){
            radix = 10;
            type = CHARACTER_DEC;
            char_test = isdigit;
            read();
        }
        else if(peek(0) == 'x'){
            radix = 16;
            type = CHARACTER_HEX;
            char_test = isxdigit;
            upper_bound = 2;
            read();
        }
        else if(isodigit(peek(0))){
            radix = 8;
            type = CHARACTER_OCT;
            char_test = isodigit;
        }
        else {
            error("Expected 'd', 'x', or an octal digit.");
            return CHARMAP_error;
        }

        size_t i = 0;
        while(char_test(peek(0))){
            token += read();
        }

        if(token.size() < 2 || token.size() > upper_bound){
            error("Decimal character literal can only contain two or three digits.");
            return CHARMAP_error;
        }

        auto o_num = parse_num(token, radix);
        if(!o_num.has_value()){
            return CHARMAP_error;
        }

        charmap_lval.val = (uint8_t)*o_num;
        return type;
    }
    else if(peek(0) == '.' && peek(1) == '.' && peek(2) == '.'){
        read(); read(); read();
        return RANGE;
    }
    else if(peek(0) == '.' && peek(1) == '.'){
        read(); read();
        return RANGE_GNU;
    }
    else if(isdigit(peek(0))){
        do {
            token += read();
        } while(isdigit(peek(0)));

        auto o_num = parse_num(token, 10);
        if(!o_num.has_value()){
            return CHARMAP_error;
        }

        charmap_lval.val = (uint8_t)*o_num;
        return NUMBER;
    }
    else if(isalpha(peek(0))){
        do {
            token += read();
        } while(isalpha(peek(0))); //loop until whitespace instead

        if(token == "CHARMAP"){
            return CHARMAP;
        }
        else if(token == "END"){
            return END;
        }
        else if(token == "WIDTH"){
            return WIDTH;
        }
        else if(token == "WIDTH_DEFAULT"){
            return WIDTH_DEFAULT;
        }

        charmap_lval.str = token;
        return TEXT;
    }
    else if(peek(0) == '\n'){
        read();
        m_column = 1;
        m_line++;
        return EOL;
    }
    else {
        return CHARMAP_error;
    }

    return EOFT;
}

CharmapLexer *lexer = nullptr;

void init(std::string name, uint8_t *buffer, size_t size){
    lexer = new CharmapLexer(name, buffer, size);
}

CharmapLexer *get_lexer(){
    return lexer;
}

int parse(){
    return charmap_parse();
}

} //namespace charmap
