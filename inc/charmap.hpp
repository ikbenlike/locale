#ifndef __CHARMAP_HPP__
#define __CHARMAP_HPP__

#include <optional>
#include "lexer.hpp"
#include "bison_charmap.hpp"

namespace charmap {

class CharmapLexer : public Lexer {
    size_t m_cur_max = 1;
    size_t m_cur_min = 1;
public:
    charmap_parser::parser::symbol_type get_token();
    using Lexer::Lexer;

    void set_cur_max(size_t i);
    void set_cur_min(size_t i);
};

void init(std::string name, uint8_t *buffer, size_t size);
CharmapLexer *get_lexer();
int parse();
void set_config(std::string conf, std::string value);
void set_config(std::string conf, uint8_t value);

} //namespace charmap

#endif
