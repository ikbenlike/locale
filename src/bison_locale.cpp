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
#line 913 "src/bison_locale.cpp"
    break;

  case 9: // configs: CONFIG TEXT newlines
#line 107 "src/bison_locale.ypp"
                        { locale::set_config(yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ()); }
#line 919 "src/bison_locale.cpp"
    break;

  case 10: // configs: configs CONFIG TEXT newlines
#line 108 "src/bison_locale.ypp"
                                { locale::set_config(yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ()); }
#line 925 "src/bison_locale.cpp"
    break;

  case 18: // sections: sections section
#line 122 "src/bison_locale.ypp"
   { yylhs.value.as < Locale * > () = yystack_[1].value.as < Locale * > (); }
#line 931 "src/bison_locale.cpp"
    break;

  case 19: // section_ctype: T_LC_CTYPE EOL COPY STRING EOL END T_LC_CTYPE newlines
#line 126 "src/bison_locale.ypp"
                                                          { yylhs.value.as < lc_ctype * > () = new lc_ctype; }
#line 937 "src/bison_locale.cpp"
    break;

  case 25: // field_ctype_pairs_value: field_ctype_single_pair_value
#line 141 "src/bison_locale.ypp"
                                 { yylhs.value.as < std::vector<pair> > () = std::vector<pair>{yystack_[0].value.as < pair > ()}; }
#line 943 "src/bison_locale.cpp"
    break;

  case 26: // field_ctype_pairs_value: field_ctype_pairs_value SEMICOLON field_ctype_single_pair_value
#line 142 "src/bison_locale.ypp"
                                                                   { yystack_[2].value.as < std::vector<pair> > ().push_back(yystack_[0].value.as < pair > ()); yylhs.value.as < std::vector<pair> > () = yystack_[2].value.as < std::vector<pair> > (); }
#line 949 "src/bison_locale.cpp"
    break;

  case 27: // field_ctype_pairs_value: field_ctype_pairs_value SEMICOLON ESCAPE EOL field_ctype_single_pair_value
#line 143 "src/bison_locale.ypp"
                                                                              { yystack_[4].value.as < std::vector<pair> > ().push_back(yystack_[0].value.as < pair > ()); yylhs.value.as < std::vector<pair> > () = yystack_[4].value.as < std::vector<pair> > (); }
#line 955 "src/bison_locale.cpp"
    break;

  case 28: // field_ctype_single_pair_value: BRACKET_OPEN character_value COMMA character_value BRACKET_CLOSE
#line 148 "src/bison_locale.ypp"
 {
    auto p = pair{};
    p.set_left(yystack_[3].value.as < std::string > ());
    p.set_right(yystack_[1].value.as < std::string > ());
    yylhs.value.as < pair > () = p;
 }
#line 966 "src/bison_locale.cpp"
    break;

  case 57: // field_chars_value: character_value
#line 220 "src/bison_locale.ypp"
                   { yylhs.value.as < std::vector<std::string> > () = std::vector<std::string>{yystack_[0].value.as < std::string > ()}; }
#line 972 "src/bison_locale.cpp"
    break;

  case 58: // field_chars_value: field_chars_value SEMICOLON character_value
#line 221 "src/bison_locale.ypp"
                                               { yystack_[2].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ());  }
#line 978 "src/bison_locale.cpp"
    break;

  case 59: // field_chars_value: field_chars_value SEMICOLON ESCAPE EOL character_value
#line 222 "src/bison_locale.ypp"
                                                          { yystack_[4].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[4].value.as < std::vector<std::string> > (); }
#line 984 "src/bison_locale.cpp"
    break;

  case 75: // character_value: CHARACTER_NAME
#line 264 "src/bison_locale.ypp"
   { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
#line 990 "src/bison_locale.cpp"
    break;

  case 76: // character_value: character_literals
#line 265 "src/bison_locale.ypp"
   { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
#line 996 "src/bison_locale.cpp"
    break;

  case 77: // field_bytes_value: NUMBER
#line 269 "src/bison_locale.ypp"
          { yylhs.value.as < std::vector<int16_t> > () = std::vector<int16_t>{yystack_[0].value.as < int16_t > ()}; }
#line 1002 "src/bison_locale.cpp"
    break;

  case 78: // field_bytes_value: field_bytes_value SEMICOLON NUMBER
#line 270 "src/bison_locale.ypp"
                                      { yystack_[2].value.as < std::vector<int16_t> > ().push_back(yystack_[0].value.as < int16_t > ()); yylhs.value.as < std::vector<int16_t> > () = yystack_[2].value.as < std::vector<int16_t> > (); }
#line 1008 "src/bison_locale.cpp"
    break;

  case 79: // field_bytes_value: field_bytes_value SEMICOLON ESCAPE EOL NUMBER
#line 271 "src/bison_locale.ypp"
                                                 { yystack_[4].value.as < std::vector<int16_t> > ().push_back(yystack_[0].value.as < int16_t > ()); yylhs.value.as < std::vector<int16_t> > () = yystack_[4].value.as < std::vector<int16_t> > (); }
#line 1014 "src/bison_locale.cpp"
    break;

  case 80: // field_strings_value: STRING
#line 275 "src/bison_locale.ypp"
          { yylhs.value.as < std::vector<std::string> > () = std::vector<std::string>{yystack_[0].value.as < std::string > ()}; }
#line 1020 "src/bison_locale.cpp"
    break;

  case 81: // field_strings_value: field_strings_value SEMICOLON STRING
#line 276 "src/bison_locale.ypp"
                                        { yystack_[2].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[2].value.as < std::vector<std::string> > (); }
#line 1026 "src/bison_locale.cpp"
    break;

  case 82: // field_strings_value: field_strings_value SEMICOLON ESCAPE EOL STRING
#line 277 "src/bison_locale.ypp"
                                                   { yystack_[4].value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < std::vector<std::string> > () = yystack_[4].value.as < std::vector<std::string> > (); }
#line 1032 "src/bison_locale.cpp"
    break;

  case 83: // character_literals: CHARACTER_LITERAL
#line 281 "src/bison_locale.ypp"
                     { yylhs.value.as < std::string > () = std::string{(char)yystack_[0].value.as < uint8_t > ()}; }
#line 1038 "src/bison_locale.cpp"
    break;

  case 84: // character_literals: character_literals CHARACTER_LITERAL
#line 282 "src/bison_locale.ypp"
                                        { yystack_[1].value.as < std::string > ().push_back((char)yystack_[0].value.as < uint8_t > ()); yylhs.value.as < std::string > () = yystack_[1].value.as < std::string > (); }
#line 1044 "src/bison_locale.cpp"
    break;


#line 1048 "src/bison_locale.cpp"

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









  const signed char parser::yypact_ninf_ = -110;

  const signed char parser::yytable_ninf_ = -1;

  const short
  parser::yypact_[] =
  {
      22,    15,    25,    43,    72,    79,    81,   103,   110,   115,
      76,    40,  -110,    76,  -110,  -110,  -110,  -110,  -110,  -110,
     105,    -8,   -17,    -9,    34,    37,    46,  -110,  -110,    76,
     109,  -110,  -110,   117,   114,    68,   118,   -12,  -110,   119,
      -4,     2,   121,   122,    -2,  -110,   123,   124,   125,   127,
      30,  -110,   128,   125,   129,   -11,  -110,   130,   131,   132,
      32,  -110,   105,  -110,    68,    77,  -110,  -110,  -110,    92,
    -110,   126,   134,   133,  -110,   135,  -110,  -110,  -110,  -110,
      93,  -110,     4,   136,     0,  -110,   137,   138,   139,  -110,
     140,   142,  -110,    97,   143,   141,  -110,   144,    98,   145,
     146,  -110,   147,  -110,    99,   148,   149,  -110,   117,   150,
      14,   117,    12,   117,  -110,   101,   105,   108,  -110,    48,
    -110,  -110,  -110,  -110,   111,  -110,  -110,   151,  -110,  -110,
     112,   105,  -110,  -110,  -110,    13,   116,   105,  -110,  -110,
     152,   105,  -110,  -110,     6,   153,   105,    68,   155,  -110,
     157,  -110,   156,   117,   154,  -110,  -110,     5,   158,   159,
     117,  -110,   160,   161,   117,   162,   117,  -110,   165,   163,
     117,   166,   114,    68,   105,   105,  -110,   164,   105,   168,
     105,   105,   167,   105,  -110,  -110,  -110,   117,   117,   105,
     117,  -110,   117,   117,  -110,   117,   117
  };

  const signed char
  parser::yydefact_[] =
  {
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,    17,     5,    11,    12,    13,    14,    15,    16,
       0,     0,     0,     0,     0,     0,     0,     1,     2,     4,
       0,    18,     6,     9,     0,     0,     0,     0,    21,     0,
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,    60,     0,     0,     0,
       0,    66,     0,     7,     0,     0,    25,    75,    83,     0,
      57,    76,     0,     0,    22,     0,    31,    35,    36,    37,
       0,    33,     0,     0,     0,    38,     0,     0,     0,    73,
       0,     0,    77,     0,     0,     0,    51,     0,     0,     0,
       0,    61,     0,    80,     0,     0,     0,    67,    10,     0,
       0,    23,     0,    24,    84,     0,     0,     0,    32,     0,
      45,    40,    47,    46,     0,    43,    42,     0,    39,    74,
       0,     0,    52,    53,    54,     0,     0,     0,    62,    63,
       0,     0,    68,    69,     0,     0,     0,     0,     0,    26,
       0,    58,     0,    20,     0,    34,    41,     0,     0,     0,
      71,    78,     0,     0,    49,     0,    56,    81,     0,     0,
      65,     0,     0,     0,     0,     0,    44,     0,     0,     0,
       0,     0,     0,     0,    28,    27,    59,    19,    29,     0,
      70,    79,    48,    55,    82,    64,    30
  };

  const short
  parser::yypgoto_[] =
  {
    -110,  -110,  -110,   -62,  -110,  -110,    17,   171,  -110,  -110,
     169,  -110,  -109,  -110,  -110,  -110,    53,  -110,    75,  -110,
       8,  -110,  -110,   170,  -110,  -110,  -110,   172,  -110,  -110,
     107,  -110,  -110,   173,   -59,   120,  -110,  -110
  };

  const signed char
  parser::yydefgoto_[] =
  {
       0,     8,     9,    33,    10,    11,    12,    13,    14,    37,
      38,    65,    66,    15,    41,    80,    81,    84,    85,   124,
     125,    16,    50,    51,    17,    69,    55,    56,    18,    60,
      61,    19,    44,    45,    70,    93,   104,    71
  };

  const unsigned char
  parser::yytable_[] =
  {
     108,   149,    76,   111,    82,   109,    82,   113,   120,   120,
     121,   122,   122,   167,    34,    35,    67,    68,    34,    35,
      42,   161,    52,    53,    64,     1,    39,    42,    20,    40,
      31,    21,    73,   100,    43,    36,     2,     3,     4,     5,
       6,     7,    88,    30,    77,    78,    31,   127,    79,    22,
      83,   168,    83,   151,   153,   123,   123,   150,   162,   148,
      46,    47,    48,   185,    46,    47,    48,    57,    58,   160,
      52,    53,    67,    68,    95,   164,   106,    49,    23,   166,
      54,    57,    58,    32,   170,    24,   110,    25,   171,    59,
       2,     3,     4,     5,     6,     7,    77,    78,    32,   118,
      79,   112,   119,   134,   139,   143,   135,   135,   144,    26,
      27,    32,   187,   188,   186,    28,   190,   156,   192,   193,
     157,   195,    62,    63,    64,    72,    75,   196,    86,    87,
      90,   114,    91,    92,    94,    97,    99,   102,   103,   105,
     115,   117,   126,   129,   130,   152,   132,   116,   133,   136,
     138,   140,   154,   142,   145,   131,   159,   158,   137,   128,
     163,   172,   147,   173,   141,   176,   179,   107,   146,   175,
     174,   182,   155,    98,   194,   178,   191,   184,   180,   189,
     181,    29,   183,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   165,   169,     0,     0,
       0,     0,   177,     0,     0,     0,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,     0,     0,
      96,     0,     0,     0,     0,     0,     0,   101
  };

  const short
  parser::yycheck_[] =
  {
      62,   110,     6,    65,     4,    64,     4,    69,     4,     4,
       6,     7,     7,     7,    26,    27,     4,     5,    26,    27,
      29,     8,    33,    34,    10,     3,    43,    29,    13,    46,
      13,     6,    44,    44,    43,    43,    14,    15,    16,    17,
      18,    19,    44,     3,    48,    49,    29,    47,    52,     6,
      50,    45,    50,   112,   116,    51,    51,    45,    45,    45,
      30,    31,    32,   172,    30,    31,    32,    35,    36,   131,
      33,    34,     4,     5,    44,   137,    44,    43,     6,   141,
      43,    35,    36,     6,   146,     6,     9,     6,   147,    43,
      14,    15,    16,    17,    18,    19,    48,    49,     6,     6,
      52,     9,     9,     6,     6,     6,     9,     9,     9,     6,
       0,     6,   174,   175,   173,     0,   178,     6,   180,   181,
       9,   183,    13,     6,    10,     7,     7,   189,     7,     7,
       7,     5,     8,     8,     7,     7,     7,     7,     7,     7,
       6,     6,     6,     6,     6,    44,     6,    14,     6,     6,
       6,     6,    44,     6,     6,    16,    44,     6,    17,    84,
      44,     6,    12,     6,    18,   157,     6,    60,    19,    15,
      14,     6,   119,    53,     7,    16,     8,    11,    17,    15,
      18,    10,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    44,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    55
  };

  const signed char
  parser::yystos_[] =
  {
       0,     3,    14,    15,    16,    17,    18,    19,    54,    55,
      57,    58,    59,    60,    61,    66,    74,    77,    81,    84,
      13,     6,     6,     6,     6,     6,     6,     0,     0,    60,
       3,    59,     6,    56,    26,    27,    43,    62,    63,    43,
      46,    67,    29,    43,    85,    86,    30,    31,    32,    43,
      75,    76,    33,    34,    43,    79,    80,    35,    36,    43,
      82,    83,    13,     6,    10,    64,    65,     4,     5,    78,
      87,    90,     7,    44,    63,     7,     6,    48,    49,    52,
      68,    69,     4,    50,    70,    71,     7,     7,    44,    86,
       7,     8,     8,    88,     7,    44,    76,     7,    88,     7,
      44,    80,     7,     7,    89,     7,    44,    83,    56,    87,
       9,    56,     9,    56,     5,     6,    14,     6,     6,     9,
       4,     6,     7,    51,    72,    73,     6,    47,    71,     6,
       6,    16,     6,     6,     6,     9,     6,    17,     6,     6,
       6,    18,     6,     6,     9,     6,    19,    12,    45,    65,
      45,    87,    44,    56,    44,    69,     6,     9,     6,    44,
      56,     8,    45,    44,    56,    44,    56,     7,    45,    44,
      56,    87,     6,     6,    14,    15,    73,    44,    16,     6,
      17,    18,     6,    19,    11,    65,    87,    56,    56,    15,
      56,     8,    56,    56,     7,    56,    56
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    53,    54,    55,    55,    55,    56,    56,    57,    58,
      58,    59,    59,    59,    59,    59,    59,    60,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    64,    65,    66,
      66,    67,    67,    68,    68,    69,    69,    69,    70,    70,
      71,    71,    71,    72,    72,    73,    73,    73,    74,    74,
      75,    75,    76,    76,    76,    77,    77,    78,    78,    78,
      79,    79,    80,    80,    81,    81,    82,    82,    83,    83,
      84,    84,    85,    85,    86,    87,    87,    88,    88,    88,
      89,    89,    89,    90,    90
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     2,     0,     2,     1,     1,     2,     1,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     2,     8,
       6,     1,     2,     3,     3,     1,     3,     5,     5,     8,
       9,     2,     3,     1,     3,     1,     1,     1,     1,     2,
       2,     3,     2,     1,     3,     1,     1,     1,     8,     6,
       1,     2,     3,     3,     3,     8,     6,     1,     3,     5,
       1,     2,     3,     3,     8,     6,     1,     2,     3,     3,
       8,     6,     1,     2,     3,     1,     1,     1,     3,     5,
       1,     3,     5,     1,     2
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
  "file", "locale_file", "newlines", "prelude", "configs", "section",
  "sections", "section_ctype", "definitions_ctype",
  "single_definition_ctype", "field_ctype_pairs_value",
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
     108,   112,   113,   114,   115,   116,   117,   121,   122,   126,
     127,   131,   132,   136,   137,   141,   142,   143,   147,   156,
     157,   161,   162,   166,   167,   171,   172,   173,   177,   178,
     182,   183,   184,   188,   189,   193,   194,   195,   199,   200,
     204,   205,   209,   210,   211,   215,   216,   220,   221,   222,
     226,   227,   231,   232,   236,   237,   241,   242,   246,   247,
     251,   252,   256,   257,   261,   264,   265,   269,   270,   271,
     275,   276,   277,   281,   282
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
#line 1498 "src/bison_locale.cpp"

#line 285 "src/bison_locale.ypp"


namespace locale_parser {
    parser::symbol_type locale_parserlex(){
        auto l = locale::get_lexer();
        return l->get_token();
    }

    void parser::error(const std::string& m){
        std::cerr << m << std::endl;
    }
}
