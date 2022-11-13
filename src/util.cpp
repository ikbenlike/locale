#include <iostream>
#include <optional>

#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>

void bison_error_printer(const char *s){
    std::cerr << s << std::endl;
}

std::optional<uint8_t *> open_and_mmap(char *path, size_t *size){
    if(size == NULL || path == NULL)
        return {};

    int fd = open(path, O_RDONLY);
    if(fd == -1)
        return {};

    struct stat fstats;
    int fs = fstat(fd, &fstats);
    if(fs == -1)
        return {};

    uint8_t *map = (uint8_t*)mmap(NULL, fstats.st_size, PROT_READ, MAP_SHARED, fd, 0);
    if(map == MAP_FAILED)
        return {};

    *size = fstats.st_size;
    return map;
}

int isodigit(int c) noexcept {
    switch(c){
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
            return true;
    }
    return false;
}
