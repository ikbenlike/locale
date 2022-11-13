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
    if(m_index + 1 < m_max_size)
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
