#ifndef __LOCALE_HPP__
#define __LOCALE_HPP__

#include <optional>
#include "lexer.hpp"
#include "locale.bragi.hpp"
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

lc_ctype *set_field(lc_ctype *category, std::string field, std::vector<std::string> value);
lc_ctype *set_field(lc_ctype *category, std::string field, std::vector<pair> value);

} //namespace locale

#endif
