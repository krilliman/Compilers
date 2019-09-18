/* SC-T-603-THYD Fall 2019. Project, lexical analysis. */
%option c++
%option noyywrap
%option yylineno
%option caseless
%{
#include "language.h"
%}

/*(*(?i:WHILE) - mach not case sensitive*)*/

/*{.[^}]} - comment*/
/*(*REGULAR EXPRESSIONS*)*/
ws [ \t\r\n]

letter [a-zA-Z]
digit [0-9]
%%

{ws}+             /* do nothing */
"["                                                                              { return LNG::TokenName::t_lbracket; }
"]"                                                                              { return LNG::TokenName::t_rbracket; }
.                                                                                { return LNG::TokenName::t_unknown; }
{letter}({letter}|{digit}|"_")*                                                  { return LNG::TokenName::t_identifier;}
{digit}+                                                                         { return LNG::TokenName::t_integer;}
\'(\\.|[^'\\])*\'                                                                { return LNG::TokenName::t_string_l;}
"true"|"false"                                                                   { return LNG::TokenName::t_boolean;}

%%
