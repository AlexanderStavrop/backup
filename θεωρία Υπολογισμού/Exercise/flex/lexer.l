%{
    #include <stdio.h>
    
    // Identifiers
    #define T_ID        100
    
    // Keywords
    #define KW_integer  200;
    #define KW_scalar   201;
    #define KW_str      202;
    #define KW_boolean  203;
    #define KW_True     204;
    #define KW_False    205;
    #define KW_const    206;
    #define KW_if       207;
    #define KW_else     208;
    #define KW_endif    209;
    #define KW_for      210;
    #define KW_in       211;
    #define KW_endfor   212;
    #define KW_while    213;
    #define KW_endwhile 214;
    #define KW_break    215;
    #define KW_continue 216;
    #define KW_not      217;
    #define KW_and      218;
    #define KW_or       219;
    #define KW_def      220;
    #define KW_enddef   221;
    #define KW_main     222;
    #define KW_return   223;
    #define KW_com      224;
    #define KW_endcomp  225;
    #define KW_of       226;


    // Integers
    #define T_INT       300

    // Floats
    #define T_FLOAT     400
    
    // Strings
    #define T_STRING    500
    
    // Operators
    #define OP_PLUS     600
    #define OP_MINUS    601
    #define OP_MUL      602
    #define OP_DIV      603
    #define OP_MOD      604
    #define OP_EXP      605
    #define OP_EQ       606
    #define OP_NOTEQ    607
    #define OP_LESS     609
    #define OP_LEQ      610
    #define OP_GREATER  611
    #define OP_GEQ      612
    #define OP_EQUAL    613
    #define OP_INCREM   614
    #define OP_DECREM   615
    #define OP_MULCREM  616
    #define OP_DIVCREM  617
    #define OP_MODCREM  618
    
    // Delimiters
    #define DEL_QUEST   700
    #define DEL_LPAR    701
    #define DEL_RPAR    702
    #define DEL_COMMA   703
    #define DEL_LBRAC   704
    #define DEL_RBRAC   705
    #define DEL_DOTS    706
    #define DEL_DOT     707
    
    // Comments
    #define COMM_STR    800
    
    int lineNum = 1;
    
%}

 /* Identifiers */ 
ID      [a-zA-Z][a-zA-Z0-9_]*

 /* Integers */
INT     0|[1-9][0-9]*

 /* Floats */
DECIMAL {INT}"."{INT}
EXP     ["e""E"][\+\-]?[1-9]
FLOAT   {DECIMAL}{EXP}?
    
 /* Strings */
STRING  \"[^\n]*\"  
 
 /* Error handling */
LEADING_ZEROS   [0]+({INT}|{FLOAT})
DECIMAL_LITERAL {INT}[^\n ]+
STRING_LITERAL  \"[^\n]*
malakia ([^A-Za-z0-9\n ]|{DECIMAL})[^\n ]*


%%   
    /* Rules Section */
"integer"           return KW_integer
"scalar"            return KW_scalar;
"str"               return KW_str;
"boolean"           return KW_boolean;
"True"              return KW_True;
"False"             return KW_False;
"const"             return KW_const;
"if"                return KW_if;
"else"              return KW_else;
"endif"             return KW_endif;
"for"               return KW_for;
"in"                return KW_in;
"endfor"            return KW_endfor;
"while"             return KW_while;
"endwhile"          return KW_endwhile;
"break"             return KW_break;
"continue"          return KW_continue;
"not"               return KW_not;
"and"               return KW_and;
"or"                return KW_or;
"def"               return KW_def;
"enddef"            return KW_enddef;
"main"              return KW_main;
"return"            return KW_return;
"com"               return KW_com;
"endcomp"           return KW_endcomp;
"of"                return KW_of;

"+"                 return OP_PLUS; 
"-"                 return OP_MINUS;
"*"                 return OP_MUL; 
"/"                 return OP_DIV;
"%"                 return OP_MOD;
"**"                return OP_EXP;  
"=="                return OP_EQ;
"!="                return OP_NOTEQ;
"<"                 return OP_LESS;
"<="                return OP_LEQ;
">"                 return OP_GREATER;
">="                return OP_GEQ;
"="                 return OP_EQUAL;
"+="                return OP_INCREM;
"-="                return OP_DECREM;
"*="                return OP_MULCREM;
"/="                return OP_DIVCREM;
"%="                return OP_MODCREM;

{ID}                return T_ID;
{INT}               return T_INT;
{FLOAT}             return T_FLOAT;
{STRING}            return T_STRING;
"--"[^\n]*          return COMM_STR;
[ \r\t]+            /* eat whitespace */
\n                  ++lineNum;

{LEADING_ZEROS}     printf("\033[1;33mLine %2d: Leading zeros -> %s\n\033[0m", lineNum, yytext);
{DECIMAL_LITERAL}   printf("\x1B[1;35mLine %2d: Invalid decimal literal -> %s\n\033[0m", lineNum, yytext);
{STRING_LITERAL}    printf("\x1B[1;36mLine %2d: Unterminated string literal -> %s\n\033[0m", lineNum, yytext);
{malakia}           printf("\033[1;31mLine %2d: Lexical error in: %s\n\033[0m", lineNum, yytext);

<<EOF>>             return EOF;

%%
int main(){
   printf("******************************************************\n");
   int token;
   while ((token = yylex()) != EOF)
      printf("Line %2d: Token %d: %s\n", lineNum, token, yytext);
}