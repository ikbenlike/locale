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

#line 50 "src/bison_locale.cpp"


#include "bison_locale.hpp"


// Unqualified %code blocks.
#line 68 "src/bison_locale.ypp"

    namespace locale_parser {
        parser::symbol_type locale_parserlex();
    }

#line 63 "src/bison_locale.cpp"


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
#line 136 "src/bison_locale.cpp"

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
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
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
        value.move< std::string > (YY_MOVE (that.value));
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
        value.copy< std::string > (that.value);
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
        value.move< std::string > (that.value);
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
        yylhs.value.emplace< std::string > ();
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
#line 76 "src/bison_locale.ypp"
                         { YYACCEPT; }
#line 657 "src/bison_locale.cpp"
    break;

  case 9: // configs: CONFIG TEXT newlines
#line 93 "src/bison_locale.ypp"
                        { locale::set_config(yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ()); }
#line 663 "src/bison_locale.cpp"
    break;

  case 10: // configs: configs CONFIG TEXT newlines
#line 94 "src/bison_locale.ypp"
                                { locale::set_config(yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ()); }
#line 669 "src/bison_locale.cpp"
    break;


#line 673 "src/bison_locale.cpp"

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









  const signed char parser::yypact_ninf_ = -107;

  const signed char parser::yytable_ninf_ = -1;

  const short
  parser::yypact_[] =
  {
      61,    21,    33,    44,    60,    64,    66,    68,    81,    85,
      73,    90,  -107,  -107,  -107,  -107,  -107,  -107,  -107,    98,
      -5,   -17,   -10,    28,    -2,    26,  -107,  -107,  -107,   105,
    -107,   104,    99,   103,   109,    -9,  -107,   112,    -4,   117,
     115,   116,   -14,  -107,   118,   119,   120,   122,    -7,  -107,
     123,   120,   124,    50,  -107,   125,   126,   127,    -8,  -107,
      98,  -107,   103,    34,  -107,  -107,  -107,    40,  -107,   121,
     129,   110,  -107,   130,  -107,  -107,  -107,  -107,    59,  -107,
       4,     0,  -107,   131,   132,   128,  -107,   133,   134,  -107,
      91,   135,   136,  -107,   137,    92,   139,   138,  -107,   140,
    -107,    96,   141,   142,  -107,   104,   143,     6,   104,     9,
     104,  -107,   106,    98,   107,  -107,    47,  -107,  -107,  -107,
    -107,    97,  -107,   117,   108,  -107,   113,    98,  -107,  -107,
    -107,    12,   114,    98,  -107,  -107,   144,   148,  -107,  -107,
      -3,   145,    98,   103,   153,  -107,   154,  -107,   149,   104,
     147,  -107,  -107,     5,  -107,   150,   151,   104,  -107,   158,
     152,   104,   155,  -107,  -107,   160,   156,   104,   157,    99,
     103,    98,    98,  -107,    98,    98,   162,    98,   165,   167,
      98,  -107,  -107,  -107,   104,   104,   104,   104,  -107,   104,
    -107,  -107,   104
  };

  const signed char
  parser::yydefact_[] =
  {
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     5,    11,    12,    13,    14,    15,    16,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     4,     0,
       6,     9,     0,     0,     0,     0,    19,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,    57,     0,     0,     0,     0,    63,
       0,     7,     0,     0,    23,    72,    80,     0,    54,    73,
       0,     0,    20,     0,    29,    33,    34,    35,     0,    31,
       0,     0,    36,     0,     0,     0,    70,     0,     0,    74,
       0,     0,     0,    48,     0,     0,     0,     0,    58,     0,
      77,     0,     0,     0,    64,    10,     0,     0,    21,     0,
      22,    81,     0,     0,     0,    30,     0,    42,    38,    44,
      43,     0,    40,     0,     0,    71,     0,     0,    49,    50,
      51,     0,     0,     0,    59,    60,     0,     0,    65,    66,
       0,     0,     0,     0,     0,    24,     0,    55,     0,    18,
       0,    32,    39,     0,    37,     0,     0,    68,    75,     0,
       0,    46,     0,    53,    78,     0,     0,    62,     0,     0,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,    26,    25,    56,    17,    27,    28,    67,    76,    45,
      52,    79,    61
  };

  const short
  parser::yypgoto_[] =
  {
    -107,  -107,  -107,   -60,  -107,  -107,   166,  -107,  -107,   146,
    -107,  -106,  -107,  -107,  -107,    32,  -107,    19,  -107,    24,
    -107,  -107,   101,  -107,  -107,  -107,   159,  -107,  -107,   161,
    -107,  -107,   163,   -57,   164,  -107,  -107
  };

  const signed char
  parser::yydefgoto_[] =
  {
       0,     8,     9,    31,    10,    11,    12,    13,    35,    36,
      63,    64,    14,    39,    78,    79,    81,    82,   121,   122,
      15,    48,    49,    16,    67,    53,    54,    17,    58,    59,
      18,    42,    43,    68,    90,   101,    69
  };

  const unsigned char
  parser::yytable_[] =
  {
     105,   145,    74,   108,   164,   106,   123,   110,   117,   117,
     118,   119,   119,    65,    66,    40,    62,    32,    33,    40,
     158,    32,    33,    44,    45,    46,    37,    55,    56,    38,
      85,    50,    51,    41,    19,    71,   103,    92,    34,    20,
      30,    52,   165,   107,    75,    76,    30,   124,    77,   109,
      21,   144,   147,   149,   146,   120,   120,   159,    44,    45,
      46,    55,    56,   182,     1,   115,    22,   157,   116,    57,
      23,    47,    24,   161,    25,     2,     3,     4,     5,     6,
       7,    26,   167,    50,    51,    27,   168,     2,     3,     4,
       5,     6,     7,    29,    97,    75,    76,   130,   135,    77,
     131,   131,   139,   152,    30,   140,   153,    65,    66,    62,
      61,   184,   185,   183,   186,   187,    70,   189,    60,    73,
     192,    80,    83,    84,   113,    87,   111,    88,    89,    91,
      94,    96,    99,   100,   102,   112,   114,   125,   126,   128,
     129,   132,   154,   134,   127,   136,   138,   141,   151,    93,
     148,   150,   155,   133,   163,   143,   137,   156,   160,   169,
     170,   142,   172,   171,   176,   174,   179,   175,   181,   177,
     188,   190,     0,   178,   191,   180,    28,   173,     0,     0,
       0,    72,     0,     0,     0,     0,     0,     0,   162,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    95,     0,     0,     0,   104
  };

  const short
  parser::yycheck_[] =
  {
      60,   107,     6,    63,     7,    62,     6,    67,     4,     4,
       6,     7,     7,     4,     5,    29,    10,    26,    27,    29,
       8,    26,    27,    30,    31,    32,    43,    35,    36,    46,
      44,    33,    34,    43,    13,    44,    44,    44,    43,     6,
       6,    43,    45,     9,    48,    49,     6,    47,    52,     9,
       6,    45,   109,   113,    45,    51,    51,    45,    30,    31,
      32,    35,    36,   169,     3,     6,     6,   127,     9,    43,
       6,    43,     6,   133,     6,    14,    15,    16,    17,    18,
      19,     0,   142,    33,    34,     0,   143,    14,    15,    16,
      17,    18,    19,     3,    44,    48,    49,     6,     6,    52,
       9,     9,     6,     6,     6,     9,     9,     4,     5,    10,
       6,   171,   172,   170,   174,   175,     7,   177,    13,     7,
     180,     4,     7,     7,    14,     7,     5,     8,     8,     7,
       7,     7,     7,     7,     7,     6,     6,     6,     6,     6,
       6,     6,   123,     6,    16,     6,     6,     6,   116,    48,
      44,    44,    44,    17,     6,    12,    18,    44,    44,     6,
       6,    19,    15,    14,     6,    15,     6,    16,    11,    17,
       8,     6,    -1,    18,     7,    19,    10,   153,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    44,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    51,    -1,    -1,    -1,    58
  };

  const signed char
  parser::yystos_[] =
  {
       0,     3,    14,    15,    16,    17,    18,    19,    54,    55,
      57,    58,    59,    60,    65,    73,    76,    80,    83,    13,
       6,     6,     6,     6,     6,     6,     0,     0,    59,     3,
       6,    56,    26,    27,    43,    61,    62,    43,    46,    66,
      29,    43,    84,    85,    30,    31,    32,    43,    74,    75,
      33,    34,    43,    78,    79,    35,    36,    43,    81,    82,
      13,     6,    10,    63,    64,     4,     5,    77,    86,    89,
       7,    44,    62,     7,     6,    48,    49,    52,    67,    68,
       4,    69,    70,     7,     7,    44,    85,     7,     8,     8,
      87,     7,    44,    75,     7,    87,     7,    44,    79,     7,
       7,    88,     7,    44,    82,    56,    86,     9,    56,     9,
      56,     5,     6,    14,     6,     6,     9,     4,     6,     7,
      51,    71,    72,     6,    47,     6,     6,    16,     6,     6,
       6,     9,     6,    17,     6,     6,     6,    18,     6,     6,
       9,     6,    19,    12,    45,    64,    45,    86,    44,    56,
      44,    68,     6,     9,    70,    44,    44,    56,     8,    45,
      44,    56,    44,     6,     7,    45,    44,    56,    86,     6,
       6,    14,    15,    72,    15,    16,     6,    17,    18,     6,
      19,    11,    64,    86,    56,    56,    56,    56,     8,    56,
       6,     7,    56
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    53,    54,    55,    55,    55,    56,    56,    57,    58,
      58,    59,    59,    59,    59,    59,    59,    60,    60,    61,
      61,    62,    62,    63,    63,    63,    64,    65,    65,    66,
      66,    67,    67,    68,    68,    68,    69,    69,    70,    70,
      71,    71,    72,    72,    72,    73,    73,    74,    74,    75,
      75,    75,    76,    76,    77,    77,    77,    78,    78,    79,
      79,    80,    80,    81,    81,    82,    82,    83,    83,    84,
      84,    85,    86,    86,    87,    87,    87,    88,    88,    88,
      89,    89
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     2,     0,     2,     1,     1,     2,     1,     3,
       4,     1,     1,     1,     1,     1,     1,     8,     6,     1,
       2,     3,     3,     1,     3,     5,     5,     8,     8,     2,
       3,     1,     3,     1,     1,     1,     1,     3,     2,     3,
       1,     3,     1,     1,     1,     8,     6,     1,     2,     3,
       3,     3,     8,     6,     1,     3,     5,     1,     2,     3,
       3,     8,     6,     1,     2,     3,     3,     8,     6,     1,
       2,     3,     1,     1,     1,     3,     5,     1,     3,     5,
       1,     2
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
  "section_ctype", "definitions_ctype", "single_definition_ctype",
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
#endif


#if LOCALE_PARSERDEBUG
  const short
  parser::yyrline_[] =
  {
       0,    76,    76,    79,    80,    81,    85,    86,    90,    93,
      94,    98,    99,   100,   101,   102,   103,   107,   108,   112,
     113,   117,   118,   122,   123,   124,   128,   131,   132,   136,
     137,   141,   142,   146,   147,   148,   152,   153,   157,   158,
     162,   163,   167,   168,   169,   173,   174,   178,   179,   183,
     184,   185,   189,   190,   194,   195,   196,   200,   201,   205,
     206,   210,   211,   215,   216,   220,   221,   225,   226,   230,
     231,   235,   238,   239,   243,   244,   245,   249,   250,   251,
     255,   256
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
#line 1121 "src/bison_locale.cpp"

#line 259 "src/bison_locale.ypp"


namespace locale_parser {
    parser::symbol_type locale_parserlex(){
        auto l = locale::get_lexer();
        return l->get_token();
    }

    void parser::error(const std::string& m){
        std::cerr << m << std::endl;
    }
}
