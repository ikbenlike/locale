#ifndef __UTIL_HPP__
#define __UTIL_HPP__

#include <optional>
#include <cstdint>

void bison_error_printer(const char *s);
std::optional<uint8_t *> open_and_mmap(char *path, size_t *size);
int isodigit(int c) noexcept;

#endif
