/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         LOCALE_STYPE
/* Substitute the variable and function names.  */
#define yyparse         locale_parse
#define yylex           locale_lex
#define yyerror         locale_error
#define yydebug         locale_debug
#define yynerrs         locale_nerrs
#define yylval          locale_lval
#define yychar          locale_char

/* First part of user prologue.  */
#line 1 "src/bison_locale.ypp"

#include "util.hpp"
void locale_error(const char *s);
int locale_lex();

#line 85 "src/bison_locale.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "bison_locale.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CONFIG = 3,                     /* CONFIG  */
  YYSYMBOL_CHARACTER_NAME = 4,             /* CHARACTER_NAME  */
  YYSYMBOL_CHARACTER_LITERAL = 5,          /* CHARACTER_LITERAL  */
  YYSYMBOL_EOL = 6,                        /* EOL  */
  YYSYMBOL_EOFT = 7,                       /* EOFT  */
  YYSYMBOL_STRING = 8,                     /* STRING  */
  YYSYMBOL_NUMBER = 9,                     /* NUMBER  */
  YYSYMBOL_SEMICOLON = 10,                 /* SEMICOLON  */
  YYSYMBOL_BRACKET_OPEN = 11,              /* BRACKET_OPEN  */
  YYSYMBOL_BRACKET_CLOSE = 12,             /* BRACKET_CLOSE  */
  YYSYMBOL_COMMA = 13,                     /* COMMA  */
  YYSYMBOL_TEXT = 14,                      /* TEXT  */
  YYSYMBOL_LC_CTYPE = 15,                  /* LC_CTYPE  */
  YYSYMBOL_LC_COLLATE = 16,                /* LC_COLLATE  */
  YYSYMBOL_LC_MESSAGES = 17,               /* LC_MESSAGES  */
  YYSYMBOL_LC_MONETARY = 18,               /* LC_MONETARY  */
  YYSYMBOL_LC_NUMERIC = 19,                /* LC_NUMERIC  */
  YYSYMBOL_LC_TIME = 20,                   /* LC_TIME  */
  YYSYMBOL_LC_ADDRESS = 21,                /* LC_ADDRESS  */
  YYSYMBOL_LC_IDENTIFICATION = 22,         /* LC_IDENTIFICATION  */
  YYSYMBOL_LC_MEASUREMENT = 23,            /* LC_MEASUREMENT  */
  YYSYMBOL_LC_NAME = 24,                   /* LC_NAME  */
  YYSYMBOL_LC_PAPER = 25,                  /* LC_PAPER  */
  YYSYMBOL_LC_TELEPHONE = 26,              /* LC_TELEPHONE  */
  YYSYMBOL_FIELD_CTYPE_PAIRS = 27,         /* FIELD_CTYPE_PAIRS  */
  YYSYMBOL_FIELD_CTYPE_CHARS = 28,         /* FIELD_CTYPE_CHARS  */
  YYSYMBOL_FIELD_COLLATE = 29,             /* FIELD_COLLATE  */
  YYSYMBOL_FIELD_MESSAGES = 30,            /* FIELD_MESSAGES  */
  YYSYMBOL_FIELD_MONETARY_STRING = 31,     /* FIELD_MONETARY_STRING  */
  YYSYMBOL_FIELD_MONETARY_SINGLE_BYTE = 32, /* FIELD_MONETARY_SINGLE_BYTE  */
  YYSYMBOL_FIELD_MONETARY_BYTES = 33,      /* FIELD_MONETARY_BYTES  */
  YYSYMBOL_FIELD_NUMERIC_STRING = 34,      /* FIELD_NUMERIC_STRING  */
  YYSYMBOL_FIELD_NUMERIC_BYTES = 35,       /* FIELD_NUMERIC_BYTES  */
  YYSYMBOL_FIELD_TIME_STRING = 36,         /* FIELD_TIME_STRING  */
  YYSYMBOL_FIELD_TIME_MULTIPLE_STRINGS = 37, /* FIELD_TIME_MULTIPLE_STRINGS  */
  YYSYMBOL_FIELD_ADDRESS = 38,             /* FIELD_ADDRESS  */
  YYSYMBOL_FIELD_IDENTIFICATION = 39,      /* FIELD_IDENTIFICATION  */
  YYSYMBOL_FIELD_MEASUREMENT = 40,         /* FIELD_MEASUREMENT  */
  YYSYMBOL_FIELD_NAME = 41,                /* FIELD_NAME  */
  YYSYMBOL_FIELD_PAPER = 42,               /* FIELD_PAPER  */
  YYSYMBOL_FIELD_TELEPHONE = 43,           /* FIELD_TELEPHONE  */
  YYSYMBOL_COPY = 44,                      /* COPY  */
  YYSYMBOL_END = 45,                       /* END  */
  YYSYMBOL_ESCAPE = 46,                    /* ESCAPE  */
  YYSYMBOL_ORDER_START = 47,               /* ORDER_START  */
  YYSYMBOL_ORDER_END = 48,                 /* ORDER_END  */
  YYSYMBOL_FORWARD = 49,                   /* FORWARD  */
  YYSYMBOL_BACKWARD = 50,                  /* BACKWARD  */
  YYSYMBOL_UNDEFINED = 51,                 /* UNDEFINED  */
  YYSYMBOL_IGNORE = 52,                    /* IGNORE  */
  YYSYMBOL_POSITION = 53,                  /* POSITION  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_file = 55,                      /* file  */
  YYSYMBOL_locale_file = 56,               /* locale_file  */
  YYSYMBOL_prelude = 57,                   /* prelude  */
  YYSYMBOL_configs = 58,                   /* configs  */
  YYSYMBOL_sections = 59,                  /* sections  */
  YYSYMBOL_section_ctype = 60,             /* section_ctype  */
  YYSYMBOL_definitions_ctype = 61,         /* definitions_ctype  */
  YYSYMBOL_single_definition_ctype = 62,   /* single_definition_ctype  */
  YYSYMBOL_field_ctype_pairs_value = 63,   /* field_ctype_pairs_value  */
  YYSYMBOL_field_ctype_single_pair_value = 64, /* field_ctype_single_pair_value  */
  YYSYMBOL_section_collate = 65,           /* section_collate  */
  YYSYMBOL_collate_start = 66,             /* collate_start  */
  YYSYMBOL_order_operands = 67,            /* order_operands  */
  YYSYMBOL_order_operand = 68,             /* order_operand  */
  YYSYMBOL_definitions_collate = 69,       /* definitions_collate  */
  YYSYMBOL_single_definition_collate = 70, /* single_definition_collate  */
  YYSYMBOL_collate_char_specifiers = 71,   /* collate_char_specifiers  */
  YYSYMBOL_collate_char_specifier = 72,    /* collate_char_specifier  */
  YYSYMBOL_section_monetary = 73,          /* section_monetary  */
  YYSYMBOL_definitions_monetary = 74,      /* definitions_monetary  */
  YYSYMBOL_single_definition_monetary = 75, /* single_definition_monetary  */
  YYSYMBOL_section_numeric = 76,           /* section_numeric  */
  YYSYMBOL_field_chars_value = 77,         /* field_chars_value  */
  YYSYMBOL_definitions_numeric = 78,       /* definitions_numeric  */
  YYSYMBOL_single_definition_numeric = 79, /* single_definition_numeric  */
  YYSYMBOL_section_time = 80,              /* section_time  */
  YYSYMBOL_definitions_time = 81,          /* definitions_time  */
  YYSYMBOL_single_definition_time = 82,    /* single_definition_time  */
  YYSYMBOL_section_messages = 83,          /* section_messages  */
  YYSYMBOL_definitions_messages = 84,      /* definitions_messages  */
  YYSYMBOL_single_definition_messages = 85, /* single_definition_messages  */
  YYSYMBOL_character_value = 86,           /* character_value  */
  YYSYMBOL_field_bytes_value = 87,         /* field_bytes_value  */
  YYSYMBOL_field_strings_value = 88,       /* field_strings_value  */
  YYSYMBOL_character_literals = 89         /* character_literals  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined LOCALE_STYPE_IS_TRIVIAL && LOCALE_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  26
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   211

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  191

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if LOCALE_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    64,    64,    67,    68,    69,    73,    76,    77,    81,
      82,    83,    84,    85,    86,    90,    91,    95,    96,   100,
     101,   105,   106,   107,   111,   114,   115,   119,   120,   124,
     125,   129,   130,   131,   135,   136,   140,   141,   145,   146,
     150,   151,   152,   156,   157,   161,   162,   166,   167,   168,
     172,   173,   177,   178,   179,   183,   184,   188,   189,   193,
     194,   198,   199,   203,   204,   208,   209,   213,   214,   218,
     221,   222,   226,   227,   228,   232,   233,   234,   238,   239
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if LOCALE_DEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CONFIG",
  "CHARACTER_NAME", "CHARACTER_LITERAL", "EOL", "EOFT", "STRING", "NUMBER",
  "SEMICOLON", "BRACKET_OPEN", "BRACKET_CLOSE", "COMMA", "TEXT",
  "LC_CTYPE", "LC_COLLATE", "LC_MESSAGES", "LC_MONETARY", "LC_NUMERIC",
  "LC_TIME", "LC_ADDRESS", "LC_IDENTIFICATION", "LC_MEASUREMENT",
  "LC_NAME", "LC_PAPER", "LC_TELEPHONE", "FIELD_CTYPE_PAIRS",
  "FIELD_CTYPE_CHARS", "FIELD_COLLATE", "FIELD_MESSAGES",
  "FIELD_MONETARY_STRING", "FIELD_MONETARY_SINGLE_BYTE",
  "FIELD_MONETARY_BYTES", "FIELD_NUMERIC_STRING", "FIELD_NUMERIC_BYTES",
  "FIELD_TIME_STRING", "FIELD_TIME_MULTIPLE_STRINGS", "FIELD_ADDRESS",
  "FIELD_IDENTIFICATION", "FIELD_MEASUREMENT", "FIELD_NAME", "FIELD_PAPER",
  "FIELD_TELEPHONE", "COPY", "END", "ESCAPE", "ORDER_START", "ORDER_END",
  "FORWARD", "BACKWARD", "UNDEFINED", "IGNORE", "POSITION", "$accept",
  "file", "locale_file", "prelude", "configs", "sections", "section_ctype",
  "definitions_ctype", "single_definition_ctype",
  "field_ctype_pairs_value", "field_ctype_single_pair_value",
  "section_collate", "collate_start", "order_operands", "order_operand",
  "definitions_collate", "single_definition_collate",
  "collate_char_specifiers", "collate_char_specifier", "section_monetary",
  "definitions_monetary", "single_definition_monetary", "section_numeric",
  "field_chars_value", "definitions_numeric", "single_definition_numeric",
  "section_time", "definitions_time", "single_definition_time",
  "section_messages", "definitions_messages", "single_definition_messages",
  "character_value", "field_bytes_value", "field_strings_value",
  "character_literals", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-106)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,    23,    36,    38,    39,    66,    72,    73,    97,    91,
      67,    96,  -106,  -106,  -106,  -106,  -106,  -106,  -106,    95,
      -9,    33,    11,    27,    29,    32,  -106,  -106,  -106,    88,
    -106,    92,    26,    98,   -11,  -106,    99,     3,   100,   101,
     102,   -16,  -106,   103,   104,   105,   107,    -5,  -106,   108,
     105,   109,     4,  -106,   110,   111,   112,    30,  -106,   106,
      26,    55,  -106,  -106,  -106,    64,  -106,   116,   117,   113,
    -106,   118,  -106,  -106,  -106,  -106,    82,  -106,    -2,     9,
    -106,   119,   120,   114,  -106,   121,   123,  -106,    83,   124,
      87,  -106,   126,    84,   127,   115,  -106,   129,  -106,    85,
     130,   122,  -106,  -106,   125,  -106,     0,  -106,     8,  -106,
      77,   131,    94,  -106,   -17,  -106,  -106,  -106,  -106,    90,
    -106,   100,   128,  -106,   132,   134,  -106,  -106,  -106,     1,
     133,   135,  -106,  -106,   136,   137,  -106,  -106,    -3,   138,
     139,    26,   140,  -106,   141,  -106,   142,  -106,   143,  -106,
    -106,    -1,  -106,   144,   145,  -106,  -106,   146,   147,  -106,
     148,  -106,  -106,   149,   150,  -106,   151,    92,    26,   152,
     155,  -106,   158,   160,   159,   163,   165,   164,   168,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -106
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     5,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     4,     0,
       7,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,     0,    67,     0,     0,     0,     0,     0,    45,     0,
       0,     0,     0,    55,     0,     0,     0,     0,    61,     0,
       0,     0,    21,    70,    78,     0,    52,    71,     0,     0,
      18,     0,    27,    31,    32,    33,     0,    29,     0,     0,
      34,     0,     0,     0,    68,     0,     0,    72,     0,     0,
       0,    46,     0,     0,     0,     0,    56,     0,    75,     0,
       0,     0,    62,     8,     0,    19,     0,    20,     0,    79,
       0,     0,     0,    28,     0,    40,    36,    42,    41,     0,
      38,     0,     0,    69,     0,     0,    47,    48,    49,     0,
       0,     0,    57,    58,     0,     0,    63,    64,     0,     0,
       0,     0,     0,    22,     0,    53,     0,    16,     0,    30,
      37,     0,    35,     0,     0,    66,    73,     0,     0,    44,
       0,    51,    76,     0,     0,    60,     0,     0,     0,     0,
       0,    39,     0,     0,     0,     0,     0,     0,     0,    24,
      23,    54,    15,    25,    26,    65,    74,    43,    50,    77,
      59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -106,  -106,  -106,  -106,  -106,   166,  -106,  -106,   153,  -106,
    -105,  -106,  -106,  -106,    34,  -106,    28,  -106,    -7,  -106,
    -106,   154,  -106,  -106,  -106,   156,  -106,  -106,    93,  -106,
    -106,   157,   -60,   161,  -106,  -106
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     8,     9,    10,    11,    12,    13,    34,    35,    61,
      62,    14,    38,    76,    77,    79,    80,   119,   120,    15,
      47,    48,    16,    65,    52,    53,    17,    57,    58,    18,
      41,    42,    66,    88,    99,    67
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     104,   143,   115,   115,   116,   162,   117,   117,     1,    72,
     156,    60,    63,    64,    39,   121,    31,    32,    31,    32,
       2,     3,     4,     5,     6,     7,    43,    44,    45,    83,
      63,    64,    73,    74,    69,    33,    75,    19,    49,    50,
      90,    39,    20,   163,    21,    22,   142,   157,   145,    95,
     118,   118,    73,    74,   144,    40,    75,   122,    43,    44,
      45,   105,   180,    49,    50,   106,    54,    55,    54,    55,
     107,    46,    23,    51,   108,   101,    56,    36,    24,    25,
      37,   166,     2,     3,     4,     5,     6,     7,   113,   128,
     133,   137,   114,   129,   129,   138,   150,    26,    27,    29,
     151,    30,    59,    60,    78,   131,    68,    71,   181,    81,
      82,    85,   103,    86,    87,    89,    92,    94,    97,    98,
     100,   109,   146,   110,   112,   123,   124,   126,   111,   127,
     130,   125,   132,   134,   135,   136,   139,   147,   141,   148,
     155,   159,   140,   161,   171,   165,   167,   168,   149,   152,
     102,     0,   174,     0,     0,   177,     0,   169,   182,   170,
     172,   183,   173,   179,   184,   175,   185,   176,   186,   187,
     178,   188,   189,   153,   190,     0,    28,   154,   158,     0,
       0,   160,     0,   164,     0,     0,     0,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,    91,     0,     0,     0,     0,     0,     0,    96,     0,
       0,    93
};

static const yytype_int16 yycheck[] =
{
      60,   106,     4,     4,     6,     8,     8,     8,     3,     6,
       9,    11,     4,     5,    30,     6,    27,    28,    27,    28,
      15,    16,    17,    18,    19,    20,    31,    32,    33,    45,
       4,     5,    49,    50,    45,    44,    53,    14,    34,    35,
      45,    30,     6,    46,     6,     6,    46,    46,   108,    45,
      52,    52,    49,    50,    46,    44,    53,    48,    31,    32,
      33,     6,   167,    34,    35,    10,    36,    37,    36,    37,
       6,    44,     6,    44,    10,    45,    44,    44,     6,     6,
      47,   141,    15,    16,    17,    18,    19,    20,     6,     6,
       6,     6,    10,    10,    10,    10,     6,     0,     7,     3,
      10,     6,    14,    11,     4,    18,     8,     8,   168,     8,
       8,     8,     6,     9,     9,     8,     8,     8,     8,     8,
       8,     5,    45,     6,     6,     6,     6,     6,    15,     6,
       6,    17,     6,     6,    19,     6,     6,     6,    13,    45,
       6,     6,    20,     6,   151,     6,     6,     6,   114,   121,
      57,    -1,     6,    -1,    -1,     6,    -1,    15,     6,    16,
      16,     6,    17,    12,     6,    18,     6,    19,     9,     6,
      20,     6,     8,    45,     6,    -1,    10,    45,    45,    -1,
      -1,    45,    -1,    45,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    50
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    15,    16,    17,    18,    19,    20,    55,    56,
      57,    58,    59,    60,    65,    73,    76,    80,    83,    14,
       6,     6,     6,     6,     6,     6,     0,     7,    59,     3,
       6,    27,    28,    44,    61,    62,    44,    47,    66,    30,
      44,    84,    85,    31,    32,    33,    44,    74,    75,    34,
      35,    44,    78,    79,    36,    37,    44,    81,    82,    14,
      11,    63,    64,     4,     5,    77,    86,    89,     8,    45,
      62,     8,     6,    49,    50,    53,    67,    68,     4,    69,
      70,     8,     8,    45,    85,     8,     9,     9,    87,     8,
      45,    75,     8,    87,     8,    45,    79,     8,     8,    88,
       8,    45,    82,     6,    86,     6,    10,     6,    10,     5,
       6,    15,     6,     6,    10,     4,     6,     8,    52,    71,
      72,     6,    48,     6,     6,    17,     6,     6,     6,    10,
       6,    18,     6,     6,     6,    19,     6,     6,    10,     6,
      20,    13,    46,    64,    46,    86,    45,     6,    45,    68,
       6,    10,    70,    45,    45,     6,     9,    46,    45,     6,
      45,     6,     8,    46,    45,     6,    86,     6,     6,    15,
      16,    72,    16,    17,     6,    18,    19,     6,    20,    12,
      64,    86,     6,     6,     6,     6,     9,     6,     6,     8,
       6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    56,    56,    57,    58,    58,    59,
      59,    59,    59,    59,    59,    60,    60,    61,    61,    62,
      62,    63,    63,    63,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    68,    69,    69,    70,    70,    71,    71,
      72,    72,    72,    73,    73,    74,    74,    75,    75,    75,
      76,    76,    77,    77,    77,    78,    78,    79,    79,    80,
      80,    81,    81,    82,    82,    83,    83,    84,    84,    85,
      86,    86,    87,    87,    87,    88,    88,    88,    89,    89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     1,     3,     4,     1,
       1,     1,     1,     1,     1,     8,     6,     1,     2,     3,
       3,     1,     3,     5,     5,     8,     8,     2,     3,     1,
       3,     1,     1,     1,     1,     3,     2,     3,     1,     3,
       1,     1,     1,     8,     6,     1,     2,     3,     3,     3,
       8,     6,     1,     3,     5,     1,     2,     3,     3,     8,
       6,     1,     2,     3,     3,     8,     6,     1,     2,     3,
       1,     1,     1,     3,     5,     1,     3,     5,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = LOCALE_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == LOCALE_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use LOCALE_error or LOCALE_UNDEF. */
#define YYERRCODE LOCALE_UNDEF


/* Enable debugging if requested.  */
#if LOCALE_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !LOCALE_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !LOCALE_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = LOCALE_EMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == LOCALE_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= LOCALE_EOF)
    {
      yychar = LOCALE_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == LOCALE_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = LOCALE_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = LOCALE_EMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* file: locale_file EOFT  */
#line 64 "src/bison_locale.ypp"
                        { YYACCEPT; }
#line 1301 "src/bison_locale.cpp"
    break;


#line 1305 "src/bison_locale.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == LOCALE_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= LOCALE_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == LOCALE_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = LOCALE_EMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != LOCALE_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 242 "src/bison_locale.ypp"


void locale_error(const char *s){
    bison_error_printer(s);
}

int locale_lex(){
    return 0;
}
