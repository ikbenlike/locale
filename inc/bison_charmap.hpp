/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_CHARMAP_INC_BISON_CHARMAP_HPP_INCLUDED
# define YY_CHARMAP_INC_BISON_CHARMAP_HPP_INCLUDED
/* Debug traces.  */
#ifndef CHARMAP_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define CHARMAP_DEBUG 1
#  else
#   define CHARMAP_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define CHARMAP_DEBUG 1
# endif /* ! defined YYDEBUG */
#endif  /* ! defined CHARMAP_DEBUG */
#if CHARMAP_DEBUG
extern int charmap_debug;
#endif

/* Token kinds.  */
#ifndef CHARMAP_TOKENTYPE
# define CHARMAP_TOKENTYPE
  enum charmap_tokentype
  {
    CHARMAP_EMPTY = -2,
    CHARMAP_EOF = 0,               /* "end of file"  */
    CHARMAP_error = 256,           /* error  */
    CHARMAP_UNDEF = 257,           /* "invalid token"  */
    CONFIG = 258,                  /* CONFIG  */
    CHARACTER_NAME = 259,          /* CHARACTER_NAME  */
    CHARACTER_HEX = 260,           /* CHARACTER_HEX  */
    CHARACTER_DEC = 261,           /* CHARACTER_DEC  */
    CHARACTER_OCT = 262,           /* CHARACTER_OCT  */
    NUMBER = 263,                  /* NUMBER  */
    EOFT = 264,                    /* EOFT  */
    EOL = 265,                     /* EOL  */
    TEXT = 266,                    /* TEXT  */
    CHARMAP = 267,                 /* CHARMAP  */
    END = 268,                     /* END  */
    RANGE = 269,                   /* RANGE  */
    RANGE_GNU = 270,               /* RANGE_GNU  */
    WIDTH = 271,                   /* WIDTH  */
    WIDTH_DEFAULT = 272            /* WIDTH_DEFAULT  */
  };
  typedef enum charmap_tokentype charmap_token_kind_t;
#endif

/* Value type.  */
#if ! defined CHARMAP_STYPE && ! defined CHARMAP_STYPE_IS_DECLARED
union CHARMAP_STYPE
{
#line 15 "src/bison_charmap.ypp"

    std::string str;
    uint8_t val;

#line 94 "inc/bison_charmap.hpp"

};
typedef union CHARMAP_STYPE CHARMAP_STYPE;
# define CHARMAP_STYPE_IS_TRIVIAL 1
# define CHARMAP_STYPE_IS_DECLARED 1
#endif


extern CHARMAP_STYPE charmap_lval;


int charmap_parse (void);


#endif /* !YY_CHARMAP_INC_BISON_CHARMAP_HPP_INCLUDED  */
