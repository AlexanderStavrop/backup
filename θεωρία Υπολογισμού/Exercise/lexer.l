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
STRING 		\"[^\\'\n\"]*\"

%%   
    /* Rules Section */
"integer"           { printf("integer\n"); return KW_integer; }
"scalar"            { printf("scalar\n"); return KW_scalar; }
"str"               { printf("str\n"); return KW_str; }
"boolean"           { printf("boolean\n"); return KW_boolean; }
"True"              { printf("True\n"); return KW_True; }
"False"             { printf("False\n"); return KW_False; }
"const"             { printf("const\n"); return KW_const; }
"if"                { printf("if\n"); return KW_if; }
"else"              { printf("else\n"); return KW_else; }
"endif"             { printf("endif\n"); return KW_endif; }
"for"               { printf("for\n"); return KW_for; }
"in"                { printf("in\n"); return KW_in; }
"endfor"            { printf("endfor\n"); return KW_endfor; }
"while"             { printf("while\n"); return KW_while; }
"endwhile"          { printf("endwhile\n"); return KW_endwhile; }
"break"             { printf("break\n"); return KW_break; }
"continue"          { printf("continue\n"); return KW_continue; }
"not"               { printf("not\n"); return KW_not; }
"and"               { printf("and\n"); return KW_and; }
"or"                { printf("or\n"); return KW_or; }
"def"               { printf("def\n"); return KW_def; }
"enddef"            { printf("enddef\n"); return KW_enddef; }
"main"              { printf("main\n"); return KW_main; }
"return"            { printf("return\n"); return KW_return; }
"com"               { printf("com\n"); return KW_com; }
"endcomp"           { printf("endcomp\n"); return KW_endcomp; }
"of"                { printf("of\n"); return KW_of; }


"+"                 { printf("plus\n"); return OP_PLUS;}
"-"                 { printf("minus\n"); return OP_MINUS; }
"*"                 { printf("multiply\n"); return OP_MUL; }
"/"                 { printf("divide\n"); return OP_DIV; }
"%"                 { printf("modulus\n"); return OP_MOD; }
"**"                { printf("exponentiation\n"); return OP_EXP; }
"=="                { printf("equal\n"); return OP_EQ; }
"!="                { printf("not equal\n"); return OP_NOTEQ; }
"<"                 { printf("less than\n"); return OP_LESS; }
"<="                { printf("less than or equal\n"); return OP_LEQ; }
">"                 { printf("greater than\n"); return OP_GREATER; }
">="                { printf("greater than or equal\n"); return OP_GEQ; }
"="                 { printf("assignment\n"); return OP_EQUAL; }
"+="                { printf("increment\n"); return OP_INCREM; }
"-="                { printf("decrement\n"); return OP_DECREM; }
"*="                { printf("multiply and assign\n"); return OP_MULCREM; }
"/="                { printf("divide and assign\n"); return OP_DIVCREM; }
"%="                { printf("modulus and assign\n"); return OP_MODCREM; }
";"                 { printf("semicolon\n"); return DEL_QUEST; }
"("                 { printf("left parenthesis\n"); return DEL_LPAR; }
")"                 { printf("right parenthesis\n"); return DEL_RPAR; }
","                 { printf("comma\n"); return DEL_COMMA; }
"["                 { printf("left bracket\n"); return DEL_LBRAC; }
"]"                 { printf("right bracket\n"); return DEL_RBRAC; }
":"                 { printf("colon\n"); return DEL_DOTS; }
"."                 { printf("dot\n"); return DEL_DOT;}


{ID}              	{ printf("identifier\n"); yylval.str = strdup(yytext);  return T_ID; }
{INT}               { printf("int\n"); yylval.str = strdup(yytext); return T_INT;}
{FLOAT}           	{ printf("floating-point number\n"); yylval.str = strdup(yytext); return T_FLOAT; }
{STRING}            { printf("string\n"); yylval.str = strdup(yytext); return T_STRING;}
[ \r\t]+            printf("whitespace\n");/* eat whitespace */
\n					{++line_num; printf("hereeeeeee\n");}
<<EOF>>             {printf("File ended\n"); return EOF;}
.                   printf("\033[1;31mLine %2d: Lexical error in: %s\n\033[0m", line_num, yytext);
