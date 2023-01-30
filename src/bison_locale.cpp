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
      case symbol_kind::S_definitions_monetary: // definitions_monetary
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
        value.move< lc_messages * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_section_monetary: // section_monetary
      case symbol_kind::S_definitions_monetary: // definitions_monetary
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
        value.copy< lc_messages * > (that.value);
        break;

      case symbol_kind::S_section_monetary: // section_monetary
      case symbol_kind::S_definitions_monetary: // definitions_monetary
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
        value.move< lc_messages * > (that.value);
        break;

      case symbol_kind::S_section_monetary: // section_monetary
      case symbol_kind::S_definitions_monetary: // definitions_monetary
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
        yylhs.value.emplace< lc_messages * > ();
        break;

      case symbol_kind::S_section_monetary: // section_monetary
      case symbol_kind::S_definitions_monetary: // definitions_monetary
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
#line 90 "src/bison_locale.ypp"
                         { YYACCEPT; }
#line 908 "src/bison_locale.cpp"
    break;

  case 4: // locale_file: prelude sections
#line 94 "src/bison_locale.ypp"
                    { locale::save_locale(yystack_[0].value.as < Locale * > ()); }
#line 914 "src/bison_locale.cpp"
    break;

  case 5: // locale_file: sections
#line 95 "src/bison_locale.ypp"
            { locale::save_locale(yystack_[0].value.as < Locale * > ()); }
#line 920 "src/bison_locale.cpp"
    break;

  case 9: // configs: CONFIG TEXT newlines
#line 107 "src/bison_locale.ypp"
                        { locale::set_config(yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ()); }
#line 926 "src/bison_locale.cpp"
    break;

  case 10: // configs: configs CONFIG TEXT newlines
#line 108 "src/bison_locale.ypp"
                                { locale::set_config(yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ()); }
#line 932 "src/bison_locale.cpp"
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
#line 944 "src/bison_locale.cpp"
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
#line 956 "src/bison_locale.cpp"
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
#line 968 "src/bison_locale.cpp"
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
#line 980 "src/bison_locale.cpp"
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
#line 992 "src/bison_locale.cpp"
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
#line 1004 "src/bison_locale.cpp"
    break;

  case 17: // sections: sections section_ctype
#line 161 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_ctype, &Locale::section_ctype, yystack_[0].value.as < lc_ctype * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1015 "src/bison_locale.cpp"
    break;

  case 18: // sections: sections section_collate
#line 168 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_collate, &Locale::section_collate, yystack_[0].value.as < lc_collate * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1026 "src/bison_locale.cpp"
    break;

  case 19: // sections: sections section_monetary
#line 175 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_monetary, &Locale::section_monetary, yystack_[0].value.as < lc_monetary * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1037 "src/bison_locale.cpp"
    break;

  case 20: // sections: sections section_numeric
#line 182 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_numeric, &Locale::section_numeric, yystack_[0].value.as < lc_numeric * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1048 "src/bison_locale.cpp"
    break;

  case 21: // sections: sections section_time
#line 189 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_time, &Locale::section_time, yystack_[0].value.as < lc_time * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1059 "src/bison_locale.cpp"
    break;

  case 22: // sections: sections section_messages
#line 196 "src/bison_locale.ypp"
 {
    if(!locale::set_section(yystack_[1].value.as < Locale * > (), &Locale::set_section_messages, &Locale::section_messages, yystack_[0].value.as < lc_messages * > ())){
        YYERROR;
    }
    yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > ();
 }
#line 1070 "src/bison_locale.cpp"
    break;

  case 23: // section_ctype: T_LC_CTYPE EOL COPY STRING EOL END T_LC_CTYPE newlines
#line 205 "src/bison_locale.ypp"
                                                          { yylhs.value.as < lc_ctype * > () = new lc_ctype; }
#line 1076 "src/bison_locale.cpp"
    break;

  case 24: // section_ctype: T_LC_CTYPE EOL definitions_ctype END T_LC_CTYPE newlines
#line 206 "src/bison_locale.ypp"
                                                            { yylhs.value.as < lc_ctype * > () = yystack_[3].value.as < lc_ctype * > (); }
#line 1082 "src/bison_locale.cpp"
    break;

  case 25: // definitions_ctype: FIELD_CTYPE_PAIRS field_ctype_pairs_value newlines
#line 211 "src/bison_locale.ypp"
 {
    auto s = new lc_ctype;
    if(!locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<pair> > ())) YYERROR;
    yylhs.value.as < lc_ctype * > () = s;
 }
#line 1092 "src/bison_locale.cpp"
    break;

  case 26: // definitions_ctype: FIELD_CTYPE_CHARS field_chars_value newlines
#line 217 "src/bison_locale.ypp"
 {
    auto s = new lc_ctype;
    if(!locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<std::string> > ())) YYERROR;
    yylhs.value.as < lc_ctype * > () = s;
 }
#line 1102 "src/bison_locale.cpp"
    break;

  case 27: // definitions_ctype: definitions_ctype FIELD_CTYPE_PAIRS field_ctype_pairs_value newlines
#line 223 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_ctype * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<pair> > ())) YYERROR;
    yylhs.value.as < lc_ctype * > () = yystack_[3].value.as < lc_ctype * > ();
 }
#line 1111 "src/bison_locale.cpp"
    break;

  case 28: // definitions_ctype: definitions_ctype FIELD_CTYPE_CHARS field_chars_value newlines
#line 228 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_ctype * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<std::string> > ())) YYERROR;
    yylhs.value.as < lc_ctype * > () = yystack_[3].value.as < lc_ctype * > ();
 }
#line 1120 "src/bison_locale.cpp"
    break;

  case 29: // field_ctype_pairs_value: field_ctype_single_pair_value
#line 235 "src/bison_locale.ypp"
                                 { yylhs.value.as < std::vector<pair> > () = std::vector<pair>{yystack_[0].value.as < pair > ()}; }
#line 1126 "src/bison_locale.cpp"
    break;

  case 30: // field_ctype_pairs_value: field_ctype_pairs_value SEMICOLON field_ctype_single_pair_value
#line 236 "src/bison_locale.ypp"
                                                                   { yystack_[2].value.as < std::vector<pair> > ().push_back(yystack_[0].value.as < pair > ()); yylhs.value.as < std::vector<pair> > () = yystack_[2].value.as < std::vector<pair> > (); }
#line 1132 "src/bison_locale.cpp"
    break;

  case 31: // field_ctype_pairs_value: field_ctype_pairs_value SEMICOLON ESCAPE EOL field_ctype_single_pair_value
#line 237 "src/bison_locale.ypp"
                                                                              { yystack_[4].value.as < std::vector<pair> > ().push_back(yystack_[0].value.as < pair > ()); yylhs.value.as < std::vector<pair> > () = yystack_[4].value.as < std::vector<pair> > (); }
#line 1138 "src/bison_locale.cpp"
    break;

  case 32: // field_ctype_single_pair_value: BRACKET_OPEN character_value COMMA character_value BRACKET_CLOSE
#line 242 "src/bison_locale.ypp"
 {
    auto p = pair{};
    p.set_left(yystack_[3].value.as < std::string > ());
    p.set_right(yystack_[1].value.as < std::string > ());
    yylhs.value.as < pair > () = p;
 }
#line 1149 "src/bison_locale.cpp"
    break;

  case 33: // section_collate: T_LC_COLLATE EOL COPY STRING EOL END T_LC_COLLATE newlines
#line 250 "src/bison_locale.ypp"
                                                              { yylhs.value.as < lc_collate * > () = new lc_collate; }
#line 1155 "src/bison_locale.cpp"
    break;

  case 34: // section_collate: T_LC_COLLATE EOL collate_start definitions_collate ORDER_END EOL END T_LC_COLLATE newlines
#line 251 "src/bison_locale.ypp"
                                                                                              { yylhs.value.as < lc_collate * > () = new lc_collate; }
#line 1161 "src/bison_locale.cpp"
    break;

  case 52: // section_monetary: T_LC_MONETARY EOL COPY STRING EOL END T_LC_MONETARY newlines
#line 293 "src/bison_locale.ypp"
                                                                { yylhs.value.as < lc_monetary * > () = new lc_monetary; }
#line 1167 "src/bison_locale.cpp"
    break;

  case 53: // section_monetary: T_LC_MONETARY EOL definitions_monetary END T_LC_MONETARY newlines
#line 294 "src/bison_locale.ypp"
                                                                     { yylhs.value.as < lc_monetary * > () = yystack_[3].value.as < lc_monetary * > (); }
#line 1173 "src/bison_locale.cpp"
    break;

  case 54: // definitions_monetary: FIELD_MONETARY_STRING STRING EOL
#line 299 "src/bison_locale.ypp"
 {
    auto s = new lc_monetary;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ());
    yylhs.value.as < lc_monetary * > () = s;
 }
#line 1183 "src/bison_locale.cpp"
    break;

  case 55: // definitions_monetary: FIELD_MONETARY_SINGLE_BYTE NUMBER EOL
#line 305 "src/bison_locale.ypp"
 {
    auto s = new lc_monetary;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < uint8_t > ());
    yylhs.value.as < lc_monetary * > () = s;
 }
#line 1193 "src/bison_locale.cpp"
    break;

  case 56: // definitions_monetary: FIELD_MONETARY_BYTES field_bytes_value EOL
#line 311 "src/bison_locale.ypp"
 {
    auto s = new lc_monetary;
    locale::set_field(s, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<uint8_t> > ());
    yylhs.value.as < lc_monetary * > () = s;
 }
#line 1203 "src/bison_locale.cpp"
    break;

  case 57: // definitions_monetary: definitions_monetary FIELD_MONETARY_STRING STRING EOL
#line 317 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_monetary * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ())){
        YYERROR;
    }
    yylhs.value.as < lc_monetary * > () = yystack_[3].value.as < lc_monetary * > ();
 }
#line 1214 "src/bison_locale.cpp"
    break;

  case 58: // definitions_monetary: definitions_monetary FIELD_MONETARY_SINGLE_BYTE NUMBER EOL
#line 324 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_monetary * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < uint8_t > ())){
        YYERROR;
    }
    yylhs.value.as < lc_monetary * > () = yystack_[3].value.as < lc_monetary * > ();
 }
#line 1225 "src/bison_locale.cpp"
    break;

  case 59: // definitions_monetary: definitions_monetary FIELD_MONETARY_BYTES field_bytes_value EOL
#line 331 "src/bison_locale.ypp"
 {
    if(!locale::set_field(yystack_[3].value.as < lc_monetary * > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::vector<uint8_t> > ())){
        YYERROR;
    }
    yylhs.value.as < lc_monetary * > () = yystack_[3].value.as < lc_monetary * > ();
 }
#line 1236 "src/bison_locale.cpp"
    break;

  case 60: // section_numeric: T_LC_NUMERIC EOL COPY STRING EOL END T_LC_NUMERIC newlines
#line 340 "src/bison_locale.ypp"
                                                              { yylhs.value.as < lc_numeric * > () = new lc_numeric; }
#line 1242 "src/bison_locale.cpp"
    break;

  case 61: // section_numeric: T_LC_NUMERIC EOL definitions_numeric END T_LC_NUMERIC newlines
#line 341 "src/bison_locale.ypp"
                                                                  { yylhs.value.as < lc_numeric * > () = new lc_numeric; }
#line 1248 "src/bison_locale.cpp"
    break;

  case 62: // field_chars_value: character_value
#line 345 "src/bison_locale.ypp"
                   { yylhs.value.as < std::vector<std::string> > () = std::vector<std::string>{yystack_[0].value.as < std::string > ()}; }
#line 1254 "src/bison_locale.cpp"
    break;

  case 63: // field_chars_value: field_chars_value SEMICOLON character_value
#line 346 "src/bison_locale.ypp"
                                               { yystack_[2].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[2].value.as < std::vector<std::string> > (); }
#line 1260 "src/bison_locale.cpp"
    break;

  case 64: // field_chars_value: field_chars_value SEMICOLON ESCAPE EOL character_value
#line 347 "src/bison_locale.ypp"
                                                          { yystack_[4].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[4].value.as < std::vector<std::string> > (); }
#line 1266 "src/bison_locale.cpp"
    break;

  case 69: // section_time: T_LC_TIME EOL COPY STRING EOL END T_LC_TIME newlines
#line 361 "src/bison_locale.ypp"
                                                        { yylhs.value.as < lc_time * > () = new lc_time; }
#line 1272 "src/bison_locale.cpp"
    break;

  case 70: // section_time: T_LC_TIME EOL definitions_time END T_LC_TIME newlines
#line 362 "src/bison_locale.ypp"
                                                         { yylhs.value.as < lc_time * > () = new lc_time; }
#line 1278 "src/bison_locale.cpp"
    break;

  case 75: // section_messages: T_LC_MESSAGES EOL COPY STRING EOL END T_LC_MESSAGES newlines
#line 376 "src/bison_locale.ypp"
                                                                { yylhs.value.as < lc_messages * > () = new lc_messages; }
#line 1284 "src/bison_locale.cpp"
    break;

  case 76: // section_messages: T_LC_MESSAGES EOL definitions_messages END T_LC_MESSAGES newlines
#line 377 "src/bison_locale.ypp"
                                                                     { yylhs.value.as < lc_messages * > () = new lc_messages; }
#line 1290 "src/bison_locale.cpp"
    break;

  case 80: // character_value: CHARACTER_NAME
#line 389 "src/bison_locale.ypp"
   { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
#line 1296 "src/bison_locale.cpp"
    break;

  case 81: // character_value: character_literals
#line 390 "src/bison_locale.ypp"
   { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
#line 1302 "src/bison_locale.cpp"
    break;

  case 82: // field_bytes_value: NUMBER
#line 394 "src/bison_locale.ypp"
          { yylhs.value.as < std::vector<uint8_t> > () = std::vector<uint8_t>{yystack_[0].value.as < uint8_t > ()}; }
#line 1308 "src/bison_locale.cpp"
    break;

  case 83: // field_bytes_value: field_bytes_value SEMICOLON NUMBER
#line 395 "src/bison_locale.ypp"
                                      { yystack_[2].value.as < std::vector<uint8_t> > ().push_back(yystack_[0].value.as < uint8_t > ()); yylhs.value.as < std::vector<uint8_t> > () = yystack_[2].value.as < std::vector<uint8_t> > (); }
#line 1314 "src/bison_locale.cpp"
    break;

  case 84: // field_bytes_value: field_bytes_value SEMICOLON ESCAPE EOL NUMBER
#line 396 "src/bison_locale.ypp"
                                                 { yystack_[4].value.as < std::vector<uint8_t> > ().push_back(yystack_[0].value.as < uint8_t > ()); yylhs.value.as < std::vector<uint8_t> > () = yystack_[4].value.as < std::vector<uint8_t> > (); }
#line 1320 "src/bison_locale.cpp"
    break;

  case 85: // field_strings_value: STRING
#line 400 "src/bison_locale.ypp"
          { yylhs.value.as < std::vector<std::string> > () = std::vector<std::string>{yystack_[0].value.as < std::string > ()}; }
#line 1326 "src/bison_locale.cpp"
    break;

  case 86: // field_strings_value: field_strings_value SEMICOLON STRING
#line 401 "src/bison_locale.ypp"
                                        { yystack_[2].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[2].value.as < std::vector<std::string> > (); }
#line 1332 "src/bison_locale.cpp"
    break;

  case 87: // field_strings_value: field_strings_value SEMICOLON ESCAPE EOL STRING
#line 402 "src/bison_locale.ypp"
                                                   { yystack_[4].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[4].value.as < std::vector<std::string> > (); }
#line 1338 "src/bison_locale.cpp"
    break;

  case 88: // character_literals: CHARACTER_LITERAL
#line 406 "src/bison_locale.ypp"
                     { yylhs.value.as < std::string > () = std::string{(char)yystack_[0].value.as < uint8_t > ()}; }
#line 1344 "src/bison_locale.cpp"
    break;

  case 89: // character_literals: character_literals CHARACTER_LITERAL
#line 407 "src/bison_locale.ypp"
                                        { yystack_[1].value.as < std::string > ().push_back((char)yystack_[0].value.as < uint8_t > ()); yylhs.value.as < std::string > () = yystack_[1].value.as < std::string > (); }
#line 1350 "src/bison_locale.cpp"
    break;


#line 1354 "src/bison_locale.cpp"

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









  const signed char parser::yypact_ninf_ = -115;

  const signed char parser::yytable_ninf_ = -1;

  const short
  parser::yypact_[] =
  {
      23,    10,    19,    28,    80,    91,    92,   116,   128,   135,
      86,   133,    86,  -115,  -115,  -115,  -115,  -115,  -115,   131,
      -7,    66,     3,    63,   -12,    36,  -115,  -115,    86,   125,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,   136,   129,    25,
     134,    -9,   137,    -4,    11,   138,   139,    40,  -115,   140,
     141,   142,   144,    45,   145,   142,   146,    34,  -115,   147,
     148,   149,    55,  -115,   131,  -115,    25,    79,  -115,  -115,
    -115,   104,  -115,   143,   151,   129,    25,   150,   152,  -115,
    -115,  -115,  -115,   108,  -115,     2,   153,     0,  -115,   154,
     155,   127,  -115,   156,   157,  -115,   109,   159,   160,   158,
     142,   161,   162,   110,   163,   164,  -115,   165,  -115,   114,
     166,   167,  -115,   136,   168,    18,   136,     7,   136,  -115,
     126,    79,   104,   131,   130,  -115,    59,  -115,  -115,  -115,
    -115,   115,  -115,  -115,   169,  -115,  -115,   132,   131,  -115,
    -115,  -115,     6,   170,   171,   173,   124,   131,  -115,  -115,
     172,   131,  -115,  -115,    17,   174,   131,    25,   175,  -115,
     177,  -115,   176,   136,   136,   136,   178,  -115,  -115,     9,
     179,   180,   136,  -115,   181,   182,  -115,  -115,  -115,   136,
     183,   136,  -115,   185,   184,   136,   186,   129,    25,   131,
     131,  -115,   187,   131,   190,   131,   131,   188,   131,  -115,
    -115,  -115,   136,   136,   131,   136,  -115,   136,   136,  -115,
     136,   136
  };

  const signed char
  parser::yydefact_[] =
  {
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     5,    11,    12,    13,    14,    15,    16,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     4,     0,
      17,    18,    19,    20,    21,    22,     6,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
       0,     0,     0,    71,     0,     7,     0,     0,    29,    80,
      88,     0,    62,    81,     0,     0,     0,     0,     0,    35,
      39,    40,    41,     0,    37,     0,     0,     0,    42,     0,
       0,     0,    78,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    66,     0,    85,     0,
       0,     0,    72,    10,     0,     0,    25,     0,    26,    89,
       0,     0,     0,     0,     0,    36,     0,    49,    44,    51,
      50,     0,    47,    46,     0,    43,    79,     0,     0,    54,
      55,    56,     0,     0,     0,     0,     0,     0,    67,    68,
       0,     0,    73,    74,     0,     0,     0,     0,     0,    30,
       0,    63,     0,    27,    28,    24,     0,    38,    45,     0,
       0,     0,    76,    83,     0,     0,    57,    58,    59,    53,
       0,    61,    86,     0,     0,    70,     0,     0,     0,     0,
       0,    48,     0,     0,     0,     0,     0,     0,     0,    32,
      31,    64,    23,    33,     0,    75,    84,    52,    60,    87,
      69,    34
  };

  const short
  parser::yypgoto_[] =
  {
    -115,  -115,  -115,   -64,  -115,  -115,   194,    15,  -115,    98,
    -114,    21,  -115,  -115,    58,  -115,   101,  -115,    16,    42,
    -115,    52,   113,  -115,   189,    53,  -115,   191,    54,  -115,
     192,   -61,   -45,  -115,  -115
  };

  const unsigned char
  parser::yydefgoto_[] =
  {
       0,     8,     9,    37,    10,    11,    12,    13,    41,    67,
      68,    14,    44,    83,    84,    87,    88,   131,   132,    15,
      53,    16,    71,    57,    58,    17,    62,    63,    18,    47,
      48,    72,    96,   109,    73
  };

  const unsigned char
  parser::yytable_[] =
  {
     113,   159,    79,   116,    85,   114,   127,   118,   128,   129,
     103,    69,    70,   127,   173,    85,   129,    75,    76,    38,
      39,    54,    55,    19,   182,    20,     1,    30,    66,    69,
      70,    56,    45,    31,    21,    77,    40,     2,     3,     4,
       5,     6,     7,    30,    80,    81,    46,   134,    82,    31,
      86,   174,   160,   130,    32,   146,   161,   163,   164,   165,
     130,    86,   183,   158,    33,    34,    35,    54,    55,    45,
      32,    59,    60,   200,   172,    98,    99,   100,   105,    61,
      33,    34,    35,   179,    91,    36,    22,   181,   115,   101,
      59,    60,   185,    49,    50,    51,   186,    23,    24,   111,
       2,     3,     4,     5,     6,     7,    52,    80,    81,    42,
      36,    82,    43,   117,   125,   141,   149,   126,   142,   142,
     153,   168,    25,   154,   169,   202,   203,   201,    26,   205,
     178,   207,   208,   142,   210,    27,    29,    36,    64,    66,
     211,    74,    65,   138,    78,    89,    90,    93,   119,    94,
      95,    97,   102,   104,   107,   108,   110,   120,   124,   133,
     136,   137,   139,   140,   123,   143,   145,   144,   148,   150,
     162,   152,   155,   121,   166,   170,   171,   176,   147,   177,
     157,   187,   151,   188,   167,   191,   156,   194,   135,   122,
     189,   197,     0,   190,     0,   209,   193,   199,   206,   195,
       0,   196,   204,   198,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   175,     0,   180,     0,   184,     0,
       0,     0,     0,   192,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,   106,     0,     0,     0,
       0,     0,     0,   112
  };

  const short
  parser::yycheck_[] =
  {
      64,   115,     6,    67,     4,    66,     4,    71,     6,     7,
      55,     4,     5,     4,     8,     4,     7,    26,    27,    26,
      27,    33,    34,    13,     7,     6,     3,    12,    10,     4,
       5,    43,    29,    12,     6,    44,    43,    14,    15,    16,
      17,    18,    19,    28,    48,    49,    43,    47,    52,    28,
      50,    45,    45,    51,    12,   100,   117,   121,   122,   123,
      51,    50,    45,    45,    12,    12,    12,    33,    34,    29,
      28,    35,    36,   187,   138,    30,    31,    32,    44,    43,
      28,    28,    28,   147,    44,     6,     6,   151,     9,    44,
      35,    36,   156,    30,    31,    32,   157,     6,     6,    44,
      14,    15,    16,    17,    18,    19,    43,    48,    49,    43,
       6,    52,    46,     9,     6,     6,     6,     9,     9,     9,
       6,     6,     6,     9,     9,   189,   190,   188,     0,   193,
       6,   195,   196,     9,   198,     0,     3,     6,    13,    10,
     204,     7,     6,    16,     7,     7,     7,     7,     5,     8,
       8,     7,     7,     7,     7,     7,     7,     6,     6,     6,
       6,     6,     6,     6,    14,     6,     8,     7,     6,     6,
      44,     6,     6,    75,    44,     6,    44,     6,    17,     6,
      12,     6,    18,     6,   126,   169,    19,     6,    87,    76,
      14,     6,    -1,    15,    -1,     7,    16,    11,     8,    17,
      -1,    18,    15,    19,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    44,    -1,    44,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    62
  };

  const signed char
  parser::yystos_[] =
  {
       0,     3,    14,    15,    16,    17,    18,    19,    54,    55,
      57,    58,    59,    60,    64,    72,    74,    78,    81,    13,
       6,     6,     6,     6,     6,     6,     0,     0,    59,     3,
      60,    64,    72,    74,    78,    81,     6,    56,    26,    27,
      43,    61,    43,    46,    65,    29,    43,    82,    83,    30,
      31,    32,    43,    73,    33,    34,    43,    76,    77,    35,
      36,    43,    79,    80,    13,     6,    10,    62,    63,     4,
       5,    75,    84,    87,     7,    26,    27,    44,     7,     6,
      48,    49,    52,    66,    67,     4,    50,    68,    69,     7,
       7,    44,    83,     7,     8,     8,    85,     7,    30,    31,
      32,    44,     7,    85,     7,    44,    77,     7,     7,    86,
       7,    44,    80,    56,    84,     9,    56,     9,    56,     5,
       6,    62,    75,    14,     6,     6,     9,     4,     6,     7,
      51,    70,    71,     6,    47,    69,     6,     6,    16,     6,
       6,     6,     9,     6,     7,     8,    85,    17,     6,     6,
       6,    18,     6,     6,     9,     6,    19,    12,    45,    63,
      45,    84,    44,    56,    56,    56,    44,    67,     6,     9,
       6,    44,    56,     8,    45,    44,     6,     6,     6,    56,
      44,    56,     7,    45,    44,    56,    84,     6,     6,    14,
      15,    71,    44,    16,     6,    17,    18,     6,    19,    11,
      63,    84,    56,    56,    15,    56,     8,    56,    56,     7,
      56,    56
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    53,    54,    55,    55,    55,    56,    56,    57,    58,
      58,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    60,    60,    61,    61,    61,    61,    62,
      62,    62,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    67,    68,    68,    69,    69,    69,    70,    70,    71,
      71,    71,    72,    72,    73,    73,    73,    73,    73,    73,
      74,    74,    75,    75,    75,    76,    76,    77,    77,    78,
      78,    79,    79,    80,    80,    81,    81,    82,    82,    83,
      84,    84,    85,    85,    85,    86,    86,    86,    87,    87
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
       8,     6,     1,     3,     5,     1,     2,     3,     3,     8,
       6,     1,     2,     3,     3,     8,     6,     1,     2,     3,
       1,     1,     1,     3,     5,     1,     3,     5,     1,     2
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
  "section_numeric", "field_chars_value", "definitions_numeric",
  "single_definition_numeric", "section_time", "definitions_time",
  "single_definition_time", "section_messages", "definitions_messages",
  "single_definition_messages", "character_value", "field_bytes_value",
  "field_strings_value", "character_literals", YY_NULLPTR
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
     288,   289,   293,   294,   298,   304,   310,   316,   323,   330,
     340,   341,   345,   346,   347,   351,   352,   356,   357,   361,
     362,   366,   367,   371,   372,   376,   377,   381,   382,   386,
     389,   390,   394,   395,   396,   400,   401,   402,   406,   407
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
#line 1815 "src/bison_locale.cpp"

#line 410 "src/bison_locale.ypp"


namespace locale_parser {
    parser::symbol_type locale_parserlex(){
        auto l = locale::get_lexer();
        return l->get_token();
    }

    void parser::error(const std::string& m){
        std::cerr << m << std::endl;
    }
}
