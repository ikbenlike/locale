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
#define yylex   charmap_parserlex

// First part of user prologue.
#line 1 "src/bison_charmap.ypp"

#include <string>
#include <cstdint>
#include "util.hpp"
#include "charmap.hpp"

#line 50 "src/bison_charmap.cpp"


#include "bison_charmap.hpp"


// Unqualified %code blocks.
#line 32 "src/bison_charmap.ypp"

    namespace charmap_parser {
        parser::symbol_type charmap_parserlex();
    }

#line 63 "src/bison_charmap.cpp"


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
#if CHARMAP_PARSERDEBUG

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

#else // !CHARMAP_PARSERDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !CHARMAP_PARSERDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace charmap_parser {
#line 136 "src/bison_charmap.cpp"

  /// Build a parser object.
  parser::parser ()
#if CHARMAP_PARSERDEBUG
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
      case symbol_kind::S_TEXT: // TEXT
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CHARACTER_HEX: // CHARACTER_HEX
      case symbol_kind::S_CHARACTER_DEC: // CHARACTER_DEC
      case symbol_kind::S_CHARACTER_OCT: // CHARACTER_OCT
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
      case symbol_kind::S_CONFIG: // CONFIG
      case symbol_kind::S_CHARACTER_NAME: // CHARACTER_NAME
      case symbol_kind::S_TEXT: // TEXT
        value.move< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CHARACTER_HEX: // CHARACTER_HEX
      case symbol_kind::S_CHARACTER_DEC: // CHARACTER_DEC
      case symbol_kind::S_CHARACTER_OCT: // CHARACTER_OCT
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
      case symbol_kind::S_CONFIG: // CONFIG
      case symbol_kind::S_CHARACTER_NAME: // CHARACTER_NAME
      case symbol_kind::S_TEXT: // TEXT
        value.copy< std::string > (that.value);
        break;

      case symbol_kind::S_CHARACTER_HEX: // CHARACTER_HEX
      case symbol_kind::S_CHARACTER_DEC: // CHARACTER_DEC
      case symbol_kind::S_CHARACTER_OCT: // CHARACTER_OCT
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
      case symbol_kind::S_CONFIG: // CONFIG
      case symbol_kind::S_CHARACTER_NAME: // CHARACTER_NAME
      case symbol_kind::S_TEXT: // TEXT
        value.move< std::string > (that.value);
        break;

      case symbol_kind::S_CHARACTER_HEX: // CHARACTER_HEX
      case symbol_kind::S_CHARACTER_DEC: // CHARACTER_DEC
      case symbol_kind::S_CHARACTER_OCT: // CHARACTER_OCT
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

#if CHARMAP_PARSERDEBUG
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

#if CHARMAP_PARSERDEBUG
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
#endif // CHARMAP_PARSERDEBUG

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
      case symbol_kind::S_TEXT: // TEXT
        yylhs.value.emplace< std::string > ();
        break;

      case symbol_kind::S_CHARACTER_HEX: // CHARACTER_HEX
      case symbol_kind::S_CHARACTER_DEC: // CHARACTER_DEC
      case symbol_kind::S_CHARACTER_OCT: // CHARACTER_OCT
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
  case 2: // file: charmap_file $end
#line 40 "src/bison_charmap.ypp"
                          { YYACCEPT; }
#line 582 "src/bison_charmap.cpp"
    break;

  case 11: // configs: CONFIG TEXT EOL
#line 57 "src/bison_charmap.ypp"
                   { charmap::set_config(yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ()); }
#line 588 "src/bison_charmap.cpp"
    break;

  case 12: // configs: CONFIG NUMBER EOL
#line 58 "src/bison_charmap.ypp"
                     { charmap::set_config(yystack_[2].value.as < std::string > (), yystack_[1].value.as < uint8_t > ()); }
#line 594 "src/bison_charmap.cpp"
    break;

  case 13: // configs: configs CONFIG TEXT EOL
#line 59 "src/bison_charmap.ypp"
                           { charmap::set_config(yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > ()); }
#line 600 "src/bison_charmap.cpp"
    break;

  case 14: // configs: configs CONFIG NUMBER EOL
#line 60 "src/bison_charmap.ypp"
                             { charmap::set_config(yystack_[2].value.as < std::string > (), yystack_[1].value.as < uint8_t > ()); }
#line 606 "src/bison_charmap.cpp"
    break;


#line 610 "src/bison_charmap.cpp"

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

#if CHARMAP_PARSERDEBUG || 0
  const char *
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytname_[yysymbol];
  }
#endif // #if CHARMAP_PARSERDEBUG || 0









  const signed char parser::yypact_ninf_ = -52;

  const signed char parser::yytable_ninf_ = -1;

  const signed char
  parser::yypact_[] =
  {
      62,    -5,     0,    15,    19,    27,    49,    38,    60,    65,
      57,    63,    71,   -52,   -52,    38,     8,    58,    66,   -52,
     -52,   -52,   -52,   -52,    68,    78,    45,    79,    77,    80,
      74,    81,   -52,    66,    82,    83,    84,    85,   -52,    72,
      72,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,    -2,   -52,   -52,   -52,   -52,    86,   -52,   -52,   -52,
     -52,   -52,     9,    64,   -52,    45,    45,   -52,   -52,   -52,
      87,    90,    73,   -52,    17,    31,   -52,    89,    91,   -52,
     -52,    92,   -52,   -52
  };

  const signed char
  parser::yydefact_[] =
  {
       3,     0,     0,     0,     0,     0,    10,     4,     0,     0,
       0,     0,     0,     1,     2,     5,     0,     0,     6,    12,
      11,    24,    26,    28,     0,     0,     0,    21,    22,    23,
       0,     0,    16,     7,     0,     0,     0,     0,     8,     0,
       0,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     0,    36,    25,    27,    29,     0,    17,     9,    14,
      13,    30,     0,     0,    32,     0,     0,    18,    37,    15,
       0,     0,     0,    33,     0,     0,    34,     0,     0,    19,
      20,     0,    31,    35
  };

  const signed char
  parser::yypgoto_[] =
  {
     -52,   -52,   -52,   -52,   -52,    93,   -52,    75,    -3,   -52,
     -52,   -52,    88,    69,   -52,    36,   -15,   -51
  };

  const signed char
  parser::yydefgoto_[] =
  {
       0,     3,     4,     5,     6,     7,    11,    12,    26,    27,
      28,    29,    18,    38,    63,    64,    51,    52
  };

  const signed char
  parser::yytable_[] =
  {
      68,    41,    42,     8,    10,     9,    43,    67,    44,    45,
      46,    47,    48,    49,    50,    13,    34,    70,    35,    14,
      41,    42,    71,    68,    68,    43,    79,    44,    45,    46,
      47,    48,    49,    50,    41,    42,    65,    66,     2,    43,
      80,    44,    45,    46,    47,    48,    49,    50,    41,    42,
      74,    75,    16,    43,    17,    44,    45,    46,    47,    48,
      49,    50,    21,    22,    23,     1,    36,    10,    62,    19,
      24,    25,    39,     2,    20,    30,    72,    21,    22,    23,
      32,    37,    40,    54,    53,    56,    31,    55,    78,    62,
      57,    59,    60,    61,    77,    69,    76,    81,    15,    73,
      82,    83,    58,    33
  };

  const signed char
  parser::yycheck_[] =
  {
      51,     3,     4,     8,     4,    10,     8,     9,    10,    11,
      12,    13,    14,    15,    16,     0,     8,     8,    10,     0,
       3,     4,    13,    74,    75,     8,     9,    10,    11,    12,
      13,    14,    15,    16,     3,     4,    39,    40,    11,     8,
       9,    10,    11,    12,    13,    14,    15,    16,     3,     4,
      65,    66,     3,     8,    16,    10,    11,    12,    13,    14,
      15,    16,     5,     6,     7,     3,     8,     4,     4,     9,
      13,    14,     4,    11,     9,    12,    12,     5,     6,     7,
       9,    15,     4,     6,     5,    11,    11,     7,    15,     4,
       9,     9,     9,     9,     4,     9,     9,     8,     5,    63,
       9,     9,    33,    15
  };

  const signed char
  parser::yystos_[] =
  {
       0,     3,    11,    18,    19,    20,    21,    22,     8,    10,
       4,    23,    24,     0,     0,    22,     3,    16,    29,     9,
       9,     5,     6,     7,    13,    14,    25,    26,    27,    28,
      12,    24,     9,    29,     8,    10,     8,    15,    30,     4,
       4,     3,     4,     8,    10,    11,    12,    13,    14,    15,
      16,    33,    34,     5,     6,     7,    11,     9,    30,     9,
       9,     9,     4,    31,    32,    25,    25,     9,    34,     9,
       8,    13,    12,    32,    33,    33,     9,     4,    15,     9,
       9,     8,     9,     9
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    17,    18,    19,    19,    19,    19,    19,    19,    19,
      20,    21,    21,    21,    21,    22,    23,    23,    24,    24,
      24,    25,    25,    25,    26,    26,    27,    27,    28,    28,
      29,    30,    31,    31,    32,    32,    33,    33,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     2,     0,     1,     2,     2,     3,     3,     4,
       1,     3,     3,     4,     4,     5,     2,     3,     4,     6,
       6,     1,     1,     1,     1,     2,     1,     2,     1,     2,
       3,     5,     1,     2,     3,     5,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
  };


#if CHARMAP_PARSERDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "CONFIG",
  "CHARACTER_NAME", "CHARACTER_HEX", "CHARACTER_DEC", "CHARACTER_OCT",
  "NUMBER", "EOL", "TEXT", "CHARMAP", "END", "RANGE", "RANGE_GNU", "WIDTH",
  "WIDTH_DEFAULT", "$accept", "file", "charmap_file", "prelude", "configs",
  "charmap", "definitions", "definition", "value_list", "hex_list",
  "dec_list", "oct_list", "default_width", "width_section",
  "width_definitions", "width_definition", "anything", "thing", YY_NULLPTR
  };
#endif


#if CHARMAP_PARSERDEBUG
  const unsigned char
  parser::yyrline_[] =
  {
       0,    40,    40,    43,    44,    45,    46,    47,    48,    49,
      53,    57,    58,    59,    60,    64,    68,    69,    73,    74,
      75,    79,    80,    81,    85,    86,    90,    91,    95,    96,
     100,   103,   106,   107,   111,   112,   116,   117,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130
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
#endif // CHARMAP_PARSERDEBUG


} // charmap_parser
#line 969 "src/bison_charmap.cpp"

#line 133 "src/bison_charmap.ypp"


namespace charmap_parser {
    parser::symbol_type charmap_parserlex(){
        auto l = charmap::get_lexer();
        return l->get_token();
    }

    void parser::error(const std::string& m){
        std::cerr << m << std::endl;
    }
}
