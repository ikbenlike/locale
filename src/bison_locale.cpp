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
#line 82 "src/bison_locale.ypp"

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

      case symbol_kind::S_NUMBER: // NUMBER
        value.YY_MOVE_OR_COPY< int16_t > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_collate: // section_collate
        value.YY_MOVE_OR_COPY< lc_collate * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_ctype: // section_ctype
      case symbol_kind::S_definitions_ctype: // definitions_ctype
        value.YY_MOVE_OR_COPY< lc_ctype * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_messages: // section_messages
        value.YY_MOVE_OR_COPY< lc_messages * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_monetary: // section_monetary
        value.YY_MOVE_OR_COPY< lc_monetary * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_numeric: // section_numeric
        value.YY_MOVE_OR_COPY< lc_numeric * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_time: // section_time
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

      case symbol_kind::S_field_bytes_value: // field_bytes_value
        value.YY_MOVE_OR_COPY< std::vector<int16_t> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_ctype_pairs_value: // field_ctype_pairs_value
        value.YY_MOVE_OR_COPY< std::vector<pair> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_chars_value: // field_chars_value
      case symbol_kind::S_field_strings_value: // field_strings_value
        value.YY_MOVE_OR_COPY< std::vector<std::string> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CHARACTER_LITERAL: // CHARACTER_LITERAL
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

      case symbol_kind::S_NUMBER: // NUMBER
        value.move< int16_t > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_collate: // section_collate
        value.move< lc_collate * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_ctype: // section_ctype
      case symbol_kind::S_definitions_ctype: // definitions_ctype
        value.move< lc_ctype * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_messages: // section_messages
        value.move< lc_messages * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_monetary: // section_monetary
        value.move< lc_monetary * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_numeric: // section_numeric
        value.move< lc_numeric * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_time: // section_time
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

      case symbol_kind::S_field_bytes_value: // field_bytes_value
        value.move< std::vector<int16_t> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_ctype_pairs_value: // field_ctype_pairs_value
        value.move< std::vector<pair> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_field_chars_value: // field_chars_value
      case symbol_kind::S_field_strings_value: // field_strings_value
        value.move< std::vector<std::string> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CHARACTER_LITERAL: // CHARACTER_LITERAL
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

      case symbol_kind::S_NUMBER: // NUMBER
        value.copy< int16_t > (that.value);
        break;

      case symbol_kind::S_section_collate: // section_collate
        value.copy< lc_collate * > (that.value);
        break;

      case symbol_kind::S_section_ctype: // section_ctype
      case symbol_kind::S_definitions_ctype: // definitions_ctype
        value.copy< lc_ctype * > (that.value);
        break;

      case symbol_kind::S_section_messages: // section_messages
        value.copy< lc_messages * > (that.value);
        break;

      case symbol_kind::S_section_monetary: // section_monetary
        value.copy< lc_monetary * > (that.value);
        break;

      case symbol_kind::S_section_numeric: // section_numeric
        value.copy< lc_numeric * > (that.value);
        break;

      case symbol_kind::S_section_time: // section_time
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

      case symbol_kind::S_field_bytes_value: // field_bytes_value
        value.copy< std::vector<int16_t> > (that.value);
        break;

      case symbol_kind::S_field_ctype_pairs_value: // field_ctype_pairs_value
        value.copy< std::vector<pair> > (that.value);
        break;

      case symbol_kind::S_field_chars_value: // field_chars_value
      case symbol_kind::S_field_strings_value: // field_strings_value
        value.copy< std::vector<std::string> > (that.value);
        break;

      case symbol_kind::S_CHARACTER_LITERAL: // CHARACTER_LITERAL
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

      case symbol_kind::S_NUMBER: // NUMBER
        value.move< int16_t > (that.value);
        break;

      case symbol_kind::S_section_collate: // section_collate
        value.move< lc_collate * > (that.value);
        break;

      case symbol_kind::S_section_ctype: // section_ctype
      case symbol_kind::S_definitions_ctype: // definitions_ctype
        value.move< lc_ctype * > (that.value);
        break;

      case symbol_kind::S_section_messages: // section_messages
        value.move< lc_messages * > (that.value);
        break;

      case symbol_kind::S_section_monetary: // section_monetary
        value.move< lc_monetary * > (that.value);
        break;

      case symbol_kind::S_section_numeric: // section_numeric
        value.move< lc_numeric * > (that.value);
        break;

      case symbol_kind::S_section_time: // section_time
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

      case symbol_kind::S_field_bytes_value: // field_bytes_value
        value.move< std::vector<int16_t> > (that.value);
        break;

      case symbol_kind::S_field_ctype_pairs_value: // field_ctype_pairs_value
        value.move< std::vector<pair> > (that.value);
        break;

      case symbol_kind::S_field_chars_value: // field_chars_value
      case symbol_kind::S_field_strings_value: // field_strings_value
        value.move< std::vector<std::string> > (that.value);
        break;

      case symbol_kind::S_CHARACTER_LITERAL: // CHARACTER_LITERAL
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

      case symbol_kind::S_NUMBER: // NUMBER
        yylhs.value.emplace< int16_t > ();
        break;

      case symbol_kind::S_section_collate: // section_collate
        yylhs.value.emplace< lc_collate * > ();
        break;

      case symbol_kind::S_section_ctype: // section_ctype
      case symbol_kind::S_definitions_ctype: // definitions_ctype
        yylhs.value.emplace< lc_ctype * > ();
        break;

      case symbol_kind::S_section_messages: // section_messages
        yylhs.value.emplace< lc_messages * > ();
        break;

      case symbol_kind::S_section_monetary: // section_monetary
        yylhs.value.emplace< lc_monetary * > ();
        break;

      case symbol_kind::S_section_numeric: // section_numeric
        yylhs.value.emplace< lc_numeric * > ();
        break;

      case symbol_kind::S_section_time: // section_time
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

      case symbol_kind::S_field_bytes_value: // field_bytes_value
        yylhs.value.emplace< std::vector<int16_t> > ();
        break;

      case symbol_kind::S_field_ctype_pairs_value: // field_ctype_pairs_value
        yylhs.value.emplace< std::vector<pair> > ();
        break;

      case symbol_kind::S_field_chars_value: // field_chars_value
      case symbol_kind::S_field_strings_value: // field_strings_value
        yylhs.value.emplace< std::vector<std::string> > ();
        break;

      case symbol_kind::S_CHARACTER_LITERAL: // CHARACTER_LITERAL
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
#line 90 "src/bison_locale.ypp"
                         { YYACCEPT; }
#line 918 "src/bison_locale.cpp"
    break;

  case 4: // locale_file: prelude sections
#line 94 "src/bison_locale.ypp"
                    { locale::save_locale(yystack_[0].value.as < Locale * > ()); }
#line 924 "src/bison_locale.cpp"
    break;

  case 5: // locale_file: sections
#line 95 "src/bison_locale.ypp"
            { locale::save_locale(yystack_[0].value.as < Locale * > ()); }
#line 930 "src/bison_locale.cpp"
    break;

  case 9: // configs: CONFIG TEXT newlines
#line 107 "src/bison_locale.ypp"
                        { locale::set_config(yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ()); }
#line 936 "src/bison_locale.cpp"
    break;

  case 10: // configs: configs CONFIG TEXT newlines
#line 108 "src/bison_locale.ypp"
                                { locale::set_config(yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ()); }
#line 942 "src/bison_locale.cpp"
    break;

  case 11: // sections: section_ctype
#line 113 "src/bison_locale.ypp"
 {
    auto l = new Locale;
    if(!locale::set_section(l, &Locale::set_section_ctype, &Locale::section_ctype, yystack_[0].value.as < lc_ctype * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = l;
 }
#line 954 "src/bison_locale.cpp"
    break;

  case 12: // sections: section_collate
#line 121 "src/bison_locale.ypp"
 {
    auto l = new Locale;
    if(!locale::set_section(l, &Locale::set_section_collate, &Locale::section_collate, yystack_[0].value.as < lc_collate * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = l;
 }
#line 966 "src/bison_locale.cpp"
    break;

  case 13: // sections: section_monetary
#line 129 "src/bison_locale.ypp"
 {
    auto l = new Locale;
    if(!locale::set_section(l, &Locale::set_section_monetary, &Locale::section_monetary, yystack_[0].value.as < lc_monetary * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = l;
 }
#line 978 "src/bison_locale.cpp"
    break;

  case 14: // sections: section_numeric
#line 137 "src/bison_locale.ypp"
 {
    auto l = new Locale;
    if(!locale::set_section(l, &Locale::set_section_numeric, &Locale::section_numeric, yystack_[0].value.as < lc_numeric * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = l;
 }
#line 990 "src/bison_locale.cpp"
    break;

  case 15: // sections: section_time
#line 145 "src/bison_locale.ypp"
 {
    auto l = new Locale;
    if(!locale::set_section(l, &Locale::set_section_time, &Locale::section_time, yystack_[0].value.as < lc_time * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = l;
 }
#line 1002 "src/bison_locale.cpp"
    break;

  case 16: // sections: section_messages
#line 153 "src/bison_locale.ypp"
 {
    auto l = new Locale;
    if(!locale::set_section(l, &Locale::set_section_messages, &Locale::section_messages, yystack_[0].value.as < lc_messages * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = l;
 }
#line 1014 "src/bison_locale.cpp"
    break;

  case 17: // sections: sections section_ctype
#line 161 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_ctype, &Locale::section_ctype, yystack_[0].value.as < lc_ctype * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1025 "src/bison_locale.cpp"
    break;

  case 18: // sections: sections section_collate
#line 168 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_collate, &Locale::section_collate, yystack_[0].value.as < lc_collate * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1036 "src/bison_locale.cpp"
    break;

  case 19: // sections: sections section_monetary
#line 175 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_monetary, &Locale::section_monetary, yystack_[0].value.as < lc_monetary * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1047 "src/bison_locale.cpp"
    break;

  case 20: // sections: sections section_numeric
#line 182 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_numeric, &Locale::section_numeric, yystack_[0].value.as < lc_numeric * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1058 "src/bison_locale.cpp"
    break;

  case 21: // sections: sections section_time
#line 189 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_time, &Locale::section_time, yystack_[0].value.as < lc_time * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1069 "src/bison_locale.cpp"
    break;

  case 22: // sections: sections section_messages
#line 196 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_messages, &Locale::section_messages, yystack_[0].value.as < lc_messages * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1080 "src/bison_locale.cpp"
    break;

  case 23: // section_ctype: T_LC_CTYPE EOL COPY STRING EOL END T_LC_CTYPE newlines
#line 205 "src/bison_locale.ypp"
                                                          { yylhs.value.as < lc_ctype * > () = new lc_ctype; }
#line 1086 "src/bison_locale.cpp"
    break;

  case 24: // section_ctype: T_LC_CTYPE EOL definitions_ctype END T_LC_CTYPE newlines
#line 206 "src/bison_locale.ypp"
                                                            { yylhs.value.as < lc_ctype * > () = yystack_[3].value.as < lc_ctype * > (); }
#line 1092 "src/bison_locale.cpp"
    break;

  case 25: // definitions_ctype: FIELD_CTYPE_PAIRS field_ctype_pairs_value newlines
#line 211 "src/bison_locale.ypp"
 {
    auto s = new lc_ctype;
    if(!locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<pair> > ())) YYERROR;
    yylhs.value.as < lc_ctype * > () = s;
 }
#line 1102 "src/bison_locale.cpp"
    break;

  case 26: // definitions_ctype: FIELD_CTYPE_CHARS field_chars_value newlines
#line 217 "src/bison_locale.ypp"
 {
    auto s = new lc_ctype;
    if(!locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<std::string> > ())) YYERROR;
    yylhs.value.as < lc_ctype * > () = s;
 }
#line 1112 "src/bison_locale.cpp"
    break;

  case 27: // definitions_ctype: definitions_ctype FIELD_CTYPE_PAIRS field_ctype_pairs_value newlines
#line 223 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_ctype * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<pair> > ())) YYERROR;
    yylhs.value.as < lc_ctype * > () = yystack_[3].value.as < lc_ctype * > ();
 }
#line 1121 "src/bison_locale.cpp"
    break;

  case 28: // definitions_ctype: definitions_ctype FIELD_CTYPE_CHARS field_chars_value newlines
#line 228 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_ctype * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<std::string> > ())) YYERROR;
    yylhs.value.as < lc_ctype * > () = yystack_[3].value.as < lc_ctype * > ();
 }
#line 1130 "src/bison_locale.cpp"
    break;

  case 29: // field_ctype_pairs_value: field_ctype_single_pair_value
#line 235 "src/bison_locale.ypp"
                                 { yylhs.value.as < std::vector<pair> > () = std::vector<pair>{yystack_[0].value.as < pair > ()}; }
#line 1136 "src/bison_locale.cpp"
    break;

  case 30: // field_ctype_pairs_value: field_ctype_pairs_value SEMICOLON field_ctype_single_pair_value
#line 236 "src/bison_locale.ypp"
                                                                   { yystack_[2].value.as < std::vector<pair> > ().push_back(yystack_[0].value.as < pair > ()); yylhs.value.as < std::vector<pair> > () = yystack_[2].value.as < std::vector<pair> > (); }
#line 1142 "src/bison_locale.cpp"
    break;

  case 31: // field_ctype_pairs_value: field_ctype_pairs_value SEMICOLON ESCAPE EOL field_ctype_single_pair_value
#line 237 "src/bison_locale.ypp"
                                                                              { yystack_[4].value.as < std::vector<pair> > ().push_back(yystack_[0].value.as < pair > ()); yylhs.value.as < std::vector<pair> > () = yystack_[4].value.as < std::vector<pair> > (); }
#line 1148 "src/bison_locale.cpp"
    break;

  case 32: // field_ctype_single_pair_value: BRACKET_OPEN character_value COMMA character_value BRACKET_CLOSE
#line 242 "src/bison_locale.ypp"
 {
    auto p = pair{};
    p.set_left(yystack_[3].value.as < std::string > ());
    p.set_right(yystack_[1].value.as < std::string > ());
    yylhs.value.as < pair > () = p;
 }
#line 1159 "src/bison_locale.cpp"
    break;

  case 33: // section_collate: T_LC_COLLATE EOL COPY STRING EOL END T_LC_COLLATE newlines
#line 250 "src/bison_locale.ypp"
                                                              { yylhs.value.as < lc_collate * > () = new lc_collate; }
#line 1165 "src/bison_locale.cpp"
    break;

  case 34: // section_collate: T_LC_COLLATE EOL collate_start definitions_collate ORDER_END EOL END T_LC_COLLATE newlines
#line 251 "src/bison_locale.ypp"
                                                                                              { yylhs.value.as < lc_collate * > () = new lc_collate; }
#line 1171 "src/bison_locale.cpp"
    break;

  case 52: // section_monetary: T_LC_MONETARY EOL COPY STRING EOL END T_LC_MONETARY newlines
#line 293 "src/bison_locale.ypp"
                                                                { yylhs.value.as < lc_monetary * > () = new lc_monetary; }
#line 1177 "src/bison_locale.cpp"
    break;

  case 53: // section_monetary: T_LC_MONETARY EOL definitions_monetary END T_LC_MONETARY newlines
#line 294 "src/bison_locale.ypp"
                                                                     { yylhs.value.as < lc_monetary * > () = new lc_monetary; }
#line 1183 "src/bison_locale.cpp"
    break;

  case 59: // section_numeric: T_LC_NUMERIC EOL COPY STRING EOL END T_LC_NUMERIC newlines
#line 309 "src/bison_locale.ypp"
                                                              { yylhs.value.as < lc_numeric * > () = new lc_numeric; }
#line 1189 "src/bison_locale.cpp"
    break;

  case 60: // section_numeric: T_LC_NUMERIC EOL definitions_numeric END T_LC_NUMERIC newlines
#line 310 "src/bison_locale.ypp"
                                                                  { yylhs.value.as < lc_numeric * > () = new lc_numeric; }
#line 1195 "src/bison_locale.cpp"
    break;

  case 61: // field_chars_value: character_value
#line 314 "src/bison_locale.ypp"
                   { yylhs.value.as < std::vector<std::string> > () = std::vector<std::string>{yystack_[0].value.as < std::string > ()}; }
#line 1201 "src/bison_locale.cpp"
    break;

  case 62: // field_chars_value: field_chars_value SEMICOLON character_value
#line 315 "src/bison_locale.ypp"
                                               { yystack_[2].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[2].value.as < std::vector<std::string> > (); }
#line 1207 "src/bison_locale.cpp"
    break;

  case 63: // field_chars_value: field_chars_value SEMICOLON ESCAPE EOL character_value
#line 316 "src/bison_locale.ypp"
                                                          { yystack_[4].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[4].value.as < std::vector<std::string> > (); }
#line 1213 "src/bison_locale.cpp"
    break;

  case 68: // section_time: T_LC_TIME EOL COPY STRING EOL END T_LC_TIME newlines
#line 330 "src/bison_locale.ypp"
                                                        { yylhs.value.as < lc_time * > () = new lc_time; }
#line 1219 "src/bison_locale.cpp"
    break;

  case 69: // section_time: T_LC_TIME EOL definitions_time END T_LC_TIME newlines
#line 331 "src/bison_locale.ypp"
                                                         { yylhs.value.as < lc_time * > () = new lc_time; }
#line 1225 "src/bison_locale.cpp"
    break;

  case 74: // section_messages: T_LC_MESSAGES EOL COPY STRING EOL END T_LC_MESSAGES newlines
#line 345 "src/bison_locale.ypp"
                                                                { yylhs.value.as < lc_messages * > () = new lc_messages; }
#line 1231 "src/bison_locale.cpp"
    break;

  case 75: // section_messages: T_LC_MESSAGES EOL definitions_messages END T_LC_MESSAGES newlines
#line 346 "src/bison_locale.ypp"
                                                                     { yylhs.value.as < lc_messages * > () = new lc_messages; }
#line 1237 "src/bison_locale.cpp"
    break;

  case 79: // character_value: CHARACTER_NAME
#line 358 "src/bison_locale.ypp"
   { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
#line 1243 "src/bison_locale.cpp"
    break;

  case 80: // character_value: character_literals
#line 359 "src/bison_locale.ypp"
   { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
#line 1249 "src/bison_locale.cpp"
    break;

  case 81: // field_bytes_value: NUMBER
#line 363 "src/bison_locale.ypp"
          { yylhs.value.as < std::vector<int16_t> > () = std::vector<int16_t>{yystack_[0].value.as < int16_t > ()}; }
#line 1255 "src/bison_locale.cpp"
    break;

  case 82: // field_bytes_value: field_bytes_value SEMICOLON NUMBER
#line 364 "src/bison_locale.ypp"
                                      { yystack_[2].value.as < std::vector<int16_t> > ().push_back(yystack_[0].value.as < int16_t > ()); yylhs.value.as < std::vector<int16_t> > () = yystack_[2].value.as < std::vector<int16_t> > (); }
#line 1261 "src/bison_locale.cpp"
    break;

  case 83: // field_bytes_value: field_bytes_value SEMICOLON ESCAPE EOL NUMBER
#line 365 "src/bison_locale.ypp"
                                                 { yystack_[4].value.as < std::vector<int16_t> > ().push_back(yystack_[0].value.as < int16_t > ()); yylhs.value.as < std::vector<int16_t> > () = yystack_[4].value.as < std::vector<int16_t> > (); }
#line 1267 "src/bison_locale.cpp"
    break;

  case 84: // field_strings_value: STRING
#line 369 "src/bison_locale.ypp"
          { yylhs.value.as < std::vector<std::string> > () = std::vector<std::string>{yystack_[0].value.as < std::string > ()}; }
#line 1273 "src/bison_locale.cpp"
    break;

  case 85: // field_strings_value: field_strings_value SEMICOLON STRING
#line 370 "src/bison_locale.ypp"
                                        { yystack_[2].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[2].value.as < std::vector<std::string> > (); }
#line 1279 "src/bison_locale.cpp"
    break;

  case 86: // field_strings_value: field_strings_value SEMICOLON ESCAPE EOL STRING
#line 371 "src/bison_locale.ypp"
                                                   { yystack_[4].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[4].value.as < std::vector<std::string> > (); }
#line 1285 "src/bison_locale.cpp"
    break;

  case 87: // character_literals: CHARACTER_LITERAL
#line 375 "src/bison_locale.ypp"
                     { yylhs.value.as < std::string > () = std::string{(char)yystack_[0].value.as < uint8_t > ()}; }
#line 1291 "src/bison_locale.cpp"
    break;

  case 88: // character_literals: character_literals CHARACTER_LITERAL
#line 376 "src/bison_locale.ypp"
                                        { yystack_[1].value.as < std::string > ().push_back((char)yystack_[0].value.as < uint8_t > ()); yylhs.value.as < std::string > () = yystack_[1].value.as < std::string > (); }
#line 1297 "src/bison_locale.cpp"
    break;


#line 1301 "src/bison_locale.cpp"

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
      12,    58,    28,    60,    71,    90,    92,    94,   120,   129,
      89,   130,    89,  -114,  -114,  -114,  -114,  -114,  -114,   128,
      -5,    -6,   -19,    54,    56,    59,  -114,  -114,    89,   123,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,   131,   125,   111,
     132,    -9,   133,    -4,     9,   134,   135,    39,  -114,   136,
     137,   138,   140,    44,  -114,   141,   138,   142,    -1,  -114,
     143,   144,   145,    57,  -114,   128,  -114,   111,    33,  -114,
    -114,  -114,   103,  -114,   139,   147,   125,   111,   124,   148,
    -114,  -114,  -114,  -114,   104,  -114,     2,   149,     0,  -114,
     150,   151,   146,  -114,   152,   153,  -114,   105,   154,   155,
    -114,   157,   116,   158,   156,  -114,   159,  -114,   121,   160,
     161,  -114,   131,   163,     6,   131,    15,   131,  -114,   117,
      33,   103,   128,   126,  -114,    21,  -114,  -114,  -114,  -114,
     122,  -114,  -114,   162,  -114,  -114,   127,   128,  -114,  -114,
    -114,     4,   164,   128,  -114,  -114,   165,   128,  -114,  -114,
      16,   166,   128,   111,   167,  -114,   170,  -114,   168,   131,
     131,   131,   169,  -114,  -114,     7,   171,   172,   131,  -114,
     173,   174,   131,   175,   131,  -114,   177,   176,   131,   178,
     125,   111,   128,   128,  -114,   179,   128,   182,   128,   128,
     180,   128,  -114,  -114,  -114,   131,   131,   128,   131,  -114,
     131,   131,  -114,   131,   131
  };

  const signed char
  parser::yydefact_[] =
  {
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     5,    11,    12,    13,    14,    15,    16,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     4,     0,
      17,    18,    19,    20,    21,    22,     6,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,     0,     0,     0,    54,     0,     0,     0,     0,    64,
       0,     0,     0,     0,    70,     0,     7,     0,     0,    29,
      79,    87,     0,    61,    80,     0,     0,     0,     0,     0,
      35,    39,    40,    41,     0,    37,     0,     0,     0,    42,
       0,     0,     0,    77,     0,     0,    81,     0,     0,     0,
      55,     0,     0,     0,     0,    65,     0,    84,     0,     0,
       0,    71,    10,     0,     0,    25,     0,    26,    88,     0,
       0,     0,     0,     0,    36,     0,    49,    44,    51,    50,
       0,    47,    46,     0,    43,    78,     0,     0,    56,    57,
      58,     0,     0,     0,    66,    67,     0,     0,    72,    73,
       0,     0,     0,     0,     0,    30,     0,    62,     0,    27,
      28,    24,     0,    38,    45,     0,     0,     0,    75,    82,
       0,     0,    53,     0,    60,    85,     0,     0,    69,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,    32,    31,    63,    23,    33,     0,    74,    83,
      52,    59,    86,    68,    34
  };

  const short
  parser::yypgoto_[] =
  {
    -114,  -114,  -114,   -65,  -114,  -114,   186,    13,  -114,    91,
    -113,    24,  -114,  -114,    61,  -114,    81,  -114,    20,    34,
    -114,   181,    51,   100,  -114,   183,    52,  -114,   115,    53,
    -114,   184,   -62,   187,  -114,  -114
  };

  const unsigned char
  parser::yydefgoto_[] =
  {
       0,     8,     9,    37,    10,    11,    12,    13,    41,    68,
      69,    14,    44,    84,    85,    88,    89,   130,   131,    15,
      53,    54,    16,    72,    58,    59,    17,    63,    64,    18,
      47,    48,    73,    97,   108,    74
  };

  const unsigned char
  parser::yytable_[] =
  {
     112,   155,    80,   115,    86,   113,   126,   117,   127,   128,
      45,   126,   169,    86,   128,     1,    67,    76,    77,    70,
      71,    38,    39,   175,    46,    30,     2,     3,     4,     5,
       6,     7,    55,    56,    20,    78,    31,    42,    40,    36,
      43,    30,   114,   104,    81,    82,    32,   133,    83,   170,
      87,   154,    31,   129,   157,   159,   160,   161,   129,    87,
     156,   176,    32,    33,    34,    35,    21,   193,    45,    81,
      82,    19,   168,    83,    49,    50,    51,    22,   172,    33,
      34,    35,   174,    92,    49,    50,    51,   178,    99,    55,
      56,   179,    60,    61,    60,    61,    23,    52,    24,    57,
      25,   110,    62,     2,     3,     4,     5,     6,     7,    36,
     124,   140,   116,   125,   141,    70,    71,   195,   196,   194,
      26,   198,   145,   200,   201,   141,   203,   149,   164,    27,
     150,   165,   204,    29,    36,    67,    65,    66,   122,    75,
      79,    90,    91,    94,   118,    95,    96,    98,   101,   103,
     106,   107,   109,   119,   123,   132,   135,   136,   138,   139,
     142,   158,   137,   144,   146,   148,   151,   120,   166,   134,
     162,   167,   143,   180,   147,   153,   181,   121,   111,   187,
     152,     0,   182,   190,   183,   184,   163,   202,   186,   192,
     199,   188,     0,   189,   197,   191,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   171,   173,
     177,     0,     0,     0,     0,   185,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,   100,     0,     0,     0,     0,     0,
       0,   105,     0,   102
  };

  const short
  parser::yycheck_[] =
  {
      65,   114,     6,    68,     4,    67,     4,    72,     6,     7,
      29,     4,     8,     4,     7,     3,    10,    26,    27,     4,
       5,    26,    27,     7,    43,    12,    14,    15,    16,    17,
      18,    19,    33,    34,     6,    44,    12,    43,    43,     6,
      46,    28,     9,    44,    48,    49,    12,    47,    52,    45,
      50,    45,    28,    51,   116,   120,   121,   122,    51,    50,
      45,    45,    28,    12,    12,    12,     6,   180,    29,    48,
      49,    13,   137,    52,    30,    31,    32,     6,   143,    28,
      28,    28,   147,    44,    30,    31,    32,   152,    44,    33,
      34,   153,    35,    36,    35,    36,     6,    43,     6,    43,
       6,    44,    43,    14,    15,    16,    17,    18,    19,     6,
       6,     6,     9,     9,     9,     4,     5,   182,   183,   181,
       0,   186,     6,   188,   189,     9,   191,     6,     6,     0,
       9,     9,   197,     3,     6,    10,    13,     6,    14,     7,
       7,     7,     7,     7,     5,     8,     8,     7,     7,     7,
       7,     7,     7,     6,     6,     6,     6,     6,     6,     6,
       6,    44,    16,     6,     6,     6,     6,    76,     6,    88,
      44,    44,    17,     6,    18,    12,     6,    77,    63,     6,
      19,    -1,    14,     6,    15,   165,   125,     7,    16,    11,
       8,    17,    -1,    18,    15,    19,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    44,
      44,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    56
  };

  const signed char
  parser::yystos_[] =
  {
       0,     3,    14,    15,    16,    17,    18,    19,    54,    55,
      57,    58,    59,    60,    64,    72,    75,    79,    82,    13,
       6,     6,     6,     6,     6,     6,     0,     0,    59,     3,
      60,    64,    72,    75,    79,    82,     6,    56,    26,    27,
      43,    61,    43,    46,    65,    29,    43,    83,    84,    30,
      31,    32,    43,    73,    74,    33,    34,    43,    77,    78,
      35,    36,    43,    80,    81,    13,     6,    10,    62,    63,
       4,     5,    76,    85,    88,     7,    26,    27,    44,     7,
       6,    48,    49,    52,    66,    67,     4,    50,    68,    69,
       7,     7,    44,    84,     7,     8,     8,    86,     7,    44,
      74,     7,    86,     7,    44,    78,     7,     7,    87,     7,
      44,    81,    56,    85,     9,    56,     9,    56,     5,     6,
      62,    76,    14,     6,     6,     9,     4,     6,     7,    51,
      70,    71,     6,    47,    69,     6,     6,    16,     6,     6,
       6,     9,     6,    17,     6,     6,     6,    18,     6,     6,
       9,     6,    19,    12,    45,    63,    45,    85,    44,    56,
      56,    56,    44,    67,     6,     9,     6,    44,    56,     8,
      45,    44,    56,    44,    56,     7,    45,    44,    56,    85,
       6,     6,    14,    15,    71,    44,    16,     6,    17,    18,
       6,    19,    11,    63,    85,    56,    56,    15,    56,     8,
      56,    56,     7,    56,    56
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    53,    54,    55,    55,    55,    56,    56,    57,    58,
      58,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    60,    60,    61,    61,    61,    61,    62,
      62,    62,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    67,    68,    68,    69,    69,    69,    70,    70,    71,
      71,    71,    72,    72,    73,    73,    74,    74,    74,    75,
      75,    76,    76,    76,    77,    77,    78,    78,    79,    79,
      80,    80,    81,    81,    82,    82,    83,    83,    84,    85,
      85,    86,    86,    86,    87,    87,    87,    88,    88
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     2,     0,     2,     1,     1,     2,     1,     3,
       4,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     8,     6,     3,     3,     4,     4,     1,
       3,     5,     5,     8,     9,     2,     3,     1,     3,     1,
       1,     1,     1,     2,     2,     3,     2,     1,     3,     1,
       1,     1,     8,     6,     1,     2,     3,     3,     3,     8,
       6,     1,     3,     5,     1,     2,     3,     3,     8,     6,
       1,     2,     3,     3,     8,     6,     1,     2,     3,     1,
       1,     1,     3,     5,     1,     3,     5,     1,     2
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
  "FORWARD", "BACKWARD", "UNDEFINED", "IGNORE", "POSITION", "$accept",
  "file", "locale_file", "newlines", "prelude", "configs", "sections",
  "section_ctype", "definitions_ctype", "field_ctype_pairs_value",
  "field_ctype_single_pair_value", "section_collate", "collate_start",
  "order_operands", "order_operand", "definitions_collate",
  "single_definition_collate", "collate_char_specifiers",
  "collate_char_specifier", "section_monetary", "definitions_monetary",
  "single_definition_monetary", "section_numeric", "field_chars_value",
  "definitions_numeric", "single_definition_numeric", "section_time",
  "definitions_time", "single_definition_time", "section_messages",
  "definitions_messages", "single_definition_messages", "character_value",
  "field_bytes_value", "field_strings_value", "character_literals", YY_NULLPTR
  };
#endif


#if LOCALE_PARSERDEBUG
  const short
  parser::yyrline_[] =
  {
       0,    90,    90,    93,    94,    95,    99,   100,   104,   107,
     108,   112,   120,   128,   136,   144,   152,   160,   167,   174,
     181,   188,   195,   205,   206,   210,   216,   222,   227,   235,
     236,   237,   241,   250,   251,   255,   256,   260,   261,   265,
     266,   267,   271,   272,   276,   277,   278,   282,   283,   287,
     288,   289,   293,   294,   298,   299,   303,   304,   305,   309,
     310,   314,   315,   316,   320,   321,   325,   326,   330,   331,
     335,   336,   340,   341,   345,   346,   350,   351,   355,   358,
     359,   363,   364,   365,   369,   370,   371,   375,   376
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
#line 1757 "src/bison_locale.cpp"

#line 379 "src/bison_locale.ypp"


namespace locale_parser {
    parser::symbol_type locale_parserlex(){
        auto l = locale::get_lexer();
        return l->get_token();
    }

    void parser::error(const std::string& m){
        std::cerr << m << std::endl;
    }
}
