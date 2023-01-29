#include <optional>
#include <iostream>
#include <cstring>
#include <cerrno>
#include <cstdint>

#include "locale.bragi.hpp"
#include "util.hpp"
#include "charmap.hpp"
#include "locale.hpp"

int main(int argc, char **argv){
    if(argc < 3){
        std::cerr << "expected two arguments" << std::endl;
        return 1;
    }

    std::cout << "Charmap: " << argv[1] << std::endl;
    std::cout << "Locale: " << argv[2] << std::endl;

    size_t char_size = 0;
    auto o_char_buf = open_and_mmap(argv[1], &char_size);
    if(!o_char_buf.has_value()){
        std::cerr << "couldn't open " << argv[1] << std::endl;
        return 1;
    }

    size_t loc_size = 0;
    auto o_loc_buf = open_and_mmap(argv[2], &loc_size);
    if(!o_loc_buf.has_value()){
        std::cerr << "couldn't open " << argv[2] << std::endl;
        return 1;
    }

    charmap::init(std::string(argv[1]), *o_char_buf, char_size);
    int r = charmap::parse();
    if(r == 0){
        std::cout << "parsing successful" << std::endl;
        charmap::finalize();
    }
    else if(r == 1){
        std::cout << "parsing failed" << std::endl;
        return 1;
    }
    else {
        std::cout << "memory exhausted" << std::endl;
        return 1;
    }

    auto o_def = charmap::get_definition("U0041");
    if(!o_def.has_value()){
        std::cout << "Character not found" << std::endl;
        return 1;
    }

    auto def = *o_def;
    std::cout << "value: " << def.bytes[0] << std::endl;
    std::cout << "width: " << def.width << std::endl;

    locale::init(std::string(argv[2]), *o_loc_buf, loc_size);
    r = locale::parse();
    if(r == 0){
        std::cout << "locale parsing successful" << std::endl;
    }
    else {
        std::cerr << "locale parsing failed" << std::endl;
    }
}
