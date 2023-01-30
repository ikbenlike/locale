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
void save_locale(Locale *loc);
Locale *get_locale();

bool set_field(lc_ctype *category, std::string field, std::vector<std::string> value);
bool set_field(lc_ctype *category, std::string field, std::vector<pair> value);
bool set_field(lc_monetary *category, std::string field, std::string value);
bool set_field(lc_monetary *category, std::string field, std::vector<uint8_t> value);
bool set_field(lc_monetary *category, std::string field, uint8_t value);
bool set_field(lc_time *category, std::string field, std::vector<std::string> value);
bool set_field(lc_time *category, std::string field, std::string value);
bool set_field(lc_numeric *category, std::string field, std::string value);
bool set_field(lc_numeric *category, std::string field, std::vector<uint8_t> value);
bool set_field(lc_messages *category, std::string field, std::string value);

template<typename T, typename S, typename G>
bool set_section(Locale *loc, S setter, G getter, T *section){
    T empty;
    if((loc->*getter)().size_of_body() != empty.size_of_body())
        return false;

    (loc->*setter)(*section);
    return true;
}

} //namespace locale

#endif
