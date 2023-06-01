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
%token <str> OP_MINUS
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
%token <str> OP_EQUAL
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
%type <str> program_body 

%type <str> constant
%type <str> variable
%type <str> var_type

%type <str> function
%type <str> function_body
%type <str> function_arguments
%type <str> expression


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
    constant DEL_QUEST              {$$ = template("%s;\n\n", $1);}
  | program_body constant DEL_QUEST {$$ = template("%s%s;\n\n", $1, $2);}

  | variable DEL_QUEST              {$$ = template("%s;\n\n", $1);}
  | program_body variable DEL_QUEST {$$ = template("%s%s;\n\n", $1, $2);}

  | function DEL_QUEST              {$$ = template("%s;\n\n", $1);}
  | program_body function DEL_QUEST {$$ = template("%s%s;\n\n", $1, $2);}
;

/////////////////////////////////////////////////////////////////////////////////
function:
    KW_def expression DEL_LPAR DEL_RPAR DEL_DOTS function_body KW_enddef {$$ = template("void %s(){\n%s}", $2, $6);}
  | KW_def expression DEL_LPAR function_arguments DEL_RPAR DEL_DOTS function_body KW_enddef {$$ = template("void %s(%s){\n%s}", $2, $4, $7);}
;

function_arguments:
    variable
;

function_body:
    expression
  | function_body expression            {$$ = template("%s%s", $1, $2);}
  | function_body expression DEL_QUEST  {$$ = template("    %s%s;\n", $1, $2);}
;
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
constant:
    KW_const variable   {$$ = template("const %s", $2);} 
;

variable:
    expression
  | variable expression {$$ = template("%s%s", $1, $2);}
  | variable OP_EQUAL   {$$ = template("%s = ", $1);}
  | variable var_type   {$$ = template("%s%s", $2, $1);}
;

var_type:
    DEL_DOTS KW_str     {$$ = template("char* ");}
  | DEL_DOTS KW_integer {$$ = template("int ");}
;
/////////////////////////////////////////////////////////////////////////////////

expression:
    T_ID
  | T_INT
  | T_STRING
  | OP_MINUS    {$$ = template(" %s", $1);}
  | OP_PLUS     {$$ = template(" + ");}
  | DEL_COMMA   {$$ = template(", ");}
  | DEL_LPAR    {$$ = template("(");}
  | DEL_RPAR    {$$ = template(")");}
  | KW_main     {$$ = template(" main");}
;


%%
int main(){
	if (yyparse() == 0)
		printf("Accepted\n");
	else
		printf("Rejected\n");
}
