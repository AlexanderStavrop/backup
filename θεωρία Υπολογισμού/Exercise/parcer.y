%{
 	#include <stdio.h>
 	#include "cgen.h"
	
 	extern int yylex(void);
    extern int line_num;
%}
 
%union{
	char* str;
	struct {
		char* func_ret_type;
		char* func_name;
		char* func_args;
        char* func_body;
        char* func_const;
        char* func_all;
    } comp_func;
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
%token KW_comp
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
%token DEL_HASHTAG
%token DEL_COMP_FUNC

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
%type <str> fcn_arguments
%type <str> fcn_ret_type
%type <str> if_statement
%type <str> if_body
%type <str> comp_if_statement
%type <str> comp_if_body
%type <str> while_statement
%type <str> while_body
%type <str> for_statement
%type <str> for_arguments
%type <str> for_body
%type <str> comp_statement
%type <str> comp_declaration
%type <str> comp_declaration_init
%type <str> comp_declarations
%type <str> comp_assignment
%type <str> comp_fcn_call
%type <comp_func> comp_function
%type <comp_func> comp_functions
%type <str> comp_function_body
%type <str> comp_expression
%type <str> comp_fcn_arguments
%type <str> comp_right_part
//%type <str> comp_while_statement
//%type <str> comp_while_body
%type <str> comp_for_statement
%type <str> comp_for_arguments
%type <str> comp_for_body

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
	expression DEL_QUEST					{$$ = template("%s;\n", $1);}
  | program_body expression DEL_QUEST		{$$ = template("%s%s;\n", $1, $2);}
  | make_fcn DEL_QUEST						{$$ = template("%s\n", $1); }
  | program_body make_fcn DEL_QUEST 		{$$ = template("%s%s\n", $1, $2);}
  | comp_statement DEL_QUEST				{$$ = template("%s\n", $1);}
  | program_body comp_statement DEL_QUEST	{$$ = template("%s%s\n", $1, $2);}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
expression:
	constant
  | declaration
  | assignment
  | fcn_call		
  | KW_continue {$$ = template(" continue");}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
constant:
	KW_const assignment	var_type {$$ = template("const %s%s", $3, $2);}
;
assignment:
 	attribute OP_EQUAL right_part							{$$ = template("%s = %s", $1, $3);}
  | T_ID DEL_LBRAC attribute DEL_RBRAC OP_EQUAL right_part	{$$ = template("%s[%s] = %s", $1, $3, $6);}
  | T_ID DEL_DOT DEL_HASHTAG T_ID OP_EQUAL right_part		{$$ = template("%s.%s = %s", $1, $4, $6);}
  | attribute OP_INCREM attribute							{$$ = template("%s += %s", $1, $3);}
;
var_type:
    DEL_DOTS KW_str     {$$ = template("char* ");}
  | DEL_DOTS KW_integer {$$ = template("int "); }
  | DEL_DOTS KW_boolean {$$ = template("int ");}
  | DEL_DOTS KW_scalar	{$$ = template("double ");}
  | DEL_DOTS T_ID		{$$ = template(" %s ", $2);}
;


declaration:
	attribute var_type							{$$ = template("%s%s", $2, $1);}
//  | attribute DEL_DOTS T_ID 					{$$ = template("%s %s = ctor_%s", $3, $1, $3);} //If remove 6 not work 7 work more
  | attribute DEL_COMMA							{$$ = template("%s, ", $1);}
  | T_ID DEL_LBRAC attribute DEL_RBRAC var_type	{$$ = template("%s%s[%s]", $5, $1, $3);}
  | declaration attribute var_type				{$$ = template("%s%s%s", $3, $1, $2);}
  | declaration DEL_COMMA 						{$$ = template("%s, ",  $1);}
  | declaration attribute DEL_COMMA				{$$ = template("%s%s, ", $1, $2);}
;


fcn_call:
 	attribute DEL_LPAR right_part DEL_RPAR		{$$ = template("%s(%s)", $1, $3);}
  |	T_ID DEL_DOT T_ID DEL_LPAR DEL_RPAR			{$$ = template("%s.%s(&%s)", $1, $3, $1);}
  | T_ID DEL_DOT T_ID DEL_LPAR T_ID DEL_RPAR	{$$ = template("%s.%s(&%s,%s)", $1, $3, $1, $5);}
  | T_ID DEL_DOT T_ID DEL_LPAR fcn_arguments T_ID DEL_RPAR	{$$ = template("%s.%s(&%s,%s%s)", $1, $3, $1, $5, $6);}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
make_fcn:
	KW_def attribute DEL_LPAR DEL_RPAR DEL_DOTS KW_enddef 								{$$ = template("\nvoid %s()\n{\n}", $2);}		// void function without arguments
  | KW_def attribute DEL_LPAR DEL_RPAR DEL_DOTS fcn_body KW_enddef 						{$$ = template("\nvoid %s()\n{\n%s}", $2, $6);}		// void function without arguments
  |	KW_def attribute DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS fcn_body KW_enddef 		{$$ = template("\nvoid %s(%s)\n{\n%s}",$2, $4, $7);}		// Non void function without arguments
  |	KW_def attribute DEL_LPAR DEL_RPAR fcn_ret_type fcn_body KW_enddef 					{$$ = template("\n%s%s()\n{\n%s}", $5, $2, $6);}		// Non void function without arguments
  |	KW_def attribute DEL_LPAR fcn_arguments DEL_RPAR fcn_ret_type fcn_body KW_enddef 	{$$ = template("\n%s%s(%s)\n{\n%s}", $6, $2, $4, $7);}		// Non void function without arguments
;
fcn_arguments:
	attribute var_type									{$$ = template("%s%s", $2, $1);}
  | attribute DEL_LBRAC DEL_RBRAC var_type				{$$ = template("%s*%s", $4, $1);}
  | attribute DEL_LBRAC attribute DEL_RBRAC var_type	{$$ = template("%s*%s", $5, $1);}
  | attribute DEL_COMMA									{$$ = template("%s, ", $1);	}
  | fcn_arguments attribute var_type					{$$ = template("%s%s%s", $1, $3, $2);}
  | fcn_arguments DEL_COMMA 							{$$ = template("%s, ",  $1);}
  | fcn_arguments attribute DEL_COMMA					{$$ = template("%s%s, ", $1, $2);}
;
fcn_ret_type:
	OP_MINUS OP_GREATER KW_integer DEL_DOTS	{$$ = template("int "); }
  | OP_MINUS OP_GREATER KW_boolean DEL_DOTS	{$$ = template("int "); }
  | OP_MINUS OP_GREATER KW_scalar DEL_DOTS	{$$ = template("double ");}
  | OP_MINUS OP_GREATER T_ID DEL_DOTS		{$$ = template("%s ", $3);}
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if_statement:
	KW_if DEL_LPAR right_part DEL_RPAR DEL_DOTS if_body KW_endif 							{$$ = template("if (%s){\n%s}", $3, $6);}
  | KW_if DEL_LPAR right_part DEL_RPAR DEL_DOTS if_body KW_else DEL_DOTS if_body KW_endif 	{$$ = template("if (%s){\n%s}else{\n%s}", $3, $6, $9);}
;
if_body:
  expression DEL_QUEST						{$$ = template("%s;\n", $1);}
  | DEL_HASHTAG expression DEL_QUEST		{$$ = template("self->%s;\n", $2);}	
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
  expression DEL_QUEST							{$$ = template("%s;\n", $1);}	
  | while_body expression DEL_QUEST 			{$$ = template("%s%s;\n", $1, $2);}
  | if_statement DEL_QUEST						{$$ = template("%s\n", $1);}
  | while_body if_statement DEL_QUEST 			{$$ = template("%s%s\n", $1, $2);}
  | while_statement DEL_QUEST					{$$ = template("%s\n", $1);}
  | while_body while_statement DEL_QUEST 		{$$ = template("%s%s\n", $1, $2);}
  | KW_return right_part DEL_QUEST				{$$ = template("return %s;\n", $2);}	
  | while_body KW_return right_part DEL_QUEST	{$$ = template("%sreturn %s;\n", $1, $3);}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
for_statement:
	KW_for for_arguments DEL_DOTS for_body KW_endfor 																		 {$$ = template("for (%s){\n%s}", $2, $4);}
  |	attribute DEL_DOTS OP_EQUAL DEL_LBRAC right_part KW_for T_ID DEL_DOTS attribute DEL_RBRAC var_type 						 {$$ = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s = 0; %s < %s; %s++){\n%s[%s] = %s;\n}", $11, $1, $11, $9, $11, $7, $7, $9, $7, $1, $7, $5);}
  |	attribute DEL_DOTS OP_EQUAL DEL_LBRAC right_part KW_for T_ID var_type KW_in attribute KW_of attribute DEL_RBRAC var_type {$$ = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s_i = 0; %s_i < %s; %s_i++){\n%s%s = %s[%s_i];\n%s[%s_i] = %s;\n}", $14, $1, $14, $12, $14, $10, $10, $12, $10, $14, $7, $10, $10, $1, $10, $5);}
;
for_arguments:
	T_ID KW_in DEL_LBRAC T_INT DEL_DOTS right_part DEL_DOTS T_INT DEL_RBRAC {$$ = template("int %s = %s; %s < %s; %s += %s", $1, $4, $1, $6, $1, $8);}
  | T_ID KW_in DEL_LBRAC T_INT DEL_DOTS right_part DEL_RBRAC 				{$$ = template("int %s = %s; %s < %s; %s += 1", $1, $4, $1, $6, $1);}
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
comp_statement:
	KW_comp T_ID DEL_DOTS comp_declarations KW_endcomp {$$ = template("#define SELF struct %s *self\ntypedef struct %s {\n%s\n}%s;\n\n#undef SELF\n\n", $2, $2, $4, $2);}
  |	KW_comp T_ID DEL_DOTS comp_declarations comp_functions KW_endcomp {$$ = template("#define SELF struct %s *self\ntypedef struct %s {\n%s%s\n}%s;\n\n%s\nconst %s ctor_%s = {%s};\n#undef SELF\n\n", $2, $2, $4, $5.func_name, $2, $5.func_all, $2, $2, $5.func_const);}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
comp_expression:
	comp_declaration
  | comp_assignment
  | comp_fcn_call
  | KW_continue 		{$$ = template(" continue");}
  | DEL_HASHTAG T_ID 	{$$ = template("self->%s",$2);}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
comp_declarations:
	comp_declaration_init DEL_QUEST						{$$ = template("%s;\n", $1);}
  | comp_declarations comp_declaration_init DEL_QUEST	{$$ = template("%s%s;\n", $1, $2);}
;
comp_declaration_init:
	DEL_HASHTAG T_ID var_type										{$$ = template("%s%s", $3, $2);}
  | DEL_HASHTAG T_ID DEL_COMMA										{$$ = template("%s, ", $2);}
  | DEL_HASHTAG T_ID DEL_LBRAC attribute DEL_RBRAC var_type			{$$ = template("%s%s[%s]", $6, $2, $4);}
  | comp_declaration DEL_HASHTAG T_ID var_type						{$$ = template("%s%s%s",$4, $1 ,$3);}
  | comp_declaration DEL_HASHTAG T_ID DEL_COMMA						{$$ = template("%s%s, ", $1, $3);}
  | comp_declaration DEL_HASHTAG T_ID DEL_LBRAC DEL_RBRAC var_type	{$$ = template("%s%s, ", $1, $3);}
;

comp_declaration:
  	declaration
  |	DEL_HASHTAG														{$$ = template("self->");}
  | DEL_HASHTAG T_ID DEL_COMMA										{$$ = template("%s, ", $2);}
  | DEL_HASHTAG T_ID DEL_LBRAC attribute DEL_RBRAC var_type			{$$ = template("%s%s[%s]", $6, $2, $4);}
  | comp_declaration DEL_HASHTAG T_ID var_type						{$$ = template("%s%s%s",$4, $1 ,$3);}
  | comp_declaration DEL_HASHTAG T_ID DEL_COMMA						{$$ = template("%s%s, ", $1, $3);}
  | comp_declaration DEL_HASHTAG T_ID DEL_LBRAC DEL_RBRAC var_type	{$$ = template("%s%s, ", $1, $3);}
;

comp_assignment:
  	assignment
  | DEL_HASHTAG T_ID OP_EQUAL comp_right_part										{$$ = template("self->%s = %s", $2, $4);}
  | DEL_HASHTAG T_ID DEL_LBRAC DEL_HASHTAG T_ID DEL_RBRAC OP_EQUAL right_part		{$$ = template("self->%s[self->%s] = %s", $2, $5, $8);}
  | DEL_HASHTAG T_ID OP_INCREM comp_right_part 										{$$ = template("self->%s += %s", $2, $4);}
  | DEL_HASHTAG T_ID DEL_DOT comp_fcn_call											{$$ = template("self->%s.%s", $2, $4);}
  | DEL_HASHTAG T_ID DEL_LBRAC attribute DEL_RBRAC DEL_DOT T_ID DEL_LPAR DEL_RPAR	{$$ = template("self->%s[%s].%s()", $2, $4, $7);}
;

comp_fcn_call:
	T_ID DEL_LPAR DEL_RPAR									{$$ = template("%s(&%s)", $1, $1);}
  | DEL_HASHTAG	T_ID DEL_LPAR DEL_RPAR						{$$ = template("%s()", $2);}	
  | T_ID DEL_LPAR comp_fcn_arguments DEL_RPAR				{$$ = template("%s(%s)", $1, $3);}
  | DEL_LPAR comp_right_part DEL_RPAR						{$$ = template("(%s)", $2);}
  | DEL_HASHTAG T_ID DEL_LPAR comp_fcn_arguments DEL_RPAR	{$$ = template("%s(%s)", $2, $4);}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
comp_functions:
	comp_function DEL_QUEST					{$$.func_name = template("%s(*%s) (%s);", $1.func_ret_type, $1.func_name, $1.func_args); $$.func_const = template(" .%s=%s",$1.func_name, $1.func_name); $$.func_all = template("%s\n", $1.func_all);}
  | comp_functions comp_function DEL_QUEST	{$$.func_name = template("%s\n%s(*%s) (%s);\n",$1.func_name, $2.func_ret_type, $2.func_name, $2.func_args); $$.func_const = template("%s, .%s=%s",$1.func_const, $2.func_name, $2.func_name); $$.func_all = template("%s\n%s\n", $1.func_all, $2.func_all);}
;
comp_function:
  	KW_def T_ID DEL_LPAR DEL_RPAR DEL_DOTS KW_enddef										{$$.func_ret_type = template("void "); $$.func_name = $2; $$.func_args = template("SELF"); $$.func_all = template("void %s (SELF){\n}", $2);}
  |	KW_def T_ID DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS KW_enddef							{$$.func_ret_type = template("void "); $$.func_name = $2; $$.func_args = template("SELF, %s", $4); $$.func_all = template("void %s (SELF){\n}", $2);}
  |	KW_def T_ID DEL_LPAR DEL_RPAR DEL_DOTS comp_function_body KW_enddef						{$$.func_ret_type = template("void "); $$.func_name = $2; $$.func_args = template("SELF"); $$.func_all = template("void %s (SELF){\n%s}", $2, $6);}
  | KW_def T_ID DEL_LPAR DEL_RPAR fcn_ret_type comp_function_body KW_enddef					{$$.func_ret_type = template("%s ", $5); $$.func_name = $2; $$.func_args = template("SELF"); $$.func_all = template("%s %s (SELF){\n%s}", $5, $2, $6);}
  | KW_def T_ID DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS comp_function_body KW_enddef		{$$.func_ret_type = template("void "); $$.func_name = $2; $$.func_args = template("SELF, %s", $4); $$.func_all = template("void %s (SELF, %s){\n%s}", $2, $4, $7);}
  | KW_def T_ID DEL_LPAR fcn_arguments DEL_RPAR fcn_ret_type comp_function_body KW_enddef	{$$.func_ret_type = template("void "); $$.func_name = $2; $$.func_args = template("SELF, %s", $4); $$.func_all = template("void %s (SELF, %s){\n%s}", $2, $4, $7);}
;
comp_fcn_arguments:
  attribute
  | comp_fcn_arguments DEL_HASHTAG attribute				{$$ = template("%sself->%s", $1, $3);}
  | comp_fcn_arguments DEL_HASHTAG attribute operator		{$$ = template("%sself->%s", $1, $3);}
  | comp_fcn_arguments DEL_COMMA 							{$$ = template("%s, ",  $1);}
  | comp_fcn_arguments attribute DEL_COMMA					{$$ = template("%sself->%s, ", $1, $2);}
;
comp_function_body:
	comp_assignment DEL_QUEST								{$$ = template("%s;\n", $1);}
  | comp_function_body comp_assignment DEL_QUEST			{$$ = template("%s%s;\n", $1, $2);}
  | comp_declaration DEL_QUEST								{$$ = template("%s;\n", $1);}
  | comp_function_body comp_declaration DEL_QUEST			{$$ = template("%s%s;\n", $1, $2);}
  | comp_fcn_call DEL_QUEST									{$$ = template("%s;\n", $1);}
  | comp_function_body comp_fcn_call DEL_QUEST				{$$ = template("%s%s;\n", $1, $2);}
  | comp_if_statement DEL_QUEST								{$$ = template("%s\n", $1);}
  | comp_function_body comp_if_statement DEL_QUEST			{$$ = template("%s%s\n", $1, $2);}
  | comp_for_statement DEL_QUEST							{$$ = template("%s\n", $1);}
  | comp_function_body comp_for_statement DEL_QUEST			{$$ = template("%s%s\n", $1, $2);}
  | KW_return comp_right_part DEL_QUEST						{$$ = template("return %s;\n", $2);}	
  | comp_function_body KW_return comp_right_part DEL_QUEST	{$$ = template("%sreturn %s;\n", $1, $3);}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
comp_if_statement:
	KW_if DEL_LPAR comp_right_part DEL_RPAR DEL_DOTS comp_if_body KW_endif 							{$$ = template("if (%s){\n%s}", $3, $6);}
  | KW_if DEL_LPAR comp_right_part DEL_RPAR DEL_DOTS comp_if_body KW_else DEL_DOTS comp_if_body KW_endif {$$ = template("if (%s){\n%s}else{\n%s}", $3, $6, $9);}
;
comp_if_body:
  comp_expression DEL_QUEST								{$$ = template("%s;\n", $1);}
  | comp_if_body comp_expression DEL_QUEST 				{$$ = template("%s%s;\n", $1, $2);}
  | comp_if_body DEL_QUEST								{$$ = template("%s\n", $1);}
  | comp_if_body if_statement DEL_QUEST 				{$$ = template("%s%s\n", $1, $2);}
  | KW_return comp_right_part DEL_QUEST					{$$ = template("return %s;\n", $2);}	
  | comp_if_body KW_return comp_right_part DEL_QUEST	{$$ = template("%sreturn %s;\n", $1, $3);}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
comp_for_statement:
	KW_for comp_for_arguments DEL_DOTS comp_for_body KW_endfor 																		{$$ = template("for (%s){\n%s}", $2, $4);}
  |	attribute DEL_DOTS OP_EQUAL DEL_LBRAC comp_right_part KW_for T_ID DEL_DOTS attribute DEL_RBRAC var_type 						{$$ = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s_i = 0; %s_i < %s; %s_i++){\n%s[%s_i] = %s;\n}", $11, $1, $11, $9, $11, $7, $7, $9, $7, $1, $7, $5);}
  |	attribute DEL_DOTS OP_EQUAL DEL_LBRAC comp_right_part KW_for T_ID var_type KW_in attribute KW_of attribute DEL_RBRAC var_type 	{$$ = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s_i = 0; %s_i < %s; %s_i++){\n%s%s = %s[%s_i];\n%s[%s_i] = %s;\n}", $14, $1, $14, $12, $14, $10, $10, $12, $10, $14, $7, $10, $10, $1, $10, $5);}
;
comp_for_arguments:
	T_ID KW_in DEL_LBRAC T_INT DEL_DOTS comp_right_part DEL_DOTS T_INT DEL_RBRAC 	{$$ = template("int %s = %s; %s < %s; %s += %s", $1, $4, $1, $6, $1, $8);}
  | T_ID KW_in DEL_LBRAC T_INT DEL_DOTS comp_right_part DEL_RBRAC 					{$$ = template("int %s = %s; %s < %s; %s += 1", $1, $4, $1, $6, $1);}
;
comp_for_body:
  comp_expression DEL_QUEST								{$$ = template("%s;\n", $1);}	
  | comp_for_body comp_expression DEL_QUEST 			{$$ = template("%s%s;\n", $1, $2);}
  | comp_if_statement DEL_QUEST							{$$ = template("%s\n", $1);}
  | comp_for_body comp_if_statement DEL_QUEST 			{$$ = template("%s%s\n", $1, $2);}
  | comp_for_statement DEL_QUEST						{$$ = template("%s\n", $1);}
  | comp_for_body comp_for_statement DEL_QUEST 			{$$ = template("%s%s\n", $1, $2);} 
  | KW_return comp_right_part DEL_QUEST					{$$ = template("return %s;\n", $2);}	
  | comp_for_body KW_return comp_right_part DEL_QUEST	{$$ = template("%sreturn %s;\n", $1, $3);}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
comp_right_part:
	attribute
  | DEL_HASHTAG 													{$$ = template("self->");}
  | operator
  | attribute operator												{$$ = template("%s%s", $1, $2);}
  | attribute DEL_COMMA												{$$ = template("%s, ", $1);}
  | DEL_LPAR comp_right_part DEL_RPAR								{$$ = template("(%s)", $2);}
  | DEL_LPAR comp_right_part DEL_RPAR operator						{$$ = template("(%s)%s", $2, $4);}
  | DEL_LBRAC comp_right_part DEL_RBRAC								{$$ = template("[%s]", $2);}
  | DEL_LBRAC comp_right_part DEL_RBRAC operator 					{$$ = template("[%s]%s", $2, $4);}
  | DEL_LBRAC comp_right_part DEL_RBRAC DEL_DOT 					{$$ = template("[%s].", $2);}
  | comp_right_part attribute 										{$$ = template("%s%s", $1, $2);}
  | comp_right_part DEL_HASHTAG T_ID 								{$$ = template("%sself->%s", $1, $3);}
  | comp_right_part attribute operator  							{$$ = template("%s%s%s", $1, $2, $3);}
  | comp_right_part attribute DEL_COMMA								{$$ = template("%s%s, ", $1, $2);}
  | comp_right_part DEL_LPAR DEL_RPAR 								{$$ = template("%s()", $1);}
  | comp_right_part DEL_LPAR DEL_RPAR operator						{$$ = template("%s()%s", $1, $4);}
  | comp_right_part DEL_LPAR comp_right_part DEL_RPAR 				{$$ = template("%s(%s)", $1, $3);}
  | comp_right_part DEL_LPAR comp_right_part DEL_RPAR operator 		{$$ = template("%s(%s)%s", $1, $3, $5);}
  | comp_right_part DEL_LBRAC comp_right_part DEL_RBRAC 			{$$ = template("%s[%s]", $1, $3);}
  | comp_right_part DEL_LBRAC comp_right_part DEL_RBRAC operator 	{$$ = template("%s[%s]%s", $1, $3, $5);}
  | comp_right_part DEL_LBRAC comp_right_part DEL_RBRAC DEL_DOT 	{$$ = template("%s[%s].", $1, $3);}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
right_part:
	attribute
  | DEL_HASHTAG 												{$$ = template("");}
  | operator
  | attribute operator											{$$ = template("%s%s", $1, $2);}
  | T_ID DEL_DOT DEL_HASHTAG T_ID 	 							{$$ = template("%s.%s", $1, $4);}
  | T_ID DEL_DOT T_ID DEL_LPAR DEL_RPAR	operator 				{$$ = template("%s.%s(&%s)%s",$1, $3, $1, $6);}
  | attribute DEL_COMMA											{$$ = template("%s, ", $1);}
  | DEL_LPAR right_part DEL_RPAR								{$$ = template("(%s)", $2);}
  | DEL_LPAR right_part DEL_RPAR operator						{$$ = template("(%s)%s", $2, $4);}
  | DEL_LBRAC right_part DEL_RBRAC								{$$ = template("[%s]", $2);}
  | DEL_LBRAC right_part DEL_RBRAC operator 					{$$ = template("[%s]%s", $2, $4);}
  | right_part attribute 										{$$ = template("%s%s", $1, $2);}
  | right_part DEL_HASHTAG  									{$$ = template("%s", $1);}
  | right_part attribute operator  								{$$ = template("%s%s%s", $1, $2, $3);}
  | right_part attribute DEL_COMMA								{$$ = template("%s%s, ", $1, $2);}
  | right_part DEL_LPAR DEL_RPAR 								{$$ = template("%s()", $1);}
  | right_part DEL_LPAR DEL_RPAR operator						{$$ = template("%s()%s", $1, $4);}
  | right_part DEL_LPAR right_part DEL_RPAR 					{$$ = template("%s(%s)", $1, $3);}
  | right_part DEL_LPAR right_part DEL_RPAR operator 			{$$ = template("%s(%s)%s", $1, $3, $5);}
  | right_part DEL_LBRAC right_part DEL_RBRAC 					{$$ = template("%s[%s]", $1, $3);}
  | right_part DEL_LBRAC right_part DEL_RBRAC operator 			{$$ = template("%s[%s]%s", $1, $3, $5);}
  | right_part attribute DEL_DOT attribute DEL_LPAR DEL_RPAR 	{$$ = template("%s%s.%s(&%s)", $1, $2, $4, $2);} 
;
attribute:
    T_ID
  | T_INT
  | T_STRING
  | T_FLOAT
  | KW_main    	{$$ = template("main");}
  | KW_True    	{$$ = template("1");}
  | KW_False	{$$ = template("0");}
  | KW_and     	{$$ = template(" && ");}
;
operator:
	OP_MINUS 	{$$ = template(" - ");}
  |	OP_PLUS  	{$$ = template(" + ");}
  |	OP_MUL   	{$$ = template("*");}
  |	OP_DIV   	{$$ = template(" %s ", "/");}
  | OP_GREATER	{$$ = template(" > ");}
  | OP_EQUAL 	{$$ = template(" = ");}
  | OP_LESS		{$$ = template(" < ");}
  | OP_LEQ		{$$ = template(" <= ");}
  | OP_EQ		{$$ = template(" == ");}
  | OP_MOD		{$$ = template(" %s ", "%"); }
  | OP_NOTEQ    {$$ = template(" != ");}
;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
%%
int main(){
	if (yyparse() == 0)
		printf("\n");
	else
		printf("\n");
}
