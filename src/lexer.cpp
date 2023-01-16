#include <string>
#include <optional>
#include <iostream>

#include "lexer.hpp"

uint8_t Lexer::read(){
    if(m_index < m_max_size){
        m_column++;
        return m_buffer[m_index++];
    }

    return '\0';
}

uint8_t Lexer::peek(size_t i){
    if(m_index + i < m_max_size)
        return m_buffer[m_index + i];

    return '\0';
}

bool Lexer::is_finished(){
    return !(m_index < m_max_size);
}

void Lexer::error(std::string err){
    error(m_line, m_column, err);
}

void Lexer::error(size_t line, size_t column, std::string err){
    std::cerr << m_name << ":" << line << ":" << column << ": " << err << std::endl;
}

std::optional<unsigned long> Lexer::parse_num(std::string s, int radix) noexcept{
    unsigned long result = 0;
    try {
        result = std::stoul(s.c_str(), nullptr, radix);
    }
    catch(const std::invalid_argument& e){
        error("Conversion of '" + s + "'failed. This is a bug.");
        return {};
    }
    catch(const std::out_of_range& e){
        error("Conversion of '" + s + "' failed. This is a bug.");
        return {};
    }
    return result;
}

void Lexer::skip_blanks(){
    for(uint8_t next = peek(0); isblank(next); next = peek(0)){
        read();
    }
}

void Lexer::skip_comments(){
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
}

std::optional<std::string> Lexer::read_character_name(){
    if(peek(0) != '<')
        return {};

    std::string token = "";
    read();
    bool escaped = false;
    for(uint8_t c = peek(0); true; c = peek(0)){
        if(c == '\n' || c == '\0'){
            error("Expected a character name, got unexpected EOF or linebreak.");
            return {};
        }
        else if(!escaped && c == m_escape_char){
            escaped = true;
            read();
            continue;
        }
        else if(c == '>' && !escaped){
            read();
            break;
        }

        token += read();
        escaped = false;
    }
    return token;
}

void Lexer::set_comment(uint8_t c){
    m_comment_char = c;
}

void Lexer::set_escape(uint8_t c){
    m_escape_char = c;
}

void Lexer::set_name(std::string s){
    m_name = s;
}
