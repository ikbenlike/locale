// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton interface for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


/**
 ** \file inc/bison_locale.hpp
 ** Define the locale_parser::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_LOCALE_PARSER_INC_BISON_LOCALE_HPP_INCLUDED
# define YY_LOCALE_PARSER_INC_BISON_LOCALE_HPP_INCLUDED


# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
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

/* Debug traces.  */
#ifndef LOCALE_PARSERDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define LOCALE_PARSERDEBUG 1
#  else
#   define LOCALE_PARSERDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define LOCALE_PARSERDEBUG 1
# endif /* ! defined YYDEBUG */
#endif  /* ! defined LOCALE_PARSERDEBUG */

namespace locale_parser {
#line 190 "inc/bison_locale.hpp"




  /// A Bison parser.
  class parser
  {
  public:
#ifdef LOCALE_PARSERSTYPE
# ifdef __GNUC__
#  pragma GCC message "bison: do not #define LOCALE_PARSERSTYPE in C++, use %define api.value.type"
# endif
    typedef LOCALE_PARSERSTYPE value_type;
#else
  /// A buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current parser state.
  class value_type
  {
  public:
    /// Type of *this.
    typedef value_type self_type;

    /// Empty construction.
    value_type () YY_NOEXCEPT
      : yyraw_ ()
    {}

    /// Construct and fill.
    template <typename T>
    value_type (YY_RVREF (T) t)
    {
      new (yyas_<T> ()) T (YY_MOVE (t));
    }

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    value_type (const self_type&) = delete;
    /// Non copyable.
    self_type& operator= (const self_type&) = delete;
#endif

    /// Destruction, allowed only if empty.
    ~value_type () YY_NOEXCEPT
    {}

# if 201103L <= YY_CPLUSPLUS
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename... U>
    T&
    emplace (U&&... u)
    {
      return *new (yyas_<T> ()) T (std::forward <U>(u)...);
    }
# else
    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      return *new (yyas_<T> ()) T ();
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      return *new (yyas_<T> ()) T (t);
    }
# endif

    /// Instantiate an empty \a T in here.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build ()
    {
      return emplace<T> ();
    }

    /// Instantiate a \a T in here from \a t.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build (const T& t)
    {
      return emplace<T> (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as () YY_NOEXCEPT
    {
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const YY_NOEXCEPT
    {
      return *yyas_<T> ();
    }

    /// Swap the content with \a that, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsibility.
    /// Swapping between built and (possibly) non-built is done with
    /// self_type::move ().
    template <typename T>
    void
    swap (self_type& that) YY_NOEXCEPT
    {
      std::swap (as<T> (), that.as<T> ());
    }

    /// Move the content of \a that to this.
    ///
    /// Destroys \a that.
    template <typename T>
    void
    move (self_type& that)
    {
# if 201103L <= YY_CPLUSPLUS
      emplace<T> (std::move (that.as<T> ()));
# else
      emplace<T> ();
      swap<T> (that);
# endif
      that.destroy<T> ();
    }

# if 201103L <= YY_CPLUSPLUS
    /// Move the content of \a that to this.
    template <typename T>
    void
    move (self_type&& that)
    {
      emplace<T> (std::move (that.as<T> ()));
      that.destroy<T> ();
    }
#endif

    /// Copy the content of \a that to this.
    template <typename T>
    void
    copy (const self_type& that)
    {
      emplace<T> (that.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
    }

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    value_type (const self_type&);
    /// Non copyable.
    self_type& operator= (const self_type&);
#endif

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ () YY_NOEXCEPT
    {
      void *yyp = yyraw_;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const YY_NOEXCEPT
    {
      const void *yyp = yyraw_;
      return static_cast<const T*> (yyp);
     }

    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {
      // CONFIG
      // CHARACTER_NAME
      // STRING
      // TEXT
      // FIELD_CTYPE_PAIRS
      // FIELD_CTYPE_CHARS
      // FIELD_COLLATE
      // FIELD_MESSAGES
      // FIELD_MONETARY_STRING
      // FIELD_MONETARY_SINGLE_BYTE
      // FIELD_MONETARY_BYTES
      // FIELD_NUMERIC_STRING
      // FIELD_NUMERIC_BYTES
      // FIELD_TIME_STRING
      // FIELD_TIME_MULTIPLE_STRINGS
      // FIELD_ADDRESS
      // FIELD_IDENTIFICATION
      // FIELD_MEASUREMENT
      // FIELD_NAME
      // FIELD_PAPER
      // FIELD_TELEPHONE
      char dummy1[sizeof (std::string)];

      // CHARACTER_LITERAL
      char dummy2[sizeof (uint8_t)];
    };

    /// The size of the largest semantic type.
    enum { size = sizeof (union_type) };

    /// A buffer to store semantic values.
    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me_;
      /// A buffer large enough to store any of the semantic values.
      char yyraw_[size];
    };
  };

#endif
    /// Backward compatibility (Bison 3.8).
    typedef value_type semantic_type;


    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const std::string& m)
        : std::runtime_error (m)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        LOCALE_PARSEREMPTY = -2,
    LOCALE_PARSEREOF = 0,          // "end of file"
    LOCALE_PARSERerror = 256,      // error
    LOCALE_PARSERUNDEF = 257,      // "invalid token"
    CONFIG = 258,                  // CONFIG
    CHARACTER_NAME = 259,          // CHARACTER_NAME
    CHARACTER_LITERAL = 260,       // CHARACTER_LITERAL
    EOL = 261,                     // EOL
    STRING = 262,                  // STRING
    NUMBER = 263,                  // NUMBER
    SEMICOLON = 264,               // SEMICOLON
    BRACKET_OPEN = 265,            // BRACKET_OPEN
    BRACKET_CLOSE = 266,           // BRACKET_CLOSE
    COMMA = 267,                   // COMMA
    TEXT = 268,                    // TEXT
    T_LC_CTYPE = 269,              // T_LC_CTYPE
    T_LC_COLLATE = 270,            // T_LC_COLLATE
    T_LC_MESSAGES = 271,           // T_LC_MESSAGES
    T_LC_MONETARY = 272,           // T_LC_MONETARY
    T_LC_NUMERIC = 273,            // T_LC_NUMERIC
    T_LC_TIME = 274,               // T_LC_TIME
    T_LC_ADDRESS = 275,            // T_LC_ADDRESS
    T_LC_IDENTIFICATION = 276,     // T_LC_IDENTIFICATION
    T_LC_MEASUREMENT = 277,        // T_LC_MEASUREMENT
    T_LC_NAME = 278,               // T_LC_NAME
    T_LC_PAPER = 279,              // T_LC_PAPER
    T_LC_TELEPHONE = 280,          // T_LC_TELEPHONE
    FIELD_CTYPE_PAIRS = 281,       // FIELD_CTYPE_PAIRS
    FIELD_CTYPE_CHARS = 282,       // FIELD_CTYPE_CHARS
    FIELD_COLLATE = 283,           // FIELD_COLLATE
    FIELD_MESSAGES = 284,          // FIELD_MESSAGES
    FIELD_MONETARY_STRING = 285,   // FIELD_MONETARY_STRING
    FIELD_MONETARY_SINGLE_BYTE = 286, // FIELD_MONETARY_SINGLE_BYTE
    FIELD_MONETARY_BYTES = 287,    // FIELD_MONETARY_BYTES
    FIELD_NUMERIC_STRING = 288,    // FIELD_NUMERIC_STRING
    FIELD_NUMERIC_BYTES = 289,     // FIELD_NUMERIC_BYTES
    FIELD_TIME_STRING = 290,       // FIELD_TIME_STRING
    FIELD_TIME_MULTIPLE_STRINGS = 291, // FIELD_TIME_MULTIPLE_STRINGS
    FIELD_ADDRESS = 292,           // FIELD_ADDRESS
    FIELD_IDENTIFICATION = 293,    // FIELD_IDENTIFICATION
    FIELD_MEASUREMENT = 294,       // FIELD_MEASUREMENT
    FIELD_NAME = 295,              // FIELD_NAME
    FIELD_PAPER = 296,             // FIELD_PAPER
    FIELD_TELEPHONE = 297,         // FIELD_TELEPHONE
    COPY = 298,                    // COPY
    END = 299,                     // END
    ESCAPE = 300,                  // ESCAPE
    ORDER_START = 301,             // ORDER_START
    ORDER_END = 302,               // ORDER_END
    FORWARD = 303,                 // FORWARD
    BACKWARD = 304,                // BACKWARD
    UNDEFINED = 305,               // UNDEFINED
    IGNORE = 306,                  // IGNORE
    POSITION = 307                 // POSITION
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::token_kind_type token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 53, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end of file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_CONFIG = 3,                            // CONFIG
        S_CHARACTER_NAME = 4,                    // CHARACTER_NAME
        S_CHARACTER_LITERAL = 5,                 // CHARACTER_LITERAL
        S_EOL = 6,                               // EOL
        S_STRING = 7,                            // STRING
        S_NUMBER = 8,                            // NUMBER
        S_SEMICOLON = 9,                         // SEMICOLON
        S_BRACKET_OPEN = 10,                     // BRACKET_OPEN
        S_BRACKET_CLOSE = 11,                    // BRACKET_CLOSE
        S_COMMA = 12,                            // COMMA
        S_TEXT = 13,                             // TEXT
        S_T_LC_CTYPE = 14,                       // T_LC_CTYPE
        S_T_LC_COLLATE = 15,                     // T_LC_COLLATE
        S_T_LC_MESSAGES = 16,                    // T_LC_MESSAGES
        S_T_LC_MONETARY = 17,                    // T_LC_MONETARY
        S_T_LC_NUMERIC = 18,                     // T_LC_NUMERIC
        S_T_LC_TIME = 19,                        // T_LC_TIME
        S_T_LC_ADDRESS = 20,                     // T_LC_ADDRESS
        S_T_LC_IDENTIFICATION = 21,              // T_LC_IDENTIFICATION
        S_T_LC_MEASUREMENT = 22,                 // T_LC_MEASUREMENT
        S_T_LC_NAME = 23,                        // T_LC_NAME
        S_T_LC_PAPER = 24,                       // T_LC_PAPER
        S_T_LC_TELEPHONE = 25,                   // T_LC_TELEPHONE
        S_FIELD_CTYPE_PAIRS = 26,                // FIELD_CTYPE_PAIRS
        S_FIELD_CTYPE_CHARS = 27,                // FIELD_CTYPE_CHARS
        S_FIELD_COLLATE = 28,                    // FIELD_COLLATE
        S_FIELD_MESSAGES = 29,                   // FIELD_MESSAGES
        S_FIELD_MONETARY_STRING = 30,            // FIELD_MONETARY_STRING
        S_FIELD_MONETARY_SINGLE_BYTE = 31,       // FIELD_MONETARY_SINGLE_BYTE
        S_FIELD_MONETARY_BYTES = 32,             // FIELD_MONETARY_BYTES
        S_FIELD_NUMERIC_STRING = 33,             // FIELD_NUMERIC_STRING
        S_FIELD_NUMERIC_BYTES = 34,              // FIELD_NUMERIC_BYTES
        S_FIELD_TIME_STRING = 35,                // FIELD_TIME_STRING
        S_FIELD_TIME_MULTIPLE_STRINGS = 36,      // FIELD_TIME_MULTIPLE_STRINGS
        S_FIELD_ADDRESS = 37,                    // FIELD_ADDRESS
        S_FIELD_IDENTIFICATION = 38,             // FIELD_IDENTIFICATION
        S_FIELD_MEASUREMENT = 39,                // FIELD_MEASUREMENT
        S_FIELD_NAME = 40,                       // FIELD_NAME
        S_FIELD_PAPER = 41,                      // FIELD_PAPER
        S_FIELD_TELEPHONE = 42,                  // FIELD_TELEPHONE
        S_COPY = 43,                             // COPY
        S_END = 44,                              // END
        S_ESCAPE = 45,                           // ESCAPE
        S_ORDER_START = 46,                      // ORDER_START
        S_ORDER_END = 47,                        // ORDER_END
        S_FORWARD = 48,                          // FORWARD
        S_BACKWARD = 49,                         // BACKWARD
        S_UNDEFINED = 50,                        // UNDEFINED
        S_IGNORE = 51,                           // IGNORE
        S_POSITION = 52,                         // POSITION
        S_YYACCEPT = 53,                         // $accept
        S_file = 54,                             // file
        S_locale_file = 55,                      // locale_file
        S_newlines = 56,                         // newlines
        S_prelude = 57,                          // prelude
        S_configs = 58,                          // configs
        S_sections = 59,                         // sections
        S_section_ctype = 60,                    // section_ctype
        S_definitions_ctype = 61,                // definitions_ctype
        S_single_definition_ctype = 62,          // single_definition_ctype
        S_field_ctype_pairs_value = 63,          // field_ctype_pairs_value
        S_field_ctype_single_pair_value = 64,    // field_ctype_single_pair_value
        S_section_collate = 65,                  // section_collate
        S_collate_start = 66,                    // collate_start
        S_order_operands = 67,                   // order_operands
        S_order_operand = 68,                    // order_operand
        S_definitions_collate = 69,              // definitions_collate
        S_single_definition_collate = 70,        // single_definition_collate
        S_collate_char_specifiers = 71,          // collate_char_specifiers
        S_collate_char_specifier = 72,           // collate_char_specifier
        S_section_monetary = 73,                 // section_monetary
        S_definitions_monetary = 74,             // definitions_monetary
        S_single_definition_monetary = 75,       // single_definition_monetary
        S_section_numeric = 76,                  // section_numeric
        S_field_chars_value = 77,                // field_chars_value
        S_definitions_numeric = 78,              // definitions_numeric
        S_single_definition_numeric = 79,        // single_definition_numeric
        S_section_time = 80,                     // section_time
        S_definitions_time = 81,                 // definitions_time
        S_single_definition_time = 82,           // single_definition_time
        S_section_messages = 83,                 // section_messages
        S_definitions_messages = 84,             // definitions_messages
        S_single_definition_messages = 85,       // single_definition_messages
        S_character_value = 86,                  // character_value
        S_field_bytes_value = 87,                // field_bytes_value
        S_field_strings_value = 88,              // field_strings_value
        S_character_literals = 89                // character_literals
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol kind
    /// via kind ().
    ///
    /// Provide access to semantic value.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol () YY_NOEXCEPT
        : value ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that)
        : Base (std::move (that))
        , value ()
      {
        switch (this->kind ())
    {
      case symbol_kind::S_CONFIG: // CONFIG
      case symbol_kind::S_CHARACTER_NAME: // CHARACTER_NAME
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_TEXT: // TEXT
      case symbol_kind::S_FIELD_CTYPE_PAIRS: // FIELD_CTYPE_PAIRS
      case symbol_kind::S_FIELD_CTYPE_CHARS: // FIELD_CTYPE_CHARS
      case symbol_kind::S_FIELD_COLLATE: // FIELD_COLLATE
      case symbol_kind::S_FIELD_MESSAGES: // FIELD_MESSAGES
      case symbol_kind::S_FIELD_MONETARY_STRING: // FIELD_MONETARY_STRING
      case symbol_kind::S_FIELD_MONETARY_SINGLE_BYTE: // FIELD_MONETARY_SINGLE_BYTE
      case symbol_kind::S_FIELD_MONETARY_BYTES: // FIELD_MONETARY_BYTES
      case symbol_kind::S_FIELD_NUMERIC_STRING: // FIELD_NUMERIC_STRING
      case symbol_kind::S_FIELD_NUMERIC_BYTES: // FIELD_NUMERIC_BYTES
      case symbol_kind::S_FIELD_TIME_STRING: // FIELD_TIME_STRING
      case symbol_kind::S_FIELD_TIME_MULTIPLE_STRINGS: // FIELD_TIME_MULTIPLE_STRINGS
      case symbol_kind::S_FIELD_ADDRESS: // FIELD_ADDRESS
      case symbol_kind::S_FIELD_IDENTIFICATION: // FIELD_IDENTIFICATION
      case symbol_kind::S_FIELD_MEASUREMENT: // FIELD_MEASUREMENT
      case symbol_kind::S_FIELD_NAME: // FIELD_NAME
      case symbol_kind::S_FIELD_PAPER: // FIELD_PAPER
      case symbol_kind::S_FIELD_TELEPHONE: // FIELD_TELEPHONE
        value.move< std::string > (std::move (that.value));
        break;

      case symbol_kind::S_CHARACTER_LITERAL: // CHARACTER_LITERAL
        value.move< uint8_t > (std::move (that.value));
        break;

      default:
        break;
    }

      }
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);

      /// Constructors for typed symbols.
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t)
        : Base (t)
      {}
#else
      basic_symbol (typename Base::kind_type t)
        : Base (t)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::string&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::string& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, uint8_t&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const uint8_t& v)
        : Base (t)
        , value (v)
      {}
#endif

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }



      /// Destroy contents, and record that is empty.
      void clear () YY_NOEXCEPT
      {
        // User destructor.
        symbol_kind_type yykind = this->kind ();
        basic_symbol<Base>& yysym = *this;
        (void) yysym;
        switch (yykind)
        {
       default:
          break;
        }

        // Value type destructor.
switch (yykind)
    {
      case symbol_kind::S_CONFIG: // CONFIG
      case symbol_kind::S_CHARACTER_NAME: // CHARACTER_NAME
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_TEXT: // TEXT
      case symbol_kind::S_FIELD_CTYPE_PAIRS: // FIELD_CTYPE_PAIRS
      case symbol_kind::S_FIELD_CTYPE_CHARS: // FIELD_CTYPE_CHARS
      case symbol_kind::S_FIELD_COLLATE: // FIELD_COLLATE
      case symbol_kind::S_FIELD_MESSAGES: // FIELD_MESSAGES
      case symbol_kind::S_FIELD_MONETARY_STRING: // FIELD_MONETARY_STRING
      case symbol_kind::S_FIELD_MONETARY_SINGLE_BYTE: // FIELD_MONETARY_SINGLE_BYTE
      case symbol_kind::S_FIELD_MONETARY_BYTES: // FIELD_MONETARY_BYTES
      case symbol_kind::S_FIELD_NUMERIC_STRING: // FIELD_NUMERIC_STRING
      case symbol_kind::S_FIELD_NUMERIC_BYTES: // FIELD_NUMERIC_BYTES
      case symbol_kind::S_FIELD_TIME_STRING: // FIELD_TIME_STRING
      case symbol_kind::S_FIELD_TIME_MULTIPLE_STRINGS: // FIELD_TIME_MULTIPLE_STRINGS
      case symbol_kind::S_FIELD_ADDRESS: // FIELD_ADDRESS
      case symbol_kind::S_FIELD_IDENTIFICATION: // FIELD_IDENTIFICATION
      case symbol_kind::S_FIELD_MEASUREMENT: // FIELD_MEASUREMENT
      case symbol_kind::S_FIELD_NAME: // FIELD_NAME
      case symbol_kind::S_FIELD_PAPER: // FIELD_PAPER
      case symbol_kind::S_FIELD_TELEPHONE: // FIELD_TELEPHONE
        value.template destroy< std::string > ();
        break;

      case symbol_kind::S_CHARACTER_LITERAL: // CHARACTER_LITERAL
        value.template destroy< uint8_t > ();
        break;

      default:
        break;
    }

        Base::clear ();
      }

#if LOCALE_PARSERDEBUG || 0
      /// The user-facing name of this symbol.
      const char *name () const YY_NOEXCEPT
      {
        return parser::symbol_name (this->kind ());
      }
#endif // #if LOCALE_PARSERDEBUG || 0


      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      value_type value;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_kind
    {
      /// The symbol kind as needed by the constructor.
      typedef token_kind_type kind_type;

      /// Default constructor.
      by_kind () YY_NOEXCEPT;

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_kind (by_kind&& that) YY_NOEXCEPT;
#endif

      /// Copy constructor.
      by_kind (const by_kind& that) YY_NOEXCEPT;

      /// Constructor from (external) token numbers.
      by_kind (kind_type t) YY_NOEXCEPT;



      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_kind& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// The symbol kind.
      /// \a S_YYEMPTY when empty.
      symbol_kind_type kind_;
    };

    /// Backward compatibility for a private implementation detail (Bison 3.6).
    typedef by_kind by_type;

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_kind>
    {
      /// Superclass.
      typedef basic_symbol<by_kind> super_type;

      /// Empty symbol.
      symbol_type () YY_NOEXCEPT {}

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok)
        : super_type (token_kind_type (tok))
#else
      symbol_type (int tok)
        : super_type (token_kind_type (tok))
#endif
      {}
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, std::string v)
        : super_type (token_kind_type (tok), std::move (v))
#else
      symbol_type (int tok, const std::string& v)
        : super_type (token_kind_type (tok), v)
#endif
      {}
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, uint8_t v)
        : super_type (token_kind_type (tok), std::move (v))
#else
      symbol_type (int tok, const uint8_t& v)
        : super_type (token_kind_type (tok), v)
#endif
      {}
    };

    /// Build a parser object.
    parser ();
    virtual ~parser ();

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    parser (const parser&) = delete;
    /// Non copyable.
    parser& operator= (const parser&) = delete;
#endif

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if LOCALE_PARSERDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param msg    a description of the syntax error.
    virtual void error (const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

#if LOCALE_PARSERDEBUG || 0
    /// The user-facing name of the symbol whose (internal) number is
    /// YYSYMBOL.  No bounds checking.
    static const char *symbol_name (symbol_kind_type yysymbol);
#endif // #if LOCALE_PARSERDEBUG || 0


    // Implementation of make_symbol for each token kind.
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LOCALE_PARSEREOF ()
      {
        return symbol_type (token::LOCALE_PARSEREOF);
      }
#else
      static
      symbol_type
      make_LOCALE_PARSEREOF ()
      {
        return symbol_type (token::LOCALE_PARSEREOF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LOCALE_PARSERerror ()
      {
        return symbol_type (token::LOCALE_PARSERerror);
      }
#else
      static
      symbol_type
      make_LOCALE_PARSERerror ()
      {
        return symbol_type (token::LOCALE_PARSERerror);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LOCALE_PARSERUNDEF ()
      {
        return symbol_type (token::LOCALE_PARSERUNDEF);
      }
#else
      static
      symbol_type
      make_LOCALE_PARSERUNDEF ()
      {
        return symbol_type (token::LOCALE_PARSERUNDEF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONFIG (std::string v)
      {
        return symbol_type (token::CONFIG, std::move (v));
      }
#else
      static
      symbol_type
      make_CONFIG (const std::string& v)
      {
        return symbol_type (token::CONFIG, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CHARACTER_NAME (std::string v)
      {
        return symbol_type (token::CHARACTER_NAME, std::move (v));
      }
#else
      static
      symbol_type
      make_CHARACTER_NAME (const std::string& v)
      {
        return symbol_type (token::CHARACTER_NAME, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CHARACTER_LITERAL (uint8_t v)
      {
        return symbol_type (token::CHARACTER_LITERAL, std::move (v));
      }
#else
      static
      symbol_type
      make_CHARACTER_LITERAL (const uint8_t& v)
      {
        return symbol_type (token::CHARACTER_LITERAL, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EOL ()
      {
        return symbol_type (token::EOL);
      }
#else
      static
      symbol_type
      make_EOL ()
      {
        return symbol_type (token::EOL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STRING (std::string v)
      {
        return symbol_type (token::STRING, std::move (v));
      }
#else
      static
      symbol_type
      make_STRING (const std::string& v)
      {
        return symbol_type (token::STRING, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NUMBER ()
      {
        return symbol_type (token::NUMBER);
      }
#else
      static
      symbol_type
      make_NUMBER ()
      {
        return symbol_type (token::NUMBER);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SEMICOLON ()
      {
        return symbol_type (token::SEMICOLON);
      }
#else
      static
      symbol_type
      make_SEMICOLON ()
      {
        return symbol_type (token::SEMICOLON);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BRACKET_OPEN ()
      {
        return symbol_type (token::BRACKET_OPEN);
      }
#else
      static
      symbol_type
      make_BRACKET_OPEN ()
      {
        return symbol_type (token::BRACKET_OPEN);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BRACKET_CLOSE ()
      {
        return symbol_type (token::BRACKET_CLOSE);
      }
#else
      static
      symbol_type
      make_BRACKET_CLOSE ()
      {
        return symbol_type (token::BRACKET_CLOSE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMMA ()
      {
        return symbol_type (token::COMMA);
      }
#else
      static
      symbol_type
      make_COMMA ()
      {
        return symbol_type (token::COMMA);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TEXT (std::string v)
      {
        return symbol_type (token::TEXT, std::move (v));
      }
#else
      static
      symbol_type
      make_TEXT (const std::string& v)
      {
        return symbol_type (token::TEXT, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_T_LC_CTYPE ()
      {
        return symbol_type (token::T_LC_CTYPE);
      }
#else
      static
      symbol_type
      make_T_LC_CTYPE ()
      {
        return symbol_type (token::T_LC_CTYPE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_T_LC_COLLATE ()
      {
        return symbol_type (token::T_LC_COLLATE);
      }
#else
      static
      symbol_type
      make_T_LC_COLLATE ()
      {
        return symbol_type (token::T_LC_COLLATE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_T_LC_MESSAGES ()
      {
        return symbol_type (token::T_LC_MESSAGES);
      }
#else
      static
      symbol_type
      make_T_LC_MESSAGES ()
      {
        return symbol_type (token::T_LC_MESSAGES);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_T_LC_MONETARY ()
      {
        return symbol_type (token::T_LC_MONETARY);
      }
#else
      static
      symbol_type
      make_T_LC_MONETARY ()
      {
        return symbol_type (token::T_LC_MONETARY);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_T_LC_NUMERIC ()
      {
        return symbol_type (token::T_LC_NUMERIC);
      }
#else
      static
      symbol_type
      make_T_LC_NUMERIC ()
      {
        return symbol_type (token::T_LC_NUMERIC);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_T_LC_TIME ()
      {
        return symbol_type (token::T_LC_TIME);
      }
#else
      static
      symbol_type
      make_T_LC_TIME ()
      {
        return symbol_type (token::T_LC_TIME);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_T_LC_ADDRESS ()
      {
        return symbol_type (token::T_LC_ADDRESS);
      }
#else
      static
      symbol_type
      make_T_LC_ADDRESS ()
      {
        return symbol_type (token::T_LC_ADDRESS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_T_LC_IDENTIFICATION ()
      {
        return symbol_type (token::T_LC_IDENTIFICATION);
      }
#else
      static
      symbol_type
      make_T_LC_IDENTIFICATION ()
      {
        return symbol_type (token::T_LC_IDENTIFICATION);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_T_LC_MEASUREMENT ()
      {
        return symbol_type (token::T_LC_MEASUREMENT);
      }
#else
      static
      symbol_type
      make_T_LC_MEASUREMENT ()
      {
        return symbol_type (token::T_LC_MEASUREMENT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_T_LC_NAME ()
      {
        return symbol_type (token::T_LC_NAME);
      }
#else
      static
      symbol_type
      make_T_LC_NAME ()
      {
        return symbol_type (token::T_LC_NAME);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_T_LC_PAPER ()
      {
        return symbol_type (token::T_LC_PAPER);
      }
#else
      static
      symbol_type
      make_T_LC_PAPER ()
      {
        return symbol_type (token::T_LC_PAPER);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_T_LC_TELEPHONE ()
      {
        return symbol_type (token::T_LC_TELEPHONE);
      }
#else
      static
      symbol_type
      make_T_LC_TELEPHONE ()
      {
        return symbol_type (token::T_LC_TELEPHONE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_CTYPE_PAIRS (std::string v)
      {
        return symbol_type (token::FIELD_CTYPE_PAIRS, std::move (v));
      }
#else
      static
      symbol_type
      make_FIELD_CTYPE_PAIRS (const std::string& v)
      {
        return symbol_type (token::FIELD_CTYPE_PAIRS, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_CTYPE_CHARS (std::string v)
      {
        return symbol_type (token::FIELD_CTYPE_CHARS, std::move (v));
      }
#else
      static
      symbol_type
      make_FIELD_CTYPE_CHARS (const std::string& v)
      {
        return symbol_type (token::FIELD_CTYPE_CHARS, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_COLLATE (std::string v)
      {
        return symbol_type (token::FIELD_COLLATE, std::move (v));
      }
#else
      static
      symbol_type
      make_FIELD_COLLATE (const std::string& v)
      {
        return symbol_type (token::FIELD_COLLATE, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_MESSAGES (std::string v)
      {
        return symbol_type (token::FIELD_MESSAGES, std::move (v));
      }
#else
      static
      symbol_type
      make_FIELD_MESSAGES (const std::string& v)
      {
        return symbol_type (token::FIELD_MESSAGES, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_MONETARY_STRING (std::string v)
      {
        return symbol_type (token::FIELD_MONETARY_STRING, std::move (v));
      }
#else
      static
      symbol_type
      make_FIELD_MONETARY_STRING (const std::string& v)
      {
        return symbol_type (token::FIELD_MONETARY_STRING, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_MONETARY_SINGLE_BYTE (std::string v)
      {
        return symbol_type (token::FIELD_MONETARY_SINGLE_BYTE, std::move (v));
      }
#else
      static
      symbol_type
      make_FIELD_MONETARY_SINGLE_BYTE (const std::string& v)
      {
        return symbol_type (token::FIELD_MONETARY_SINGLE_BYTE, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_MONETARY_BYTES (std::string v)
      {
        return symbol_type (token::FIELD_MONETARY_BYTES, std::move (v));
      }
#else
      static
      symbol_type
      make_FIELD_MONETARY_BYTES (const std::string& v)
      {
        return symbol_type (token::FIELD_MONETARY_BYTES, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_NUMERIC_STRING (std::string v)
      {
        return symbol_type (token::FIELD_NUMERIC_STRING, std::move (v));
      }
#else
      static
      symbol_type
      make_FIELD_NUMERIC_STRING (const std::string& v)
      {
        return symbol_type (token::FIELD_NUMERIC_STRING, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_NUMERIC_BYTES (std::string v)
      {
        return symbol_type (token::FIELD_NUMERIC_BYTES, std::move (v));
      }
#else
      static
      symbol_type
      make_FIELD_NUMERIC_BYTES (const std::string& v)
      {
        return symbol_type (token::FIELD_NUMERIC_BYTES, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_TIME_STRING (std::string v)
      {
        return symbol_type (token::FIELD_TIME_STRING, std::move (v));
      }
#else
      static
      symbol_type
      make_FIELD_TIME_STRING (const std::string& v)
      {
        return symbol_type (token::FIELD_TIME_STRING, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_TIME_MULTIPLE_STRINGS (std::string v)
      {
        return symbol_type (token::FIELD_TIME_MULTIPLE_STRINGS, std::move (v));
      }
#else
      static
      symbol_type
      make_FIELD_TIME_MULTIPLE_STRINGS (const std::string& v)
      {
        return symbol_type (token::FIELD_TIME_MULTIPLE_STRINGS, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_ADDRESS (std::string v)
      {
        return symbol_type (token::FIELD_ADDRESS, std::move (v));
      }
#else
      static
      symbol_type
      make_FIELD_ADDRESS (const std::string& v)
      {
        return symbol_type (token::FIELD_ADDRESS, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_IDENTIFICATION (std::string v)
      {
        return symbol_type (token::FIELD_IDENTIFICATION, std::move (v));
      }
#else
      static
      symbol_type
      make_FIELD_IDENTIFICATION (const std::string& v)
      {
        return symbol_type (token::FIELD_IDENTIFICATION, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_MEASUREMENT (std::string v)
      {
        return symbol_type (token::FIELD_MEASUREMENT, std::move (v));
      }
#else
      static
      symbol_type
      make_FIELD_MEASUREMENT (const std::string& v)
      {
        return symbol_type (token::FIELD_MEASUREMENT, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_NAME (std::string v)
      {
        return symbol_type (token::FIELD_NAME, std::move (v));
      }
#else
      static
      symbol_type
      make_FIELD_NAME (const std::string& v)
      {
        return symbol_type (token::FIELD_NAME, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_PAPER (std::string v)
      {
        return symbol_type (token::FIELD_PAPER, std::move (v));
      }
#else
      static
      symbol_type
      make_FIELD_PAPER (const std::string& v)
      {
        return symbol_type (token::FIELD_PAPER, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIELD_TELEPHONE (std::string v)
      {
        return symbol_type (token::FIELD_TELEPHONE, std::move (v));
      }
#else
      static
      symbol_type
      make_FIELD_TELEPHONE (const std::string& v)
      {
        return symbol_type (token::FIELD_TELEPHONE, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COPY ()
      {
        return symbol_type (token::COPY);
      }
#else
      static
      symbol_type
      make_COPY ()
      {
        return symbol_type (token::COPY);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_END ()
      {
        return symbol_type (token::END);
      }
#else
      static
      symbol_type
      make_END ()
      {
        return symbol_type (token::END);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ESCAPE ()
      {
        return symbol_type (token::ESCAPE);
      }
#else
      static
      symbol_type
      make_ESCAPE ()
      {
        return symbol_type (token::ESCAPE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ORDER_START ()
      {
        return symbol_type (token::ORDER_START);
      }
#else
      static
      symbol_type
      make_ORDER_START ()
      {
        return symbol_type (token::ORDER_START);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ORDER_END ()
      {
        return symbol_type (token::ORDER_END);
      }
#else
      static
      symbol_type
      make_ORDER_END ()
      {
        return symbol_type (token::ORDER_END);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FORWARD ()
      {
        return symbol_type (token::FORWARD);
      }
#else
      static
      symbol_type
      make_FORWARD ()
      {
        return symbol_type (token::FORWARD);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BACKWARD ()
      {
        return symbol_type (token::BACKWARD);
      }
#else
      static
      symbol_type
      make_BACKWARD ()
      {
        return symbol_type (token::BACKWARD);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_UNDEFINED ()
      {
        return symbol_type (token::UNDEFINED);
      }
#else
      static
      symbol_type
      make_UNDEFINED ()
      {
        return symbol_type (token::UNDEFINED);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IGNORE ()
      {
        return symbol_type (token::IGNORE);
      }
#else
      static
      symbol_type
      make_IGNORE ()
      {
        return symbol_type (token::IGNORE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_POSITION ()
      {
        return symbol_type (token::POSITION);
      }
#else
      static
      symbol_type
      make_POSITION ()
      {
        return symbol_type (token::POSITION);
      }
#endif


  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    parser (const parser&);
    /// Non copyable.
    parser& operator= (const parser&);
#endif


    /// Stored state numbers (used for stacks).
    typedef unsigned char state_type;

    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    static state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT;

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT;

    static const signed char yypact_ninf_;
    static const signed char yytable_ninf_;

    /// Convert a scanner token kind \a t to a symbol kind.
    /// In theory \a t should be a token_kind_type, but character literals
    /// are valid, yet not members of the token_kind_type enum.
    static symbol_kind_type yytranslate_ (int t) YY_NOEXCEPT;

#if LOCALE_PARSERDEBUG || 0
    /// For a symbol, its name in clear.
    static const char* const yytname_[];
#endif // #if LOCALE_PARSERDEBUG || 0


    // Tables.
    // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    // STATE-NUM.
    static const short yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const signed char yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const short yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const signed char yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const unsigned char yytable_[];

    static const short yycheck_[];

    // YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
    // state STATE-NUM.
    static const signed char yystos_[];

    // YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.
    static const signed char yyr1_[];

    // YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.
    static const signed char yyr2_[];


#if LOCALE_PARSERDEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const short yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r) const;
    /// Print the state stack on the debug stream.
    virtual void yy_stack_print_ () const;

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol kind, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol kind as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_state& that);

      /// The symbol kind (corresponding to \a state).
      /// \a symbol_kind::S_YYEMPTY when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      /// We use the initial state, as it does not have a value.
      enum { empty_state = 0 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);

      /// Assignment, needed by push_back by other implementations.
      /// Needed by some other old implementations.
      stack_symbol_type& operator= (const stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::iterator iterator;
      typedef typename S::const_iterator const_iterator;
      typedef typename S::size_type size_type;
      typedef typename std::ptrdiff_t index_type;

      stack (size_type n = 200) YY_NOEXCEPT
        : seq_ (n)
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Non copyable.
      stack (const stack&) = delete;
      /// Non copyable.
      stack& operator= (const stack&) = delete;
#endif

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (index_type i) const
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (index_type i)
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (std::ptrdiff_t n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      index_type
      size () const YY_NOEXCEPT
      {
        return index_type (seq_.size ());
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.begin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.end ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, index_type range) YY_NOEXCEPT
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (index_type i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        index_type range_;
      };

    private:
#if YY_CPLUSPLUS < 201103L
      /// Non copyable.
      stack (const stack&);
      /// Non copyable.
      stack& operator= (const stack&);
#endif
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1) YY_NOEXCEPT;

    /// Constants.
    enum
    {
      yylast_ = 219,     ///< Last index in yytable_.
      yynnts_ = 37,  ///< Number of nonterminal symbols.
      yyfinal_ = 26 ///< Termination state number.
    };



  };

  inline
  parser::symbol_kind_type
  parser::yytranslate_ (int t) YY_NOEXCEPT
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const signed char
    translate_table[] =
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
      45,    46,    47,    48,    49,    50,    51,    52
    };
    // Last valid token kind.
    const int code_max = 307;

    if (t <= 0)
      return symbol_kind::S_YYEOF;
    else if (t <= code_max)
      return static_cast <symbol_kind_type> (translate_table[t]);
    else
      return symbol_kind::S_YYUNDEF;
  }

  // basic_symbol.
  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
  {
    switch (this->kind ())
    {
      case symbol_kind::S_CONFIG: // CONFIG
      case symbol_kind::S_CHARACTER_NAME: // CHARACTER_NAME
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_TEXT: // TEXT
      case symbol_kind::S_FIELD_CTYPE_PAIRS: // FIELD_CTYPE_PAIRS
      case symbol_kind::S_FIELD_CTYPE_CHARS: // FIELD_CTYPE_CHARS
      case symbol_kind::S_FIELD_COLLATE: // FIELD_COLLATE
      case symbol_kind::S_FIELD_MESSAGES: // FIELD_MESSAGES
      case symbol_kind::S_FIELD_MONETARY_STRING: // FIELD_MONETARY_STRING
      case symbol_kind::S_FIELD_MONETARY_SINGLE_BYTE: // FIELD_MONETARY_SINGLE_BYTE
      case symbol_kind::S_FIELD_MONETARY_BYTES: // FIELD_MONETARY_BYTES
      case symbol_kind::S_FIELD_NUMERIC_STRING: // FIELD_NUMERIC_STRING
      case symbol_kind::S_FIELD_NUMERIC_BYTES: // FIELD_NUMERIC_BYTES
      case symbol_kind::S_FIELD_TIME_STRING: // FIELD_TIME_STRING
      case symbol_kind::S_FIELD_TIME_MULTIPLE_STRINGS: // FIELD_TIME_MULTIPLE_STRINGS
      case symbol_kind::S_FIELD_ADDRESS: // FIELD_ADDRESS
      case symbol_kind::S_FIELD_IDENTIFICATION: // FIELD_IDENTIFICATION
      case symbol_kind::S_FIELD_MEASUREMENT: // FIELD_MEASUREMENT
      case symbol_kind::S_FIELD_NAME: // FIELD_NAME
      case symbol_kind::S_FIELD_PAPER: // FIELD_PAPER
      case symbol_kind::S_FIELD_TELEPHONE: // FIELD_TELEPHONE
        value.copy< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CHARACTER_LITERAL: // CHARACTER_LITERAL
        value.copy< uint8_t > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }




  template <typename Base>
  parser::symbol_kind_type
  parser::basic_symbol<Base>::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


  template <typename Base>
  bool
  parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return this->kind () == symbol_kind::S_YYEMPTY;
  }

  template <typename Base>
  void
  parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->kind ())
    {
      case symbol_kind::S_CONFIG: // CONFIG
      case symbol_kind::S_CHARACTER_NAME: // CHARACTER_NAME
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_TEXT: // TEXT
      case symbol_kind::S_FIELD_CTYPE_PAIRS: // FIELD_CTYPE_PAIRS
      case symbol_kind::S_FIELD_CTYPE_CHARS: // FIELD_CTYPE_CHARS
      case symbol_kind::S_FIELD_COLLATE: // FIELD_COLLATE
      case symbol_kind::S_FIELD_MESSAGES: // FIELD_MESSAGES
      case symbol_kind::S_FIELD_MONETARY_STRING: // FIELD_MONETARY_STRING
      case symbol_kind::S_FIELD_MONETARY_SINGLE_BYTE: // FIELD_MONETARY_SINGLE_BYTE
      case symbol_kind::S_FIELD_MONETARY_BYTES: // FIELD_MONETARY_BYTES
      case symbol_kind::S_FIELD_NUMERIC_STRING: // FIELD_NUMERIC_STRING
      case symbol_kind::S_FIELD_NUMERIC_BYTES: // FIELD_NUMERIC_BYTES
      case symbol_kind::S_FIELD_TIME_STRING: // FIELD_TIME_STRING
      case symbol_kind::S_FIELD_TIME_MULTIPLE_STRINGS: // FIELD_TIME_MULTIPLE_STRINGS
      case symbol_kind::S_FIELD_ADDRESS: // FIELD_ADDRESS
      case symbol_kind::S_FIELD_IDENTIFICATION: // FIELD_IDENTIFICATION
      case symbol_kind::S_FIELD_MEASUREMENT: // FIELD_MEASUREMENT
      case symbol_kind::S_FIELD_NAME: // FIELD_NAME
      case symbol_kind::S_FIELD_PAPER: // FIELD_PAPER
      case symbol_kind::S_FIELD_TELEPHONE: // FIELD_TELEPHONE
        value.move< std::string > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_CHARACTER_LITERAL: // CHARACTER_LITERAL
        value.move< uint8_t > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

  }

  // by_kind.
  inline
  parser::by_kind::by_kind () YY_NOEXCEPT
    : kind_ (symbol_kind::S_YYEMPTY)
  {}

#if 201103L <= YY_CPLUSPLUS
  inline
  parser::by_kind::by_kind (by_kind&& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {
    that.clear ();
  }
#endif

  inline
  parser::by_kind::by_kind (const by_kind& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {}

  inline
  parser::by_kind::by_kind (token_kind_type t) YY_NOEXCEPT
    : kind_ (yytranslate_ (t))
  {}



  inline
  void
  parser::by_kind::clear () YY_NOEXCEPT
  {
    kind_ = symbol_kind::S_YYEMPTY;
  }

  inline
  void
  parser::by_kind::move (by_kind& that)
  {
    kind_ = that.kind_;
    that.clear ();
  }

  inline
  parser::symbol_kind_type
  parser::by_kind::kind () const YY_NOEXCEPT
  {
    return kind_;
  }


  inline
  parser::symbol_kind_type
  parser::by_kind::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


} // locale_parser
#line 2254 "inc/bison_locale.hpp"




#endif // !YY_LOCALE_PARSER_INC_BISON_LOCALE_HPP_INCLUDED
