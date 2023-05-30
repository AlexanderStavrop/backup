%{
 	#include <stdio.h>
 	#include "cgen.h"
	
 	extern int yylex(void);
    extern int line_num;
%}
 
%union{
	char* str;
}

// Identifiers
%token <str> T_ID

// Keywords
%token KW_integer
%token KW_scalar
%token KW_str
%token KW_boolean
%token KW_True
%token KW_False
%token KW_const
%token KW_if
%token KW_else
%token KW_endif
%token KW_for
%token KW_in
%token KW_endfor
%token KW_while
%token KW_endwhile
%token KW_break
%token KW_continue
%token KW_not
%token KW_and
%token KW_or
%token KW_def
%token KW_enddef
%token KW_main
%token KW_return
%token KW_com
%token KW_endcomp
%token KW_of

// Integers
%token <str> T_INT

// Floats
%token <str> T_FLOAT

// Strings
%token <str> T_STRING

// Operators
%token OP_PLUS
%token OP_MINUS
%token OP_MUL
%token OP_DIV
%token OP_MOD
%token OP_EXP
%token OP_EQ
%token OP_NOTEQ
%token OP_LESS
%token OP_LEQ
%token OP_GREATER
%token OP_GEQ
%token OP_EQUAL
%token OP_INCREM
%token OP_DECREM
%token OP_MULCREM
%token OP_DIVCREM
%token OP_MODCREM

// Delimiters
%token DEL_QUEST
%token DEL_LPAR
%token DEL_RPAR
%token DEL_COMMA
%token DEL_LBRAC
%token DEL_RBRAC
%token DEL_DOTS
%token DEL_DOT

// Comments
%token COMM_STR

%token NEW_LINE

%start program_start
%type <str> expr
%type <str> program_body 


%left OP_MINUS OP_PLUS
%left '*' '/'

%%
program_start:
	%empty
  |	program_body
  	{
		if (yyerror_count == 0) {
			puts(c_prologue);
			printf("%s\n", $1);
		}
	}
;

program_body:
	expr
  | program_body expr	  {$$ = template("%s%s", $1, $2);}	
  | program_body expr ';' {$$ = template("%s%s;", $1, $2);}
;

expr:
  	T_INT			    {$$ = $1;}
  | T_STRING			{$$ = $1;}
  | expr OP_PLUS expr	{$$ = template("%s + %s", $1, $3);}
  | expr OP_MINUS expr	{$$ = template("%s - %s", $1, $3);}
  | expr DEL_QUEST		{$$ = template("%s;", $1);}
;


%%
int main(){
	if (yyparse() == 0)
		printf("Accepted\n");
	else
		printf("Rejected\n");
}
