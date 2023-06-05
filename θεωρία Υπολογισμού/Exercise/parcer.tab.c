/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parcer.y"

 	#include <stdio.h>
 	#include "cgen.h"
	
 	extern int yylex(void);
    extern int line_num;

#line 79 "parcer.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parcer.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_ID = 3,                       /* T_ID  */
  YYSYMBOL_KW_integer = 4,                 /* KW_integer  */
  YYSYMBOL_KW_scalar = 5,                  /* KW_scalar  */
  YYSYMBOL_KW_str = 6,                     /* KW_str  */
  YYSYMBOL_KW_boolean = 7,                 /* KW_boolean  */
  YYSYMBOL_KW_True = 8,                    /* KW_True  */
  YYSYMBOL_KW_False = 9,                   /* KW_False  */
  YYSYMBOL_KW_const = 10,                  /* KW_const  */
  YYSYMBOL_KW_if = 11,                     /* KW_if  */
  YYSYMBOL_KW_else = 12,                   /* KW_else  */
  YYSYMBOL_KW_endif = 13,                  /* KW_endif  */
  YYSYMBOL_KW_for = 14,                    /* KW_for  */
  YYSYMBOL_KW_in = 15,                     /* KW_in  */
  YYSYMBOL_KW_endfor = 16,                 /* KW_endfor  */
  YYSYMBOL_KW_while = 17,                  /* KW_while  */
  YYSYMBOL_KW_endwhile = 18,               /* KW_endwhile  */
  YYSYMBOL_KW_break = 19,                  /* KW_break  */
  YYSYMBOL_KW_continue = 20,               /* KW_continue  */
  YYSYMBOL_KW_not = 21,                    /* KW_not  */
  YYSYMBOL_KW_and = 22,                    /* KW_and  */
  YYSYMBOL_KW_or = 23,                     /* KW_or  */
  YYSYMBOL_KW_def = 24,                    /* KW_def  */
  YYSYMBOL_KW_enddef = 25,                 /* KW_enddef  */
  YYSYMBOL_KW_main = 26,                   /* KW_main  */
  YYSYMBOL_KW_return = 27,                 /* KW_return  */
  YYSYMBOL_KW_comp = 28,                   /* KW_comp  */
  YYSYMBOL_KW_endcomp = 29,                /* KW_endcomp  */
  YYSYMBOL_KW_of = 30,                     /* KW_of  */
  YYSYMBOL_T_INT = 31,                     /* T_INT  */
  YYSYMBOL_T_FLOAT = 32,                   /* T_FLOAT  */
  YYSYMBOL_T_STRING = 33,                  /* T_STRING  */
  YYSYMBOL_OP_PLUS = 34,                   /* OP_PLUS  */
  YYSYMBOL_OP_MINUS = 35,                  /* OP_MINUS  */
  YYSYMBOL_OP_MUL = 36,                    /* OP_MUL  */
  YYSYMBOL_OP_DIV = 37,                    /* OP_DIV  */
  YYSYMBOL_OP_MOD = 38,                    /* OP_MOD  */
  YYSYMBOL_OP_EXP = 39,                    /* OP_EXP  */
  YYSYMBOL_OP_EQ = 40,                     /* OP_EQ  */
  YYSYMBOL_OP_NOTEQ = 41,                  /* OP_NOTEQ  */
  YYSYMBOL_OP_LESS = 42,                   /* OP_LESS  */
  YYSYMBOL_OP_LEQ = 43,                    /* OP_LEQ  */
  YYSYMBOL_OP_GREATER = 44,                /* OP_GREATER  */
  YYSYMBOL_OP_GEQ = 45,                    /* OP_GEQ  */
  YYSYMBOL_OP_EQUAL = 46,                  /* OP_EQUAL  */
  YYSYMBOL_OP_INCREM = 47,                 /* OP_INCREM  */
  YYSYMBOL_OP_DECREM = 48,                 /* OP_DECREM  */
  YYSYMBOL_OP_MULCREM = 49,                /* OP_MULCREM  */
  YYSYMBOL_OP_DIVCREM = 50,                /* OP_DIVCREM  */
  YYSYMBOL_OP_MODCREM = 51,                /* OP_MODCREM  */
  YYSYMBOL_DEL_QUEST = 52,                 /* DEL_QUEST  */
  YYSYMBOL_DEL_LPAR = 53,                  /* DEL_LPAR  */
  YYSYMBOL_DEL_RPAR = 54,                  /* DEL_RPAR  */
  YYSYMBOL_DEL_COMMA = 55,                 /* DEL_COMMA  */
  YYSYMBOL_DEL_LBRAC = 56,                 /* DEL_LBRAC  */
  YYSYMBOL_DEL_RBRAC = 57,                 /* DEL_RBRAC  */
  YYSYMBOL_DEL_DOTS = 58,                  /* DEL_DOTS  */
  YYSYMBOL_DEL_DOT = 59,                   /* DEL_DOT  */
  YYSYMBOL_DEL_HASHTAG = 60,               /* DEL_HASHTAG  */
  YYSYMBOL_DEL_COMP_FUNC = 61,             /* DEL_COMP_FUNC  */
  YYSYMBOL_COMM_STR = 62,                  /* COMM_STR  */
  YYSYMBOL_NEW_LINE = 63,                  /* NEW_LINE  */
  YYSYMBOL_64_ = 64,                       /* '*'  */
  YYSYMBOL_65_ = 65,                       /* '/'  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_program_start = 67,             /* program_start  */
  YYSYMBOL_program_body = 68,              /* program_body  */
  YYSYMBOL_expression = 69,                /* expression  */
  YYSYMBOL_constant = 70,                  /* constant  */
  YYSYMBOL_assignment = 71,                /* assignment  */
  YYSYMBOL_var_type = 72,                  /* var_type  */
  YYSYMBOL_declaration = 73,               /* declaration  */
  YYSYMBOL_fcn_call = 74,                  /* fcn_call  */
  YYSYMBOL_make_fcn = 75,                  /* make_fcn  */
  YYSYMBOL_fcn_arguments = 76,             /* fcn_arguments  */
  YYSYMBOL_fcn_ret_type = 77,              /* fcn_ret_type  */
  YYSYMBOL_fcn_body = 78,                  /* fcn_body  */
  YYSYMBOL_if_statement = 79,              /* if_statement  */
  YYSYMBOL_if_body = 80,                   /* if_body  */
  YYSYMBOL_while_statement = 81,           /* while_statement  */
  YYSYMBOL_while_body = 82,                /* while_body  */
  YYSYMBOL_for_statement = 83,             /* for_statement  */
  YYSYMBOL_for_arguments = 84,             /* for_arguments  */
  YYSYMBOL_for_body = 85,                  /* for_body  */
  YYSYMBOL_comp_statement = 86,            /* comp_statement  */
  YYSYMBOL_comp_expression = 87,           /* comp_expression  */
  YYSYMBOL_comp_declarations = 88,         /* comp_declarations  */
  YYSYMBOL_comp_declaration_init = 89,     /* comp_declaration_init  */
  YYSYMBOL_comp_declaration = 90,          /* comp_declaration  */
  YYSYMBOL_comp_functions = 91,            /* comp_functions  */
  YYSYMBOL_comp_function = 92,             /* comp_function  */
  YYSYMBOL_comp_fcn_arguments = 93,        /* comp_fcn_arguments  */
  YYSYMBOL_comp_function_body = 94,        /* comp_function_body  */
  YYSYMBOL_comp_assignment = 95,           /* comp_assignment  */
  YYSYMBOL_comp_fcn_call = 96,             /* comp_fcn_call  */
  YYSYMBOL_comp_if_statement = 97,         /* comp_if_statement  */
  YYSYMBOL_comp_if_body = 98,              /* comp_if_body  */
  YYSYMBOL_comp_right_part = 99,           /* comp_right_part  */
  YYSYMBOL_right_part = 100,               /* right_part  */
  YYSYMBOL_attribute = 101,                /* attribute  */
  YYSYMBOL_operator = 102                  /* operator  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2000

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  206
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  455

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   318


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    64,     2,     2,     2,     2,    65,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   142,   142,   143,   152,   153,   154,   155,   156,   157,
     162,   163,   164,   165,   166,   171,   174,   175,   178,   179,
     180,   181,   182,   187,   188,   189,   190,   191,   192,   193,
     198,   199,   204,   205,   206,   207,   208,   211,   212,   213,
     214,   215,   216,   217,   220,   221,   222,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   239,   240,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   255,   258,
     259,   260,   261,   262,   263,   264,   265,   270,   271,   272,
     275,   276,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   293,   297,   298,   299,   300,   303,   304,   307,
     308,   309,   310,   311,   312,   313,   317,   318,   319,   320,
     321,   322,   326,   327,   331,   332,   333,   334,   335,   336,
     340,   341,   342,   343,   344,   347,   348,   349,   350,   351,
     352,   353,   354,   358,   360,   364,   365,   366,   367,   371,
     372,   375,   376,   377,   378,   379,   380,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   430,   431,   432,
     433,   434,   435,   436,   437,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_ID", "KW_integer",
  "KW_scalar", "KW_str", "KW_boolean", "KW_True", "KW_False", "KW_const",
  "KW_if", "KW_else", "KW_endif", "KW_for", "KW_in", "KW_endfor",
  "KW_while", "KW_endwhile", "KW_break", "KW_continue", "KW_not", "KW_and",
  "KW_or", "KW_def", "KW_enddef", "KW_main", "KW_return", "KW_comp",
  "KW_endcomp", "KW_of", "T_INT", "T_FLOAT", "T_STRING", "OP_PLUS",
  "OP_MINUS", "OP_MUL", "OP_DIV", "OP_MOD", "OP_EXP", "OP_EQ", "OP_NOTEQ",
  "OP_LESS", "OP_LEQ", "OP_GREATER", "OP_GEQ", "OP_EQUAL", "OP_INCREM",
  "OP_DECREM", "OP_MULCREM", "OP_DIVCREM", "OP_MODCREM", "DEL_QUEST",
  "DEL_LPAR", "DEL_RPAR", "DEL_COMMA", "DEL_LBRAC", "DEL_RBRAC",
  "DEL_DOTS", "DEL_DOT", "DEL_HASHTAG", "DEL_COMP_FUNC", "COMM_STR",
  "NEW_LINE", "'*'", "'/'", "$accept", "program_start", "program_body",
  "expression", "constant", "assignment", "var_type", "declaration",
  "fcn_call", "make_fcn", "fcn_arguments", "fcn_ret_type", "fcn_body",
  "if_statement", "if_body", "while_statement", "while_body",
  "for_statement", "for_arguments", "for_body", "comp_statement",
  "comp_expression", "comp_declarations", "comp_declaration_init",
  "comp_declaration", "comp_functions", "comp_function",
  "comp_fcn_arguments", "comp_function_body", "comp_assignment",
  "comp_fcn_call", "comp_if_statement", "comp_if_body", "comp_right_part",
  "right_part", "attribute", "operator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-409)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-188)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1846,    80,  -409,  -409,  1880,  -409,  -409,  1888,  -409,    13,
    -409,  -409,  -409,    20,  1846,   -18,  -409,  -409,   862,  -409,
       9,    19,    97,  1888,    22,    16,    33,    31,  -409,    40,
      45,  -409,    53,    61,    86,  -409,  -409,    93,  -409,  -409,
     647,   647,  -409,   517,  -409,   101,   111,  1888,   551,  -409,
     807,    94,  -409,  -409,  -409,  -409,  -409,   113,  -409,  -409,
    -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
     647,   647,  -409,  1380,  1889,  -409,   320,  -409,  -409,  -409,
    -409,  -409,   -27,   124,   127,  -409,   -20,   541,   165,   183,
     -14,   135,   133,     2,   743,   792,   544,   647,  -409,  1905,
    -409,  -409,  -409,   647,  -409,  -409,   148,   153,  1545,  1727,
       1,  -409,   115,  -409,   451,  -409,   182,   201,   155,    -7,
     161,  -409,   214,   166,   221,  1953,  1953,  1953,   804,   847,
    -409,  -409,  1380,    82,   172,   223,   178,  -409,   647,   184,
    1571,   192,   194,   196,   145,  1597,  1727,  1727,  -409,  -409,
      33,   193,   197,  1888,   606,   200,   199,  -409,  -409,   204,
    -409,   210,   208,  -409,  -409,  -409,  -409,  1953,  1953,   195,
     206,   215,   647,   264,   225,   647,   859,  -409,  -409,   647,
     229,   230,   234,   239,  -409,  -409,  -409,   311,  -409,  1623,
    1649,  -409,    33,   237,  -409,  1484,  -409,   233,   242,   240,
    1953,  -409,  -409,  -409,  -409,  -409,   905,   245,  1753,   913,
    -409,   946,  -409,  -409,  -409,  -409,   246,  -409,  -409,  -409,
      33,    17,  1464,    33,  -409,   247,   273,   647,   257,   258,
     260,   268,  1675,   255,  -409,   647,   262,    18,    96,    48,
     265,   508,   266,   978,  -409,  -409,  -409,  -409,  -409,   647,
     274,   275,   278,   279,  1831,  1010,   280,   287,  -409,   689,
     338,    30,   291,   296,   297,   154,   158,    96,   647,  1872,
     298,   302,  1701,   347,   647,  -409,  1036,  -409,  -409,  -409,
    -409,   647,   307,   308,   309,  1779,   360,  1504,   689,   689,
     689,  -409,  1051,  1921,  -409,    58,  -409,   689,   313,   314,
     315,  -409,  -409,  -409,  -409,  -409,   224,   236,  1090,   317,
    -409,  -409,   312,  -409,   647,   319,   325,   333,   335,   731,
    -409,  1105,  -409,  -409,  -409,  -409,   647,   337,   343,   345,
     328,  -409,  1406,  -409,  1144,  1159,  1185,  -409,   598,   689,
    -409,  1937,  -409,  -409,   689,  1519,     3,  1200,  -409,  -409,
    -409,  -409,  -409,  -409,  -409,   508,  1240,  -409,  -409,  -409,
    -409,  -409,   359,  -409,  1255,  -409,  -409,  -409,   459,   383,
    -409,  -409,  1888,   348,   344,  1953,  1953,  1953,  1294,  1309,
    -409,  -409,  1422,  -409,  1448,   404,  -409,  -409,  1805,  -409,
     351,  -409,   352,   353,  1888,  1953,  -409,    24,  -409,  -409,
    -409,  1953,  1953,  -409,   362,  -409,  -409,    33,   382,  -409,
    -409,   689,   413,   365,   363,  -409,  -409,   107,  -409,  -409,
    -409,  1888,  1348,   390,  -409,   416,   366,  -409,   689,  -409,
     368,   373,   372,  -409,  -409,  1888,  -409,   219,    24,  1364,
    -409,  -409,    33,   375,  -409,   376,  -409,   122,  -409,  -409,
      33,    33,  -409,  -409,  -409
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,   187,   192,   193,     0,    14,   194,     0,   191,     0,
     188,   190,   189,     0,     3,     0,    10,    12,    11,    13,
       0,     0,     0,     0,     0,   187,     0,     0,   187,     0,
       0,     1,     0,     0,     0,     4,    28,     0,     6,     8,
       0,     0,    25,     0,    23,     0,     0,     0,     0,    15,
       0,     0,     5,     7,     9,    29,    27,   187,   196,   195,
     197,   198,   204,   203,   205,   201,   202,   199,   200,   206,
       0,     0,   167,    16,   166,   168,     0,    22,    19,    21,
      18,    20,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,   177,
     172,   169,    30,     0,    26,    31,     0,     0,     0,     0,
       0,    42,     0,    40,     0,    37,     0,     0,     0,     0,
       0,    97,     0,     0,     0,   173,   175,   181,     0,     0,
     180,   179,    17,     0,     0,     0,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    41,
       0,     0,   101,     0,     0,    99,     0,    98,    92,     0,
     112,     0,     0,   170,   174,   176,   182,   183,   185,     0,
       0,     0,     0,     0,     0,     0,     0,    47,    33,     0,
       0,     0,     0,     0,    49,    51,    53,     0,    35,     0,
       0,    38,     0,     0,    22,     0,   113,   104,     0,   103,
       0,   184,   186,    46,    44,    45,     0,     0,     0,     0,
      55,     0,    48,    50,    52,    54,     0,    34,    36,    39,
       0,     0,     0,     0,   171,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,     0,   102,     0,     0,     0,
     105,     0,     0,     0,    82,    84,    86,    88,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   114,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,    83,    85,    87,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   148,     0,   147,   149,     0,   116,     0,     0,     0,
       0,   125,   127,   129,   117,   115,     0,     0,     0,     0,
      59,    62,     0,    57,     0,     0,     0,     0,     0,     0,
      91,     0,    69,    71,    73,    68,     0,     0,     0,     0,
       0,   135,     0,   120,     0,     0,     0,   131,     0,     0,
     157,   156,   151,   150,     0,     0,     0,     0,   126,   128,
     130,   118,   119,    66,    60,     0,     0,    61,    63,    65,
      64,    81,     0,    75,     0,    70,    72,    74,     0,     0,
     137,   123,     0,     0,     0,   152,   154,   160,     0,     0,
     159,   158,   133,   136,     0,     0,   134,   132,     0,    67,
       0,    76,    22,     0,     0,   121,   124,     0,   153,   155,
     161,   162,   164,   138,     0,    58,    80,     0,     0,   122,
      96,     0,     0,     0,    93,    94,    95,     0,   163,   165,
      78,     0,     0,     0,   141,     0,     0,   139,     0,   143,
       0,     0,     0,   145,   107,     0,   106,     0,     0,     0,
     144,   142,     0,     0,   110,     0,   109,     0,   146,    79,
       0,     0,   140,   108,   111
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -409,  -409,  -409,    26,  -409,   430,   -24,  -409,  -409,   424,
     263,  -109,   -98,  -110,    85,   261,  -409,  -108,  -409,  -409,
     438,  -408,  -409,   367,   -48,  -409,   336,   108,  -170,  -237,
    -205,  -253,    23,  -223,   334,     0,   103
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    13,    14,   139,    16,    17,    44,    18,    19,    20,
      87,   109,   140,   141,   272,   142,   285,   143,   174,   232,
      21,   413,    90,    91,   414,   119,   120,   332,   261,   262,
     263,   264,   417,   292,    73,    74,    75
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   147,    49,    92,    27,   123,   256,    29,   300,   431,
     117,   145,   300,    56,    22,   107,    30,   117,    37,   103,
      31,   256,   158,    45,   298,    46,    15,   256,   298,   257,
     181,    48,   183,   256,    35,   181,   107,   183,   108,   431,
      32,   257,    92,   258,   410,   259,    89,    84,   189,   190,
      88,   411,   107,   300,   300,   296,   299,   297,   104,   146,
     299,    38,   124,   385,   115,   334,   335,   336,   265,   298,
     298,    39,    47,    99,   347,   237,    99,    40,   260,   181,
     181,   183,   183,   107,   412,   169,   170,   112,   149,   171,
     260,    48,   155,    50,    99,    99,   306,   307,   229,   256,
     231,   299,   299,    51,   344,    52,   266,   257,   144,   144,
     256,   345,   238,    53,   151,   378,   379,   346,   134,   426,
     427,   382,   251,   259,   253,   256,   191,   410,    99,    99,
     267,   271,    99,   134,   428,   452,    23,   199,    54,    24,
     144,   386,   410,    40,   283,   144,   144,   144,    55,   428,
      41,    48,    42,   193,    89,    43,   260,   256,    82,   429,
     415,   256,   316,   318,    83,   257,   180,   412,   219,   257,
     148,   180,    93,    48,   429,   328,    99,   101,   105,   304,
     415,   297,   412,   305,   106,   259,   116,   121,   422,   144,
     144,    40,   416,   122,   103,    88,   236,   133,    41,   240,
      42,   415,   131,   187,   156,   439,    99,   157,   144,    99,
     415,    99,   416,   160,   260,   180,   180,   161,   260,   162,
     113,   114,   112,    48,   163,   172,   173,   256,   164,   165,
     166,   175,   144,   416,   228,   257,   177,   152,   153,   256,
     154,    22,   416,    99,   184,   271,   185,   257,   186,   351,
     192,   297,   195,   203,    22,    99,   196,  -107,   250,   293,
    -106,   352,   200,   297,   204,   197,   198,   270,    48,    22,
     201,   202,    22,   205,   444,   445,    99,    48,   316,   207,
     282,   212,   213,   208,   260,    22,   214,   333,   293,   293,
     293,   215,   341,  -110,   220,   309,   260,   293,   315,   223,
    -109,   226,   235,   224,   242,   241,   369,   430,    99,   244,
     245,   327,   246,   254,    77,    78,    79,    80,    81,    99,
     247,    99,  -108,    28,   274,  -111,   277,   278,     2,     3,
     279,   280,   373,   287,   341,   341,   341,   430,   293,   293,
     288,   295,     6,   301,   293,   333,     8,   341,   302,   303,
     310,    10,    11,    12,   311,    22,    99,   216,   134,   322,
     323,   324,   294,   330,    99,   348,   349,   350,   393,   354,
     355,   357,   395,    96,   102,    76,    97,   358,   341,   341,
      98,   270,   341,   420,   373,   359,   368,   360,    22,   365,
     390,   294,   294,   294,   408,   366,   343,   367,   394,   436,
     294,   182,   397,   396,    94,    95,   182,   404,   406,  -187,
     407,   293,   421,   446,   315,   345,   423,   424,   449,   437,
     440,   432,   341,   425,   438,   441,   453,   454,   293,   442,
     128,   129,   450,   451,    26,   443,   344,   132,    33,   341,
     388,   294,   294,   345,   381,   434,   435,   294,    48,   346,
     182,   182,    34,   384,    28,   159,     0,   118,   222,     2,
       3,   447,   392,    78,    79,    80,    81,     2,     3,   230,
       0,     0,   176,     6,     0,     0,     0,     8,   398,   399,
     400,     6,    10,    11,    12,     8,     0,     0,     0,     0,
      10,    11,    12,   252,     0,     0,     0,     0,   409,     0,
       0,     0,   273,     0,   418,   419,   206,     0,   150,   209,
       0,     1,     0,   211,   294,   284,     2,     3,     4,   134,
      77,    78,    79,    80,    81,   136,     0,     0,     5,     0,
       6,   294,     0,   317,     8,   268,     0,     0,     0,    10,
      11,    12,     0,     0,    28,     0,   329,    57,     0,     2,
       3,     0,     2,     3,    85,    78,    79,    80,    81,     0,
       0,   243,     0,     6,     0,     0,     6,     8,   269,   255,
       8,     0,    10,    11,    12,    10,    11,    12,    58,    59,
      60,    61,    62,   276,    63,    64,    65,    66,    67,     0,
      68,    69,     0,     0,     0,   110,   111,    70,   127,     0,
      71,    28,   308,     0,    72,     0,     2,     3,   319,   194,
      78,    79,    80,    81,     0,   321,   273,     0,     0,     0,
       6,     0,     0,     0,     8,     0,     0,     0,     0,    10,
      11,    12,    58,    59,    60,    61,    62,     0,    63,    64,
      65,    66,    67,     0,    68,    69,     0,     0,   356,   317,
      57,   289,   377,     0,   290,     2,     3,     0,   291,     0,
     364,     0,     0,     0,     0,     0,     0,     0,     0,     6,
       0,     0,     0,     8,     0,     0,     0,     0,    10,    11,
      12,    58,    59,    60,    61,    62,     0,    63,    64,    65,
      66,    67,    28,    68,    69,     0,     0,     2,     3,     0,
      70,     0,     0,    71,     0,     0,     0,    72,     0,     0,
       0,     6,     0,     0,     0,     8,     0,     0,     0,     0,
      10,    11,    12,    58,    59,    60,    61,    62,     0,    63,
      64,    65,    66,    67,    28,    68,    69,     0,     0,     2,
       3,     0,   289,     0,     0,   290,    28,     0,     0,   291,
       0,     2,     3,     6,     0,     0,     0,     8,     0,     0,
       0,     0,    10,    11,    12,     6,     0,     0,     0,     8,
       0,     0,     0,     0,    10,    11,    12,     0,     0,     0,
       0,     0,     0,     0,    96,     0,     0,    97,   361,   362,
       0,    98,     0,     0,     0,    28,    96,   125,     0,    97,
       2,     3,     0,    98,     0,     0,     0,    28,     0,     0,
      28,     0,     2,     3,     6,     2,     3,     0,     8,     0,
       0,     0,     0,    10,    11,    12,     6,     0,     0,     6,
       8,     0,     0,     8,     0,    10,    11,    12,    10,    11,
      12,     0,     0,     0,     0,    96,     0,     0,    97,   126,
      28,     0,    98,     0,     0,     2,     3,    96,   167,     0,
      97,    86,    28,     0,    98,    28,     0,     2,     3,     6,
       2,     3,     0,     8,     0,     0,     0,     0,    10,    11,
      12,     6,     0,     0,     6,     8,     0,     0,     8,     0,
      10,    11,    12,    10,    11,    12,     0,     0,     0,     0,
      96,     0,     0,    97,   168,     0,     0,    98,    28,     0,
       0,   210,    96,     2,     3,    97,    28,    36,     0,    98,
       0,     2,     3,     0,     0,     0,     0,     6,     0,     0,
       0,     8,     0,     0,     0,     6,    10,    11,    12,     8,
       0,     0,     0,     0,    10,    11,    12,     0,     0,    28,
       0,     0,     0,     0,     2,     3,     0,     0,    96,   225,
       0,    97,     0,     0,     0,    98,    96,   233,     6,    97,
       0,     0,     8,    98,     0,     0,     0,    10,    11,    12,
       0,    28,     0,     0,     0,     0,     2,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   234,    96,
       6,     0,    97,     0,     8,     0,    98,     0,     0,    10,
      11,    12,     0,    28,     0,     0,     0,     0,     2,     3,
       0,     0,     0,     0,   286,     0,     0,     0,     0,     0,
     275,    96,     6,     0,    97,     0,     8,     0,    98,    28,
       0,    10,    11,    12,     2,     3,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     6,     2,
       3,     0,     8,    96,     0,     0,    97,    10,    11,    12,
      98,     0,     0,     6,     0,     0,     0,     8,     0,     0,
       0,     0,    10,    11,    12,     0,     0,     0,   320,    96,
       0,     0,    97,    28,     0,     0,    98,     0,     2,     3,
       0,     0,     0,   337,   338,     0,     0,   339,    28,     0,
       0,   340,     6,     2,     3,     0,     8,     0,     0,     0,
       0,    10,    11,    12,     0,     0,     0,     6,     0,     0,
       0,     8,     0,     0,     0,     0,    10,    11,    12,     0,
       0,     0,   353,    96,     0,     0,    97,    28,     0,     0,
      98,     0,     2,     3,     0,     0,     0,   363,    96,     0,
       0,    97,    28,     0,     0,    98,     6,     2,     3,     0,
       8,     0,     0,     0,     0,    10,    11,    12,     0,     0,
       0,     6,     0,     0,     0,     8,     0,     0,    28,     0,
      10,    11,    12,     2,     3,     0,     0,   338,   374,     0,
     339,     0,     0,    28,   340,     0,     0,     6,     2,     3,
       0,     8,   338,   375,     0,   339,    10,    11,    12,   340,
       0,     0,     6,     0,     0,     0,     8,     0,     0,     0,
       0,    10,    11,    12,     0,     0,     0,     0,   338,     0,
       0,   339,   376,    28,     0,   340,     0,     0,     2,     3,
       0,     0,   387,   338,     0,     0,   339,     0,    28,     0,
     340,     0,     6,     2,     3,     0,     8,     0,     0,     0,
       0,    10,    11,    12,     0,     0,     0,     6,     0,     0,
       0,     8,     0,     0,     0,     0,    10,    11,    12,     0,
       0,     0,   389,    96,     0,     0,    97,    28,     0,     0,
      98,     0,     2,     3,     0,     0,     0,   391,    96,     0,
       0,    97,    28,     0,     0,    98,     6,     2,     3,     0,
       8,     0,     0,     0,     0,    10,    11,    12,     0,     0,
       0,     6,     0,     0,     0,     8,     0,     0,     0,     0,
      10,    11,    12,     0,     0,     0,     0,   338,   401,     0,
     339,    28,     0,     0,   340,     0,     2,     3,     0,     0,
       0,     0,   338,     0,     0,   339,   402,    28,     0,   340,
       6,     0,     2,     3,     8,     0,     0,     0,     0,    10,
      11,    12,     0,    28,     0,     0,     6,     0,     2,     3,
       8,     0,     0,     0,     0,    10,    11,    12,     0,     0,
     433,   338,     6,     0,   339,     0,     8,     0,   340,    28,
       0,    10,    11,    12,     2,     3,   448,   338,     0,     0,
     339,     0,     0,     0,   340,    28,     0,     0,     6,     0,
       2,     3,     8,    96,     0,     0,    97,    10,    11,    12,
      98,     0,     0,     0,     6,     0,     0,     0,     8,     0,
       0,    28,     0,    10,    11,    12,     2,     3,     0,     0,
     370,   371,     0,     0,     0,     0,   372,    28,     0,     0,
       6,     0,     2,     3,     8,   338,     0,     0,   339,    10,
      11,    12,   340,     0,     0,     0,     6,    28,     0,     0,
       8,     0,     2,     3,     0,    10,    11,    12,     0,     0,
       0,     0,   403,   371,     0,     0,     6,    28,   372,     0,
       8,     0,     2,     3,     0,    10,    11,    12,   239,   111,
       0,     0,    28,     0,     0,     0,     6,     2,     3,     0,
       8,     0,     0,     0,     0,    10,    11,    12,   221,     0,
       0,     6,     0,     0,     0,     8,     0,     0,     1,     0,
      10,    11,    12,     2,     3,     4,   134,     0,   331,   135,
       0,     0,   136,     0,     0,     5,     0,     6,     0,     0,
     137,     8,   138,   383,     1,     0,    10,    11,    12,     2,
       3,     4,   134,     0,     0,   135,     0,     0,   136,     0,
       0,     5,     0,     6,     0,     0,   178,     8,   179,     0,
       1,     0,    10,    11,    12,     2,     3,     4,   134,     0,
       0,   135,     0,     0,   136,     0,     0,     5,     0,     6,
       0,     0,   188,     8,   179,     0,     1,     0,    10,    11,
      12,     2,     3,     4,   134,     0,     0,   135,     0,     0,
     136,     0,     0,     5,     0,     6,     0,     0,   217,     8,
     179,     0,     1,     0,    10,    11,    12,     2,     3,     4,
     134,     0,     0,   135,     0,     0,   136,     0,     0,     5,
       0,     6,     0,     0,   218,     8,   179,     0,     1,     0,
      10,    11,    12,     2,     3,     4,   134,     0,     0,   135,
       0,   248,   136,     0,     0,     5,     0,     6,     0,     0,
       0,     8,   249,     0,     1,     0,    10,    11,    12,     2,
       3,     4,   134,   312,   313,     0,     0,     0,   136,     0,
       0,     5,     0,     6,     0,     0,     0,     8,   314,     0,
       1,     0,    10,    11,    12,     2,     3,     4,   134,     0,
       0,   135,     0,     0,   136,     0,     0,     5,     0,     6,
       0,     0,     0,     8,   138,     0,     1,     0,    10,    11,
      12,     2,     3,     4,   134,     0,     0,   135,     0,     0,
     136,     0,     0,     5,     0,     6,     0,     0,     0,     8,
     227,     0,     1,     0,    10,    11,    12,     2,     3,     4,
     134,     0,     0,     0,     0,     0,   136,   325,     0,     5,
       0,     6,     0,     0,     0,     8,   326,     0,     1,     0,
      10,    11,    12,     2,     3,     4,   134,     0,   405,     0,
       0,     0,   136,     0,     0,     5,     0,     6,     0,     0,
       0,     8,   314,     0,     1,     0,    10,    11,    12,     2,
       3,     4,   134,     0,     0,     0,     0,     0,   136,     1,
       0,     5,     0,     6,     2,     3,     4,     8,   281,     0,
       0,     0,    10,    11,    12,     0,     5,     0,     6,     0,
       7,     0,     8,     0,     9,     1,     0,    10,    11,    12,
       2,     3,     4,    25,     0,     0,     0,     0,     2,     3,
       0,    28,     5,     0,     6,     0,     2,     3,     8,     0,
       0,     0,     6,    10,    11,    12,     8,     0,     0,     0,
       6,    10,    11,    12,     8,     0,     0,     0,     0,    10,
      11,    12,     0,    58,    59,    60,    61,    62,     0,    63,
      64,    65,    66,    67,     0,    68,    69,     0,     0,    58,
      59,    60,    61,    62,   100,    63,    64,    65,    66,    67,
       0,    68,    69,     0,     0,    58,    59,    60,    61,    62,
     130,    63,    64,    65,    66,    67,     0,    68,    69,     0,
       0,    58,    59,    60,    61,    62,   342,    63,    64,    65,
      66,    67,     0,    68,    69,     0,     0,    58,    59,    60,
      61,    62,   380,    63,    64,    65,    66,    67,     0,    68,
      69
};

static const yytype_int16 yycheck[] =
{
       0,   110,    26,    51,     4,     3,     3,     7,   261,   417,
      24,   109,   265,    37,    14,    35,     3,    24,    18,    46,
       0,     3,    29,    23,   261,     3,     0,     3,   265,    11,
     140,    58,   140,     3,    52,   145,    35,   145,    58,   447,
      14,    11,    90,    25,    20,    27,    60,    47,   146,   147,
      50,    27,    35,   306,   307,    25,   261,    27,    82,    58,
     265,    52,    60,    60,    88,   288,   289,   290,   238,   306,
     307,    52,    56,    73,   297,    58,    76,    46,    60,   189,
     190,   189,   190,    35,    60,     3,     4,    87,   112,     7,
      60,    58,   116,    53,    94,    95,   266,   267,   208,     3,
     208,   306,   307,    58,    46,    52,    58,    11,   108,   109,
       3,    53,   221,    52,   114,   338,   339,    59,    11,    12,
      13,   344,   232,    27,   232,     3,   150,    20,   128,   129,
     239,   241,   132,    11,    27,    13,    56,   161,    52,    59,
     140,   346,    20,    46,   254,   145,   146,   147,    55,    27,
      53,    58,    55,   153,    60,    58,    60,     3,    57,    52,
     397,     3,   272,   273,    53,    11,   140,    60,   192,    11,
      55,   145,    59,    58,    52,   285,   176,    74,    54,    25,
     417,    27,    60,    25,    57,    27,     3,    52,   411,   189,
     190,    46,   397,    60,    46,   195,   220,    44,    53,   223,
      55,   438,    99,    58,     3,   428,   206,    52,   208,   209,
     447,   211,   417,    52,    60,   189,   190,     3,    60,    53,
      55,    56,   222,    58,     3,    53,     3,     3,   125,   126,
     127,    53,   232,   438,   208,    11,    52,    55,    56,     3,
      58,   241,   447,   243,    52,   355,    52,    11,    52,    25,
      57,    27,    53,    58,   254,   255,    52,    60,   232,   259,
      60,    25,    54,    27,    58,    55,    56,   241,    58,   269,
     167,   168,   272,    58,    55,    56,   276,    58,   388,    15,
     254,    52,    52,    58,    60,   285,    52,   287,   288,   289,
     290,    52,   292,    60,    57,   269,    60,   297,   272,    57,
      60,    56,    56,   200,    31,    58,   330,   417,   308,    52,
      52,   285,    52,    58,     3,     4,     5,     6,     7,   319,
      52,   321,    60,     3,    58,    60,    52,    52,     8,     9,
      52,    52,   332,    53,   334,   335,   336,   447,   338,   339,
      53,     3,    22,    52,   344,   345,    26,   347,    52,    52,
      52,    31,    32,    33,    52,   355,   356,    46,    11,    52,
      52,    52,   259,     3,   364,    52,    52,    52,   368,    52,
      58,    52,   372,    53,    54,    41,    56,    52,   378,   379,
      60,   355,   382,   407,   384,    52,    58,    52,   388,    52,
      31,   288,   289,   290,   394,    52,   293,    52,    15,   423,
     297,   140,    58,    55,    70,    71,   145,     3,    57,    57,
      57,   411,    30,   437,   388,    53,     3,    52,   442,     3,
      52,   421,   422,    60,    58,    52,   450,   451,   428,    57,
      96,    97,    57,    57,     4,   435,    46,   103,    14,   439,
     355,   338,   339,    53,   341,    55,    56,   344,    58,    59,
     189,   190,    14,   345,     3,   119,    -1,    90,   195,     8,
       9,   438,     3,     4,     5,     6,     7,     8,     9,   208,
      -1,    -1,   138,    22,    -1,    -1,    -1,    26,   375,   376,
     377,    22,    31,    32,    33,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,   232,    -1,    -1,    -1,    -1,   395,    -1,
      -1,    -1,   241,    -1,   401,   402,   172,    -1,    57,   175,
      -1,     3,    -1,   179,   411,   254,     8,     9,    10,    11,
       3,     4,     5,     6,     7,    17,    -1,    -1,    20,    -1,
      22,   428,    -1,   272,    26,    27,    -1,    -1,    -1,    31,
      32,    33,    -1,    -1,     3,    -1,   285,     3,    -1,     8,
       9,    -1,     8,     9,     3,     4,     5,     6,     7,    -1,
      -1,   227,    -1,    22,    -1,    -1,    22,    26,    60,   235,
      26,    -1,    31,    32,    33,    31,    32,    33,    34,    35,
      36,    37,    38,   249,    40,    41,    42,    43,    44,    -1,
      46,    47,    -1,    -1,    -1,    54,    55,    53,    54,    -1,
      56,     3,   268,    -1,    60,    -1,     8,     9,   274,     3,
       4,     5,     6,     7,    -1,   281,   355,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    40,    41,
      42,    43,    44,    -1,    46,    47,    -1,    -1,   314,   388,
       3,    53,    54,    -1,    56,     8,     9,    -1,    60,    -1,
     326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    40,    41,    42,
      43,    44,     3,    46,    47,    -1,    -1,     8,     9,    -1,
      53,    -1,    -1,    56,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    44,     3,    46,    47,    -1,    -1,     8,
       9,    -1,    53,    -1,    -1,    56,     3,    -1,    -1,    60,
      -1,     8,     9,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    22,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    56,    57,    58,
      -1,    60,    -1,    -1,    -1,     3,    53,    54,    -1,    56,
       8,     9,    -1,    60,    -1,    -1,    -1,     3,    -1,    -1,
       3,    -1,     8,     9,    22,     8,     9,    -1,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    22,    -1,    -1,    22,
      26,    -1,    -1,    26,    -1,    31,    32,    33,    31,    32,
      33,    -1,    -1,    -1,    -1,    53,    -1,    -1,    56,    57,
       3,    -1,    60,    -1,    -1,     8,     9,    53,    54,    -1,
      56,    54,     3,    -1,    60,     3,    -1,     8,     9,    22,
       8,     9,    -1,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    22,    -1,    -1,    22,    26,    -1,    -1,    26,    -1,
      31,    32,    33,    31,    32,    33,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    56,    57,    -1,    -1,    60,     3,    -1,
      -1,    52,    53,     8,     9,    56,     3,    55,    -1,    60,
      -1,     8,     9,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    22,    31,    32,    33,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    -1,     3,
      -1,    -1,    -1,    -1,     8,     9,    -1,    -1,    53,    54,
      -1,    56,    -1,    -1,    -1,    60,    53,    54,    22,    56,
      -1,    -1,    26,    60,    -1,    -1,    -1,    31,    32,    33,
      -1,     3,    -1,    -1,    -1,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      22,    -1,    56,    -1,    26,    -1,    60,    -1,    -1,    31,
      32,    33,    -1,     3,    -1,    -1,    -1,    -1,     8,     9,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      52,    53,    22,    -1,    56,    -1,    26,    -1,    60,     3,
      -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    22,     8,
       9,    -1,    26,    53,    -1,    -1,    56,    31,    32,    33,
      60,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    -1,    -1,    52,    53,
      -1,    -1,    56,     3,    -1,    -1,    60,    -1,     8,     9,
      -1,    -1,    -1,    52,    53,    -1,    -1,    56,     3,    -1,
      -1,    60,    22,     8,     9,    -1,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
      -1,    -1,    52,    53,    -1,    -1,    56,     3,    -1,    -1,
      60,    -1,     8,     9,    -1,    -1,    -1,    52,    53,    -1,
      -1,    56,     3,    -1,    -1,    60,    22,     8,     9,    -1,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    26,    -1,    -1,     3,    -1,
      31,    32,    33,     8,     9,    -1,    -1,    53,    54,    -1,
      56,    -1,    -1,     3,    60,    -1,    -1,    22,     8,     9,
      -1,    26,    53,    54,    -1,    56,    31,    32,    33,    60,
      -1,    -1,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    56,    57,     3,    -1,    60,    -1,    -1,     8,     9,
      -1,    -1,    52,    53,    -1,    -1,    56,    -1,     3,    -1,
      60,    -1,    22,     8,     9,    -1,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
      -1,    -1,    52,    53,    -1,    -1,    56,     3,    -1,    -1,
      60,    -1,     8,     9,    -1,    -1,    -1,    52,    53,    -1,
      -1,    56,     3,    -1,    -1,    60,    22,     8,     9,    -1,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    53,    54,    -1,
      56,     3,    -1,    -1,    60,    -1,     8,     9,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    56,    57,     3,    -1,    60,
      22,    -1,     8,     9,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,    -1,     3,    -1,    -1,    22,    -1,     8,     9,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    -1,
      52,    53,    22,    -1,    56,    -1,    26,    -1,    60,     3,
      -1,    31,    32,    33,     8,     9,    52,    53,    -1,    -1,
      56,    -1,    -1,    -1,    60,     3,    -1,    -1,    22,    -1,
       8,     9,    26,    53,    -1,    -1,    56,    31,    32,    33,
      60,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,
      -1,     3,    -1,    31,    32,    33,     8,     9,    -1,    -1,
      54,    55,    -1,    -1,    -1,    -1,    60,     3,    -1,    -1,
      22,    -1,     8,     9,    26,    53,    -1,    -1,    56,    31,
      32,    33,    60,    -1,    -1,    -1,    22,     3,    -1,    -1,
      26,    -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,
      -1,    -1,    54,    55,    -1,    -1,    22,     3,    60,    -1,
      26,    -1,     8,     9,    -1,    31,    32,    33,    54,    55,
      -1,    -1,     3,    -1,    -1,    -1,    22,     8,     9,    -1,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    54,    -1,
      -1,    22,    -1,    -1,    -1,    26,    -1,    -1,     3,    -1,
      31,    32,    33,     8,     9,    10,    11,    -1,    54,    14,
      -1,    -1,    17,    -1,    -1,    20,    -1,    22,    -1,    -1,
      25,    26,    27,    54,     3,    -1,    31,    32,    33,     8,
       9,    10,    11,    -1,    -1,    14,    -1,    -1,    17,    -1,
      -1,    20,    -1,    22,    -1,    -1,    25,    26,    27,    -1,
       3,    -1,    31,    32,    33,     8,     9,    10,    11,    -1,
      -1,    14,    -1,    -1,    17,    -1,    -1,    20,    -1,    22,
      -1,    -1,    25,    26,    27,    -1,     3,    -1,    31,    32,
      33,     8,     9,    10,    11,    -1,    -1,    14,    -1,    -1,
      17,    -1,    -1,    20,    -1,    22,    -1,    -1,    25,    26,
      27,    -1,     3,    -1,    31,    32,    33,     8,     9,    10,
      11,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    20,
      -1,    22,    -1,    -1,    25,    26,    27,    -1,     3,    -1,
      31,    32,    33,     8,     9,    10,    11,    -1,    -1,    14,
      -1,    16,    17,    -1,    -1,    20,    -1,    22,    -1,    -1,
      -1,    26,    27,    -1,     3,    -1,    31,    32,    33,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    17,    -1,
      -1,    20,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,
       3,    -1,    31,    32,    33,     8,     9,    10,    11,    -1,
      -1,    14,    -1,    -1,    17,    -1,    -1,    20,    -1,    22,
      -1,    -1,    -1,    26,    27,    -1,     3,    -1,    31,    32,
      33,     8,     9,    10,    11,    -1,    -1,    14,    -1,    -1,
      17,    -1,    -1,    20,    -1,    22,    -1,    -1,    -1,    26,
      27,    -1,     3,    -1,    31,    32,    33,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    -1,    26,    27,    -1,     3,    -1,
      31,    32,    33,     8,     9,    10,    11,    -1,    13,    -1,
      -1,    -1,    17,    -1,    -1,    20,    -1,    22,    -1,    -1,
      -1,    26,    27,    -1,     3,    -1,    31,    32,    33,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    17,     3,
      -1,    20,    -1,    22,     8,     9,    10,    26,    27,    -1,
      -1,    -1,    31,    32,    33,    -1,    20,    -1,    22,    -1,
      24,    -1,    26,    -1,    28,     3,    -1,    31,    32,    33,
       8,     9,    10,     3,    -1,    -1,    -1,    -1,     8,     9,
      -1,     3,    20,    -1,    22,    -1,     8,     9,    26,    -1,
      -1,    -1,    22,    31,    32,    33,    26,    -1,    -1,    -1,
      22,    31,    32,    33,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,    -1,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    44,    -1,    46,    47,    -1,    -1,    34,
      35,    36,    37,    38,    55,    40,    41,    42,    43,    44,
      -1,    46,    47,    -1,    -1,    34,    35,    36,    37,    38,
      55,    40,    41,    42,    43,    44,    -1,    46,    47,    -1,
      -1,    34,    35,    36,    37,    38,    55,    40,    41,    42,
      43,    44,    -1,    46,    47,    -1,    -1,    34,    35,    36,
      37,    38,    55,    40,    41,    42,    43,    44,    -1,    46,
      47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     8,     9,    10,    20,    22,    24,    26,    28,
      31,    32,    33,    67,    68,    69,    70,    71,    73,    74,
      75,    86,   101,    56,    59,     3,    71,   101,     3,   101,
       3,     0,    69,    75,    86,    52,    55,   101,    52,    52,
      46,    53,    55,    58,    72,   101,     3,    56,    58,    72,
      53,    58,    52,    52,    52,    55,    72,     3,    34,    35,
      36,    37,    38,    40,    41,    42,    43,    44,    46,    47,
      53,    56,    60,   100,   101,   102,   100,     3,     4,     5,
       6,     7,    57,    53,   101,     3,    54,    76,   101,    60,
      88,    89,    90,    59,   100,   100,    53,    56,    60,   101,
      55,   102,    54,    46,    72,    54,    57,    35,    58,    77,
      54,    55,   101,    55,    56,    72,     3,    24,    89,    91,
      92,    52,    60,     3,    60,    54,    57,    54,   100,   100,
      55,   102,   100,    44,    11,    14,    17,    25,    27,    69,
      78,    79,    81,    83,   101,    78,    58,    77,    55,    72,
      57,   101,    55,    56,    58,    72,     3,    52,    29,    92,
      52,     3,    53,     3,   102,   102,   102,    54,    57,     3,
       4,     7,    53,     3,    84,    53,   100,    52,    25,    27,
      69,    79,    81,    83,    52,    52,    52,    58,    25,    78,
      78,    72,    57,   101,     3,    53,    52,    55,    56,    72,
      54,   102,   102,    58,    58,    58,   100,    15,    58,   100,
      52,   100,    52,    52,    52,    52,    46,    25,    25,    72,
      57,    54,    76,    57,   102,    54,    56,    27,    69,    79,
      81,    83,    85,    54,    52,    56,    72,    58,    77,    54,
      72,    58,    31,   100,    52,    52,    52,    52,    16,    27,
      69,    79,    81,    83,    58,   100,     3,    11,    25,    27,
      60,    94,    95,    96,    97,    94,    58,    77,    27,    60,
      69,    79,    80,    81,    58,    52,   100,    52,    52,    52,
      52,    27,    69,    79,    81,    82,    14,    53,    53,    53,
      56,    60,    99,   101,   102,     3,    25,    27,    95,    96,
      97,    52,    52,    52,    25,    25,    94,    94,   100,    69,
      52,    52,    12,    13,    27,    69,    79,    81,    79,   100,
      52,   100,    52,    52,    52,    18,    27,    69,    79,    81,
       3,    54,    93,   101,    99,    99,    99,    52,    53,    56,
      60,   101,    55,   102,    46,    53,    59,    99,    52,    52,
      52,    25,    25,    52,    52,    58,   100,    52,    52,    52,
      52,    57,    58,    52,   100,    52,    52,    52,    58,    72,
      54,    55,    60,   101,    54,    54,    57,    54,    99,    99,
      55,   102,    99,    54,    93,    60,    96,    52,    80,    52,
      31,    52,     3,   101,    15,   101,    55,    58,   102,   102,
     102,    54,    57,    54,     3,    13,    57,    57,   101,   102,
      20,    27,    60,    87,    90,    95,    96,    98,   102,   102,
      72,    30,    99,     3,    52,    60,    12,    13,    27,    52,
      79,    87,   101,    52,    55,    56,    72,     3,    58,    99,
      52,    52,    57,   101,    55,    56,    72,    98,    52,    72,
      57,    57,    13,    72,    72
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    67,    68,    68,    68,    68,    68,    68,
      69,    69,    69,    69,    69,    70,    71,    71,    72,    72,
      72,    72,    72,    73,    73,    73,    73,    73,    73,    73,
      74,    74,    75,    75,    75,    75,    75,    76,    76,    76,
      76,    76,    76,    76,    77,    77,    77,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    79,    79,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    81,    82,
      82,    82,    82,    82,    82,    82,    82,    83,    83,    83,
      84,    84,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    86,    87,    87,    87,    87,    88,    88,    89,
      89,    89,    89,    89,    89,    89,    90,    90,    90,    90,
      90,    90,    91,    91,    92,    92,    92,    92,    92,    92,
      93,    93,    93,    93,    93,    94,    94,    94,    94,    94,
      94,    94,    94,    95,    95,    96,    96,    96,    96,    97,
      97,    98,    98,    98,    98,    98,    98,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   101,   101,   101,
     101,   101,   101,   101,   101,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     3,     2,     3,     2,     3,
       1,     1,     1,     1,     1,     3,     3,     6,     2,     2,
       2,     2,     2,     2,     3,     2,     5,     3,     2,     3,
       4,     5,     6,     7,     8,     7,     8,     2,     4,     5,
       2,     3,     2,     3,     4,     4,     4,     2,     3,     2,
       3,     2,     3,     2,     3,     3,     4,     7,    10,     2,
       3,     3,     2,     3,     3,     3,     3,     4,     7,     2,
       3,     2,     3,     2,     3,     3,     4,     5,    11,    14,
       9,     7,     2,     3,     2,     3,     2,     3,     2,     3,
       3,     4,     6,     1,     1,     1,     1,     2,     3,     3,
       4,     3,     6,     4,     4,     6,     3,     3,     6,     4,
       4,     6,     2,     3,     6,     7,     7,     7,     8,     8,
       1,     3,     4,     2,     3,     2,     3,     2,     3,     2,
       3,     3,     4,     4,     4,     3,     4,     4,     5,     7,
      10,     2,     3,     2,     3,     3,     4,     1,     1,     1,
       2,     2,     3,     4,     3,     4,     2,     2,     3,     3,
       3,     4,     4,     5,     4,     5,     1,     1,     1,     2,
       4,     6,     2,     3,     4,     3,     4,     2,     2,     3,
       3,     3,     4,     4,     5,     4,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* program_start: program_body  */
#line 144 "parcer.y"
  {
	if (yyerror_count == 0) {
		puts(c_prologue);
		printf("%s\n", (yyvsp[0].str));
	}
  }
#line 1785 "parcer.tab.c"
    break;

  case 4: /* program_body: expression DEL_QUEST  */
#line 152 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1791 "parcer.tab.c"
    break;

  case 5: /* program_body: program_body expression DEL_QUEST  */
#line 153 "parcer.y"
                                                {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1797 "parcer.tab.c"
    break;

  case 6: /* program_body: make_fcn DEL_QUEST  */
#line 154 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str)); }
#line 1803 "parcer.tab.c"
    break;

  case 7: /* program_body: program_body make_fcn DEL_QUEST  */
#line 155 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1809 "parcer.tab.c"
    break;

  case 8: /* program_body: comp_statement DEL_QUEST  */
#line 156 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1815 "parcer.tab.c"
    break;

  case 9: /* program_body: program_body comp_statement DEL_QUEST  */
#line 157 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str));}
#line 1821 "parcer.tab.c"
    break;

  case 14: /* expression: KW_continue  */
#line 166 "parcer.y"
                {(yyval.str) = template(" continue");}
#line 1827 "parcer.tab.c"
    break;

  case 15: /* constant: KW_const assignment var_type  */
#line 171 "parcer.y"
                                         {(yyval.str) = template("const %s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 1833 "parcer.tab.c"
    break;

  case 16: /* assignment: attribute OP_EQUAL right_part  */
#line 174 "parcer.y"
                                                                                        {(yyval.str) = template("%s = %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1839 "parcer.tab.c"
    break;

  case 17: /* assignment: T_ID DEL_LBRAC attribute DEL_RBRAC OP_EQUAL right_part  */
#line 175 "parcer.y"
                                                                {(yyval.str) = template("%s[%s] = %s", (yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[0].str));}
#line 1845 "parcer.tab.c"
    break;

  case 18: /* var_type: DEL_DOTS KW_str  */
#line 178 "parcer.y"
                        {(yyval.str) = template("char* ");}
#line 1851 "parcer.tab.c"
    break;

  case 19: /* var_type: DEL_DOTS KW_integer  */
#line 179 "parcer.y"
                        {(yyval.str) = template("int "); }
#line 1857 "parcer.tab.c"
    break;

  case 20: /* var_type: DEL_DOTS KW_boolean  */
#line 180 "parcer.y"
                        {(yyval.str) = template("int ");}
#line 1863 "parcer.tab.c"
    break;

  case 21: /* var_type: DEL_DOTS KW_scalar  */
#line 181 "parcer.y"
                        {(yyval.str) = template("double ");}
#line 1869 "parcer.tab.c"
    break;

  case 23: /* declaration: attribute var_type  */
#line 187 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 1875 "parcer.tab.c"
    break;

  case 24: /* declaration: attribute DEL_DOTS T_ID  */
#line 188 "parcer.y"
                                                                        {(yyval.str) = template("%s %s = ctor_%s", (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 1881 "parcer.tab.c"
    break;

  case 25: /* declaration: attribute DEL_COMMA  */
#line 189 "parcer.y"
                                                                                {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 1887 "parcer.tab.c"
    break;

  case 26: /* declaration: T_ID DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 190 "parcer.y"
                                                {(yyval.str) = template("%s%s[%s]", (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-2].str));}
#line 1893 "parcer.tab.c"
    break;

  case 27: /* declaration: declaration attribute var_type  */
#line 191 "parcer.y"
                                                                        {(yyval.str) = template("%s%s%s", (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1899 "parcer.tab.c"
    break;

  case 28: /* declaration: declaration DEL_COMMA  */
#line 192 "parcer.y"
                                                                                {(yyval.str) = template("%s, ",  (yyvsp[-1].str));}
#line 1905 "parcer.tab.c"
    break;

  case 29: /* declaration: declaration attribute DEL_COMMA  */
#line 193 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1911 "parcer.tab.c"
    break;

  case 30: /* fcn_call: attribute DEL_LPAR right_part DEL_RPAR  */
#line 198 "parcer.y"
                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1917 "parcer.tab.c"
    break;

  case 31: /* fcn_call: T_ID DEL_DOT T_ID DEL_LPAR DEL_RPAR  */
#line 199 "parcer.y"
                                                        {(yyval.str) = template("%s.%s(&%s)", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str));}
#line 1923 "parcer.tab.c"
    break;

  case 32: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR DEL_DOTS KW_enddef  */
#line 204 "parcer.y"
                                                                                                                        {(yyval.str) = template("\nvoid %s()\n{\n}", (yyvsp[-4].str));}
#line 1929 "parcer.tab.c"
    break;

  case 33: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR DEL_DOTS fcn_body KW_enddef  */
#line 205 "parcer.y"
                                                                                                                {(yyval.str) = template("\nvoid %s()\n{\n%s}", (yyvsp[-5].str), (yyvsp[-1].str));}
#line 1935 "parcer.tab.c"
    break;

  case 34: /* make_fcn: KW_def attribute DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS fcn_body KW_enddef  */
#line 206 "parcer.y"
                                                                                                {(yyval.str) = template("\nvoid %s(%s)\n{\n%s}",(yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1941 "parcer.tab.c"
    break;

  case 35: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR fcn_ret_type fcn_body KW_enddef  */
#line 207 "parcer.y"
                                                                                                                {(yyval.str) = template("\n%s%s()\n{\n%s}", (yyvsp[-2].str), (yyvsp[-5].str), (yyvsp[-1].str));}
#line 1947 "parcer.tab.c"
    break;

  case 36: /* make_fcn: KW_def attribute DEL_LPAR fcn_arguments DEL_RPAR fcn_ret_type fcn_body KW_enddef  */
#line 208 "parcer.y"
                                                                                                {(yyval.str) = template("\n%s%s(%s)\n{\n%s}", (yyvsp[-2].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1953 "parcer.tab.c"
    break;

  case 37: /* fcn_arguments: attribute var_type  */
#line 211 "parcer.y"
                                                                                                {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 1959 "parcer.tab.c"
    break;

  case 38: /* fcn_arguments: attribute DEL_LBRAC DEL_RBRAC var_type  */
#line 212 "parcer.y"
                                                                        {(yyval.str) = template("%s*%s", (yyvsp[0].str), (yyvsp[-3].str));}
#line 1965 "parcer.tab.c"
    break;

  case 39: /* fcn_arguments: attribute DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 213 "parcer.y"
                                                        {(yyval.str) = template("%s*%s", (yyvsp[0].str), (yyvsp[-4].str));}
#line 1971 "parcer.tab.c"
    break;

  case 40: /* fcn_arguments: attribute DEL_COMMA  */
#line 214 "parcer.y"
                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 1977 "parcer.tab.c"
    break;

  case 41: /* fcn_arguments: fcn_arguments attribute var_type  */
#line 215 "parcer.y"
                                                                        {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-1].str));}
#line 1983 "parcer.tab.c"
    break;

  case 42: /* fcn_arguments: fcn_arguments DEL_COMMA  */
#line 216 "parcer.y"
                                                                                {(yyval.str) = template("%s, ",  (yyvsp[-1].str));}
#line 1989 "parcer.tab.c"
    break;

  case 43: /* fcn_arguments: fcn_arguments attribute DEL_COMMA  */
#line 217 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1995 "parcer.tab.c"
    break;

  case 44: /* fcn_ret_type: OP_MINUS OP_GREATER KW_integer DEL_DOTS  */
#line 220 "parcer.y"
                                                {(yyval.str) = template("int "); }
#line 2001 "parcer.tab.c"
    break;

  case 45: /* fcn_ret_type: OP_MINUS OP_GREATER KW_boolean DEL_DOTS  */
#line 221 "parcer.y"
                                                {(yyval.str) = template("int "); }
#line 2007 "parcer.tab.c"
    break;

  case 46: /* fcn_ret_type: OP_MINUS OP_GREATER T_ID DEL_DOTS  */
#line 222 "parcer.y"
                                                {(yyval.str) = template("%s ", (yyvsp[-1].str));}
#line 2013 "parcer.tab.c"
    break;

  case 47: /* fcn_body: expression DEL_QUEST  */
#line 225 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2019 "parcer.tab.c"
    break;

  case 48: /* fcn_body: fcn_body expression DEL_QUEST  */
#line 226 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2025 "parcer.tab.c"
    break;

  case 49: /* fcn_body: if_statement DEL_QUEST  */
#line 227 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2031 "parcer.tab.c"
    break;

  case 50: /* fcn_body: fcn_body if_statement DEL_QUEST  */
#line 228 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2037 "parcer.tab.c"
    break;

  case 51: /* fcn_body: while_statement DEL_QUEST  */
#line 229 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2043 "parcer.tab.c"
    break;

  case 52: /* fcn_body: fcn_body while_statement DEL_QUEST  */
#line 230 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2049 "parcer.tab.c"
    break;

  case 53: /* fcn_body: for_statement DEL_QUEST  */
#line 231 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2055 "parcer.tab.c"
    break;

  case 54: /* fcn_body: fcn_body for_statement DEL_QUEST  */
#line 232 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2061 "parcer.tab.c"
    break;

  case 55: /* fcn_body: KW_return right_part DEL_QUEST  */
#line 233 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2067 "parcer.tab.c"
    break;

  case 56: /* fcn_body: fcn_body KW_return right_part DEL_QUEST  */
#line 234 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2073 "parcer.tab.c"
    break;

  case 57: /* if_statement: KW_if DEL_LPAR right_part DEL_RPAR DEL_DOTS if_body KW_endif  */
#line 239 "parcer.y"
                                                                                                                        {(yyval.str) = template("if (%s){\n%s}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2079 "parcer.tab.c"
    break;

  case 58: /* if_statement: KW_if DEL_LPAR right_part DEL_RPAR DEL_DOTS if_body KW_else DEL_DOTS if_body KW_endif  */
#line 240 "parcer.y"
                                                                                                {(yyval.str) = template("if (%s){\n%s}else{\n%s}", (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2085 "parcer.tab.c"
    break;

  case 59: /* if_body: expression DEL_QUEST  */
#line 243 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2091 "parcer.tab.c"
    break;

  case 60: /* if_body: DEL_HASHTAG expression DEL_QUEST  */
#line 244 "parcer.y"
                                                {(yyval.str) = template("self->%s;\n", (yyvsp[-1].str));}
#line 2097 "parcer.tab.c"
    break;

  case 61: /* if_body: if_body expression DEL_QUEST  */
#line 245 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2103 "parcer.tab.c"
    break;

  case 62: /* if_body: if_statement DEL_QUEST  */
#line 246 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2109 "parcer.tab.c"
    break;

  case 63: /* if_body: if_body if_statement DEL_QUEST  */
#line 247 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2115 "parcer.tab.c"
    break;

  case 64: /* if_body: while_statement if_statement DEL_QUEST  */
#line 248 "parcer.y"
                                                {(yyval.str) = template("%s\n", (yyvsp[-2].str));}
#line 2121 "parcer.tab.c"
    break;

  case 65: /* if_body: if_body while_statement DEL_QUEST  */
#line 249 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2127 "parcer.tab.c"
    break;

  case 66: /* if_body: KW_return right_part DEL_QUEST  */
#line 250 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2133 "parcer.tab.c"
    break;

  case 67: /* if_body: if_body KW_return right_part DEL_QUEST  */
#line 251 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2139 "parcer.tab.c"
    break;

  case 68: /* while_statement: KW_while DEL_LPAR right_part DEL_RPAR DEL_DOTS while_body KW_endwhile  */
#line 255 "parcer.y"
                                                                              {(yyval.str) = template("while (%s){\n%s}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2145 "parcer.tab.c"
    break;

  case 69: /* while_body: expression DEL_QUEST  */
#line 258 "parcer.y"
                                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2151 "parcer.tab.c"
    break;

  case 70: /* while_body: while_body expression DEL_QUEST  */
#line 259 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2157 "parcer.tab.c"
    break;

  case 71: /* while_body: if_statement DEL_QUEST  */
#line 260 "parcer.y"
                                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2163 "parcer.tab.c"
    break;

  case 72: /* while_body: while_body if_statement DEL_QUEST  */
#line 261 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2169 "parcer.tab.c"
    break;

  case 73: /* while_body: while_statement DEL_QUEST  */
#line 262 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2175 "parcer.tab.c"
    break;

  case 74: /* while_body: while_body while_statement DEL_QUEST  */
#line 263 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2181 "parcer.tab.c"
    break;

  case 75: /* while_body: KW_return right_part DEL_QUEST  */
#line 264 "parcer.y"
                                                                {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2187 "parcer.tab.c"
    break;

  case 76: /* while_body: while_body KW_return right_part DEL_QUEST  */
#line 265 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2193 "parcer.tab.c"
    break;

  case 77: /* for_statement: KW_for for_arguments DEL_DOTS for_body KW_endfor  */
#line 270 "parcer.y"
                                                                                                                                                                {(yyval.str) = template("for (%s){\n%s}", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2199 "parcer.tab.c"
    break;

  case 78: /* for_statement: attribute DEL_DOTS OP_EQUAL DEL_LBRAC right_part KW_for T_ID DEL_DOTS attribute DEL_RBRAC var_type  */
#line 271 "parcer.y"
                                                                                                                {(yyval.str) = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s_i = 0; %s_i < %s; %s_i++){\n%s[%s_i] = %s;\n}", (yyvsp[0].str), (yyvsp[-10].str), (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[-10].str), (yyvsp[-4].str), (yyvsp[-6].str));}
#line 2205 "parcer.tab.c"
    break;

  case 79: /* for_statement: attribute DEL_DOTS OP_EQUAL DEL_LBRAC right_part KW_for T_ID var_type KW_in attribute KW_of attribute DEL_RBRAC var_type  */
#line 272 "parcer.y"
                                                                                                                                 {(yyval.str) = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s_i = 0; %s_i < %s; %s_i++){\n%s%s = %s[%s_i];\n%s[%s_i] = %s;\n}", (yyvsp[0].str), (yyvsp[-13].str), (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[0].str), (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-13].str), (yyvsp[-4].str), (yyvsp[-9].str));}
#line 2211 "parcer.tab.c"
    break;

  case 80: /* for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS right_part DEL_DOTS T_INT DEL_RBRAC  */
#line 275 "parcer.y"
                                                                                {(yyval.str) = template("int %s = %s; %s < %s; %s += %s", (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-8].str), (yyvsp[-3].str), (yyvsp[-8].str), (yyvsp[-1].str));}
#line 2217 "parcer.tab.c"
    break;

  case 81: /* for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS right_part DEL_RBRAC  */
#line 276 "parcer.y"
                                                                                        {(yyval.str) = template("int %s = %s; %s < %s; %s += 1", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-6].str), (yyvsp[-1].str), (yyvsp[-6].str));}
#line 2223 "parcer.tab.c"
    break;

  case 82: /* for_body: expression DEL_QUEST  */
#line 279 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2229 "parcer.tab.c"
    break;

  case 83: /* for_body: for_body expression DEL_QUEST  */
#line 280 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2235 "parcer.tab.c"
    break;

  case 84: /* for_body: if_statement DEL_QUEST  */
#line 281 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2241 "parcer.tab.c"
    break;

  case 85: /* for_body: for_body if_statement DEL_QUEST  */
#line 282 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2247 "parcer.tab.c"
    break;

  case 86: /* for_body: while_statement DEL_QUEST  */
#line 283 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2253 "parcer.tab.c"
    break;

  case 87: /* for_body: for_body while_statement DEL_QUEST  */
#line 284 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2259 "parcer.tab.c"
    break;

  case 88: /* for_body: for_statement DEL_QUEST  */
#line 285 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2265 "parcer.tab.c"
    break;

  case 89: /* for_body: for_body for_statement DEL_QUEST  */
#line 286 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2271 "parcer.tab.c"
    break;

  case 90: /* for_body: KW_return right_part DEL_QUEST  */
#line 287 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2277 "parcer.tab.c"
    break;

  case 91: /* for_body: for_body KW_return right_part DEL_QUEST  */
#line 288 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2283 "parcer.tab.c"
    break;

  case 92: /* comp_statement: KW_comp T_ID DEL_DOTS comp_declarations comp_functions KW_endcomp  */
#line 293 "parcer.y"
                                                                          {(yyval.str) = template("#define SELF struct %s *self\ntypedef struct %s {\n%s%s\n}%s;\n\n%s\nconst %s ctor_%s = {%s};\n#undef SELF", (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-1].comp_func).func_name, (yyvsp[-4].str), (yyvsp[-1].comp_func).func_all, (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-1].comp_func).func_const);}
#line 2289 "parcer.tab.c"
    break;

  case 96: /* comp_expression: KW_continue  */
#line 300 "parcer.y"
                {(yyval.str) = template(" continue");}
#line 2295 "parcer.tab.c"
    break;

  case 97: /* comp_declarations: comp_declaration_init DEL_QUEST  */
#line 303 "parcer.y"
                                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2301 "parcer.tab.c"
    break;

  case 98: /* comp_declarations: comp_declarations comp_declaration_init DEL_QUEST  */
#line 304 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2307 "parcer.tab.c"
    break;

  case 99: /* comp_declaration_init: DEL_HASHTAG T_ID var_type  */
#line 307 "parcer.y"
                                                                                                                {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 2313 "parcer.tab.c"
    break;

  case 100: /* comp_declaration_init: DEL_HASHTAG T_ID DEL_DOTS T_ID  */
#line 308 "parcer.y"
                                                                                                        {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-2].str));}
#line 2319 "parcer.tab.c"
    break;

  case 101: /* comp_declaration_init: DEL_HASHTAG T_ID DEL_COMMA  */
#line 309 "parcer.y"
                                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 2325 "parcer.tab.c"
    break;

  case 102: /* comp_declaration_init: DEL_HASHTAG T_ID DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 310 "parcer.y"
                                                                                {(yyval.str) = template("%s%s[%s]", (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-2].str));}
#line 2331 "parcer.tab.c"
    break;

  case 103: /* comp_declaration_init: comp_declaration DEL_HASHTAG T_ID var_type  */
#line 311 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s%s",(yyvsp[0].str), (yyvsp[-3].str) ,(yyvsp[-1].str));}
#line 2337 "parcer.tab.c"
    break;

  case 104: /* comp_declaration_init: comp_declaration DEL_HASHTAG T_ID DEL_COMMA  */
#line 312 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2343 "parcer.tab.c"
    break;

  case 105: /* comp_declaration_init: comp_declaration DEL_HASHTAG T_ID DEL_LBRAC DEL_RBRAC var_type  */
#line 313 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-5].str), (yyvsp[-3].str));}
#line 2349 "parcer.tab.c"
    break;

  case 106: /* comp_declaration: DEL_HASHTAG T_ID var_type  */
#line 317 "parcer.y"
                                                                                                                {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 2355 "parcer.tab.c"
    break;

  case 107: /* comp_declaration: DEL_HASHTAG T_ID DEL_COMMA  */
#line 318 "parcer.y"
                                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 2361 "parcer.tab.c"
    break;

  case 108: /* comp_declaration: DEL_HASHTAG T_ID DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 319 "parcer.y"
                                                                                {(yyval.str) = template("%s%s[%s]", (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-2].str));}
#line 2367 "parcer.tab.c"
    break;

  case 109: /* comp_declaration: comp_declaration DEL_HASHTAG T_ID var_type  */
#line 320 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s%s",(yyvsp[0].str), (yyvsp[-3].str) ,(yyvsp[-1].str));}
#line 2373 "parcer.tab.c"
    break;

  case 110: /* comp_declaration: comp_declaration DEL_HASHTAG T_ID DEL_COMMA  */
#line 321 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2379 "parcer.tab.c"
    break;

  case 111: /* comp_declaration: comp_declaration DEL_HASHTAG T_ID DEL_LBRAC DEL_RBRAC var_type  */
#line 322 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-5].str), (yyvsp[-3].str));}
#line 2385 "parcer.tab.c"
    break;

  case 112: /* comp_functions: comp_function DEL_QUEST  */
#line 326 "parcer.y"
                                                                {(yyval.comp_func).func_name = template("%s(*%s) (%s);", (yyvsp[-1].comp_func).func_ret_type, (yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_args); (yyval.comp_func).func_const = template(" .%s=%s",(yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_name); (yyval.comp_func).func_all = template("%s\n", (yyvsp[-1].comp_func).func_all);}
#line 2391 "parcer.tab.c"
    break;

  case 113: /* comp_functions: comp_functions comp_function DEL_QUEST  */
#line 327 "parcer.y"
                                                {(yyval.comp_func).func_name = template("%s\n%s(*%s) (%s);\n",(yyvsp[-2].comp_func).func_name, (yyvsp[-1].comp_func).func_ret_type, (yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_args); (yyval.comp_func).func_const = template("%s, .%s=%s",(yyvsp[-2].comp_func).func_const, (yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_name); (yyval.comp_func).func_all = template("%s\n%s\n", (yyvsp[-2].comp_func).func_all, (yyvsp[-1].comp_func).func_all);}
#line 2397 "parcer.tab.c"
    break;

  case 114: /* comp_function: KW_def T_ID DEL_LPAR DEL_RPAR DEL_DOTS KW_enddef  */
#line 331 "parcer.y"
                                                                                                                                        {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-4].str); (yyval.comp_func).func_args = template("SELF"); (yyval.comp_func).func_all = template("void %s (SELF){\n}", (yyvsp[-4].str));}
#line 2403 "parcer.tab.c"
    break;

  case 115: /* comp_function: KW_def T_ID DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS KW_enddef  */
#line 332 "parcer.y"
                                                                                                                        {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-5].str); (yyval.comp_func).func_args = template("SELF, %s", (yyvsp[-3].str)); (yyval.comp_func).func_all = template("void %s (SELF){\n}", (yyvsp[-5].str));}
#line 2409 "parcer.tab.c"
    break;

  case 116: /* comp_function: KW_def T_ID DEL_LPAR DEL_RPAR DEL_DOTS comp_function_body KW_enddef  */
#line 333 "parcer.y"
                                                                                                                        {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-5].str); (yyval.comp_func).func_args = template("SELF"); (yyval.comp_func).func_all = template("void %s (SELF){\n%s}", (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2415 "parcer.tab.c"
    break;

  case 117: /* comp_function: KW_def T_ID DEL_LPAR DEL_RPAR fcn_ret_type comp_function_body KW_enddef  */
#line 334 "parcer.y"
                                                                                                                {(yyval.comp_func).func_ret_type = template("%s ", (yyvsp[-2].str)); (yyval.comp_func).func_name = (yyvsp[-5].str); (yyval.comp_func).func_args = template("SELF"); (yyval.comp_func).func_all = template("%s %s (SELF){\n%s}", (yyvsp[-2].str), (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2421 "parcer.tab.c"
    break;

  case 118: /* comp_function: KW_def T_ID DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS comp_function_body KW_enddef  */
#line 335 "parcer.y"
                                                                                                {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-6].str); (yyval.comp_func).func_args = template("SELF, %s", (yyvsp[-4].str)); (yyval.comp_func).func_all = template("void %s (SELF, %s){\n%s}", (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2427 "parcer.tab.c"
    break;

  case 119: /* comp_function: KW_def T_ID DEL_LPAR fcn_arguments DEL_RPAR fcn_ret_type comp_function_body KW_enddef  */
#line 336 "parcer.y"
                                                                                                {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-6].str); (yyval.comp_func).func_args = template("SELF, %s", (yyvsp[-4].str)); (yyval.comp_func).func_all = template("void %s (SELF, %s){\n%s}", (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2433 "parcer.tab.c"
    break;

  case 121: /* comp_fcn_arguments: comp_fcn_arguments DEL_HASHTAG attribute  */
#line 341 "parcer.y"
                                                                {(yyval.str) = template("%sSELF->%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2439 "parcer.tab.c"
    break;

  case 122: /* comp_fcn_arguments: comp_fcn_arguments DEL_HASHTAG attribute operator  */
#line 342 "parcer.y"
                                                        {(yyval.str) = template("%sSELF->%s", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2445 "parcer.tab.c"
    break;

  case 123: /* comp_fcn_arguments: comp_fcn_arguments DEL_COMMA  */
#line 343 "parcer.y"
                                                                                {(yyval.str) = template("%s, ",  (yyvsp[-1].str));}
#line 2451 "parcer.tab.c"
    break;

  case 124: /* comp_fcn_arguments: comp_fcn_arguments attribute DEL_COMMA  */
#line 344 "parcer.y"
                                                                        {(yyval.str) = template("%sSELF->%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2457 "parcer.tab.c"
    break;

  case 125: /* comp_function_body: comp_assignment DEL_QUEST  */
#line 347 "parcer.y"
                                                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2463 "parcer.tab.c"
    break;

  case 126: /* comp_function_body: comp_function_body comp_assignment DEL_QUEST  */
#line 348 "parcer.y"
                                                                {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2469 "parcer.tab.c"
    break;

  case 127: /* comp_function_body: comp_fcn_call DEL_QUEST  */
#line 349 "parcer.y"
                                                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2475 "parcer.tab.c"
    break;

  case 128: /* comp_function_body: comp_function_body comp_fcn_call DEL_QUEST  */
#line 350 "parcer.y"
                                                                {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2481 "parcer.tab.c"
    break;

  case 129: /* comp_function_body: comp_if_statement DEL_QUEST  */
#line 351 "parcer.y"
                                                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2487 "parcer.tab.c"
    break;

  case 130: /* comp_function_body: comp_function_body comp_if_statement DEL_QUEST  */
#line 352 "parcer.y"
                                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2493 "parcer.tab.c"
    break;

  case 131: /* comp_function_body: KW_return comp_right_part DEL_QUEST  */
#line 353 "parcer.y"
                                                                                {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2499 "parcer.tab.c"
    break;

  case 132: /* comp_function_body: comp_function_body KW_return comp_right_part DEL_QUEST  */
#line 354 "parcer.y"
                                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2505 "parcer.tab.c"
    break;

  case 133: /* comp_assignment: DEL_HASHTAG T_ID OP_EQUAL comp_right_part  */
#line 358 "parcer.y"
                                                                                                {(yyval.str) = template("self->%s = %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2511 "parcer.tab.c"
    break;

  case 134: /* comp_assignment: DEL_HASHTAG T_ID DEL_DOT comp_fcn_call  */
#line 360 "parcer.y"
                                                                                {(yyval.str) = template("self->%s.%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2517 "parcer.tab.c"
    break;

  case 135: /* comp_fcn_call: T_ID DEL_LPAR DEL_RPAR  */
#line 364 "parcer.y"
                                                                                                {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 2523 "parcer.tab.c"
    break;

  case 136: /* comp_fcn_call: DEL_HASHTAG T_ID DEL_LPAR DEL_RPAR  */
#line 365 "parcer.y"
                                                                                {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 2529 "parcer.tab.c"
    break;

  case 137: /* comp_fcn_call: T_ID DEL_LPAR comp_fcn_arguments DEL_RPAR  */
#line 366 "parcer.y"
                                                                        {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2535 "parcer.tab.c"
    break;

  case 138: /* comp_fcn_call: DEL_HASHTAG T_ID DEL_LPAR comp_fcn_arguments DEL_RPAR  */
#line 367 "parcer.y"
                                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2541 "parcer.tab.c"
    break;

  case 139: /* comp_if_statement: KW_if DEL_LPAR comp_right_part DEL_RPAR DEL_DOTS comp_if_body KW_endif  */
#line 371 "parcer.y"
                                                                                                                                {(yyval.str) = template("if (%s){\n%s}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2547 "parcer.tab.c"
    break;

  case 140: /* comp_if_statement: KW_if DEL_LPAR comp_right_part DEL_RPAR DEL_DOTS comp_if_body KW_else DEL_DOTS comp_if_body KW_endif  */
#line 372 "parcer.y"
                                                                                                         {(yyval.str) = template("if (%s){\n%s}else{\n%s}", (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2553 "parcer.tab.c"
    break;

  case 141: /* comp_if_body: comp_expression DEL_QUEST  */
#line 375 "parcer.y"
                                                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2559 "parcer.tab.c"
    break;

  case 142: /* comp_if_body: comp_if_body comp_expression DEL_QUEST  */
#line 376 "parcer.y"
                                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2565 "parcer.tab.c"
    break;

  case 143: /* comp_if_body: comp_if_body DEL_QUEST  */
#line 377 "parcer.y"
                                                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2571 "parcer.tab.c"
    break;

  case 144: /* comp_if_body: comp_if_body if_statement DEL_QUEST  */
#line 378 "parcer.y"
                                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2577 "parcer.tab.c"
    break;

  case 145: /* comp_if_body: KW_return comp_right_part DEL_QUEST  */
#line 379 "parcer.y"
                                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2583 "parcer.tab.c"
    break;

  case 146: /* comp_if_body: comp_if_body KW_return comp_right_part DEL_QUEST  */
#line 380 "parcer.y"
                                                        {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2589 "parcer.tab.c"
    break;

  case 148: /* comp_right_part: DEL_HASHTAG  */
#line 385 "parcer.y"
                                                                                                {(yyval.str) = template("self->");}
#line 2595 "parcer.tab.c"
    break;

  case 150: /* comp_right_part: attribute operator  */
#line 387 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 2601 "parcer.tab.c"
    break;

  case 151: /* comp_right_part: attribute DEL_COMMA  */
#line 388 "parcer.y"
                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 2607 "parcer.tab.c"
    break;

  case 152: /* comp_right_part: DEL_LPAR comp_right_part DEL_RPAR  */
#line 389 "parcer.y"
                                                                                {(yyval.str) = template("(%s)", (yyvsp[-1].str));}
#line 2613 "parcer.tab.c"
    break;

  case 153: /* comp_right_part: DEL_LPAR comp_right_part DEL_RPAR operator  */
#line 390 "parcer.y"
                                                                        {(yyval.str) = template("(%s)%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2619 "parcer.tab.c"
    break;

  case 154: /* comp_right_part: DEL_LBRAC comp_right_part DEL_RBRAC  */
#line 391 "parcer.y"
                                                                                {(yyval.str) = template("[%s]", (yyvsp[-1].str));}
#line 2625 "parcer.tab.c"
    break;

  case 155: /* comp_right_part: DEL_LBRAC comp_right_part DEL_RBRAC operator  */
#line 392 "parcer.y"
                                                                        {(yyval.str) = template("[%s]%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2631 "parcer.tab.c"
    break;

  case 156: /* comp_right_part: comp_right_part attribute  */
#line 393 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 2637 "parcer.tab.c"
    break;

  case 157: /* comp_right_part: comp_right_part DEL_HASHTAG  */
#line 394 "parcer.y"
                                                                                        {(yyval.str) = template("%sself->", (yyvsp[-1].str));}
#line 2643 "parcer.tab.c"
    break;

  case 158: /* comp_right_part: comp_right_part attribute operator  */
#line 395 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str));}
#line 2649 "parcer.tab.c"
    break;

  case 159: /* comp_right_part: comp_right_part attribute DEL_COMMA  */
#line 396 "parcer.y"
                                                                                {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2655 "parcer.tab.c"
    break;

  case 160: /* comp_right_part: comp_right_part DEL_LPAR DEL_RPAR  */
#line 397 "parcer.y"
                                                                                {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 2661 "parcer.tab.c"
    break;

  case 161: /* comp_right_part: comp_right_part DEL_LPAR DEL_RPAR operator  */
#line 398 "parcer.y"
                                                                        {(yyval.str) = template("%s()%s", (yyvsp[-3].str), (yyvsp[0].str));}
#line 2667 "parcer.tab.c"
    break;

  case 162: /* comp_right_part: comp_right_part DEL_LPAR comp_right_part DEL_RPAR  */
#line 399 "parcer.y"
                                                                        {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2673 "parcer.tab.c"
    break;

  case 163: /* comp_right_part: comp_right_part DEL_LPAR comp_right_part DEL_RPAR operator  */
#line 400 "parcer.y"
                                                                {(yyval.str) = template("%s(%s)%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2679 "parcer.tab.c"
    break;

  case 164: /* comp_right_part: comp_right_part DEL_LBRAC comp_right_part DEL_RBRAC  */
#line 401 "parcer.y"
                                                                                {(yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2685 "parcer.tab.c"
    break;

  case 165: /* comp_right_part: comp_right_part DEL_LBRAC comp_right_part DEL_RBRAC operator  */
#line 402 "parcer.y"
                                                                        {(yyval.str) = template("%s[%s]%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2691 "parcer.tab.c"
    break;

  case 167: /* right_part: DEL_HASHTAG  */
#line 408 "parcer.y"
                                                                                                {(yyval.str) = template("");}
#line 2697 "parcer.tab.c"
    break;

  case 169: /* right_part: attribute operator  */
#line 410 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 2703 "parcer.tab.c"
    break;

  case 170: /* right_part: T_ID DEL_DOT DEL_HASHTAG T_ID  */
#line 411 "parcer.y"
                                                                                {(yyval.str) = template("%s.%s", (yyvsp[-3].str), (yyvsp[0].str));}
#line 2709 "parcer.tab.c"
    break;

  case 171: /* right_part: T_ID DEL_DOT T_ID DEL_LPAR DEL_RPAR operator  */
#line 412 "parcer.y"
                                                                {(yyval.str) = template("%s.%s(&%s)%s",(yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[-5].str), (yyvsp[0].str));}
#line 2715 "parcer.tab.c"
    break;

  case 172: /* right_part: attribute DEL_COMMA  */
#line 413 "parcer.y"
                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 2721 "parcer.tab.c"
    break;

  case 173: /* right_part: DEL_LPAR right_part DEL_RPAR  */
#line 414 "parcer.y"
                                                                                {(yyval.str) = template("(%s)", (yyvsp[-1].str));}
#line 2727 "parcer.tab.c"
    break;

  case 174: /* right_part: DEL_LPAR right_part DEL_RPAR operator  */
#line 415 "parcer.y"
                                                                        {(yyval.str) = template("(%s)%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2733 "parcer.tab.c"
    break;

  case 175: /* right_part: DEL_LBRAC right_part DEL_RBRAC  */
#line 416 "parcer.y"
                                                                                {(yyval.str) = template("[%s]", (yyvsp[-1].str));}
#line 2739 "parcer.tab.c"
    break;

  case 176: /* right_part: DEL_LBRAC right_part DEL_RBRAC operator  */
#line 417 "parcer.y"
                                                                {(yyval.str) = template("[%s]%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2745 "parcer.tab.c"
    break;

  case 177: /* right_part: right_part attribute  */
#line 418 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 2751 "parcer.tab.c"
    break;

  case 178: /* right_part: right_part DEL_HASHTAG  */
#line 419 "parcer.y"
                                                                                {(yyval.str) = template("%s", (yyvsp[-1].str));}
#line 2757 "parcer.tab.c"
    break;

  case 179: /* right_part: right_part attribute operator  */
#line 420 "parcer.y"
                                                                                {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str));}
#line 2763 "parcer.tab.c"
    break;

  case 180: /* right_part: right_part attribute DEL_COMMA  */
#line 421 "parcer.y"
                                                                                {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2769 "parcer.tab.c"
    break;

  case 181: /* right_part: right_part DEL_LPAR DEL_RPAR  */
#line 422 "parcer.y"
                                                                                {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 2775 "parcer.tab.c"
    break;

  case 182: /* right_part: right_part DEL_LPAR DEL_RPAR operator  */
#line 423 "parcer.y"
                                                                        {(yyval.str) = template("%s()%s", (yyvsp[-3].str), (yyvsp[0].str));}
#line 2781 "parcer.tab.c"
    break;

  case 183: /* right_part: right_part DEL_LPAR right_part DEL_RPAR  */
#line 424 "parcer.y"
                                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2787 "parcer.tab.c"
    break;

  case 184: /* right_part: right_part DEL_LPAR right_part DEL_RPAR operator  */
#line 425 "parcer.y"
                                                        {(yyval.str) = template("%s(%s)%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2793 "parcer.tab.c"
    break;

  case 185: /* right_part: right_part DEL_LBRAC right_part DEL_RBRAC  */
#line 426 "parcer.y"
                                                                {(yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2799 "parcer.tab.c"
    break;

  case 186: /* right_part: right_part DEL_LBRAC right_part DEL_RBRAC operator  */
#line 427 "parcer.y"
                                                        {(yyval.str) = template("%s[%s]%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2805 "parcer.tab.c"
    break;

  case 191: /* attribute: KW_main  */
#line 434 "parcer.y"
                {(yyval.str) = template("main");}
#line 2811 "parcer.tab.c"
    break;

  case 192: /* attribute: KW_True  */
#line 435 "parcer.y"
                {(yyval.str) = template("1");}
#line 2817 "parcer.tab.c"
    break;

  case 193: /* attribute: KW_False  */
#line 436 "parcer.y"
                {(yyval.str) = template("0");}
#line 2823 "parcer.tab.c"
    break;

  case 194: /* attribute: KW_and  */
#line 437 "parcer.y"
                {(yyval.str) = template(" && ");}
#line 2829 "parcer.tab.c"
    break;

  case 195: /* operator: OP_MINUS  */
#line 441 "parcer.y"
                        {(yyval.str) = template(" - ");}
#line 2835 "parcer.tab.c"
    break;

  case 196: /* operator: OP_PLUS  */
#line 442 "parcer.y"
                        {(yyval.str) = template(" + ");}
#line 2841 "parcer.tab.c"
    break;

  case 197: /* operator: OP_MUL  */
#line 443 "parcer.y"
                        {(yyval.str) = template("*");}
#line 2847 "parcer.tab.c"
    break;

  case 198: /* operator: OP_DIV  */
#line 444 "parcer.y"
                        {(yyval.str) = template(" %s ", "/");}
#line 2853 "parcer.tab.c"
    break;

  case 199: /* operator: OP_GREATER  */
#line 445 "parcer.y"
                {(yyval.str) = template(" > ");}
#line 2859 "parcer.tab.c"
    break;

  case 200: /* operator: OP_EQUAL  */
#line 446 "parcer.y"
                {(yyval.str) = template(" = ");}
#line 2865 "parcer.tab.c"
    break;

  case 201: /* operator: OP_LESS  */
#line 447 "parcer.y"
                        {(yyval.str) = template(" < ");}
#line 2871 "parcer.tab.c"
    break;

  case 202: /* operator: OP_LEQ  */
#line 448 "parcer.y"
                        {(yyval.str) = template(" <= ");}
#line 2877 "parcer.tab.c"
    break;

  case 203: /* operator: OP_EQ  */
#line 449 "parcer.y"
                        {(yyval.str) = template(" == ");}
#line 2883 "parcer.tab.c"
    break;

  case 204: /* operator: OP_MOD  */
#line 450 "parcer.y"
                        {(yyval.str) = template(" %s ", "%"); }
#line 2889 "parcer.tab.c"
    break;

  case 205: /* operator: OP_NOTEQ  */
#line 451 "parcer.y"
                {(yyval.str) = template(" != ");}
#line 2895 "parcer.tab.c"
    break;

  case 206: /* operator: OP_INCREM  */
#line 452 "parcer.y"
                {(yyval.str) = template(" += ");}
#line 2901 "parcer.tab.c"
    break;


#line 2905 "parcer.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 456 "parcer.y"

int main(){
	if (yyparse() == 0)
		printf("\n");
	else
		printf("\n");
}
