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
%type <str> assignment
%type <str> var_type
%type <str> declaration
%type <str> update_var


%type <str> function
%type <str> function_body
%type <str> fcn_arguments
%type <str> fcn_ret_type
%type <str> fcn_line
%type <str> fcn_declaration

%type <str> expression
%type <str> full_expression
%type <str> operators


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
    constant DEL_QUEST              	{$$ = template("%s;\n\n", $1);}
  | program_body constant DEL_QUEST 	{$$ = template("%s%s;\n\n", $1, $2);}

  | assignment DEL_QUEST              	{$$ = template("%s;\n\n", $1);}
  | program_body assignment DEL_QUEST 	{$$ = template("%s%s;\n\n", $1, $2);}

  | declaration DEL_QUEST              	{$$ = template("%s;\n\n", $1);}
  | program_body declaration DEL_QUEST 	{$$ = template("%s%s;\n\n", $1, $2);}

  | function DEL_QUEST              	{$$ = template("%s\n\n", $1);}
  | program_body function DEL_QUEST 	{$$ = template("%s%s\n\n", $1, $2);}
;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
function:
   KW_def expression DEL_LPAR DEL_RPAR DEL_DOTS function_body KW_enddef {$$ = template("void %s(){\n%s}", $2, $6);}						// void Non main function without arguments
 | KW_def KW_main DEL_LPAR DEL_RPAR DEL_DOTS function_body KW_enddef {$$ = template("void main(){\n%s}", $6);}							// void Main function without arguments
 | KW_def expression DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS function_body KW_enddef {$$ = template("void %s(%s){\n%s}", $2, $4, $7);}	// void Non main function with arguments
 | KW_def expression DEL_LPAR fcn_arguments DEL_RPAR fcn_ret_type function_body KW_enddef {$$ = template("%s%s(%s){\n%s}", $6, $2, $4, $7);}	// void Non main function with arguments

fcn_arguments:
	expression var_type {$$ = template("%s%s", $2, $1);}
  | fcn_arguments DEL_COMMA expression var_type {$$ = template("%s, %s%s", $1, $4, $3);}

fcn_ret_type:
	OP_MINUS OP_GREATER KW_integer DEL_DOTS	{$$ = template("int "); }

function_body:
	fcn_line DEL_QUEST					{$$ = template("\t%s;\n", $1);}
  | function_body fcn_line DEL_QUEST    {$$ = template("%s\t%s;\n", $1, $2);}

fcn_line:
	expression																		// Expression in the line
  | fcn_line expression 				 	{$$ = template("%s%s", $1, $2);}		// Function body followed by expression	

  | KW_return expression					{$$ = template("return %s", $2);}		// return followed by expression
  | fcn_line KW_return expression			{$$ = template("%sreturn %s", $1, $3);} // Function body followed by return followed by expression

  | fcn_declaration							{$$ = template("%s", $1);}			
  | fcn_line fcn_declaration				{$$ = template("%s%s", $1, $2);}
  
  | fcn_line DEL_LPAR DEL_RPAR 			  	{printf("111111111");$$ = template("%s()", $1);}		    // Function body followed by expression followed by () in the line
  | fcn_line DEL_LPAR expression DEL_RPAR 	{printf("212222222");$$ = template("%s(%s)", $1, $3);}		// Function body followed by expression followed by (expression) in the line
  
  | expression OP_EQUAL full_expression		{$$ = template("%s = %s", $1, $3);}
;

fcn_declaration:
	expression var_type {$$ = template("%s%s", $2, $1);}							// Expression part of declaration
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
constant:
    KW_const assignment	{$$ = template("const %s", $2);} 												// Constant declaration
;

assignment:
	expression OP_EQUAL expression var_type {$$ = template("%s%s = %s", $4, $1, $3);}					// Positive assignment
  | expression OP_EQUAL OP_MINUS expression var_type {$$ = template("%s%s = -%s", $5, $1, $4);}			// Negative assignment
;

declaration:
	expression																							// Expression part of declaration
  | declaration DEL_COMMA expression {$$ = template("%s, %s", $1, $3);}									// Declaration of multiple expressions
  | declaration var_type {$$ = template("%s%s", $2, $1);}												// Declaration variable type
;

var_type:
    DEL_DOTS KW_str     {$$ = template("char* ");}
  | DEL_DOTS KW_integer {$$ = template("int "); }
  | DEL_DOTS T_ID 		{$$ = template("%s ", $2); }	
;


full_expression:
	DEL_LPAR expression operators expression DEL_RPAR {$$ = template("(%s%s%s)", $2, $3, $4); printf("44444444");}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
expression:
    T_ID			     		
  | T_INT
  | T_STRING			 
;

operators:
	OP_MINUS {$$ = template(" - ");}
  |	OP_PLUS  {$$ = template(" + ");}
  |	OP_MUL   {$$ = template(" * ");}

%%
int main(){
	if (yyparse() == 0)
		printf("Accepted\n");
	else
		printf("Rejected\n");
}
