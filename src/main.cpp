#include <optional>
#include <iostream>
#include <cstring>
#include <cerrno>
#include <cstdint>

#include "util.hpp"
#include "charmap.hpp"

int main(int argc, char **argv){
    if(argc < 3){
        std::cerr << "expected two arguments" << std::endl;
        return 1;
    }

    std::cout << "Charmap: " << argv[1] << std::endl;
    std::cout << "Locale: " << argv[2] << std::endl;

    size_t size = 0;
    auto o_buf = open_and_mmap(argv[1], &size);
    if(!o_buf.has_value()){
        std::cerr << "couldn't open " << argv[1] << std::endl;
    }

    charmap::init(std::string(argv[1]), *o_buf, size);
    int r = charmap::parse();
    if(r == 0){
        std::cout << "parsing successful" << std::endl;
    }
    else if(r == 1){
        std::cout << "parsing failed" << std::endl;
    }
    else {
        std::cout << "memory exhausted" << std::endl;
    }

    auto o_def = charmap::get_definition("U0041");
    if(!o_def.has_value()){
        std::cout << "Character not found" << std::endl;
        return 1;
    }

    auto def = *o_def;
    std::cout << def.bytes[0] << std::endl;
}
