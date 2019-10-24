// A Bison parser, made by GNU Bison 3.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2019 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

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

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.





#include "tpparser.h"


// Unqualified %code blocks.
#line 22 "tpparser.yy"

  using namespace std;
  using namespace AST;
  #include "bparser.h"
  namespace yy
  {
    // Return the next token.
    auto yylex ( BParser& prs ) -> parser::symbol_type
    {
        prs.lexer_.get( prs.token_ );
        yy::position pos( nullptr, prs.token_.loc.line, prs.token_.loc.col );
        parser::location_type loc( pos, pos );

        switch ( prs.token_.name ) {
        case LNG::TN::t_assign:     return parser::make_t_assign(loc);
        case LNG::TN::t_divide:     return parser::make_t_divide(loc);
        case LNG::TN::t_eq:         return parser::make_t_eq(loc);
        case LNG::TN::t_gt:         return parser::make_t_gt(loc);
        case LNG::TN::t_gteq:       return parser::make_t_gteq(loc);
        case LNG::TN::t_lt:         return parser::make_t_lt(loc);
        case LNG::TN::t_lteq:       return parser::make_t_lteq(loc);
        case LNG::TN::t_minus:      return parser::make_t_minus(loc);
        case LNG::TN::t_multiply:   return parser::make_t_multiply(loc);
        case LNG::TN::t_neq:        return parser::make_t_neq(loc);
        case LNG::TN::t_plus:       return parser::make_t_plus(loc);

        case LNG::TN::t_colon:          return parser::make_t_colon(loc);
        case LNG::TN::t_comma:          return parser::make_t_comma(loc);
        case LNG::TN::t_dot:            return parser::make_t_dot(loc);
        case LNG::TN::t_lbracket:       return parser::make_t_lbracket(loc);
        case LNG::TN::t_lparenthesis:   return parser::make_t_lparenthesis(loc);
        case LNG::TN::t_rbracket:       return parser::make_t_rbracket(loc);
        case LNG::TN::t_rparenthesis:   return parser::make_t_rparenthesis(loc);
        case LNG::TN::t_subrange:       return parser::make_t_subrange(loc);
        case LNG::TN::t_semicolon:      return parser::make_t_semicolon(loc);

        case LNG::TN::t_and:        return parser::make_t_and(loc);
        case LNG::TN::t_array:      return parser::make_t_array(loc);
        case LNG::TN::t_begin:      return parser::make_t_begin(loc);
        case LNG::TN::t_boolean:    return parser::make_t_boolean(loc);
        case LNG::TN::t_div:        return parser::make_t_div(loc);
        case LNG::TN::t_do:         return parser::make_t_do(loc);
        case LNG::TN::t_else:       return parser::make_t_else(loc);
        case LNG::TN::t_end:        return parser::make_t_end(loc);
        case LNG::TN::t_false:      return parser::make_t_false(loc);
        case LNG::TN::t_function:   return parser::make_t_function(loc);
        case LNG::TN::t_if:         return parser::make_t_if(loc);
        case LNG::TN::t_integer:    return parser::make_t_integer(loc);
        case LNG::TN::t_not:        return parser::make_t_not(loc);
        case LNG::TN::t_of:         return parser::make_t_of(loc);
        case LNG::TN::t_or:         return parser::make_t_or(loc);
        case LNG::TN::t_procedure:  return parser::make_t_procedure(loc);
        case LNG::TN::t_program:    return parser::make_t_program(loc);
        case LNG::TN::t_read:       return parser::make_t_read(loc);
        case LNG::TN::t_readln:     return parser::make_t_readln(loc);
        case LNG::TN::t_real:       return parser::make_t_real(loc);
        case LNG::TN::t_then:       return parser::make_t_then(loc);
        case LNG::TN::t_true:       return parser::make_t_true(loc);
        case LNG::TN::t_var:        return parser::make_t_var(loc);
        case LNG::TN::t_while:      return parser::make_t_while(loc);
        case LNG::TN::t_write:      return parser::make_t_write(loc);
        case LNG::TN::t_writeln:    return parser::make_t_writeln(loc);

        case LNG::TN::t_identifier: return parser::make_t_identifier(prs.token_.text, loc);

        case LNG::TN::t_integer_l:  return parser::make_t_integer_l(prs.token_.text, loc);
        case LNG::TN::t_real_l:     return parser::make_t_real_l(prs.token_.text, loc);
        case LNG::TN::t_string_l:   return parser::make_t_string_l(prs.token_.text, loc);

        case LNG::TN::t_eoi:        return parser::make_t_eoi(loc);
        default:                    return parser::make_t_unknown(loc);
        }
    }
  }

#line 121 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"


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

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

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
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 215 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"


  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  parser::parser (BParser& prs_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      prs (prs_yyarg)
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/



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

  parser::symbol_number_type
  parser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 85: // assignment_statement
        value.YY_MOVE_OR_COPY< AST::AssignmentStmtNode* > (YY_MOVE (that.value));
        break;

      case 56: // main_block
        value.YY_MOVE_OR_COPY< AST::BlockNode* > (YY_MOVE (that.value));
        break;

      case 71: // callable_declarations
        value.YY_MOVE_OR_COPY< AST::CallableDeclarationsNode* > (YY_MOVE (that.value));
        break;

      case 64: // compound_statement
        value.YY_MOVE_OR_COPY< AST::CompoundStmtNode* > (YY_MOVE (that.value));
        break;

      case 84: // empty_statement
        value.YY_MOVE_OR_COPY< AST::EmptyStmtNode* > (YY_MOVE (that.value));
        break;

      case 87: // expression
        value.YY_MOVE_OR_COPY< AST::ExprNode* > (YY_MOVE (that.value));
        break;

      case 67: // function_declaration
        value.YY_MOVE_OR_COPY< AST::FunctionDeclNode* > (YY_MOVE (that.value));
        break;

      case 80: // if_statement
        value.YY_MOVE_OR_COPY< AST::IfStmtNode* > (YY_MOVE (that.value));
        break;

      case 77: // optional_arguments
        value.YY_MOVE_OR_COPY< AST::OptionalArgumentsNode* > (YY_MOVE (that.value));
        break;

      case 76: // procedure_statement
        value.YY_MOVE_OR_COPY< AST::ProcedureCallStmtNode* > (YY_MOVE (that.value));
        break;

      case 66: // procedure_declarations
        value.YY_MOVE_OR_COPY< AST::ProcedureDeclNode* > (YY_MOVE (that.value));
        break;

      case 74: // read_statement
        value.YY_MOVE_OR_COPY< AST::ReadStmtNode* > (YY_MOVE (that.value));
        break;

      case 79: // simple_statement
      case 82: // structured_statement
      case 83: // statement
        value.YY_MOVE_OR_COPY< AST::StmtNode* > (YY_MOVE (that.value));
        break;

      case 59: // variable_declaration
      case 69: // parameter_list
        value.YY_MOVE_OR_COPY< AST::VariableDeclNode* > (YY_MOVE (that.value));
        break;

      case 57: // variable_declarations
      case 68: // opt_params
        value.YY_MOVE_OR_COPY< AST::VariableDeclarationsNode* > (YY_MOVE (that.value));
        break;

      case 73: // input_variable
      case 86: // variable_lvalue
        value.YY_MOVE_OR_COPY< AST::VariableNode* > (YY_MOVE (that.value));
        break;

      case 81: // while_statement
        value.YY_MOVE_OR_COPY< AST::WhileStmtNode* > (YY_MOVE (that.value));
        break;

      case 75: // write_statement
        value.YY_MOVE_OR_COPY< AST::WriteStmtNode* > (YY_MOVE (that.value));
        break;

      case 61: // type
      case 63: // array_type
        value.YY_MOVE_OR_COPY< LNG::DataType > (YY_MOVE (that.value));
        break;

      case 62: // simple_type
        value.YY_MOVE_OR_COPY< LNG::SimpleDataType > (YY_MOVE (that.value));
        break;

      case 72: // callable_declarations_list
        value.YY_MOVE_OR_COPY< std::list<AST::CallableDeclNode*> > (YY_MOVE (that.value));
        break;

      case 78: // arguments_list
        value.YY_MOVE_OR_COPY< std::list<AST::ExprNode*> > (YY_MOVE (that.value));
        break;

      case 65: // list_statement
        value.YY_MOVE_OR_COPY< std::list<AST::StmtNode*> > (YY_MOVE (that.value));
        break;

      case 58: // list_variable_declaration
      case 70: // list_parameterList_declaration
        value.YY_MOVE_OR_COPY< std::list<AST::VariableDeclNode*> > (YY_MOVE (that.value));
        break;

      case 60: // list_identifier
        value.YY_MOVE_OR_COPY< std::list<std::string> > (YY_MOVE (that.value));
        break;

      case 49: // t_identifier
      case 50: // t_integer_l
      case 51: // t_real_l
      case 52: // t_string_l
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
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
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 85: // assignment_statement
        value.move< AST::AssignmentStmtNode* > (YY_MOVE (that.value));
        break;

      case 56: // main_block
        value.move< AST::BlockNode* > (YY_MOVE (that.value));
        break;

      case 71: // callable_declarations
        value.move< AST::CallableDeclarationsNode* > (YY_MOVE (that.value));
        break;

      case 64: // compound_statement
        value.move< AST::CompoundStmtNode* > (YY_MOVE (that.value));
        break;

      case 84: // empty_statement
        value.move< AST::EmptyStmtNode* > (YY_MOVE (that.value));
        break;

      case 87: // expression
        value.move< AST::ExprNode* > (YY_MOVE (that.value));
        break;

      case 67: // function_declaration
        value.move< AST::FunctionDeclNode* > (YY_MOVE (that.value));
        break;

      case 80: // if_statement
        value.move< AST::IfStmtNode* > (YY_MOVE (that.value));
        break;

      case 77: // optional_arguments
        value.move< AST::OptionalArgumentsNode* > (YY_MOVE (that.value));
        break;

      case 76: // procedure_statement
        value.move< AST::ProcedureCallStmtNode* > (YY_MOVE (that.value));
        break;

      case 66: // procedure_declarations
        value.move< AST::ProcedureDeclNode* > (YY_MOVE (that.value));
        break;

      case 74: // read_statement
        value.move< AST::ReadStmtNode* > (YY_MOVE (that.value));
        break;

      case 79: // simple_statement
      case 82: // structured_statement
      case 83: // statement
        value.move< AST::StmtNode* > (YY_MOVE (that.value));
        break;

      case 59: // variable_declaration
      case 69: // parameter_list
        value.move< AST::VariableDeclNode* > (YY_MOVE (that.value));
        break;

      case 57: // variable_declarations
      case 68: // opt_params
        value.move< AST::VariableDeclarationsNode* > (YY_MOVE (that.value));
        break;

      case 73: // input_variable
      case 86: // variable_lvalue
        value.move< AST::VariableNode* > (YY_MOVE (that.value));
        break;

      case 81: // while_statement
        value.move< AST::WhileStmtNode* > (YY_MOVE (that.value));
        break;

      case 75: // write_statement
        value.move< AST::WriteStmtNode* > (YY_MOVE (that.value));
        break;

      case 61: // type
      case 63: // array_type
        value.move< LNG::DataType > (YY_MOVE (that.value));
        break;

      case 62: // simple_type
        value.move< LNG::SimpleDataType > (YY_MOVE (that.value));
        break;

      case 72: // callable_declarations_list
        value.move< std::list<AST::CallableDeclNode*> > (YY_MOVE (that.value));
        break;

      case 78: // arguments_list
        value.move< std::list<AST::ExprNode*> > (YY_MOVE (that.value));
        break;

      case 65: // list_statement
        value.move< std::list<AST::StmtNode*> > (YY_MOVE (that.value));
        break;

      case 58: // list_variable_declaration
      case 70: // list_parameterList_declaration
        value.move< std::list<AST::VariableDeclNode*> > (YY_MOVE (that.value));
        break;

      case 60: // list_identifier
        value.move< std::list<std::string> > (YY_MOVE (that.value));
        break;

      case 49: // t_identifier
      case 50: // t_integer_l
      case 51: // t_real_l
      case 52: // t_string_l
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 85: // assignment_statement
        value.move< AST::AssignmentStmtNode* > (that.value);
        break;

      case 56: // main_block
        value.move< AST::BlockNode* > (that.value);
        break;

      case 71: // callable_declarations
        value.move< AST::CallableDeclarationsNode* > (that.value);
        break;

      case 64: // compound_statement
        value.move< AST::CompoundStmtNode* > (that.value);
        break;

      case 84: // empty_statement
        value.move< AST::EmptyStmtNode* > (that.value);
        break;

      case 87: // expression
        value.move< AST::ExprNode* > (that.value);
        break;

      case 67: // function_declaration
        value.move< AST::FunctionDeclNode* > (that.value);
        break;

      case 80: // if_statement
        value.move< AST::IfStmtNode* > (that.value);
        break;

      case 77: // optional_arguments
        value.move< AST::OptionalArgumentsNode* > (that.value);
        break;

      case 76: // procedure_statement
        value.move< AST::ProcedureCallStmtNode* > (that.value);
        break;

      case 66: // procedure_declarations
        value.move< AST::ProcedureDeclNode* > (that.value);
        break;

      case 74: // read_statement
        value.move< AST::ReadStmtNode* > (that.value);
        break;

      case 79: // simple_statement
      case 82: // structured_statement
      case 83: // statement
        value.move< AST::StmtNode* > (that.value);
        break;

      case 59: // variable_declaration
      case 69: // parameter_list
        value.move< AST::VariableDeclNode* > (that.value);
        break;

      case 57: // variable_declarations
      case 68: // opt_params
        value.move< AST::VariableDeclarationsNode* > (that.value);
        break;

      case 73: // input_variable
      case 86: // variable_lvalue
        value.move< AST::VariableNode* > (that.value);
        break;

      case 81: // while_statement
        value.move< AST::WhileStmtNode* > (that.value);
        break;

      case 75: // write_statement
        value.move< AST::WriteStmtNode* > (that.value);
        break;

      case 61: // type
      case 63: // array_type
        value.move< LNG::DataType > (that.value);
        break;

      case 62: // simple_type
        value.move< LNG::SimpleDataType > (that.value);
        break;

      case 72: // callable_declarations_list
        value.move< std::list<AST::CallableDeclNode*> > (that.value);
        break;

      case 78: // arguments_list
        value.move< std::list<AST::ExprNode*> > (that.value);
        break;

      case 65: // list_statement
        value.move< std::list<AST::StmtNode*> > (that.value);
        break;

      case 58: // list_variable_declaration
      case 70: // list_parameterList_declaration
        value.move< std::list<AST::VariableDeclNode*> > (that.value);
        break;

      case 60: // list_identifier
        value.move< std::list<std::string> > (that.value);
        break;

      case 49: // t_identifier
      case 50: // t_integer_l
      case 51: // t_real_l
      case 52: // t_string_l
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
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

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
#if defined __GNUC__ && ! defined __clang__ && ! defined __ICC && __GNUC__ * 100 + __GNUC_MINOR__ <= 408
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
#endif
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
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
  parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
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
#endif // YYDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue)
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
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

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
    YYCDEBUG << "Entering state " << yystack_[0].state << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (prs));
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

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

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
    yypush_ ("Shifting", yyn, YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
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
      case 85: // assignment_statement
        yylhs.value.emplace< AST::AssignmentStmtNode* > ();
        break;

      case 56: // main_block
        yylhs.value.emplace< AST::BlockNode* > ();
        break;

      case 71: // callable_declarations
        yylhs.value.emplace< AST::CallableDeclarationsNode* > ();
        break;

      case 64: // compound_statement
        yylhs.value.emplace< AST::CompoundStmtNode* > ();
        break;

      case 84: // empty_statement
        yylhs.value.emplace< AST::EmptyStmtNode* > ();
        break;

      case 87: // expression
        yylhs.value.emplace< AST::ExprNode* > ();
        break;

      case 67: // function_declaration
        yylhs.value.emplace< AST::FunctionDeclNode* > ();
        break;

      case 80: // if_statement
        yylhs.value.emplace< AST::IfStmtNode* > ();
        break;

      case 77: // optional_arguments
        yylhs.value.emplace< AST::OptionalArgumentsNode* > ();
        break;

      case 76: // procedure_statement
        yylhs.value.emplace< AST::ProcedureCallStmtNode* > ();
        break;

      case 66: // procedure_declarations
        yylhs.value.emplace< AST::ProcedureDeclNode* > ();
        break;

      case 74: // read_statement
        yylhs.value.emplace< AST::ReadStmtNode* > ();
        break;

      case 79: // simple_statement
      case 82: // structured_statement
      case 83: // statement
        yylhs.value.emplace< AST::StmtNode* > ();
        break;

      case 59: // variable_declaration
      case 69: // parameter_list
        yylhs.value.emplace< AST::VariableDeclNode* > ();
        break;

      case 57: // variable_declarations
      case 68: // opt_params
        yylhs.value.emplace< AST::VariableDeclarationsNode* > ();
        break;

      case 73: // input_variable
      case 86: // variable_lvalue
        yylhs.value.emplace< AST::VariableNode* > ();
        break;

      case 81: // while_statement
        yylhs.value.emplace< AST::WhileStmtNode* > ();
        break;

      case 75: // write_statement
        yylhs.value.emplace< AST::WriteStmtNode* > ();
        break;

      case 61: // type
      case 63: // array_type
        yylhs.value.emplace< LNG::DataType > ();
        break;

      case 62: // simple_type
        yylhs.value.emplace< LNG::SimpleDataType > ();
        break;

      case 72: // callable_declarations_list
        yylhs.value.emplace< std::list<AST::CallableDeclNode*> > ();
        break;

      case 78: // arguments_list
        yylhs.value.emplace< std::list<AST::ExprNode*> > ();
        break;

      case 65: // list_statement
        yylhs.value.emplace< std::list<AST::StmtNode*> > ();
        break;

      case 58: // list_variable_declaration
      case 70: // list_parameterList_declaration
        yylhs.value.emplace< std::list<AST::VariableDeclNode*> > ();
        break;

      case 60: // list_identifier
        yylhs.value.emplace< std::list<std::string> > ();
        break;

      case 49: // t_identifier
      case 50: // t_integer_l
      case 51: // t_real_l
      case 52: // t_string_l
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2:
#line 206 "tpparser.yy"
    {
    prs.ast_ = new AST::ProgramNode( yystack_[3].value.as < std::string > (), yystack_[1].value.as < AST::BlockNode* > () );
    prs.set_AST( new AST::ProgramNode( yystack_[3].value.as < std::string > (), yystack_[1].value.as < AST::BlockNode* > () ) );
    }
#line 1085 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 3:
#line 216 "tpparser.yy"
    { yylhs.value.as < AST::BlockNode* > () = new AST::BlockNode( yystack_[2].value.as < AST::VariableDeclarationsNode* > (), yystack_[1].value.as < AST::CallableDeclarationsNode* > (), yystack_[0].value.as < AST::CompoundStmtNode* > () ); }
#line 1091 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 4:
#line 221 "tpparser.yy"
    { yylhs.value.as < AST::VariableDeclarationsNode* > () = new AST::VariableDeclarationsNode( yystack_[0].value.as < std::list<AST::VariableDeclNode*> > () ); }
#line 1097 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 5:
#line 224 "tpparser.yy"
    { yylhs.value.as < AST::VariableDeclarationsNode* > () = nullptr; }
#line 1103 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 6:
#line 229 "tpparser.yy"
    { yystack_[2].value.as < std::list<AST::VariableDeclNode*> > ().push_back( yystack_[1].value.as < AST::VariableDeclNode* > () ); yylhs.value.as < std::list<AST::VariableDeclNode*> > () = yystack_[2].value.as < std::list<AST::VariableDeclNode*> > (); }
#line 1109 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 7:
#line 232 "tpparser.yy"
    { std::list<AST::VariableDeclNode*> lst; lst.push_back( yystack_[1].value.as < AST::VariableDeclNode* > () ); yylhs.value.as < std::list<AST::VariableDeclNode*> > () = lst; }
#line 1115 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 8:
#line 237 "tpparser.yy"
    {
    LNG::DataType newType = LNG::DataType(yystack_[0].value.as < LNG::DataType > ());
    for(auto i : yystack_[2].value.as < std::list<std::string> > ()){
        prs.symbol_table_.add_var(prs.scope_, i, newType);
    }
    yylhs.value.as < AST::VariableDeclNode* > () = new AST::VariableDeclNode( yystack_[2].value.as < std::list<std::string> > (), yystack_[0].value.as < LNG::DataType > () );
    }
#line 1127 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 9:
#line 248 "tpparser.yy"
    {
    yystack_[2].value.as < std::list<std::string> > ().push_back( yystack_[0].value.as < std::string > () ); yylhs.value.as < std::list<std::string> > () = yystack_[2].value.as < std::list<std::string> > ();
    }
#line 1135 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 10:
#line 253 "tpparser.yy"
    { std::list<std::string> lst; lst.push_back( yystack_[0].value.as < std::string > () ); yylhs.value.as < std::list<std::string> > () = lst; }
#line 1141 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 11:
#line 257 "tpparser.yy"
    { yylhs.value.as < LNG::DataType > () = LNG::DataType(yystack_[0].value.as < LNG::SimpleDataType > ()); }
#line 1147 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 12:
#line 259 "tpparser.yy"
    { yylhs.value.as < LNG::DataType > () = yystack_[0].value.as < LNG::DataType > (); }
#line 1153 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 13:
#line 263 "tpparser.yy"
    { yylhs.value.as < LNG::SimpleDataType > () = LNG::SimpleDataType::tInteger; }
#line 1159 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 14:
#line 265 "tpparser.yy"
    { yylhs.value.as < LNG::SimpleDataType > () = LNG::SimpleDataType::tBoolean; }
#line 1165 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 15:
#line 267 "tpparser.yy"
    { yylhs.value.as < LNG::SimpleDataType > () = LNG::SimpleDataType::tReal; }
#line 1171 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 16:
#line 279 "tpparser.yy"
    { yylhs.value.as < LNG::DataType > () = yylhs.value.as < LNG::DataType > () = LNG::DataType( yystack_[0].value.as < LNG::SimpleDataType > (), std::stoi(yystack_[5].value.as < std::string > ()), std::stoi(yystack_[3].value.as < std::string > ()) ); }
#line 1177 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 17:
#line 286 "tpparser.yy"
    { yylhs.value.as < AST::CompoundStmtNode* > () = new AST::CompoundStmtNode(yystack_[1].value.as < std::list<AST::StmtNode*> > ()); }
#line 1183 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 18:
#line 291 "tpparser.yy"
    { yystack_[2].value.as < std::list<AST::StmtNode*> > ().push_back( yystack_[0].value.as < AST::StmtNode* > () ); yylhs.value.as < std::list<AST::StmtNode*> > () = yystack_[2].value.as < std::list<AST::StmtNode*> > (); }
#line 1189 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 19:
#line 294 "tpparser.yy"
    { std::list<AST::StmtNode*> lst; lst.push_back( yystack_[0].value.as < AST::StmtNode* > () ); yylhs.value.as < std::list<AST::StmtNode*> > () = lst; }
#line 1195 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 20:
#line 312 "tpparser.yy"
    {
    prs.scope_ = yystack_[3].value.as < std::string > ();
    AST::ProcedureDeclNode* node = new AST::ProcedureDeclNode( yystack_[3].value.as < std::string > (), yystack_[2].value.as < AST::VariableDeclarationsNode* > (), yystack_[0].value.as < AST::BlockNode* > ());
    std::string signature = "";
    for(auto i : yystack_[2].value.as < AST::VariableDeclarationsNode* > ()->get_declarations()){
        int count = 0;
        for(auto j : i->get_identifiers()){
            count++;
        }
        for(int k = 0; k < count; k++){
            signature += i->get_data_type().str() +  ",";
        }
    }
    signature = signature.substr(0, signature.length()-1);
    prs.symbol_table_.add_procedure(yystack_[3].value.as < std::string > (), signature);
    prs.scope_ = "";
    yylhs.value.as < AST::ProcedureDeclNode* > () = node;
    }
#line 1218 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 21:
#line 339 "tpparser.yy"
    {
    prs.scope_ = yystack_[5].value.as < std::string > ();
    LNG::DataType newType = LNG::DataType(yystack_[2].value.as < LNG::SimpleDataType > ());
    AST::FunctionDeclNode* node = new AST::FunctionDeclNode( yystack_[5].value.as < std::string > (), yystack_[4].value.as < AST::VariableDeclarationsNode* > (), yystack_[0].value.as < AST::BlockNode* > (), newType);
    prs.scope_  = "";
    yylhs.value.as < AST::FunctionDeclNode* > () = node;
    }
#line 1230 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 22:
#line 350 "tpparser.yy"
    {yylhs.value.as < AST::VariableDeclarationsNode* > () = new AST::VariableDeclarationsNode(yystack_[1].value.as < std::list<AST::VariableDeclNode*> > ());}
#line 1236 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 23:
#line 355 "tpparser.yy"
    {
    LNG::DataType newType = LNG::DataType(yystack_[0].value.as < LNG::SimpleDataType > ());
    yylhs.value.as < AST::VariableDeclNode* > () = new AST::VariableDeclNode(yystack_[2].value.as < std::list<std::string> > (), newType);
    }
#line 1245 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 24:
#line 363 "tpparser.yy"
    {yystack_[2].value.as < std::list<AST::VariableDeclNode*> > ().push_back(yystack_[0].value.as < AST::VariableDeclNode* > ()); yylhs.value.as < std::list<AST::VariableDeclNode*> > () = yystack_[2].value.as < std::list<AST::VariableDeclNode*> > ();}
#line 1251 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 25:
#line 366 "tpparser.yy"
    {
    std::list<AST::VariableDeclNode*> lst;
    yylhs.value.as < std::list<AST::VariableDeclNode*> > () = lst;
    }
#line 1260 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 26:
#line 372 "tpparser.yy"
    {std::list<AST::VariableDeclNode*> lst; lst.push_back(yystack_[0].value.as < AST::VariableDeclNode* > ()); yylhs.value.as < std::list<AST::VariableDeclNode*> > () = lst;}
#line 1266 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 27:
#line 377 "tpparser.yy"
    {yylhs.value.as < AST::CallableDeclarationsNode* > () = new CallableDeclarationsNode(yystack_[0].value.as < std::list<AST::CallableDeclNode*> > ());}
#line 1272 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 28:
#line 381 "tpparser.yy"
    { yystack_[1].value.as < std::list<AST::CallableDeclNode*> > ().push_back(yystack_[0].value.as < AST::ProcedureDeclNode* > ()); yylhs.value.as < std::list<AST::CallableDeclNode*> > () = yystack_[1].value.as < std::list<AST::CallableDeclNode*> > (); }
#line 1278 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 29:
#line 383 "tpparser.yy"
    { yystack_[1].value.as < std::list<AST::CallableDeclNode*> > ().push_back(yystack_[0].value.as < AST::FunctionDeclNode* > ()); yylhs.value.as < std::list<AST::CallableDeclNode*> > () = yystack_[1].value.as < std::list<AST::CallableDeclNode*> > (); }
#line 1284 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 30:
#line 385 "tpparser.yy"
    {std::list<AST::CallableDeclNode*> lst; yylhs.value.as < std::list<AST::CallableDeclNode*> > () = lst;}
#line 1290 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 31:
#line 390 "tpparser.yy"
    { yylhs.value.as < AST::VariableNode* > () = yystack_[0].value.as < AST::VariableNode* > (); }
#line 1296 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 32:
#line 396 "tpparser.yy"
    { yylhs.value.as < AST::ReadStmtNode* > () = new AST::ReadStmtNode( yystack_[0].value.as < AST::VariableNode* > () ); }
#line 1302 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 33:
#line 400 "tpparser.yy"
    { yylhs.value.as < AST::ReadStmtNode* > () = new AST::ReadStmtNode( yystack_[0].value.as < AST::VariableNode* > (), true); }
#line 1308 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 34:
#line 406 "tpparser.yy"
    {yylhs.value.as < AST::WriteStmtNode* > () = new AST::WriteStmtNode( yystack_[0].value.as < AST::VariableNode* > ()->get_expr() );}
#line 1314 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 35:
#line 410 "tpparser.yy"
    { yylhs.value.as < AST::WriteStmtNode* > () = new AST::WriteStmtNode( yystack_[0].value.as < AST::VariableNode* > ()->get_expr(), true); }
#line 1320 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 36:
#line 415 "tpparser.yy"
    { yylhs.value.as < AST::ProcedureCallStmtNode* > () = new AST::ProcedureCallStmtNode( yystack_[1].value.as < std::string > (), yystack_[0].value.as < AST::OptionalArgumentsNode* > ()->get_list() ); }
#line 1326 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 37:
#line 419 "tpparser.yy"
    { yylhs.value.as < AST::OptionalArgumentsNode* > () = nullptr; }
#line 1332 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 38:
#line 422 "tpparser.yy"
    { yylhs.value.as < AST::OptionalArgumentsNode* > () = new AST::OptionalArgumentsNode(yystack_[1].value.as < std::list<AST::ExprNode*> > ()); }
#line 1338 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 39:
#line 427 "tpparser.yy"
    {yystack_[2].value.as < std::list<AST::ExprNode*> > ().push_back(yystack_[0].value.as < AST::ExprNode* > ()); yylhs.value.as < std::list<AST::ExprNode*> > () = yystack_[2].value.as < std::list<AST::ExprNode*> > ();}
#line 1344 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 40:
#line 430 "tpparser.yy"
    {std::list<AST::ExprNode*> lst; lst.push_back(yystack_[0].value.as < AST::ExprNode* > ()); yylhs.value.as < std::list<AST::ExprNode*> > () = lst;}
#line 1350 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 41:
#line 434 "tpparser.yy"
    { yylhs.value.as < AST::StmtNode* > () = yystack_[0].value.as < AST::AssignmentStmtNode* > (); }
#line 1356 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 42:
#line 436 "tpparser.yy"
    { yylhs.value.as < AST::StmtNode* > () = yystack_[0].value.as < AST::EmptyStmtNode* > (); }
#line 1362 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 43:
#line 438 "tpparser.yy"
    { yylhs.value.as < AST::StmtNode* > () = yystack_[0].value.as < AST::ProcedureCallStmtNode* > (); }
#line 1368 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 44:
#line 440 "tpparser.yy"
    { yylhs.value.as < AST::StmtNode* > () = yystack_[0].value.as < AST::ReadStmtNode* > (); }
#line 1374 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 45:
#line 442 "tpparser.yy"
    { yylhs.value.as < AST::StmtNode* > () = yystack_[0].value.as < AST::WriteStmtNode* > (); }
#line 1380 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 46:
#line 447 "tpparser.yy"
    { yylhs.value.as < AST::IfStmtNode* > () = new AST::IfStmtNode(yystack_[2].value.as < AST::ExprNode* > (), yystack_[0].value.as < AST::StmtNode* > ()); }
#line 1386 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 47:
#line 450 "tpparser.yy"
    { yylhs.value.as < AST::IfStmtNode* > () = new AST::IfStmtNode(yystack_[4].value.as < AST::ExprNode* > (), yystack_[2].value.as < AST::StmtNode* > (), yystack_[0].value.as < AST::StmtNode* > ()); }
#line 1392 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 48:
#line 455 "tpparser.yy"
    { yylhs.value.as < AST::WhileStmtNode* > () = new AST::WhileStmtNode(yystack_[2].value.as < AST::ExprNode* > (), yystack_[0].value.as < AST::StmtNode* > ()); }
#line 1398 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 49:
#line 459 "tpparser.yy"
    { yylhs.value.as < AST::StmtNode* > () = yystack_[0].value.as < AST::CompoundStmtNode* > (); }
#line 1404 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 50:
#line 461 "tpparser.yy"
    { yylhs.value.as < AST::StmtNode* > () = yystack_[0].value.as < AST::IfStmtNode* > (); }
#line 1410 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 51:
#line 463 "tpparser.yy"
    { yylhs.value.as < AST::StmtNode* > () = yystack_[0].value.as < AST::WhileStmtNode* > (); }
#line 1416 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 52:
#line 467 "tpparser.yy"
    { yylhs.value.as < AST::StmtNode* > () = yystack_[0].value.as < AST::StmtNode* > (); }
#line 1422 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 53:
#line 469 "tpparser.yy"
    { yylhs.value.as < AST::StmtNode* > () = yystack_[0].value.as < AST::StmtNode* > (); }
#line 1428 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 54:
#line 473 "tpparser.yy"
    { yylhs.value.as < AST::EmptyStmtNode* > () = new AST::EmptyStmtNode(); }
#line 1434 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 55:
#line 480 "tpparser.yy"
    { yylhs.value.as < AST::AssignmentStmtNode* > () = new AST::AssignmentStmtNode( yystack_[2].value.as < AST::VariableNode* > (), yystack_[0].value.as < AST::ExprNode* > ()); }
#line 1440 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 56:
#line 486 "tpparser.yy"
    {  yylhs.value.as < AST::VariableNode* > () = new AST::VariableNode( yystack_[0].value.as < std::string > (), nullptr ); }
#line 1446 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;

  case 57:
#line 491 "tpparser.yy"
    { yylhs.value.as < AST::ExprNode* > () = new AST::IntegerExprNode( std::stoi(yystack_[0].value.as < std::string > ()) ); }
#line 1452 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"
    break;


#line 1456 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"

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
      YY_STACK_PRINT ();

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
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
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
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
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
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char parser::yypact_ninf_ = -86;

  const signed char parser::yytable_ninf_ = -57;

  const signed char
  parser::yypact_[] =
  {
     -34,   -27,    44,    25,   -86,     8,     9,    43,   -86,   -86,
     -86,     9,    38,    24,   -86,    36,     2,    40,   -86,   -11,
      14,   -22,   -86,    15,    16,   -86,   -86,   -86,    49,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,    17,    19,    19,    17,
      19,    19,    18,   -86,   -14,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,    67,    53,    53,    22,   -86,
      30,   -86,   -86,   -86,   -86,    46,   -86,   -86,    17,   -86,
     -86,   -22,   -86,    17,     9,    61,    54,    56,   -22,   -22,
      -3,   -86,   -86,   -86,    42,   -86,    32,   -86,     7,     8,
      28,    50,   -86,    17,   -86,     7,   -86,     9,    58,   -86,
      62,   -22,   -86,   -86,   -86,     8,    47,   -86,   -86,     7,
     -86
  };

  const unsigned char
  parser::yydefact_[] =
  {
       0,     0,     0,     0,     1,    54,     0,     0,    30,     5,
      10,     4,     0,     0,     2,     0,    27,     0,     7,     0,
       0,    54,     3,     0,     0,    28,    29,     6,     0,    14,
      13,    15,     8,    11,    12,     9,     0,     0,     0,     0,
       0,     0,    54,    49,     0,    44,    45,    43,    52,    50,
      51,    53,    19,    42,    41,     0,     0,     0,     0,    57,
       0,    56,    32,    31,    33,     0,    34,    35,     0,    36,
      37,    54,    17,     0,    54,     0,     0,     0,    54,    54,
       0,    40,    18,    55,     0,    26,     0,    25,     0,    54,
       0,    46,    48,     0,    38,     0,    22,     0,     0,    20,
       0,    54,    39,    23,    24,    54,     0,    47,    21,     0,
      16
  };

  const signed char
  parser::yypgoto_[] =
  {
     -86,   -86,   -85,   -86,   -86,    71,   -68,   -86,   -81,   -86,
      70,   -86,   -86,   -86,    29,   -10,   -86,   -86,   -86,    10,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -69,
      -5,   -86,     5,   -38
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     2,     7,     8,    11,    12,    13,    32,    33,    34,
      43,    44,    25,    26,    75,    85,    86,    15,    16,    62,
      45,    46,    47,    69,    80,    48,    49,    50,    51,    52,
      53,    54,    55,    60
  };

  const signed char
  parser::yytable_[] =
  {
       9,    65,    82,    21,    99,     1,    84,    98,    71,    91,
      92,    36,    93,    28,   103,    29,    72,    94,    37,    38,
     108,   -56,     3,    30,    39,    40,    41,    42,   110,    84,
      81,    31,   107,    29,    23,    83,    68,    70,    19,    20,
      24,    30,    63,    63,     4,    63,    63,     5,    64,    31,
      66,    67,    96,     6,    97,   102,    95,    20,    10,    14,
      18,    21,    27,    35,    56,    57,    58,    59,    61,    87,
      73,    74,    77,    78,    79,    88,    89,    90,   100,   101,
     105,   106,    17,   109,     9,    22,    76,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9
  };

  const signed char
  parser::yycheck_[] =
  {
       5,    39,    71,    25,    89,    39,    74,    88,    22,    78,
      79,    33,    15,    24,    95,    26,    30,    20,    40,    41,
     105,     3,    49,    34,    46,    47,    48,    49,   109,    97,
      68,    42,   101,    26,    32,    73,    18,    42,    14,    15,
      38,    34,    37,    38,     0,    40,    41,    22,    38,    42,
      40,    41,    20,    45,    22,    93,    14,    15,    49,    16,
      22,    25,    22,    49,    49,    49,    17,    50,    49,    74,
       3,    18,    50,    43,    28,    14,    22,    21,    50,    29,
      22,    19,    11,    36,    89,    15,    57,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,    39,    55,    49,     0,    22,    45,    56,    57,    84,
      49,    58,    59,    60,    16,    71,    72,    59,    22,    14,
      15,    25,    64,    32,    38,    66,    67,    22,    24,    26,
      34,    42,    61,    62,    63,    49,    33,    40,    41,    46,
      47,    48,    49,    64,    65,    74,    75,    76,    79,    80,
      81,    82,    83,    84,    85,    86,    49,    49,    17,    50,
      87,    49,    73,    86,    73,    87,    73,    73,    18,    77,
      84,    22,    30,     3,    18,    68,    68,    50,    43,    28,
      78,    87,    83,    87,    60,    69,    70,    84,    14,    22,
      21,    83,    83,    15,    20,    14,    20,    22,    62,    56,
      50,    29,    87,    62,    69,    22,    19,    83,    56,    36,
      62
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    54,    55,    56,    57,    57,    58,    58,    59,    60,
      60,    61,    61,    62,    62,    62,    63,    64,    65,    65,
      66,    67,    68,    69,    70,    70,    70,    71,    72,    72,
      72,    73,    74,    74,    75,    75,    76,    77,    77,    78,
      78,    79,    79,    79,    79,    79,    80,    80,    81,    82,
      82,    82,    83,    83,    84,    85,    86,    87
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     5,     3,     2,     1,     3,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     8,     3,     3,     1,
       5,     7,     3,     3,     3,     1,     1,     1,     2,     2,
       0,     1,     2,     2,     2,     2,     2,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     4,     6,     4,     1,
       1,     1,     1,     1,     0,     3,     1,     1
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "t_eoi", "error", "$undefined", "t_assign", "t_divide", "t_eq", "t_gt",
  "t_gteq", "t_lt", "t_lteq", "t_minus", "t_multiply", "t_neq", "t_plus",
  "t_colon", "t_comma", "t_dot", "t_lbracket", "t_lparenthesis",
  "t_rbracket", "t_rparenthesis", "t_subrange", "t_semicolon", "t_and",
  "t_array", "t_begin", "t_boolean", "t_div", "t_do", "t_else", "t_end",
  "t_false", "t_function", "t_if", "t_integer", "t_not", "t_of", "t_or",
  "t_procedure", "t_program", "t_read", "t_readln", "t_real", "t_then",
  "t_true", "t_var", "t_while", "t_write", "t_writeln", "t_identifier",
  "t_integer_l", "t_real_l", "t_string_l", "t_unknown", "$accept",
  "program", "main_block", "variable_declarations",
  "list_variable_declaration", "variable_declaration", "list_identifier",
  "type", "simple_type", "array_type", "compound_statement",
  "list_statement", "procedure_declarations", "function_declaration",
  "opt_params", "parameter_list", "list_parameterList_declaration",
  "callable_declarations", "callable_declarations_list", "input_variable",
  "read_statement", "write_statement", "procedure_statement",
  "optional_arguments", "arguments_list", "simple_statement",
  "if_statement", "while_statement", "structured_statement", "statement",
  "empty_statement", "assignment_statement", "variable_lvalue",
  "expression", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short
  parser::yyrline_[] =
  {
       0,   203,   203,   213,   220,   223,   228,   231,   236,   247,
     252,   257,   259,   263,   265,   267,   271,   283,   290,   293,
     307,   333,   349,   354,   362,   365,   371,   377,   381,   383,
     385,   390,   394,   398,   404,   408,   414,   419,   421,   426,
     429,   434,   436,   438,   440,   442,   446,   449,   454,   459,
     461,   463,   467,   469,   473,   477,   485,   490
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy
#line 1926 "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/TurboPascal/cmake-build-debug/../tpparser.cpp"

#line 494 "tpparser.yy"


  namespace yy
  {
    // Report an error to the user.
    auto parser::error(const location_type& l, const std::string &msg) -> void {
        std::cerr << msg << " at (" << l.begin.line << ',' << l.begin.column << ")\n";
    }
  }
