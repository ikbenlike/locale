#ifndef __LEXER_HPP__
#define __LEXER_HPP__

#include <string>
#include <optional>

class Lexer {
protected:
    uint8_t *m_buffer = nullptr;
    size_t m_index = 0;
    size_t m_line = 1;
    size_t m_column = 1;
    size_t m_max_size = 0;
    std::string m_name;

    uint8_t m_comment_char = '#';
    uint8_t m_escape_char = '\\';

    uint8_t read();
    uint8_t peek(size_t i);
    bool is_finished();
    std::optional<unsigned long> parse_num(std::string s, int radix) noexcept;
    void skip_blanks();
    void skip_comments();
    std::optional<std::string> read_character_name();
public:
    Lexer(std::string name, uint8_t *buffer, size_t size){
        m_name = name;
        m_buffer = buffer;
        m_max_size = size;
    }

    void error(std::string err);
    void error(size_t line, size_t column, std::string err);

    void set_comment(uint8_t c);
    void set_escape(uint8_t c);
    void set_name(std::string s);
};

#endif
