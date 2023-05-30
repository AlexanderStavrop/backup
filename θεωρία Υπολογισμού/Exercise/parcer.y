%{
 	#include <stdio.h>
 	#include "cgen.h"
 	
 	extend int yylex(void);
 	extend int lineNum;
%}
 
%union{
}

// Identifiers
%token <STR> T_ID        100

// Keywords
%token KW_integer;
%token KW_scalar;
%token KW_str;
%token KW_boolean;
%token KW_True;
%token KW_False;
%token KW_const;
%token KW_if;
%token KW_else;
%token KW_endif;
%token KW_for;
%token KW_in;
%token KW_endfor;
%token KW_while;
%token KW_endwhile;
%token KW_break;
%token KW_continue;
%token KW_not;
%token KW_and;
%token KW_or;
%token KW_def;
%token KW_enddef;
%token KW_main;
%token KW_return;
%token KW_com;
%token KW_endcomp;
%token KW_of;

// Integers
%token <STR> T_INT;

// Floats
%token <STR> T_FLOAT;

// Strings
%token <STR> T_STRING;

// Operators
%token OP_PLUS;
%token OP_MINUS;
%token OP_MUL;
%token OP_DIV;
%token OP_MOD;
%token OP_EXP;
%token OP_EQ;
%token OP_NOTEQ;
%token OP_LESS;
%token OP_LEQ;
%token OP_GREATER;
%token OP_GEQ;
%token OP_EQUAL;
%token OP_INCREM;
%token OP_DECREM;
%token OP_MULCREM;
%token OP_DIVCREM;
%token OP_MODCREM;

// Delimiters
%token DEL_QUEST;
%token DEL_LPAR;
%token DEL_RPAR;
%token DEL_COMMA;
%token DEL_LBRAC;
%token DEL_RBRAC;
%token DEL_DOTS;
%token DEL_DOT;

// Comments
%token <STR> COMM_STR;


%start input
%type <STR> expr

%left '-' '+'
%left '*' '/'

%%
input:
	%empty 
  | input expr ';'

expr:
	T_INT
  |	T_FLOAT
  | '(' expr ')'
  | expr '+' expr
  | expr '-' expr
  | expr '*' expr
  | expr '/' expr
  	
%%
int main(){
	if (yyparser() == 0)
		printf("Accepted\n");
	else
		printf("Rejected\n");
}
