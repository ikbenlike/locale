#ifndef __LOCALE_HPP__
#define __LOCALE_HPP__

#include <optional>
#include "lexer.hpp"
#include "bison_locale.hpp"

namespace locale {

class LocaleLexer : public Lexer {
public:
    locale_parser::parser::symbol_type get_token();
    using Lexer::Lexer;
};

void init(std::string name, uint8_t *buffer, size_t size);
LocaleLexer *get_lexer();
int parse();
void set_config(std::string conf, std::string value);
bool had_section_ctype();
bool had_section_collate();
bool had_section_monetary();
bool had_section_numeric();
bool had_section_time();
bool had_section_messages();

} //namespace locale

#endif
