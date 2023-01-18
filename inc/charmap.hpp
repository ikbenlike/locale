#ifndef __CHARMAP_HPP__
#define __CHARMAP_HPP__

#include <optional>
#include "lexer.hpp"
#include "bison_charmap.hpp"

namespace charmap {

struct CharacterDefinition {
    std::string name;
    std::vector<uint8_t> bytes;
    size_t width;
    bool width_set;
};

class CharmapLexer : public Lexer {
private:
    size_t m_cur_max = 1;
    size_t m_cur_min = 1;
    size_t m_width_default = 1;
public:
    charmap_parser::parser::symbol_type get_token();
    using Lexer::Lexer;

    void set_cur_max(size_t i);
    void set_cur_min(size_t i);
    void set_width_default(size_t i);
    size_t get_width_default();
};

void init(std::string name, uint8_t *buffer, size_t size);
CharmapLexer *get_lexer();
int parse();
void set_config(std::string conf, std::string value);
void set_config(std::string conf, uint8_t value);
void set_width_default(uint8_t value);
void save_definition(std::string name, std::vector<uint8_t> value);
std::optional<CharacterDefinition> get_definition(std::string name);
void save_range_definition(std::string start, std::string end, std::vector<uint8_t> value, int base);
void set_character_width(std::string name, size_t width);
void set_character_range_width(std::string start, std::string end, size_t width);
void finalize();

} //namespace charmap

#endif
