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

#ifndef YY_LOCALE_INC_BISON_LOCALE_HPP_INCLUDED
# define YY_LOCALE_INC_BISON_LOCALE_HPP_INCLUDED
/* Debug traces.  */
#ifndef LOCALE_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define LOCALE_DEBUG 1
#  else
#   define LOCALE_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define LOCALE_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined LOCALE_DEBUG */
#if LOCALE_DEBUG
extern int locale_debug;
#endif

/* Token kinds.  */
#ifndef LOCALE_TOKENTYPE
# define LOCALE_TOKENTYPE
  enum locale_tokentype
  {
    LOCALE_EMPTY = -2,
    LOCALE_EOF = 0,                /* "end of file"  */
    LOCALE_error = 256,            /* error  */
    LOCALE_UNDEF = 257,            /* "invalid token"  */
    CONFIG = 258,                  /* CONFIG  */
    CHARACTER_NAME = 259,          /* CHARACTER_NAME  */
    CHARACTER_LITERAL = 260,       /* CHARACTER_LITERAL  */
    EOL = 261,                     /* EOL  */
    EOFT = 262,                    /* EOFT  */
    STRING = 263,                  /* STRING  */
    NUMBER = 264,                  /* NUMBER  */
    SEMICOLON = 265,               /* SEMICOLON  */
    BRACKET_OPEN = 266,            /* BRACKET_OPEN  */
    BRACKET_CLOSE = 267,           /* BRACKET_CLOSE  */
    COMMA = 268,                   /* COMMA  */
    TEXT = 269,                    /* TEXT  */
    LC_CTYPE = 270,                /* LC_CTYPE  */
    LC_COLLATE = 271,              /* LC_COLLATE  */
    LC_MESSAGES = 272,             /* LC_MESSAGES  */
    LC_MONETARY = 273,             /* LC_MONETARY  */
    LC_NUMERIC = 274,              /* LC_NUMERIC  */
    LC_TIME = 275,                 /* LC_TIME  */
    LC_ADDRESS = 276,              /* LC_ADDRESS  */
    LC_IDENTIFICATION = 277,       /* LC_IDENTIFICATION  */
    LC_MEASUREMENT = 278,          /* LC_MEASUREMENT  */
    LC_NAME = 279,                 /* LC_NAME  */
    LC_PAPER = 280,                /* LC_PAPER  */
    LC_TELEPHONE = 281,            /* LC_TELEPHONE  */
    FIELD_CTYPE_PAIRS = 282,       /* FIELD_CTYPE_PAIRS  */
    FIELD_CTYPE_CHARS = 283,       /* FIELD_CTYPE_CHARS  */
    FIELD_COLLATE = 284,           /* FIELD_COLLATE  */
    FIELD_MESSAGES = 285,          /* FIELD_MESSAGES  */
    FIELD_MONETARY_STRING = 286,   /* FIELD_MONETARY_STRING  */
    FIELD_MONETARY_SINGLE_BYTE = 287, /* FIELD_MONETARY_SINGLE_BYTE  */
    FIELD_MONETARY_BYTES = 288,    /* FIELD_MONETARY_BYTES  */
    FIELD_NUMERIC_STRING = 289,    /* FIELD_NUMERIC_STRING  */
    FIELD_NUMERIC_BYTES = 290,     /* FIELD_NUMERIC_BYTES  */
    FIELD_TIME_STRING = 291,       /* FIELD_TIME_STRING  */
    FIELD_TIME_MULTIPLE_STRINGS = 292, /* FIELD_TIME_MULTIPLE_STRINGS  */
    FIELD_ADDRESS = 293,           /* FIELD_ADDRESS  */
    FIELD_IDENTIFICATION = 294,    /* FIELD_IDENTIFICATION  */
    FIELD_MEASUREMENT = 295,       /* FIELD_MEASUREMENT  */
    FIELD_NAME = 296,              /* FIELD_NAME  */
    FIELD_PAPER = 297,             /* FIELD_PAPER  */
    FIELD_TELEPHONE = 298,         /* FIELD_TELEPHONE  */
    COPY = 299,                    /* COPY  */
    END = 300,                     /* END  */
    ESCAPE = 301,                  /* ESCAPE  */
    ORDER_START = 302,             /* ORDER_START  */
    ORDER_END = 303,               /* ORDER_END  */
    FORWARD = 304,                 /* FORWARD  */
    BACKWARD = 305,                /* BACKWARD  */
    UNDEFINED = 306,               /* UNDEFINED  */
    IGNORE = 307,                  /* IGNORE  */
    POSITION = 308                 /* POSITION  */
  };
  typedef enum locale_tokentype locale_token_kind_t;
#endif

/* Value type.  */
#if ! defined LOCALE_STYPE && ! defined LOCALE_STYPE_IS_DECLARED
typedef int LOCALE_STYPE;
# define LOCALE_STYPE_IS_TRIVIAL 1
# define LOCALE_STYPE_IS_DECLARED 1
#endif


extern LOCALE_STYPE locale_lval;


int locale_parse (void);


#endif /* !YY_LOCALE_INC_BISON_LOCALE_HPP_INCLUDED  */
