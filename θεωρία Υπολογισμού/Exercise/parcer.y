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
%type <str> attribute
%type <str> constant
%type <str> declaration
%type <str> assignment
%type <str> operator
%type <str> fcn_call
%type <str> right_part
%type <str> make_fcn
%type <str> fcn_body
%type <str> fcn_ret_type
%type <str> if_statement
%type <str> if_body
%type <str> while_statement
%type <str> while_body
%type <str> for_statement
%type <str> for_arguments
%type <str> for_body

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
	expression DEL_QUEST				{$$ = template("%s;\n", $1);}
  | program_body expression DEL_QUEST	{$$ = template("%s%s;\n", $1, $2);}
  
  | make_fcn DEL_QUEST					{$$ = template("%s\n", $1); }
  | program_body make_fcn DEL_QUEST 	{$$ = template("%s%s\n", $1, $2);}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
expression:
	constant
  | declaration
  | assignment
  | fcn_call
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
constant:
	KW_const assignment	var_type {$$ = template("const %s%s", $3, $2);}
;
assignment:
  attribute OP_EQUAL right_part	{$$ = template("%s = %s", $1, $3);}
;
var_type:
    DEL_DOTS KW_str     {$$ = template("char* ");}
  | DEL_DOTS KW_integer {$$ = template("int "); }
  | DEL_DOTS T_ID 		{$$ = template("%s ", $2);}
  | DEL_DOTS KW_boolean {$$ = template("int ");}
;


declaration:
	attribute var_type				{$$ = template("%s%s", $2, $1);}
  | attribute DEL_COMMA				{$$ = template("%s, ", $1);}
  | declaration attribute var_type	{$$ = template("%s%s%s", $1, $3, $2);}
  | declaration DEL_COMMA 			{$$ = template("%s, ",  $1);}
  | declaration attribute DEL_COMMA	{$$ = template("%s, ", $1);}
;


fcn_call:
 	attribute DEL_LPAR right_part DEL_RPAR	{$$ = template("%s(%s)", $1, $3);}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
make_fcn:
	KW_def attribute DEL_LPAR DEL_RPAR DEL_DOTS fcn_body KW_enddef 					{$$ = template("\nvoid %s()\n{\n%s}", $2, $6);}		// void function without arguments
  |	KW_def attribute DEL_LPAR DEL_RPAR fcn_ret_type fcn_body KW_enddef 				{$$ = template("\n%s%s()\n{\n%s}", $5, $2, $6);}		// Non void function without arguments
  |	KW_def attribute DEL_LPAR declaration DEL_RPAR fcn_ret_type fcn_body KW_enddef 	{$$ = template("\n%s%s(%s)\n{\n%s}", $6, $2, $4, $7);}		// Non void function without arguments
;
fcn_ret_type:
	OP_MINUS OP_GREATER KW_integer DEL_DOTS	{$$ = template("int "); }
  | OP_MINUS OP_GREATER KW_boolean DEL_DOTS	{$$ = template("int "); }
;
fcn_body:
  expression DEL_QUEST						{$$ = template("%s;\n", $1);}	
  | fcn_body expression DEL_QUEST 			{$$ = template("%s%s;\n", $1, $2);}
  
  | if_statement DEL_QUEST					{$$ = template("%s\n", $1);}
  | fcn_body if_statement DEL_QUEST 		{$$ = template("%s%s\n", $1, $2);}
  
  | while_statement DEL_QUEST				{$$ = template("%s\n", $1);}
  | fcn_body while_statement DEL_QUEST 		{$$ = template("%s%s\n", $1, $2);}
  
  | for_statement DEL_QUEST					{$$ = template("%s\n", $1);}
  | fcn_body for_statement DEL_QUEST 		{$$ = template("%s%s\n", $1, $2);}
  
  | KW_return right_part DEL_QUEST			{$$ = template("return %s;\n", $2);}	
  | fcn_body KW_return right_part DEL_QUEST	{$$ = template("%sreturn %s;\n", $1, $3);}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if_statement:
	KW_if DEL_LPAR right_part DEL_RPAR DEL_DOTS if_body KW_endif {$$ = template("if (%s){\n%s}", $3, $6);}
  | KW_if DEL_LPAR right_part DEL_RPAR DEL_DOTS if_body KW_else DEL_DOTS if_body KW_endif {$$ = template("if (%s){\n%s}else{\n%s}", $3, $6, $9);}
;
if_body:
  expression DEL_QUEST						{$$ = template("%s;\n", $1);}	
  | if_body expression DEL_QUEST 			{$$ = template("%s%s;\n", $1, $2);}

  | if_statement DEL_QUEST					{$$ = template("%s\n", $1);}
  | if_body if_statement DEL_QUEST 			{$$ = template("%s%s\n", $1, $2);}

  | while_statement if_statement DEL_QUEST	{$$ = template("%s\n", $1);}
  | if_body while_statement DEL_QUEST 		{$$ = template("%s%s\n", $1, $2);}

  | KW_return right_part DEL_QUEST			{$$ = template("return %s;\n", $2);}	
  | if_body KW_return right_part DEL_QUEST	{$$ = template("%sreturn %s;\n", $1, $3);}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
while_statement:
	KW_while DEL_LPAR right_part DEL_RPAR DEL_DOTS while_body KW_endwhile {$$ = template("while (%s){\n%s}", $3, $6);}
;
while_body:
  expression DEL_QUEST						{$$ = template("%s;\n", $1);}	
  | while_body expression DEL_QUEST 			{$$ = template("%s%s;\n", $1, $2);}
  
  | if_statement DEL_QUEST					{$$ = template("%s\n", $1);}
  | while_body if_statement DEL_QUEST 		{$$ = template("%s%s\n", $1, $2);}
  
  | while_statement DEL_QUEST					{$$ = template("%s\n", $1);}
  | while_body while_statement DEL_QUEST 		{$$ = template("%s%s\n", $1, $2);}
  
  | KW_return right_part DEL_QUEST				{$$ = template("return %s;\n", $2);}	
  | while_body KW_return right_part DEL_QUEST	{$$ = template("%sreturn %s;\n", $1, $3);}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
for_statement:
	KW_for for_arguments DEL_DOTS for_body KW_endfor {$$ = template("for (%s){\n%s}", $2, $4);}
;
for_arguments:
	T_ID KW_in DEL_LBRAC T_INT DEL_DOTS right_part DEL_DOTS T_INT DEL_RBRAC {$$ = template("int %s = %s; %s < %s; %s += %s", $1, $4, $1, $6, $1, $8);}
;
for_body:
  expression DEL_QUEST						{$$ = template("%s;\n", $1);}	
  | for_body expression DEL_QUEST 			{$$ = template("%s%s;\n", $1, $2);}
 
  | if_statement DEL_QUEST					{$$ = template("%s\n", $1);}
  | for_body if_statement DEL_QUEST 		{$$ = template("%s%s\n", $1, $2);}
   
  | while_statement DEL_QUEST				{$$ = template("%s\n", $1);}
  | for_body while_statement DEL_QUEST 		{$$ = template("%s%s\n", $1, $2);}
  
  | for_statement DEL_QUEST					{$$ = template("%s\n", $1);}
  | for_body for_statement DEL_QUEST 		{$$ = template("%s%s\n", $1, $2);} 
  
  | KW_return right_part DEL_QUEST			{$$ = template("return %s;\n", $2);}	
  | for_body KW_return right_part DEL_QUEST	{$$ = template("%sreturn %s;\n", $1, $3);}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

right_part:
	attribute											{$$ = $1;}
  | operator
  | attribute operator									{$$ = template("%s%s", $1, $2);}
  | attribute DEL_COMMA									{$$ = template("%s, ", $1);}
  | DEL_LPAR right_part DEL_RPAR						{$$ = template("(%s)", $2);}
  | DEL_LPAR right_part DEL_RPAR operator				{$$ = template("(%s)%s", $2, $4);}
  | right_part attribute 								{$$ = template("%s%s", $1, $2);}
  | right_part attribute operator  						{$$ = template("%s%s%s", $1, $2, $3);}
  | right_part attribute DEL_COMMA						{$$ = template("%s%s, ", $1, $2);}
  | right_part DEL_LPAR right_part DEL_RPAR operator 	{$$ = template("%s(%s)%s", $1, $3, $5);}
  | right_part DEL_LPAR right_part DEL_RPAR 			{$$ = template("%s(%s)", $1, $3);}
  | right_part DEL_LPAR DEL_RPAR 						{$$ = template("%s()", $1);}
;
attribute:
    T_ID	
  | T_INT
  | T_STRING
  | KW_main    	{$$ = template("main");}
  | KW_True    	{$$ = template("True");}
  | KW_False	{$$ = template("False");}
  | KW_and     	{$$ = template(" and ");}
;

operator:
	OP_MINUS 	{$$ = template(" - ");}
  |	OP_PLUS  	{$$ = template(" + ");}
  |	OP_MUL   	{$$ = template("*");}
  |	OP_DIV   	{$$ = template(" %s ", "/");}
  | OP_EQUAL 	{$$ = template(" = ");}
  | OP_LESS		{$$ = template(" < ");}
  | OP_EQ		{$$ = template(" == ");}
  | OP_MOD		{$$ = template(" %s ", "%");}
  | OP_NOTEQ    {$$ = template(" != ");}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
%%
int main(){
	if (yyparse() == 0)
		printf("Accepted\n");
	else
		printf("Rejected\n");
}
