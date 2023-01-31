// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

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

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.


// Take the name prefix into account.
#define yylex   locale_parserlex

// First part of user prologue.
#line 1 "src/bison_locale.ypp"

#include <string>
#include <cstdint>
#include "util.hpp"
#include "locale.hpp"
#include "locale.bragi.hpp"

#line 51 "src/bison_locale.cpp"


#include "bison_locale.hpp"


// Unqualified %code blocks.
#line 83 "src/bison_locale.ypp"

    namespace locale_parser {
        parser::symbol_type locale_parserlex();
    }

#line 64 "src/bison_locale.cpp"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif



// Enable debugging if requested.
#if LOCALE_PARSERDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !LOCALE_PARSERDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !LOCALE_PARSERDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace locale_parser {
#line 137 "src/bison_locale.cpp"

  /// Build a parser object.
  parser::parser ()
#if LOCALE_PARSERDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr)
#else

#endif
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_kind_type
  parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_sections: // sections
        value.YY_MOVE_OR_COPY< Locale * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_collate: // section_collate
        value.YY_MOVE_OR_COPY< lc_collate * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_ctype: // section_ctype
      case symbol_kind::S_definitions_ctype: // definitions_ctype
        value.YY_MOVE_OR_COPY< lc_ctype * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_messages: // section_messages
      case symbol_kind::S_definitions_messages: // definitions_messages
        value.YY_MOVE_OR_COPY< lc_messages * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_monetary: // section_monetary
      case symbol_kind::S_definitions_monetary: // definitions_monetary
        value.YY_MOVE_OR_COPY< lc_monetary * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_numeric: // section_numeric
      case symbol_kind::S_definitions_numeric: // definitions_numeric
        value.YY_MOVE_OR_COPY< lc_numeric * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_time: // section_time
      case symbol_kind::S_definitions_time: // definitions_time
        value.YY_MOVE_OR_COPY< lc_time * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_ctype_single_pair_value: // field_ctype_single_pair_value
        value.YY_MOVE_OR_COPY< pair > (YY_MOVE (that.value));
        break;

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
      case symbol_kind::S_character_value: // character_value
      case symbol_kind::S_character_literals: // character_literals
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_ctype_pairs_value: // field_ctype_pairs_value
        value.YY_MOVE_OR_COPY< std::vector<pair> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_chars_value: // field_chars_value
      case symbol_kind::S_field_strings_value: // field_strings_value
        value.YY_MOVE_OR_COPY< std::vector<std::string> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_bytes_value: // field_bytes_value
        value.YY_MOVE_OR_COPY< std::vector<uint8_t> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CHARACTER_LITERAL: // CHARACTER_LITERAL
      case symbol_kind::S_NUMBER: // NUMBER
        value.YY_MOVE_OR_COPY< uint8_t > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s)
  {
    switch (that.kind ())
    {
      case symbol_kind::S_sections: // sections
        value.move< Locale * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_collate: // section_collate
        value.move< lc_collate * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_ctype: // section_ctype
      case symbol_kind::S_definitions_ctype: // definitions_ctype
        value.move< lc_ctype * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_messages: // section_messages
      case symbol_kind::S_definitions_messages: // definitions_messages
        value.move< lc_messages * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_monetary: // section_monetary
      case symbol_kind::S_definitions_monetary: // definitions_monetary
        value.move< lc_monetary * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_numeric: // section_numeric
      case symbol_kind::S_definitions_numeric: // definitions_numeric
        value.move< lc_numeric * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_time: // section_time
      case symbol_kind::S_definitions_time: // definitions_time
        value.move< lc_time * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_ctype_single_pair_value: // field_ctype_single_pair_value
        value.move< pair > (YY_MOVE (that.value));
        break;

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
      case symbol_kind::S_character_value: // character_value
      case symbol_kind::S_character_literals: // character_literals
        value.move< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_ctype_pairs_value: // field_ctype_pairs_value
        value.move< std::vector<pair> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_chars_value: // field_chars_value
      case symbol_kind::S_field_strings_value: // field_strings_value
        value.move< std::vector<std::string> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_bytes_value: // field_bytes_value
        value.move< std::vector<uint8_t> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CHARACTER_LITERAL: // CHARACTER_LITERAL
      case symbol_kind::S_NUMBER: // NUMBER
        value.move< uint8_t > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_sections: // sections
        value.copy< Locale * > (that.value);
        break;

      case symbol_kind::S_section_collate: // section_collate
        value.copy< lc_collate * > (that.value);
        break;

      case symbol_kind::S_section_ctype: // section_ctype
      case symbol_kind::S_definitions_ctype: // definitions_ctype
        value.copy< lc_ctype * > (that.value);
        break;

      case symbol_kind::S_section_messages: // section_messages
      case symbol_kind::S_definitions_messages: // definitions_messages
        value.copy< lc_messages * > (that.value);
        break;

      case symbol_kind::S_section_monetary: // section_monetary
      case symbol_kind::S_definitions_monetary: // definitions_monetary
        value.copy< lc_monetary * > (that.value);
        break;

      case symbol_kind::S_section_numeric: // section_numeric
      case symbol_kind::S_definitions_numeric: // definitions_numeric
        value.copy< lc_numeric * > (that.value);
        break;

      case symbol_kind::S_section_time: // section_time
      case symbol_kind::S_definitions_time: // definitions_time
        value.copy< lc_time * > (that.value);
        break;

      case symbol_kind::S_field_ctype_single_pair_value: // field_ctype_single_pair_value
        value.copy< pair > (that.value);
        break;

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
      case symbol_kind::S_character_value: // character_value
      case symbol_kind::S_character_literals: // character_literals
        value.copy< std::string > (that.value);
        break;

      case symbol_kind::S_field_ctype_pairs_value: // field_ctype_pairs_value
        value.copy< std::vector<pair> > (that.value);
        break;

      case symbol_kind::S_field_chars_value: // field_chars_value
      case symbol_kind::S_field_strings_value: // field_strings_value
        value.copy< std::vector<std::string> > (that.value);
        break;

      case symbol_kind::S_field_bytes_value: // field_bytes_value
        value.copy< std::vector<uint8_t> > (that.value);
        break;

      case symbol_kind::S_CHARACTER_LITERAL: // CHARACTER_LITERAL
      case symbol_kind::S_NUMBER: // NUMBER
        value.copy< uint8_t > (that.value);
        break;

      default:
        break;
    }

    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_sections: // sections
        value.move< Locale * > (that.value);
        break;

      case symbol_kind::S_section_collate: // section_collate
        value.move< lc_collate * > (that.value);
        break;

      case symbol_kind::S_section_ctype: // section_ctype
      case symbol_kind::S_definitions_ctype: // definitions_ctype
        value.move< lc_ctype * > (that.value);
        break;

      case symbol_kind::S_section_messages: // section_messages
      case symbol_kind::S_definitions_messages: // definitions_messages
        value.move< lc_messages * > (that.value);
        break;

      case symbol_kind::S_section_monetary: // section_monetary
      case symbol_kind::S_definitions_monetary: // definitions_monetary
        value.move< lc_monetary * > (that.value);
        break;

      case symbol_kind::S_section_numeric: // section_numeric
      case symbol_kind::S_definitions_numeric: // definitions_numeric
        value.move< lc_numeric * > (that.value);
        break;

      case symbol_kind::S_section_time: // section_time
      case symbol_kind::S_definitions_time: // definitions_time
        value.move< lc_time * > (that.value);
        break;

      case symbol_kind::S_field_ctype_single_pair_value: // field_ctype_single_pair_value
        value.move< pair > (that.value);
        break;

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
      case symbol_kind::S_character_value: // character_value
      case symbol_kind::S_character_literals: // character_literals
        value.move< std::string > (that.value);
        break;

      case symbol_kind::S_field_ctype_pairs_value: // field_ctype_pairs_value
        value.move< std::vector<pair> > (that.value);
        break;

      case symbol_kind::S_field_chars_value: // field_chars_value
      case symbol_kind::S_field_strings_value: // field_strings_value
        value.move< std::vector<std::string> > (that.value);
        break;

      case symbol_kind::S_field_bytes_value: // field_bytes_value
        value.move< std::vector<uint8_t> > (that.value);
        break;

      case symbol_kind::S_CHARACTER_LITERAL: // CHARACTER_LITERAL
      case symbol_kind::S_NUMBER: // NUMBER
        value.move< uint8_t > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if LOCALE_PARSERDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " (";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if LOCALE_PARSERDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // LOCALE_PARSERDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_sections: // sections
        yylhs.value.emplace< Locale * > ();
        break;

      case symbol_kind::S_section_collate: // section_collate
        yylhs.value.emplace< lc_collate * > ();
        break;

      case symbol_kind::S_section_ctype: // section_ctype
      case symbol_kind::S_definitions_ctype: // definitions_ctype
        yylhs.value.emplace< lc_ctype * > ();
        break;

      case symbol_kind::S_section_messages: // section_messages
      case symbol_kind::S_definitions_messages: // definitions_messages
        yylhs.value.emplace< lc_messages * > ();
        break;

      case symbol_kind::S_section_monetary: // section_monetary
      case symbol_kind::S_definitions_monetary: // definitions_monetary
        yylhs.value.emplace< lc_monetary * > ();
        break;

      case symbol_kind::S_section_numeric: // section_numeric
      case symbol_kind::S_definitions_numeric: // definitions_numeric
        yylhs.value.emplace< lc_numeric * > ();
        break;

      case symbol_kind::S_section_time: // section_time
      case symbol_kind::S_definitions_time: // definitions_time
        yylhs.value.emplace< lc_time * > ();
        break;

      case symbol_kind::S_field_ctype_single_pair_value: // field_ctype_single_pair_value
        yylhs.value.emplace< pair > ();
        break;

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
      case symbol_kind::S_character_value: // character_value
      case symbol_kind::S_character_literals: // character_literals
        yylhs.value.emplace< std::string > ();
        break;

      case symbol_kind::S_field_ctype_pairs_value: // field_ctype_pairs_value
        yylhs.value.emplace< std::vector<pair> > ();
        break;

      case symbol_kind::S_field_chars_value: // field_chars_value
      case symbol_kind::S_field_strings_value: // field_strings_value
        yylhs.value.emplace< std::vector<std::string> > ();
        break;

      case symbol_kind::S_field_bytes_value: // field_bytes_value
        yylhs.value.emplace< std::vector<uint8_t> > ();
        break;

      case symbol_kind::S_CHARACTER_LITERAL: // CHARACTER_LITERAL
      case symbol_kind::S_NUMBER: // NUMBER
        yylhs.value.emplace< uint8_t > ();
        break;

      default:
        break;
    }



      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // file: locale_file $end
#line 91 "src/bison_locale.ypp"
                         { YYACCEPT; }
#line 923 "src/bison_locale.cpp"
    break;

  case 4: // locale_file: prelude sections
#line 95 "src/bison_locale.ypp"
                    { locale::save_locale(yystack_[0].value.as < Locale * > ()); }
#line 929 "src/bison_locale.cpp"
    break;

  case 5: // locale_file: sections
#line 96 "src/bison_locale.ypp"
            { locale::save_locale(yystack_[0].value.as < Locale * > ()); }
#line 935 "src/bison_locale.cpp"
    break;

  case 9: // configs: CONFIG TEXT newlines
#line 108 "src/bison_locale.ypp"
                        { locale::set_config(yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ()); }
#line 941 "src/bison_locale.cpp"
    break;

  case 10: // configs: configs CONFIG TEXT newlines
#line 109 "src/bison_locale.ypp"
                                { locale::set_config(yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ()); }
#line 947 "src/bison_locale.cpp"
    break;

  case 11: // sections: section_ctype
#line 114 "src/bison_locale.ypp"
 {
    auto l = new Locale;
    if(!locale::set_section(l, &Locale::set_section_ctype, &Locale::section_ctype, yystack_[0].value.as < lc_ctype * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = l;
 }
#line 959 "src/bison_locale.cpp"
    break;

  case 12: // sections: section_collate
#line 122 "src/bison_locale.ypp"
 {
    auto l = new Locale;
    if(!locale::set_section(l, &Locale::set_section_collate, &Locale::section_collate, yystack_[0].value.as < lc_collate * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = l;
 }
#line 971 "src/bison_locale.cpp"
    break;

  case 13: // sections: section_monetary
#line 130 "src/bison_locale.ypp"
 {
    auto l = new Locale;
    if(!locale::set_section(l, &Locale::set_section_monetary, &Locale::section_monetary, yystack_[0].value.as < lc_monetary * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = l;
 }
#line 983 "src/bison_locale.cpp"
    break;

  case 14: // sections: section_numeric
#line 138 "src/bison_locale.ypp"
 {
    auto l = new Locale;
    if(!locale::set_section(l, &Locale::set_section_numeric, &Locale::section_numeric, yystack_[0].value.as < lc_numeric * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = l;
 }
#line 995 "src/bison_locale.cpp"
    break;

  case 15: // sections: section_time
#line 146 "src/bison_locale.ypp"
 {
    auto l = new Locale;
    if(!locale::set_section(l, &Locale::set_section_time, &Locale::section_time, yystack_[0].value.as < lc_time * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = l;
 }
#line 1007 "src/bison_locale.cpp"
    break;

  case 16: // sections: section_messages
#line 154 "src/bison_locale.ypp"
 {
    auto l = new Locale;
    if(!locale::set_section(l, &Locale::set_section_messages, &Locale::section_messages, yystack_[0].value.as < lc_messages * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = l;
 }
#line 1019 "src/bison_locale.cpp"
    break;

  case 17: // sections: sections section_ctype
#line 162 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_ctype, &Locale::section_ctype, yystack_[0].value.as < lc_ctype * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1030 "src/bison_locale.cpp"
    break;

  case 18: // sections: sections section_collate
#line 169 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_collate, &Locale::section_collate, yystack_[0].value.as < lc_collate * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1041 "src/bison_locale.cpp"
    break;

  case 19: // sections: sections section_monetary
#line 176 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_monetary, &Locale::section_monetary, yystack_[0].value.as < lc_monetary * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1052 "src/bison_locale.cpp"
    break;

  case 20: // sections: sections section_numeric
#line 183 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_numeric, &Locale::section_numeric, yystack_[0].value.as < lc_numeric * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1063 "src/bison_locale.cpp"
    break;

  case 21: // sections: sections section_time
#line 190 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_time, &Locale::section_time, yystack_[0].value.as < lc_time * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1074 "src/bison_locale.cpp"
    break;

  case 22: // sections: sections section_messages
#line 197 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_messages, &Locale::section_messages, yystack_[0].value.as < lc_messages * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1085 "src/bison_locale.cpp"
    break;

  case 23: // section_ctype: T_LC_CTYPE EOL COPY STRING EOL END T_LC_CTYPE newlines
#line 206 "src/bison_locale.ypp"
                                                          { yylhs.value.as < lc_ctype * > () = new lc_ctype; }
#line 1091 "src/bison_locale.cpp"
    break;

  case 24: // section_ctype: T_LC_CTYPE EOL definitions_ctype END T_LC_CTYPE newlines
#line 207 "src/bison_locale.ypp"
                                                            { yylhs.value.as < lc_ctype * > () = yystack_[3].value.as < lc_ctype * > (); }
#line 1097 "src/bison_locale.cpp"
    break;

  case 25: // definitions_ctype: FIELD_CTYPE_PAIRS field_ctype_pairs_value newlines
#line 212 "src/bison_locale.ypp"
 {
    auto s = new lc_ctype;
    if(!locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<pair> > ())) YYERROR;
    yylhs.value.as < lc_ctype * > () = s;
 }
#line 1107 "src/bison_locale.cpp"
    break;

  case 26: // definitions_ctype: FIELD_CTYPE_CHARS field_chars_value newlines
#line 218 "src/bison_locale.ypp"
 {
    auto s = new lc_ctype;
    if(!locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<std::string> > ())) YYERROR;
    yylhs.value.as < lc_ctype * > () = s;
 }
#line 1117 "src/bison_locale.cpp"
    break;

  case 27: // definitions_ctype: definitions_ctype FIELD_CTYPE_PAIRS field_ctype_pairs_value newlines
#line 224 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_ctype * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<pair> > ())) YYERROR;
    yylhs.value.as < lc_ctype * > () = yystack_[3].value.as < lc_ctype * > ();
 }
#line 1126 "src/bison_locale.cpp"
    break;

  case 28: // definitions_ctype: definitions_ctype FIELD_CTYPE_CHARS field_chars_value newlines
#line 229 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_ctype * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<std::string> > ())) YYERROR;
    yylhs.value.as < lc_ctype * > () = yystack_[3].value.as < lc_ctype * > ();
 }
#line 1135 "src/bison_locale.cpp"
    break;

  case 29: // field_ctype_pairs_value: field_ctype_single_pair_value
#line 236 "src/bison_locale.ypp"
                                 { yylhs.value.as < std::vector<pair> > () = std::vector<pair>{yystack_[0].value.as < pair > ()}; }
#line 1141 "src/bison_locale.cpp"
    break;

  case 30: // field_ctype_pairs_value: field_ctype_pairs_value SEMICOLON field_ctype_single_pair_value
#line 237 "src/bison_locale.ypp"
                                                                   { yystack_[2].value.as < std::vector<pair> > ().push_back(yystack_[0].value.as < pair > ()); yylhs.value.as < std::vector<pair> > () = yystack_[2].value.as < std::vector<pair> > (); }
#line 1147 "src/bison_locale.cpp"
    break;

  case 31: // field_ctype_pairs_value: field_ctype_pairs_value SEMICOLON ESCAPE EOL field_ctype_single_pair_value
#line 238 "src/bison_locale.ypp"
                                                                              { yystack_[4].value.as < std::vector<pair> > ().push_back(yystack_[0].value.as < pair > ()); yylhs.value.as < std::vector<pair> > () = yystack_[4].value.as < std::vector<pair> > (); }
#line 1153 "src/bison_locale.cpp"
    break;

  case 32: // field_ctype_single_pair_value: BRACKET_OPEN character_value COMMA character_value BRACKET_CLOSE
#line 243 "src/bison_locale.ypp"
 {
    auto p = pair{};
    p.set_left(yystack_[3].value.as < std::string > ());
    p.set_right(yystack_[1].value.as < std::string > ());
    yylhs.value.as < pair > () = p;
 }
#line 1164 "src/bison_locale.cpp"
    break;

  case 33: // section_collate: T_LC_COLLATE EOL COPY STRING EOL END T_LC_COLLATE newlines
#line 251 "src/bison_locale.ypp"
                                                              { yylhs.value.as < lc_collate * > () = new lc_collate; }
#line 1170 "src/bison_locale.cpp"
    break;

  case 34: // section_collate: T_LC_COLLATE EOL collate_start definitions_collate ORDER_END EOL END T_LC_COLLATE newlines
#line 252 "src/bison_locale.ypp"
                                                                                              { yylhs.value.as < lc_collate * > () = new lc_collate; }
#line 1176 "src/bison_locale.cpp"
    break;

  case 52: // section_monetary: T_LC_MONETARY EOL COPY STRING EOL END T_LC_MONETARY newlines
#line 294 "src/bison_locale.ypp"
                                                                { yylhs.value.as < lc_monetary * > () = new lc_monetary; }
#line 1182 "src/bison_locale.cpp"
    break;

  case 53: // section_monetary: T_LC_MONETARY EOL definitions_monetary END T_LC_MONETARY newlines
#line 295 "src/bison_locale.ypp"
                                                                     { yylhs.value.as < lc_monetary * > () = yystack_[3].value.as < lc_monetary * > (); }
#line 1188 "src/bison_locale.cpp"
    break;

  case 54: // definitions_monetary: FIELD_MONETARY_STRING STRING EOL
#line 300 "src/bison_locale.ypp"
 {
    auto s = new lc_monetary;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ());
    yylhs.value.as < lc_monetary * > () = s;
 }
#line 1198 "src/bison_locale.cpp"
    break;

  case 55: // definitions_monetary: FIELD_MONETARY_SINGLE_BYTE NUMBER EOL
#line 306 "src/bison_locale.ypp"
 {
    auto s = new lc_monetary;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < uint8_t > ());
    yylhs.value.as < lc_monetary * > () = s;
 }
#line 1208 "src/bison_locale.cpp"
    break;

  case 56: // definitions_monetary: FIELD_MONETARY_BYTES field_bytes_value EOL
#line 312 "src/bison_locale.ypp"
 {
    auto s = new lc_monetary;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<uint8_t> > ());
    yylhs.value.as < lc_monetary * > () = s;
 }
#line 1218 "src/bison_locale.cpp"
    break;

  case 57: // definitions_monetary: definitions_monetary FIELD_MONETARY_STRING STRING EOL
#line 318 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_monetary * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ())){
        YYERROR;
    }
    yylhs.value.as < lc_monetary * > () = yystack_[3].value.as < lc_monetary * > ();
 }
#line 1229 "src/bison_locale.cpp"
    break;

  case 58: // definitions_monetary: definitions_monetary FIELD_MONETARY_SINGLE_BYTE NUMBER EOL
#line 325 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_monetary * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < uint8_t > ())){
        YYERROR;
    }
    yylhs.value.as < lc_monetary * > () = yystack_[3].value.as < lc_monetary * > ();
 }
#line 1240 "src/bison_locale.cpp"
    break;

  case 59: // definitions_monetary: definitions_monetary FIELD_MONETARY_BYTES field_bytes_value EOL
#line 332 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_monetary * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<uint8_t> > ())){
        YYERROR;
    }
    yylhs.value.as < lc_monetary * > () = yystack_[3].value.as < lc_monetary * > ();
 }
#line 1251 "src/bison_locale.cpp"
    break;

  case 60: // section_numeric: T_LC_NUMERIC EOL COPY STRING EOL END T_LC_NUMERIC newlines
#line 341 "src/bison_locale.ypp"
                                                              { yylhs.value.as < lc_numeric * > () = new lc_numeric; }
#line 1257 "src/bison_locale.cpp"
    break;

  case 61: // section_numeric: T_LC_NUMERIC EOL definitions_numeric END T_LC_NUMERIC newlines
#line 342 "src/bison_locale.ypp"
                                                                  { yylhs.value.as < lc_numeric * > () = yystack_[3].value.as < lc_numeric * > (); }
#line 1263 "src/bison_locale.cpp"
    break;

  case 62: // definitions_numeric: FIELD_NUMERIC_STRING STRING EOL
#line 347 "src/bison_locale.ypp"
 {
    auto s = new lc_numeric;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ());
    yylhs.value.as < lc_numeric * > () = s;
 }
#line 1273 "src/bison_locale.cpp"
    break;

  case 63: // definitions_numeric: FIELD_NUMERIC_BYTES field_bytes_value EOL
#line 353 "src/bison_locale.ypp"
 {
    auto s = new lc_numeric;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<uint8_t> > ());
    yylhs.value.as < lc_numeric * > () = s;
 }
#line 1283 "src/bison_locale.cpp"
    break;

  case 64: // definitions_numeric: definitions_numeric FIELD_NUMERIC_STRING STRING EOL
#line 359 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_numeric * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ())){
        YYERROR;
    }
    yylhs.value.as < lc_numeric * > () = yystack_[3].value.as < lc_numeric * > ();
 }
#line 1294 "src/bison_locale.cpp"
    break;

  case 65: // definitions_numeric: definitions_numeric FIELD_NUMERIC_BYTES field_bytes_value EOL
#line 366 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_numeric * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<uint8_t> > ())){
        YYERROR;
    }
    yylhs.value.as < lc_numeric * > () = yystack_[3].value.as < lc_numeric * > ();
 }
#line 1305 "src/bison_locale.cpp"
    break;

  case 66: // section_time: T_LC_TIME EOL COPY STRING EOL END T_LC_TIME newlines
#line 375 "src/bison_locale.ypp"
                                                        { yylhs.value.as < lc_time * > () = new lc_time; }
#line 1311 "src/bison_locale.cpp"
    break;

  case 67: // section_time: T_LC_TIME EOL definitions_time END T_LC_TIME newlines
#line 376 "src/bison_locale.ypp"
                                                         { yylhs.value.as < lc_time * > () = yystack_[3].value.as < lc_time * > (); }
#line 1317 "src/bison_locale.cpp"
    break;

  case 68: // definitions_time: FIELD_TIME_STRING STRING EOL
#line 381 "src/bison_locale.ypp"
 {
    auto s = new lc_time;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ());
    yylhs.value.as < lc_time * > () = s;
 }
#line 1327 "src/bison_locale.cpp"
    break;

  case 69: // definitions_time: FIELD_TIME_MULTIPLE_STRINGS field_strings_value EOL
#line 387 "src/bison_locale.ypp"
 {
    auto s = new lc_time;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<std::string> > ());
    yylhs.value.as < lc_time * > () = s;
 }
#line 1337 "src/bison_locale.cpp"
    break;

  case 70: // definitions_time: definitions_time FIELD_TIME_STRING STRING EOL
#line 393 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_time * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ())){
        YYERROR;
    }
    yylhs.value.as < lc_time * > () = yystack_[3].value.as < lc_time * > ();
 }
#line 1348 "src/bison_locale.cpp"
    break;

  case 71: // definitions_time: definitions_time FIELD_TIME_MULTIPLE_STRINGS field_strings_value EOL
#line 400 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_time * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<std::string> > ())){
        YYERROR;
    }
    yylhs.value.as < lc_time * > () = yystack_[3].value.as < lc_time * > ();
 }
#line 1359 "src/bison_locale.cpp"
    break;

  case 72: // section_messages: T_LC_MESSAGES EOL COPY STRING EOL END T_LC_MESSAGES newlines
#line 409 "src/bison_locale.ypp"
                                                                { yylhs.value.as < lc_messages * > () = new lc_messages; }
#line 1365 "src/bison_locale.cpp"
    break;

  case 73: // section_messages: T_LC_MESSAGES EOL definitions_messages END T_LC_MESSAGES newlines
#line 410 "src/bison_locale.ypp"
                                                                     { yylhs.value.as < lc_messages * > () = yystack_[3].value.as < lc_messages * > (); }
#line 1371 "src/bison_locale.cpp"
    break;

  case 74: // definitions_messages: FIELD_MESSAGES STRING EOL
#line 415 "src/bison_locale.ypp"
 {
    auto s = new lc_messages;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ());
    yylhs.value.as < lc_messages * > () = s;
 }
#line 1381 "src/bison_locale.cpp"
    break;

  case 75: // definitions_messages: definitions_messages FIELD_MESSAGES STRING EOL
#line 421 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_messages * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ())){
        YYERROR;
    }
    yylhs.value.as < lc_messages * > () = yystack_[3].value.as < lc_messages * > ();
 }
#line 1392 "src/bison_locale.cpp"
    break;

  case 76: // character_value: CHARACTER_NAME
#line 431 "src/bison_locale.ypp"
 {
    auto o_char = locale::lookup_character(yystack_[0].value.as < std::string > ());
    if(!o_char.has_value()){
        YYERROR;
    }
    yylhs.value.as < std::string > () = *o_char;
 }
#line 1404 "src/bison_locale.cpp"
    break;

  case 77: // character_value: character_literals
#line 438 "src/bison_locale.ypp"
   { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
#line 1410 "src/bison_locale.cpp"
    break;

  case 78: // field_chars_value: character_value
#line 442 "src/bison_locale.ypp"
                   { yylhs.value.as < std::vector<std::string> > () = std::vector<std::string>{yystack_[0].value.as < std::string > ()}; }
#line 1416 "src/bison_locale.cpp"
    break;

  case 79: // field_chars_value: field_chars_value SEMICOLON character_value
#line 443 "src/bison_locale.ypp"
                                               { yystack_[2].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[2].value.as < std::vector<std::string> > (); }
#line 1422 "src/bison_locale.cpp"
    break;

  case 80: // field_chars_value: field_chars_value SEMICOLON ESCAPE EOL character_value
#line 444 "src/bison_locale.ypp"
                                                          { yystack_[4].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[4].value.as < std::vector<std::string> > (); }
#line 1428 "src/bison_locale.cpp"
    break;

  case 81: // field_bytes_value: NUMBER
#line 448 "src/bison_locale.ypp"
          { yylhs.value.as < std::vector<uint8_t> > () = std::vector<uint8_t>{yystack_[0].value.as < uint8_t > ()}; }
#line 1434 "src/bison_locale.cpp"
    break;

  case 82: // field_bytes_value: field_bytes_value SEMICOLON NUMBER
#line 449 "src/bison_locale.ypp"
                                      { yystack_[2].value.as < std::vector<uint8_t> > ().push_back(yystack_[0].value.as < uint8_t > ()); yylhs.value.as < std::vector<uint8_t> > () = yystack_[2].value.as < std::vector<uint8_t> > (); }
#line 1440 "src/bison_locale.cpp"
    break;

  case 83: // field_bytes_value: field_bytes_value SEMICOLON ESCAPE EOL NUMBER
#line 450 "src/bison_locale.ypp"
                                                 { yystack_[4].value.as < std::vector<uint8_t> > ().push_back(yystack_[0].value.as < uint8_t > ()); yylhs.value.as < std::vector<uint8_t> > () = yystack_[4].value.as < std::vector<uint8_t> > (); }
#line 1446 "src/bison_locale.cpp"
    break;

  case 84: // field_strings_value: STRING
#line 454 "src/bison_locale.ypp"
          { yylhs.value.as < std::vector<std::string> > () = std::vector<std::string>{yystack_[0].value.as < std::string > ()}; }
#line 1452 "src/bison_locale.cpp"
    break;

  case 85: // field_strings_value: field_strings_value SEMICOLON STRING
#line 455 "src/bison_locale.ypp"
                                        { yystack_[2].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[2].value.as < std::vector<std::string> > (); }
#line 1458 "src/bison_locale.cpp"
    break;

  case 86: // field_strings_value: field_strings_value SEMICOLON ESCAPE EOL STRING
#line 456 "src/bison_locale.ypp"
                                                   { yystack_[4].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[4].value.as < std::vector<std::string> > (); }
#line 1464 "src/bison_locale.cpp"
    break;

  case 87: // character_literals: CHARACTER_LITERAL
#line 460 "src/bison_locale.ypp"
                     { yylhs.value.as < std::string > () = std::string{(char)yystack_[0].value.as < uint8_t > ()}; }
#line 1470 "src/bison_locale.cpp"
    break;

  case 88: // character_literals: character_literals CHARACTER_LITERAL
#line 461 "src/bison_locale.ypp"
                                        { yystack_[1].value.as < std::string > ().push_back((char)yystack_[0].value.as < uint8_t > ()); yylhs.value.as < std::string > () = yystack_[1].value.as < std::string > (); }
#line 1476 "src/bison_locale.cpp"
    break;


#line 1480 "src/bison_locale.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        std::string msg = YY_("syntax error");
        error (YY_MOVE (msg));
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;


      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what ());
  }

#if LOCALE_PARSERDEBUG || 0
  const char *
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytname_[yysymbol];
  }
#endif // #if LOCALE_PARSERDEBUG || 0









  const signed char parser::yypact_ninf_ = -114;

  const signed char parser::yytable_ninf_ = -1;

  const short
  parser::yypact_[] =
  {
      25,     1,    17,    65,    84,    96,    98,   102,    31,    73,
      97,   129,    97,  -114,  -114,  -114,  -114,  -114,  -114,   130,
      -5,   -16,     5,    48,    67,    62,  -114,  -114,    97,   122,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,   134,   132,    71,
     138,    -7,   140,    -2,     7,   141,   142,    45,   143,   145,
     146,   144,    63,   148,   146,   149,    -9,   150,   151,   152,
      52,   130,  -114,    71,    27,  -114,  -114,  -114,  -114,    61,
     155,   156,   132,    71,   147,   157,  -114,  -114,  -114,  -114,
     100,  -114,     3,   158,     2,  -114,   159,   160,   161,   153,
     164,   165,  -114,   113,   166,   167,   168,   146,   162,   169,
     114,   171,   173,   146,   163,   172,  -114,   118,   176,   177,
     151,   154,   134,   174,    19,   134,     8,   134,  -114,   123,
      27,    61,   130,   139,  -114,    69,  -114,  -114,  -114,  -114,
     119,  -114,  -114,   179,  -114,  -114,   170,   181,   130,  -114,
    -114,  -114,    18,   175,   182,   183,   120,   130,  -114,  -114,
     178,   184,   124,   130,  -114,  -114,    10,   180,   185,   125,
     130,    71,   186,  -114,   187,  -114,   188,   134,   134,   134,
     189,  -114,  -114,    11,   190,   191,  -114,   134,  -114,   192,
     193,  -114,  -114,  -114,   134,   194,  -114,  -114,   134,  -114,
     195,   196,  -114,  -114,   134,   197,   132,    71,   130,   130,
    -114,   198,   130,   201,   130,   130,   199,   130,  -114,  -114,
    -114,   134,   134,   130,   134,  -114,   134,   134,  -114,   134,
     134
  };

  const signed char
  parser::yydefact_[] =
  {
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     5,    11,    12,    13,    14,    15,    16,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     4,     0,
      17,    18,    19,    20,    21,    22,     6,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     0,     0,    29,    76,    87,    78,     0,
      77,     0,     0,     0,     0,     0,    35,    39,    40,    41,
       0,    37,     0,     0,     0,    42,     0,     0,     0,     0,
       0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
       0,     0,    10,     0,     0,    25,     0,    26,    88,     0,
       0,     0,     0,     0,    36,     0,    49,    44,    51,    50,
       0,    47,    46,     0,    43,    74,     0,     0,     0,    54,
      55,    56,     0,     0,     0,     0,     0,     0,    62,    63,
       0,     0,     0,     0,    68,    69,     0,     0,     0,     0,
       0,     0,     0,    30,     0,    79,     0,    27,    28,    24,
       0,    38,    45,     0,     0,     0,    75,    73,    82,     0,
       0,    57,    58,    59,    53,     0,    64,    65,    61,    85,
       0,     0,    70,    71,    67,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,    32,    31,
      80,    23,    33,     0,    72,    83,    52,    60,    86,    66,
      34
  };

  const short
  parser::yypgoto_[] =
  {
    -114,  -114,  -114,   -61,  -114,  -114,   206,     4,  -114,   127,
    -113,    44,  -114,  -114,    70,  -114,   110,  -114,    23,    53,
    -114,    54,  -114,    56,  -114,    57,  -114,   -58,   200,   -52,
      87,  -114
  };

  const unsigned char
  parser::yydefgoto_[] =
  {
       0,     8,     9,    37,    10,    11,    12,    13,    41,    64,
      65,    14,    44,    80,    81,    84,    85,   130,   131,    15,
      52,    16,    56,    17,    60,    18,    47,    68,    69,    93,
     107,    70
  };

  const unsigned char
  parser::yytable_[] =
  {
     112,   163,   100,   115,    76,   113,    82,   126,   117,   127,
     128,    82,    66,    67,    19,   126,    30,   189,   128,    72,
      73,    38,    39,    20,   102,   103,   178,    42,     1,    63,
      43,    26,    30,    36,    45,   104,   114,    74,    40,     2,
       3,     4,     5,     6,     7,   146,    77,    78,    46,   133,
      79,   152,    83,   164,   129,   190,    31,    83,   165,   167,
     168,   169,   129,   179,   162,    32,    33,    36,    34,    35,
     116,    21,    31,    27,    88,    66,    67,   177,    48,    49,
      50,    32,    33,   209,    34,    35,   184,   109,   110,    89,
      22,    51,   188,    95,    96,    97,   111,    57,    58,   194,
      53,    54,    23,   195,    24,    59,   124,    98,    25,   125,
      55,     2,     3,     4,     5,     6,     7,    77,    78,   141,
     149,    79,   142,   142,   155,   172,   183,   156,   173,   142,
     187,   193,    29,   142,   156,    61,    36,   211,   212,   210,
      62,   214,    63,   216,   217,    71,   219,    75,    86,    87,
      90,    94,   220,    91,    92,    99,   101,   105,   106,   108,
     118,   122,   119,   123,   132,   135,   136,   166,   137,   138,
     139,   140,   143,   160,   144,   148,   145,   150,   154,   147,
     151,   153,   157,   170,   158,   174,   161,   176,   181,   182,
     186,   192,   196,   197,   134,   171,   200,   159,   203,   120,
       0,   206,   198,     0,   199,     0,   218,   202,   208,   215,
     204,     0,   205,   213,   175,   207,    28,     0,     0,   180,
       0,     0,   185,     0,   191,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121
  };

  const short
  parser::yycheck_[] =
  {
      61,   114,    54,    64,     6,    63,     4,     4,    69,     6,
       7,     4,     4,     5,    13,     4,    12,     7,     7,    26,
      27,    26,    27,     6,    33,    34,     8,    43,     3,    10,
      46,     0,    28,     6,    29,    44,     9,    44,    43,    14,
      15,    16,    17,    18,    19,    97,    48,    49,    43,    47,
      52,   103,    50,    45,    51,    45,    12,    50,   116,   120,
     121,   122,    51,    45,    45,    12,    12,     6,    12,    12,
       9,     6,    28,     0,    29,     4,     5,   138,    30,    31,
      32,    28,    28,   196,    28,    28,   147,    35,    36,    44,
       6,    43,   153,    30,    31,    32,    44,    35,    36,   160,
      33,    34,     6,   161,     6,    43,     6,    44,     6,     9,
      43,    14,    15,    16,    17,    18,    19,    48,    49,     6,
       6,    52,     9,     9,     6,     6,     6,     9,     9,     9,
       6,     6,     3,     9,     9,    13,     6,   198,   199,   197,
       6,   202,    10,   204,   205,     7,   207,     7,     7,     7,
       7,     7,   213,     8,     8,     7,     7,     7,     7,     7,
       5,    14,     6,     6,     6,     6,     6,    44,     7,    16,
       6,     6,     6,    19,     7,     6,     8,     6,     6,    17,
       7,    18,     6,    44,     7,     6,    12,     6,     6,     6,
       6,     6,     6,     6,    84,   125,   173,   110,     6,    72,
      -1,     6,    14,    -1,    15,    -1,     7,    16,    11,     8,
      17,    -1,    18,    15,    44,    19,    10,    -1,    -1,    44,
      -1,    -1,    44,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73
  };

  const signed char
  parser::yystos_[] =
  {
       0,     3,    14,    15,    16,    17,    18,    19,    55,    56,
      58,    59,    60,    61,    65,    73,    75,    77,    79,    13,
       6,     6,     6,     6,     6,     6,     0,     0,    60,     3,
      61,    65,    73,    75,    77,    79,     6,    57,    26,    27,
      43,    62,    43,    46,    66,    29,    43,    80,    30,    31,
      32,    43,    74,    33,    34,    43,    76,    35,    36,    43,
      78,    13,     6,    10,    63,    64,     4,     5,    81,    82,
      85,     7,    26,    27,    44,     7,     6,    48,    49,    52,
      67,    68,     4,    50,    69,    70,     7,     7,    29,    44,
       7,     8,     8,    83,     7,    30,    31,    32,    44,     7,
      83,     7,    33,    34,    44,     7,     7,    84,     7,    35,
      36,    44,    57,    81,     9,    57,     9,    57,     5,     6,
      63,    82,    14,     6,     6,     9,     4,     6,     7,    51,
      71,    72,     6,    47,    70,     6,     6,     7,    16,     6,
       6,     6,     9,     6,     7,     8,    83,    17,     6,     6,
       6,     7,    83,    18,     6,     6,     9,     6,     7,    84,
      19,    12,    45,    64,    45,    81,    44,    57,    57,    57,
      44,    68,     6,     9,     6,    44,     6,    57,     8,    45,
      44,     6,     6,     6,    57,    44,     6,     6,    57,     7,
      45,    44,     6,     6,    57,    81,     6,     6,    14,    15,
      72,    44,    16,     6,    17,    18,     6,    19,    11,    64,
      81,    57,    57,    15,    57,     8,    57,    57,     7,    57,
      57
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    54,    55,    56,    56,    56,    57,    57,    58,    59,
      59,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    61,    61,    62,    62,    62,    62,    63,
      63,    63,    64,    65,    65,    66,    66,    67,    67,    68,
      68,    68,    69,    69,    70,    70,    70,    71,    71,    72,
      72,    72,    73,    73,    74,    74,    74,    74,    74,    74,
      75,    75,    76,    76,    76,    76,    77,    77,    78,    78,
      78,    78,    79,    79,    80,    80,    81,    81,    82,    82,
      82,    83,    83,    83,    84,    84,    84,    85,    85
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     2,     0,     2,     1,     1,     2,     1,     3,
       4,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     8,     6,     3,     3,     4,     4,     1,
       3,     5,     5,     8,     9,     2,     3,     1,     3,     1,
       1,     1,     1,     2,     2,     3,     2,     1,     3,     1,
       1,     1,     8,     6,     3,     3,     3,     4,     4,     4,
       8,     6,     3,     3,     4,     4,     8,     6,     3,     3,
       4,     4,     8,     6,     3,     4,     1,     1,     1,     3,
       5,     1,     3,     5,     1,     3,     5,     1,     2
  };


#if LOCALE_PARSERDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "CONFIG",
  "CHARACTER_NAME", "CHARACTER_LITERAL", "EOL", "STRING", "NUMBER",
  "SEMICOLON", "BRACKET_OPEN", "BRACKET_CLOSE", "COMMA", "TEXT",
  "T_LC_CTYPE", "T_LC_COLLATE", "T_LC_MESSAGES", "T_LC_MONETARY",
  "T_LC_NUMERIC", "T_LC_TIME", "T_LC_ADDRESS", "T_LC_IDENTIFICATION",
  "T_LC_MEASUREMENT", "T_LC_NAME", "T_LC_PAPER", "T_LC_TELEPHONE",
  "FIELD_CTYPE_PAIRS", "FIELD_CTYPE_CHARS", "FIELD_COLLATE",
  "FIELD_MESSAGES", "FIELD_MONETARY_STRING", "FIELD_MONETARY_SINGLE_BYTE",
  "FIELD_MONETARY_BYTES", "FIELD_NUMERIC_STRING", "FIELD_NUMERIC_BYTES",
  "FIELD_TIME_STRING", "FIELD_TIME_MULTIPLE_STRINGS", "FIELD_ADDRESS",
  "FIELD_IDENTIFICATION", "FIELD_MEASUREMENT", "FIELD_NAME", "FIELD_PAPER",
  "FIELD_TELEPHONE", "COPY", "END", "ESCAPE", "ORDER_START", "ORDER_END",
  "FORWARD", "BACKWARD", "UNDEFINED", "IGNORE", "POSITION", "ELLIPSIS",
  "$accept", "file", "locale_file", "newlines", "prelude", "configs",
  "sections", "section_ctype", "definitions_ctype",
  "field_ctype_pairs_value", "field_ctype_single_pair_value",
  "section_collate", "collate_start", "order_operands", "order_operand",
  "definitions_collate", "single_definition_collate",
  "collate_char_specifiers", "collate_char_specifier", "section_monetary",
  "definitions_monetary", "section_numeric", "definitions_numeric",
  "section_time", "definitions_time", "section_messages",
  "definitions_messages", "character_value", "field_chars_value",
  "field_bytes_value", "field_strings_value", "character_literals", YY_NULLPTR
  };
#endif


#if LOCALE_PARSERDEBUG
  const short
  parser::yyrline_[] =
  {
       0,    91,    91,    94,    95,    96,   100,   101,   105,   108,
     109,   113,   121,   129,   137,   145,   153,   161,   168,   175,
     182,   189,   196,   206,   207,   211,   217,   223,   228,   236,
     237,   238,   242,   251,   252,   256,   257,   261,   262,   266,
     267,   268,   272,   273,   277,   278,   279,   283,   284,   288,
     289,   290,   294,   295,   299,   305,   311,   317,   324,   331,
     341,   342,   346,   352,   358,   365,   375,   376,   380,   386,
     392,   399,   409,   410,   414,   420,   430,   438,   442,   443,
     444,   448,   449,   450,   454,   455,   456,   460,   461
  };

  void
  parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // LOCALE_PARSERDEBUG


} // locale_parser
#line 1947 "src/bison_locale.cpp"

#line 464 "src/bison_locale.ypp"


namespace locale_parser {
    parser::symbol_type locale_parserlex(){
        auto l = locale::get_lexer();
        return l->get_token();
    }

    void parser::error(const std::string& m){
        std::cerr << m << std::endl;
    }
}
