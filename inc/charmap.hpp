#ifndef __CHARMAP_HPP__
#define __CHARMAP_HPP__

#include <optional>
#include "lexer.hpp"

namespace charmap {

class CharmapLexer : Lexer {
public:
    int get_token() override;
    using Lexer::Lexer;
};

void init(std::string name, uint8_t *buffer, size_t size);
CharmapLexer *get_lexer();
int parse();

} //namespace charmap

#endif
