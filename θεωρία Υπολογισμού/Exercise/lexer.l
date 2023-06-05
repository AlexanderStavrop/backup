%{
    #include <stdio.h>
	#include <string.h>
	#include "cgen.h"
	#include "parcer.tab.h"
	
	int line_num = 1;
%}

 /* Identifiers */ 
ID      [a-zA-Z][a-zA-Z0-9_]*

 /* Integers */
INT     0|[1-9][0-9]*

 /* Floats */
DECIMAL {INT}"."{INT}|"."{INT}
EXP     ["e""E"][\+\-]?[1-9]
FLOAT   {DECIMAL}{EXP}?
    
 /* Strings */
CHARACTER   [., a-zA-Z0-9\-+\*\/:_$!#@&%~^()]|[\\n]|[\\t]|[\\r]|[\\\\]
STRING 		\"{CHARACTER}*\"
    
%%   
"integer"           { return KW_integer; }
"scalar"            { return KW_scalar; }
"str"               { return KW_str; }
"boolean"           { return KW_boolean; }
"True"              { return KW_True; }
"False"             { return KW_False; }
"const"             { return KW_const; }
"if"                { return KW_if; }
"else"              { return KW_else; }
"endif"             { return KW_endif; }
"for"               { return KW_for; }
"in"                { return KW_in; }
"endfor"            { return KW_endfor; }
"while"             { return KW_while; }
"endwhile"          { return KW_endwhile; }
"break"             { return KW_break; }
"continue"          { return KW_continue; }
"not"               { return KW_not; }
"and"               { return KW_and; }
"or"                { return KW_or; }
"def"               { return KW_def; }
"enddef"            { return KW_enddef; }
"main"              { return KW_main; }
"return"            { return KW_return; }
"comp"               { return KW_comp; }
"endcomp"           { return KW_endcomp; }
"of"                { return KW_of; }

"+"                 { return OP_PLUS;}
"-"                 { yylval.str = strdup(yytext); return OP_MINUS; }
"*"                 { return OP_MUL; }
"/"                 { return OP_DIV; }
"%"                 { return OP_MOD; }
"**"                { return OP_EXP; }
"=="                { return OP_EQ; }
"!="                { return OP_NOTEQ; }
"<"                 { return OP_LESS; }
"<="                { return OP_LEQ; }
">"                 { return OP_GREATER; }
">="                { return OP_GEQ; }
"="                 { yylval.str = strdup(yytext); return OP_EQUAL; }
"+="                { return OP_INCREM; }
"-="                { return OP_DECREM; }
"*="                { return OP_MULCREM; }
"/="                { return OP_DIVCREM; }
"%="                { return OP_MODCREM; }
";"                 { return DEL_QUEST; }
"("                 { return DEL_LPAR; }
")"                 { return DEL_RPAR; }
","                 { return DEL_COMMA; }
"["                 { return DEL_LBRAC; }
"]"                 { return DEL_RBRAC; }
":"                 { return DEL_DOTS; }
"."                 { return DEL_DOT;}
"#"					{ return DEL_HASHTAG;}


{ID}                { yylval.str = strdup(yytext); return T_ID; }
{INT}               { yylval.str = strdup(yytext); return T_INT; }
{FLOAT}             { yylval.str = strdup(yytext); return T_FLOAT; }
{STRING}            { yylval.str = strdup(yytext); return T_STRING; }
[ \r\t]+            {/* eat whitespace */}
"--"[^\n]*          {/* Found comment */}
\n                  {++line_num; }
<<EOF>>             { return EOF; }
.                   { printf("\033[1;31mLine %2d: Lexical error in: %s\n\033[0m", line_num, yytext); }
