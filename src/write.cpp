#include <vector>
#include <iostream>
#include <span>
#include <fcntl.h>
#include <unistd.h>

#include "locale.bragi.hpp"
#include <bragi/helpers-all.hpp>

int main(void){
    Locale *loc = new Locale();

    loc->section_time().set_d_t_fmt("%a %b %e %H:%M:%S %Y");

    size_t total_size = loc->size_of_head() + loc->size_of_tail();
    std::vector<uint8_t> v(total_size);

    std::span<uint8_t> span{v.begin(), v.end()};
    std::span<uint8_t> head_span = span.subspan(0, loc->size_of_head());
    std::span<uint8_t> tail_span = span.subspan(loc->size_of_head());
    bool written = bragi::write_head_tail(*loc, head_span, tail_span);
    if(written){
        std::cout << "write success" << std::endl;
    }
    else {
        std::cout << "write failure" << std::endl;
        return 1;
    }

    int fd = open("./test", O_WRONLY);
    if(fd == -1){
        std::cout << "open failure" << std::endl;
    }
    else {
        std::cout << "open success" << std::endl;
    }

    ssize_t bytes_written = write(fd, v.data(), total_size);
    if(bytes_written != total_size){
        std::cout << "write to file failure" << std::endl;
    }
    else {
        std::cout << "write to file success" << std::endl;
    }
}
