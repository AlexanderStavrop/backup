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

%type <str> var_type




%type <str> expression
%type <str> full_expression
%type <str> constant
%type <str> assignment
%type <str> declaration
%type <str> fcn_call
%type <str> make_fcn
%type <str> operators
%type <str> one_liner
%type <str> fcn_body
%type <str> fcn_ret_type
%type <str> fcn_arguments
%type <str> kati
%type <str> if_statement



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
	full_expression	DEL_QUEST 	 						{$$ = template("%s\n\n", $1);}							
  | program_body full_expression DEL_QUEST 				{$$ = template("%s%s;\n", $1, $2);}
  | program_body full_expression KW_enddef DEL_QUEST 	{$$ = template("%s%s\n}", $1, $2);}  
  
  | program_body make_fcn DEL_QUEST 					{$$ = template("%s%s\n", $1, $2);}
 
            
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
full_expression:
	constant
  | declaration
  | assignment
  | fcn_call
  | if_statement
;
constant:
	KW_const assignment	var_type {$$ = template("const %s%s", $3, $2);}
;

assignment:
	expression OP_EQUAL kati	{$$ = template("%s = %s", $1, $3);}		
;
kati:
	expression
  | fcn_call
  | operators				
  | kati expression			{$$ = template("%s%s", $1, $2);}
  | kati operators fcn_call {$$ = template("%s%s%s", $1, $2, $3);}
  
declaration:
	expression var_type				{$$ = template("%s%s", $2, $1);}
  | expression DEL_COMMA expression	{$$ = template("%s, %s", $1, $3);}
  | declaration DEL_COMMA expression     			{$$ = template("%s, %s", $1, $3);}
  | declaration var_type   			{$$ = template("%s%s", $2, $1);}
; 
var_type:
    DEL_DOTS KW_str     {$$ = template("char* ");}
  | DEL_DOTS KW_integer {$$ = template("int "); }
  | DEL_DOTS T_ID 		{$$ = template("%s ", $2);}
  | DEL_DOTS KW_boolean {$$ = template("int ");}
;



fcn_call:
  expression DEL_LPAR DEL_RPAR 							{$$ = template("%s()",$1);}
  | DEL_LPAR one_liner DEL_RPAR							{$$ = template("(%s)", $2);}
  | expression DEL_LPAR expression DEL_RPAR				{$$ = template("%s(%s)", $1, $3);}
  | expression DEL_LPAR operators expression DEL_RPAR	{$$ = template("%s(%s%s)", $1, $3, $4);}
  | expression DEL_LPAR one_liner DEL_RPAR				{$$ = template("%s(%s)", $1, $3);} 
  | expression DEL_LPAR operators one_liner DEL_RPAR	{$$ = template("%s(%s%s)", $1, $3, $4);}
;
one_liner:
	expression operators 					{$$ = template("%s%s", $1, $2);}
  | expression DEL_COMMA					{$$ = template("%s, ", $1);}
  | one_liner DEL_COMMA expression			{$$ = template("%s, %s", $1, $3);}
  | one_liner expression 					{$$ = template("%s%s", $1, $2);}
  | one_liner expression operators 			{$$ = template("%s%s%s", $1, $2, $3);}
;
make_fcn:
	KW_def expression DEL_LPAR DEL_RPAR DEL_DOTS fcn_body KW_enddef {$$ = template("\nvoid %s()\n{\n%s}", $2, $6);}		// void function without arguments
  |	KW_def expression DEL_LPAR DEL_RPAR fcn_ret_type fcn_body KW_enddef {$$ = template("\n%s%s()\n{\n%s}", $5, $2, $6);}		// Non void function without arguments
  |	KW_def expression DEL_LPAR fcn_arguments DEL_RPAR fcn_ret_type fcn_body KW_enddef {$$ = template("\n%s%s(%s)\n{\n%s}", $6, $2, $4, $7);}		// Non void function without arguments
;
fcn_arguments:
	declaration
  |	fcn_arguments declaration	{$$ = template("%s%s", $1, $2);}
;
fcn_ret_type:
	OP_MINUS OP_GREATER KW_integer DEL_DOTS	{$$ = template("int "); }
  | OP_MINUS OP_GREATER KW_boolean DEL_DOTS	{$$ = template("int "); }
;
fcn_body:
    assignment DEL_QUEST   					{$$ = template("%s;\n", $1);}
  | declaration DEL_QUEST 					{$$ = template("%s;\n", $1);}
  | fcn_call DEL_QUEST						{$$ = template("%s;\n", $1);}
  | if_statement DEL_QUEST					{$$ = template("%s;\n", $1);}
  | KW_return one_liner DEL_QUEST 			{$$ = template("return %s;\n", $2);}
  | fcn_body assignment DEL_QUEST   		{$$ = template("%s%s;\n", $1, $2);}
  | fcn_body fcn_call DEL_QUEST				{$$ = template("%s%s;\n", $1, $2);}
  | fcn_body declaration DEL_QUEST			{$$ = template("%s%s;\n", $1, $2);}
  | fcn_body if_statement DEL_QUEST			{$$ = template("%s%s;\n", $1, $2);}
  | fcn_body KW_return expression DEL_QUEST {$$ = template("%sreturn %s;\n", $1, $3);}
  | fcn_body KW_return one_liner DEL_QUEST 	{$$ = template("%sreturn %s;\n", $1, $3);}
;

if_statement:
	KW_if DEL_LPAR one_liner DEL_RPAR DEL_DOTS {$$ = template("if ( %s )", $3); printf("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
expression:
    T_ID	
  | T_INT
  | T_STRING
  | KW_return  {$$ = template("return ");}
  | KW_main    {$$ = template("main");}
;

operators:
	OP_MINUS 	{$$ = template(" - ");}
  |	OP_PLUS  	{$$ = template(" + ");}
  |	OP_MUL   	{$$ = template("*");}
  | OP_EQUAL 	{$$ = template(" = ");}
  | OP_LESS		{$$ = template(" < ");}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
%%
int main(){
	if (yyparse() == 0)
		printf("Accepted\n");
	else
		printf("Rejected\n");
}
