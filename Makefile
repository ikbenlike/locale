CXX = g++
CXXFLAGS = -std=c++20 -Iinc
sources = src/main.cpp src/bison_charmap.cpp src/bison_locale.cpp src/lexer.cpp src/util.cpp src/charmap.cpp
includes = $(wildcard inc/*.hpp)

localedef: $(sources) $(includes)
	$(CXX) $(CXXFLAGS) $(sources) -o $@

inc/locale.bragi.hpp: inc/locale.bragi
	bragi -l stdc++ $< $@

src/bison_charmap.cpp: src/bison_charmap.ypp
	bison $< -o $@ --header=inc/bison_charmap.hpp

src/bison_locale.cpp: src/bison_locale.ypp
	bison $< -o $@ --header=inc/bison_locale.hpp

write: src/write.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

read: src/read.cpp
	$(CXX) $(CXXFLAGS) $< -o $@
