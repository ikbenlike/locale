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
#line 86 "src/bison_locale.ypp"

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
#line 94 "src/bison_locale.ypp"
                         { YYACCEPT; }
#line 923 "src/bison_locale.cpp"
    break;

  case 4: // locale_file: prelude sections
#line 98 "src/bison_locale.ypp"
                    { locale::save_locale(yystack_[0].value.as < Locale * > ()); }
#line 929 "src/bison_locale.cpp"
    break;

  case 5: // locale_file: sections
#line 99 "src/bison_locale.ypp"
            { locale::save_locale(yystack_[0].value.as < Locale * > ()); }
#line 935 "src/bison_locale.cpp"
    break;

  case 9: // configs: CONFIG TEXT newlines
#line 111 "src/bison_locale.ypp"
                        { locale::set_config(yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ()); }
#line 941 "src/bison_locale.cpp"
    break;

  case 10: // configs: configs CONFIG TEXT newlines
#line 112 "src/bison_locale.ypp"
                                { locale::set_config(yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ()); }
#line 947 "src/bison_locale.cpp"
    break;

  case 11: // sections: section_ctype
#line 117 "src/bison_locale.ypp"
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
#line 125 "src/bison_locale.ypp"
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
#line 133 "src/bison_locale.ypp"
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
#line 141 "src/bison_locale.ypp"
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
#line 149 "src/bison_locale.ypp"
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
#line 157 "src/bison_locale.ypp"
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
#line 165 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_ctype, &Locale::section_ctype, yystack_[0].value.as < lc_ctype * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1030 "src/bison_locale.cpp"
    break;

  case 18: // sections: sections section_collate
#line 172 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_collate, &Locale::section_collate, yystack_[0].value.as < lc_collate * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1041 "src/bison_locale.cpp"
    break;

  case 19: // sections: sections section_monetary
#line 179 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_monetary, &Locale::section_monetary, yystack_[0].value.as < lc_monetary * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1052 "src/bison_locale.cpp"
    break;

  case 20: // sections: sections section_numeric
#line 186 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_numeric, &Locale::section_numeric, yystack_[0].value.as < lc_numeric * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1063 "src/bison_locale.cpp"
    break;

  case 21: // sections: sections section_time
#line 193 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_time, &Locale::section_time, yystack_[0].value.as < lc_time * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1074 "src/bison_locale.cpp"
    break;

  case 22: // sections: sections section_messages
#line 200 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_messages, &Locale::section_messages, yystack_[0].value.as < lc_messages * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1085 "src/bison_locale.cpp"
    break;

  case 23: // section_ctype: T_LC_CTYPE EOL COPY STRING EOL END T_LC_CTYPE newlines
#line 209 "src/bison_locale.ypp"
                                                          { yylhs.value.as < lc_ctype * > () = new lc_ctype; }
#line 1091 "src/bison_locale.cpp"
    break;

  case 24: // section_ctype: T_LC_CTYPE EOL definitions_ctype END T_LC_CTYPE newlines
#line 210 "src/bison_locale.ypp"
                                                            { yylhs.value.as < lc_ctype * > () = yystack_[3].value.as < lc_ctype * > (); }
#line 1097 "src/bison_locale.cpp"
    break;

  case 25: // definitions_ctype: FIELD_CTYPE_PAIRS field_ctype_pairs_value newlines
#line 215 "src/bison_locale.ypp"
 {
    auto s = new lc_ctype;
    if(!locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<pair> > ())) YYERROR;
    yylhs.value.as < lc_ctype * > () = s;
 }
#line 1107 "src/bison_locale.cpp"
    break;

  case 26: // definitions_ctype: FIELD_CTYPE_CHARS field_chars_value newlines
#line 221 "src/bison_locale.ypp"
 {
    auto s = new lc_ctype;
    if(!locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<std::string> > ())) YYERROR;
    yylhs.value.as < lc_ctype * > () = s;
 }
#line 1117 "src/bison_locale.cpp"
    break;

  case 27: // definitions_ctype: definitions_ctype FIELD_CTYPE_PAIRS field_ctype_pairs_value newlines
#line 227 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_ctype * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<pair> > ())) YYERROR;
    yylhs.value.as < lc_ctype * > () = yystack_[3].value.as < lc_ctype * > ();
 }
#line 1126 "src/bison_locale.cpp"
    break;

  case 28: // definitions_ctype: definitions_ctype FIELD_CTYPE_CHARS field_chars_value newlines
#line 232 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_ctype * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<std::string> > ())) YYERROR;
    yylhs.value.as < lc_ctype * > () = yystack_[3].value.as < lc_ctype * > ();
 }
#line 1135 "src/bison_locale.cpp"
    break;

  case 29: // field_ctype_pairs_value: field_ctype_single_pair_value
#line 239 "src/bison_locale.ypp"
                                 { yylhs.value.as < std::vector<pair> > () = std::vector<pair>{yystack_[0].value.as < pair > ()}; }
#line 1141 "src/bison_locale.cpp"
    break;

  case 30: // field_ctype_pairs_value: field_ctype_pairs_value SEMICOLON field_ctype_single_pair_value
#line 240 "src/bison_locale.ypp"
                                                                   { yystack_[2].value.as < std::vector<pair> > ().push_back(yystack_[0].value.as < pair > ()); yylhs.value.as < std::vector<pair> > () = yystack_[2].value.as < std::vector<pair> > (); }
#line 1147 "src/bison_locale.cpp"
    break;

  case 31: // field_ctype_pairs_value: field_ctype_pairs_value SEMICOLON ESCAPE EOL field_ctype_single_pair_value
#line 241 "src/bison_locale.ypp"
                                                                              { yystack_[4].value.as < std::vector<pair> > ().push_back(yystack_[0].value.as < pair > ()); yylhs.value.as < std::vector<pair> > () = yystack_[4].value.as < std::vector<pair> > (); }
#line 1153 "src/bison_locale.cpp"
    break;

  case 32: // field_ctype_single_pair_value: BRACKET_OPEN character_value COMMA character_value BRACKET_CLOSE
#line 246 "src/bison_locale.ypp"
 {
    auto p = pair{};
    p.set_left(yystack_[3].value.as < std::string > ());
    p.set_right(yystack_[1].value.as < std::string > ());
    yylhs.value.as < pair > () = p;
 }
#line 1164 "src/bison_locale.cpp"
    break;

  case 33: // section_collate: T_LC_COLLATE EOL COPY STRING EOL END T_LC_COLLATE newlines
#line 254 "src/bison_locale.ypp"
                                                              { yylhs.value.as < lc_collate * > () = new lc_collate; }
#line 1170 "src/bison_locale.cpp"
    break;

  case 34: // section_collate: T_LC_COLLATE EOL collate_start definitions_collate ORDER_END EOL END T_LC_COLLATE newlines
#line 255 "src/bison_locale.ypp"
                                                                                              { yylhs.value.as < lc_collate * > () = new lc_collate; }
#line 1176 "src/bison_locale.cpp"
    break;

  case 57: // section_monetary: T_LC_MONETARY EOL COPY STRING EOL END T_LC_MONETARY newlines
#line 308 "src/bison_locale.ypp"
                                                                { yylhs.value.as < lc_monetary * > () = new lc_monetary; }
#line 1182 "src/bison_locale.cpp"
    break;

  case 58: // section_monetary: T_LC_MONETARY EOL definitions_monetary END T_LC_MONETARY newlines
#line 309 "src/bison_locale.ypp"
                                                                     { yylhs.value.as < lc_monetary * > () = yystack_[3].value.as < lc_monetary * > (); }
#line 1188 "src/bison_locale.cpp"
    break;

  case 59: // definitions_monetary: FIELD_MONETARY_STRING STRING EOL
#line 314 "src/bison_locale.ypp"
 {
    auto s = new lc_monetary;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ());
    yylhs.value.as < lc_monetary * > () = s;
 }
#line 1198 "src/bison_locale.cpp"
    break;

  case 60: // definitions_monetary: FIELD_MONETARY_SINGLE_BYTE NUMBER EOL
#line 320 "src/bison_locale.ypp"
 {
    auto s = new lc_monetary;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < uint8_t > ());
    yylhs.value.as < lc_monetary * > () = s;
 }
#line 1208 "src/bison_locale.cpp"
    break;

  case 61: // definitions_monetary: FIELD_MONETARY_BYTES field_bytes_value EOL
#line 326 "src/bison_locale.ypp"
 {
    auto s = new lc_monetary;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<uint8_t> > ());
    yylhs.value.as < lc_monetary * > () = s;
 }
#line 1218 "src/bison_locale.cpp"
    break;

  case 62: // definitions_monetary: definitions_monetary FIELD_MONETARY_STRING STRING EOL
#line 332 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_monetary * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ())){
        YYERROR;
    }
    yylhs.value.as < lc_monetary * > () = yystack_[3].value.as < lc_monetary * > ();
 }
#line 1229 "src/bison_locale.cpp"
    break;

  case 63: // definitions_monetary: definitions_monetary FIELD_MONETARY_SINGLE_BYTE NUMBER EOL
#line 339 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_monetary * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < uint8_t > ())){
        YYERROR;
    }
    yylhs.value.as < lc_monetary * > () = yystack_[3].value.as < lc_monetary * > ();
 }
#line 1240 "src/bison_locale.cpp"
    break;

  case 64: // definitions_monetary: definitions_monetary FIELD_MONETARY_BYTES field_bytes_value EOL
#line 346 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_monetary * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<uint8_t> > ())){
        YYERROR;
    }
    yylhs.value.as < lc_monetary * > () = yystack_[3].value.as < lc_monetary * > ();
 }
#line 1251 "src/bison_locale.cpp"
    break;

  case 65: // section_numeric: T_LC_NUMERIC EOL COPY STRING EOL END T_LC_NUMERIC newlines
#line 355 "src/bison_locale.ypp"
                                                              { yylhs.value.as < lc_numeric * > () = new lc_numeric; }
#line 1257 "src/bison_locale.cpp"
    break;

  case 66: // section_numeric: T_LC_NUMERIC EOL definitions_numeric END T_LC_NUMERIC newlines
#line 356 "src/bison_locale.ypp"
                                                                  { yylhs.value.as < lc_numeric * > () = yystack_[3].value.as < lc_numeric * > (); }
#line 1263 "src/bison_locale.cpp"
    break;

  case 67: // definitions_numeric: FIELD_NUMERIC_STRING STRING EOL
#line 361 "src/bison_locale.ypp"
 {
    auto s = new lc_numeric;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ());
    yylhs.value.as < lc_numeric * > () = s;
 }
#line 1273 "src/bison_locale.cpp"
    break;

  case 68: // definitions_numeric: FIELD_NUMERIC_BYTES field_bytes_value EOL
#line 367 "src/bison_locale.ypp"
 {
    auto s = new lc_numeric;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<uint8_t> > ());
    yylhs.value.as < lc_numeric * > () = s;
 }
#line 1283 "src/bison_locale.cpp"
    break;

  case 69: // definitions_numeric: definitions_numeric FIELD_NUMERIC_STRING STRING EOL
#line 373 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_numeric * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ())){
        YYERROR;
    }
    yylhs.value.as < lc_numeric * > () = yystack_[3].value.as < lc_numeric * > ();
 }
#line 1294 "src/bison_locale.cpp"
    break;

  case 70: // definitions_numeric: definitions_numeric FIELD_NUMERIC_BYTES field_bytes_value EOL
#line 380 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_numeric * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<uint8_t> > ())){
        YYERROR;
    }
    yylhs.value.as < lc_numeric * > () = yystack_[3].value.as < lc_numeric * > ();
 }
#line 1305 "src/bison_locale.cpp"
    break;

  case 71: // section_time: T_LC_TIME EOL COPY STRING EOL END T_LC_TIME newlines
#line 389 "src/bison_locale.ypp"
                                                        { yylhs.value.as < lc_time * > () = new lc_time; }
#line 1311 "src/bison_locale.cpp"
    break;

  case 72: // section_time: T_LC_TIME EOL definitions_time END T_LC_TIME newlines
#line 390 "src/bison_locale.ypp"
                                                         { yylhs.value.as < lc_time * > () = yystack_[3].value.as < lc_time * > (); }
#line 1317 "src/bison_locale.cpp"
    break;

  case 73: // definitions_time: FIELD_TIME_STRING STRING EOL
#line 395 "src/bison_locale.ypp"
 {
    auto s = new lc_time;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ());
    yylhs.value.as < lc_time * > () = s;
 }
#line 1327 "src/bison_locale.cpp"
    break;

  case 74: // definitions_time: FIELD_TIME_MULTIPLE_STRINGS field_strings_value EOL
#line 401 "src/bison_locale.ypp"
 {
    auto s = new lc_time;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<std::string> > ());
    yylhs.value.as < lc_time * > () = s;
 }
#line 1337 "src/bison_locale.cpp"
    break;

  case 75: // definitions_time: definitions_time FIELD_TIME_STRING STRING EOL
#line 407 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_time * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ())){
        YYERROR;
    }
    yylhs.value.as < lc_time * > () = yystack_[3].value.as < lc_time * > ();
 }
#line 1348 "src/bison_locale.cpp"
    break;

  case 76: // definitions_time: definitions_time FIELD_TIME_MULTIPLE_STRINGS field_strings_value EOL
#line 414 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_time * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<std::string> > ())){
        YYERROR;
    }
    yylhs.value.as < lc_time * > () = yystack_[3].value.as < lc_time * > ();
 }
#line 1359 "src/bison_locale.cpp"
    break;

  case 77: // section_messages: T_LC_MESSAGES EOL COPY STRING EOL END T_LC_MESSAGES newlines
#line 423 "src/bison_locale.ypp"
                                                                { yylhs.value.as < lc_messages * > () = new lc_messages; }
#line 1365 "src/bison_locale.cpp"
    break;

  case 78: // section_messages: T_LC_MESSAGES EOL definitions_messages END T_LC_MESSAGES newlines
#line 424 "src/bison_locale.ypp"
                                                                     { yylhs.value.as < lc_messages * > () = yystack_[3].value.as < lc_messages * > (); }
#line 1371 "src/bison_locale.cpp"
    break;

  case 79: // definitions_messages: FIELD_MESSAGES STRING EOL
#line 429 "src/bison_locale.ypp"
 {
    auto s = new lc_messages;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ());
    yylhs.value.as < lc_messages * > () = s;
 }
#line 1381 "src/bison_locale.cpp"
    break;

  case 80: // definitions_messages: definitions_messages FIELD_MESSAGES STRING EOL
#line 435 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_messages * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ())){
        YYERROR;
    }
    yylhs.value.as < lc_messages * > () = yystack_[3].value.as < lc_messages * > ();
 }
#line 1392 "src/bison_locale.cpp"
    break;

  case 81: // character_value: CHARACTER_NAME
#line 445 "src/bison_locale.ypp"
 {
    auto o_char = locale::lookup_character(yystack_[0].value.as < std::string > ());
    if(!o_char.has_value()){
        YYERROR;
    }
    yylhs.value.as < std::string > () = *o_char;
 }
#line 1404 "src/bison_locale.cpp"
    break;

  case 82: // character_value: character_literals
#line 452 "src/bison_locale.ypp"
   { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
#line 1410 "src/bison_locale.cpp"
    break;

  case 83: // field_chars_value: character_value
#line 456 "src/bison_locale.ypp"
                   { yylhs.value.as < std::vector<std::string> > () = std::vector<std::string>{yystack_[0].value.as < std::string > ()}; }
#line 1416 "src/bison_locale.cpp"
    break;

  case 84: // field_chars_value: field_chars_value SEMICOLON character_value
#line 457 "src/bison_locale.ypp"
                                               { yystack_[2].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[2].value.as < std::vector<std::string> > (); }
#line 1422 "src/bison_locale.cpp"
    break;

  case 85: // field_chars_value: field_chars_value SEMICOLON ESCAPE EOL character_value
#line 458 "src/bison_locale.ypp"
                                                          { yystack_[4].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[4].value.as < std::vector<std::string> > (); }
#line 1428 "src/bison_locale.cpp"
    break;

  case 86: // field_bytes_value: NUMBER
#line 462 "src/bison_locale.ypp"
          { yylhs.value.as < std::vector<uint8_t> > () = std::vector<uint8_t>{yystack_[0].value.as < uint8_t > ()}; }
#line 1434 "src/bison_locale.cpp"
    break;

  case 87: // field_bytes_value: field_bytes_value SEMICOLON NUMBER
#line 463 "src/bison_locale.ypp"
                                      { yystack_[2].value.as < std::vector<uint8_t> > ().push_back(yystack_[0].value.as < uint8_t > ()); yylhs.value.as < std::vector<uint8_t> > () = yystack_[2].value.as < std::vector<uint8_t> > (); }
#line 1440 "src/bison_locale.cpp"
    break;

  case 88: // field_bytes_value: field_bytes_value SEMICOLON ESCAPE EOL NUMBER
#line 464 "src/bison_locale.ypp"
                                                 { yystack_[4].value.as < std::vector<uint8_t> > ().push_back(yystack_[0].value.as < uint8_t > ()); yylhs.value.as < std::vector<uint8_t> > () = yystack_[4].value.as < std::vector<uint8_t> > (); }
#line 1446 "src/bison_locale.cpp"
    break;

  case 89: // field_strings_value: STRING
#line 468 "src/bison_locale.ypp"
          { yylhs.value.as < std::vector<std::string> > () = std::vector<std::string>{yystack_[0].value.as < std::string > ()}; }
#line 1452 "src/bison_locale.cpp"
    break;

  case 90: // field_strings_value: field_strings_value SEMICOLON STRING
#line 469 "src/bison_locale.ypp"
                                        { yystack_[2].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[2].value.as < std::vector<std::string> > (); }
#line 1458 "src/bison_locale.cpp"
    break;

  case 91: // field_strings_value: field_strings_value SEMICOLON ESCAPE EOL STRING
#line 470 "src/bison_locale.ypp"
                                                   { yystack_[4].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[4].value.as < std::vector<std::string> > (); }
#line 1464 "src/bison_locale.cpp"
    break;

  case 92: // character_literals: CHARACTER_LITERAL
#line 474 "src/bison_locale.ypp"
                     { yylhs.value.as < std::string > () = std::string{(char)yystack_[0].value.as < uint8_t > ()}; }
#line 1470 "src/bison_locale.cpp"
    break;

  case 93: // character_literals: character_literals CHARACTER_LITERAL
#line 475 "src/bison_locale.ypp"
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









  const signed char parser::yypact_ninf_ = -121;

  const signed char parser::yytable_ninf_ = -1;

  const short
  parser::yypact_[] =
  {
      24,    23,    38,    87,    99,   101,   113,   114,   147,   150,
     111,    25,   111,  -121,  -121,  -121,  -121,  -121,  -121,   145,
      44,    30,     2,    67,    79,    80,  -121,  -121,   111,   141,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,   146,   143,    74,
      73,    42,   148,     0,     8,   152,    11,     1,  -121,   151,
     153,    48,   154,   149,   155,   159,    64,   160,   155,   161,
      70,   163,   166,   168,    65,   145,  -121,    74,    26,  -121,
    -121,  -121,  -121,    28,   157,   170,   143,    74,   164,   171,
    -121,  -121,  -121,  -121,   112,  -121,   103,  -121,     4,   173,
      15,  -121,    -1,    11,   175,   176,   177,   167,   179,   180,
    -121,   127,   181,   183,   184,   155,   174,   182,   128,   187,
     188,   155,   178,   191,  -121,   132,   192,   193,   166,   185,
     146,   189,    12,   146,    19,   146,  -121,   158,    26,    28,
     145,   162,  -121,    83,   196,  -121,  -121,  -121,  -121,   133,
    -121,  -121,   199,  -121,  -121,    16,  -121,   165,   201,   145,
    -121,  -121,  -121,     6,   169,   202,   204,   134,   145,  -121,
    -121,   172,   205,   139,   145,  -121,  -121,    22,   186,   206,
     140,   145,    74,   208,  -121,   209,  -121,   203,   146,   146,
     146,   207,  -121,  -121,  -121,     9,   190,   212,   210,  -121,
     146,  -121,   213,   211,  -121,  -121,  -121,   146,   214,  -121,
    -121,   146,  -121,   215,   216,  -121,  -121,   146,   218,   143,
      74,   145,   145,  -121,   221,   194,   145,   217,   145,   145,
     220,   145,  -121,  -121,  -121,   146,   146,   145,   222,   146,
    -121,   146,   146,  -121,   146,   146,   145,   146
  };

  const signed char
  parser::yydefact_[] =
  {
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     5,    11,    12,    13,    14,    15,    16,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     4,     0,
      17,    18,    19,    20,    21,    22,     6,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,    29,
      81,    92,    83,     0,    82,     0,     0,     0,     0,     0,
      36,    40,    41,    42,     0,    38,     0,    45,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,     0,     0,     0,     0,     0,
      10,     0,     0,    25,     0,    26,    93,     0,     0,     0,
       0,     0,    37,     0,     0,    54,    49,    56,    55,     0,
      52,    51,     0,    48,    44,     0,    79,     0,     0,     0,
      59,    60,    61,     0,     0,     0,     0,     0,     0,    67,
      68,     0,     0,     0,     0,    73,    74,     0,     0,     0,
       0,     0,     0,     0,    30,     0,    84,     0,    27,    28,
      24,     0,    39,    46,    50,     0,     0,     0,     0,    80,
      78,    87,     0,     0,    62,    63,    64,    58,     0,    69,
      70,    66,    90,     0,     0,    75,    76,    72,     0,     0,
       0,     0,     0,    53,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    31,    85,    23,    33,     0,     0,    77,
      88,    57,    65,    91,    71,    34,     0,    35
  };

  const short
  parser::yypgoto_[] =
  {
    -121,  -121,  -121,   -47,  -121,  -121,   223,    -3,  -121,   118,
    -120,     5,   195,  -121,    66,  -121,   131,   138,   -86,  -121,
      35,    18,  -121,    60,  -121,    62,  -121,    63,  -121,   -66,
     197,   -55,   106,  -121
  };

  const unsigned char
  parser::yydefgoto_[] =
  {
       0,     8,     9,    37,    10,    11,    12,    13,    41,    68,
      69,    14,    46,    84,    85,    47,    48,    90,    91,   139,
     140,    15,    56,    16,    60,    17,    64,    18,    51,    72,
      73,   101,   115,    74
  };

  const unsigned char
  parser::yytable_[] =
  {
      92,   121,   174,   108,   143,    66,    80,    36,   135,    30,
     136,   137,    86,   135,   191,    88,   137,    31,   120,    88,
      88,   123,    67,    70,    71,    30,   125,     1,    29,   202,
      32,    49,    36,    31,    36,   122,    19,   124,     2,     3,
       4,     5,     6,     7,    20,    50,    32,    43,    81,    82,
     157,   192,    83,    44,    45,   138,   163,   173,   176,   143,
     138,    89,   142,   187,   175,    89,    89,   203,    76,    77,
      38,    39,    33,    42,    34,    35,    43,    96,    70,    71,
      75,   178,   179,   180,    44,    45,    78,    40,    33,   223,
      34,    35,    97,    21,   103,   104,   105,    52,    53,    54,
     117,   118,   190,   110,   111,    22,   208,    23,   106,   119,
      55,   197,    57,    58,   112,    61,    62,   201,   132,    24,
      25,   133,    59,    63,   207,     2,     3,     4,     5,     6,
       7,    81,    82,   152,   160,    83,   153,   153,   166,   184,
     196,   167,   185,   153,   224,   200,   206,    26,   153,   167,
      27,    36,    66,    67,    65,    79,    87,    99,    94,   134,
      95,    98,   126,   100,   225,   226,   102,   107,   109,   229,
     113,   231,   232,   114,   234,   116,   127,   131,   130,   141,
     235,   146,   147,   149,   148,   150,   151,   154,   159,   237,
     155,   158,   156,   161,   128,   162,   164,   165,   168,   182,
     169,   172,   177,   183,   171,   186,   181,   189,   194,   188,
     195,   199,   205,   193,   209,   210,   198,   211,   215,   217,
     213,   220,   212,   144,   170,   230,   216,   233,   218,   222,
     204,   145,   219,    28,   214,   221,   227,   236,   228,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   129
  };

  const short
  parser::yycheck_[] =
  {
      47,    67,   122,    58,    90,     6,     6,     6,     4,    12,
       6,     7,     4,     4,     8,     4,     7,    12,    65,     4,
       4,    68,    10,     4,     5,    28,    73,     3,     3,     7,
      12,    29,     6,    28,     6,     9,    13,     9,    14,    15,
      16,    17,    18,    19,     6,    43,    28,    46,    48,    49,
     105,    45,    52,    54,    55,    51,   111,    45,   124,   145,
      51,    50,    47,    47,    45,    50,    50,    45,    26,    27,
      26,    27,    12,    43,    12,    12,    46,    29,     4,     5,
       7,   128,   129,   130,    54,    55,    44,    43,    28,   209,
      28,    28,    44,     6,    30,    31,    32,    30,    31,    32,
      35,    36,   149,    33,    34,     6,   172,     6,    44,    44,
      43,   158,    33,    34,    44,    35,    36,   164,     6,     6,
       6,     9,    43,    43,   171,    14,    15,    16,    17,    18,
      19,    48,    49,     6,     6,    52,     9,     9,     6,     6,
       6,     9,     9,     9,   210,     6,     6,     0,     9,     9,
       0,     6,     6,    10,    13,     7,     4,     8,     7,    56,
       7,     7,     5,     8,   211,   212,     7,     7,     7,   216,
       7,   218,   219,     7,   221,     7,     6,     6,    14,     6,
     227,     6,     6,    16,     7,     6,     6,     6,     6,   236,
       7,    17,     8,     6,    76,     7,    18,     6,     6,   133,
       7,    12,    44,     7,    19,     6,    44,     6,     6,    44,
       6,     6,     6,    44,     6,     6,    44,    14,     6,     6,
     185,     6,    15,    92,   118,     8,    16,     7,    17,    11,
      44,    93,    18,    10,    44,    19,    15,    15,    44,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77
  };

  const signed char
  parser::yystos_[] =
  {
       0,     3,    14,    15,    16,    17,    18,    19,    58,    59,
      61,    62,    63,    64,    68,    78,    80,    82,    84,    13,
       6,     6,     6,     6,     6,     6,     0,     0,    63,     3,
      64,    68,    78,    80,    82,    84,     6,    60,    26,    27,
      43,    65,    43,    46,    54,    55,    69,    72,    73,    29,
      43,    85,    30,    31,    32,    43,    79,    33,    34,    43,
      81,    35,    36,    43,    83,    13,     6,    10,    66,    67,
       4,     5,    86,    87,    90,     7,    26,    27,    44,     7,
       6,    48,    49,    52,    70,    71,     4,     4,     4,    50,
      74,    75,    60,    69,     7,     7,    29,    44,     7,     8,
       8,    88,     7,    30,    31,    32,    44,     7,    88,     7,
      33,    34,    44,     7,     7,    89,     7,    35,    36,    44,
      60,    86,     9,    60,     9,    60,     5,     6,    66,    87,
      14,     6,     6,     9,    56,     4,     6,     7,    51,    76,
      77,     6,    47,    75,    73,    74,     6,     6,     7,    16,
       6,     6,     6,     9,     6,     7,     8,    88,    17,     6,
       6,     6,     7,    88,    18,     6,     6,     9,     6,     7,
      89,    19,    12,    45,    67,    45,    86,    44,    60,    60,
      60,    44,    71,     7,     6,     9,     6,    47,    44,     6,
      60,     8,    45,    44,     6,     6,     6,    60,    44,     6,
       6,    60,     7,    45,    44,     6,     6,    60,    86,     6,
       6,    14,    15,    77,    44,     6,    16,     6,    17,    18,
       6,    19,    11,    67,    86,    60,    60,    15,    44,    60,
       8,    60,    60,     7,    60,    60,    15,    60
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    57,    58,    59,    59,    59,    60,    60,    61,    62,
      62,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    64,    64,    65,    65,    65,    65,    66,
      66,    66,    67,    68,    68,    68,    69,    69,    70,    70,
      71,    71,    71,    72,    72,    73,    73,    74,    74,    75,
      75,    75,    76,    76,    77,    77,    77,    78,    78,    79,
      79,    79,    79,    79,    79,    80,    80,    81,    81,    81,
      81,    82,    82,    83,    83,    83,    83,    84,    84,    85,
      85,    86,    86,    87,    87,    87,    88,    88,    88,    89,
      89,    89,    90,    90
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     2,     0,     2,     1,     1,     2,     1,     3,
       4,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     8,     6,     3,     3,     4,     4,     1,
       3,     5,     5,     8,     9,    10,     2,     3,     1,     3,
       1,     1,     1,     1,     3,     2,     4,     1,     2,     2,
       3,     2,     1,     3,     1,     1,     1,     8,     6,     3,
       3,     3,     4,     4,     4,     8,     6,     3,     3,     4,
       4,     8,     6,     3,     3,     4,     4,     8,     6,     3,
       4,     1,     1,     1,     3,     5,     1,     3,     5,     1,
       3,     5,     1,     2
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
  "COLLATING_ELEMENT", "COLLATING_SYMBOL", "FROM", "$accept", "file",
  "locale_file", "newlines", "prelude", "configs", "sections",
  "section_ctype", "definitions_ctype", "field_ctype_pairs_value",
  "field_ctype_single_pair_value", "section_collate", "collate_start",
  "order_operands", "order_operand", "definitions_pre_collate",
  "definition_pre_collate", "definitions_collate",
  "single_definition_collate", "collate_char_specifiers",
  "collate_char_specifier", "section_monetary", "definitions_monetary",
  "section_numeric", "definitions_numeric", "section_time",
  "definitions_time", "section_messages", "definitions_messages",
  "character_value", "field_chars_value", "field_bytes_value",
  "field_strings_value", "character_literals", YY_NULLPTR
  };
#endif


#if LOCALE_PARSERDEBUG
  const short
  parser::yyrline_[] =
  {
       0,    94,    94,    97,    98,    99,   103,   104,   108,   111,
     112,   116,   124,   132,   140,   148,   156,   164,   171,   178,
     185,   192,   199,   209,   210,   214,   220,   226,   231,   239,
     240,   241,   245,   254,   255,   256,   260,   261,   265,   266,
     270,   271,   272,   276,   277,   281,   282,   286,   287,   291,
     292,   293,   297,   298,   302,   303,   304,   308,   309,   313,
     319,   325,   331,   338,   345,   355,   356,   360,   366,   372,
     379,   389,   390,   394,   400,   406,   413,   423,   424,   428,
     434,   444,   452,   456,   457,   458,   462,   463,   464,   468,
     469,   470,   474,   475
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
#line 1955 "src/bison_locale.cpp"

#line 478 "src/bison_locale.ypp"


namespace locale_parser {
    parser::symbol_type locale_parserlex(){
        auto l = locale::get_lexer();
        return l->get_token();
    }

    void parser::error(const std::string& m){
        std::cerr << m << std::endl;
    }
}
