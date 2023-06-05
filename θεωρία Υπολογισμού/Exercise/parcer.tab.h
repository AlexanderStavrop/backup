/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARCER_TAB_H_INCLUDED
# define YY_YY_PARCER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_ID = 258,                    /* T_ID  */
    KW_integer = 259,              /* KW_integer  */
    KW_scalar = 260,               /* KW_scalar  */
    KW_str = 261,                  /* KW_str  */
    KW_boolean = 262,              /* KW_boolean  */
    KW_True = 263,                 /* KW_True  */
    KW_False = 264,                /* KW_False  */
    KW_const = 265,                /* KW_const  */
    KW_if = 266,                   /* KW_if  */
    KW_else = 267,                 /* KW_else  */
    KW_endif = 268,                /* KW_endif  */
    KW_for = 269,                  /* KW_for  */
    KW_in = 270,                   /* KW_in  */
    KW_endfor = 271,               /* KW_endfor  */
    KW_while = 272,                /* KW_while  */
    KW_endwhile = 273,             /* KW_endwhile  */
    KW_break = 274,                /* KW_break  */
    KW_continue = 275,             /* KW_continue  */
    KW_not = 276,                  /* KW_not  */
    KW_and = 277,                  /* KW_and  */
    KW_or = 278,                   /* KW_or  */
    KW_def = 279,                  /* KW_def  */
    KW_enddef = 280,               /* KW_enddef  */
    KW_main = 281,                 /* KW_main  */
    KW_return = 282,               /* KW_return  */
    KW_comp = 283,                 /* KW_comp  */
    KW_endcomp = 284,              /* KW_endcomp  */
    KW_of = 285,                   /* KW_of  */
    T_INT = 286,                   /* T_INT  */
    T_FLOAT = 287,                 /* T_FLOAT  */
    T_STRING = 288,                /* T_STRING  */
    OP_PLUS = 289,                 /* OP_PLUS  */
    OP_MINUS = 290,                /* OP_MINUS  */
    OP_MUL = 291,                  /* OP_MUL  */
    OP_DIV = 292,                  /* OP_DIV  */
    OP_MOD = 293,                  /* OP_MOD  */
    OP_EXP = 294,                  /* OP_EXP  */
    OP_EQ = 295,                   /* OP_EQ  */
    OP_NOTEQ = 296,                /* OP_NOTEQ  */
    OP_LESS = 297,                 /* OP_LESS  */
    OP_LEQ = 298,                  /* OP_LEQ  */
    OP_GREATER = 299,              /* OP_GREATER  */
    OP_GEQ = 300,                  /* OP_GEQ  */
    OP_EQUAL = 301,                /* OP_EQUAL  */
    OP_INCREM = 302,               /* OP_INCREM  */
    OP_DECREM = 303,               /* OP_DECREM  */
    OP_MULCREM = 304,              /* OP_MULCREM  */
    OP_DIVCREM = 305,              /* OP_DIVCREM  */
    OP_MODCREM = 306,              /* OP_MODCREM  */
    DEL_QUEST = 307,               /* DEL_QUEST  */
    DEL_LPAR = 308,                /* DEL_LPAR  */
    DEL_RPAR = 309,                /* DEL_RPAR  */
    DEL_COMMA = 310,               /* DEL_COMMA  */
    DEL_LBRAC = 311,               /* DEL_LBRAC  */
    DEL_RBRAC = 312,               /* DEL_RBRAC  */
    DEL_DOTS = 313,                /* DEL_DOTS  */
    DEL_DOT = 314,                 /* DEL_DOT  */
    DEL_HASHTAG = 315,             /* DEL_HASHTAG  */
    COMM_STR = 316,                /* COMM_STR  */
    NEW_LINE = 317                 /* NEW_LINE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 9 "parcer.y"

	char* str;
	struct {
		char* func_ret_type;
		char* func_name;
		char* func_args;
        char* func_body;
        char* func_const;
        char* func_all;
    } comp_func;

#line 138 "parcer.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARCER_TAB_H_INCLUDED  */
