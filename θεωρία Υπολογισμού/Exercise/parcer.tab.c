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
  YYSYMBOL_comp_assignment = 91,           /* comp_assignment  */
  YYSYMBOL_comp_fcn_call = 92,             /* comp_fcn_call  */
  YYSYMBOL_comp_functions = 93,            /* comp_functions  */
  YYSYMBOL_comp_function = 94,             /* comp_function  */
  YYSYMBOL_comp_fcn_arguments = 95,        /* comp_fcn_arguments  */
  YYSYMBOL_comp_function_body = 96,        /* comp_function_body  */
  YYSYMBOL_comp_if_statement = 97,         /* comp_if_statement  */
  YYSYMBOL_comp_if_body = 98,              /* comp_if_body  */
  YYSYMBOL_comp_for_statement = 99,        /* comp_for_statement  */
  YYSYMBOL_comp_for_arguments = 100,       /* comp_for_arguments  */
  YYSYMBOL_comp_for_body = 101,            /* comp_for_body  */
  YYSYMBOL_comp_right_part = 102,          /* comp_right_part  */
  YYSYMBOL_right_part = 103,               /* right_part  */
  YYSYMBOL_attribute = 104,                /* attribute  */
  YYSYMBOL_operator = 105                  /* operator  */
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
#define YYLAST   2716

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  236
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  553

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
       0,   147,   147,   148,   157,   158,   159,   160,   161,   162,
     167,   168,   169,   170,   171,   176,   179,   180,   181,   182,
     185,   186,   187,   188,   189,   194,   196,   197,   198,   199,
     200,   205,   206,   207,   208,   213,   214,   215,   216,   217,
     220,   221,   222,   223,   224,   225,   226,   229,   230,   231,
     232,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   249,   250,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   265,   268,   269,   270,   271,   272,   273,   274,
     275,   280,   281,   282,   285,   286,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   303,   304,   308,   309,
     310,   311,   312,   316,   317,   320,   321,   322,   323,   324,
     325,   329,   330,   331,   332,   333,   334,   335,   339,   340,
     341,   342,   343,   344,   348,   349,   350,   351,   352,   356,
     357,   360,   361,   362,   363,   364,   365,   368,   369,   370,
     371,   372,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   390,   391,   394,   395,   396,   397,
     398,   399,   403,   404,   405,   408,   409,   412,   413,   414,
     415,   416,   417,   418,   419,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   472,   473,
     474,   475,   476,   477,   478,   479,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492
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
  "comp_declaration", "comp_assignment", "comp_fcn_call", "comp_functions",
  "comp_function", "comp_fcn_arguments", "comp_function_body",
  "comp_if_statement", "comp_if_body", "comp_for_statement",
  "comp_for_arguments", "comp_for_body", "comp_right_part", "right_part",
  "attribute", "operator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-369)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-219)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2520,    23,  -369,  -369,  1859,  -369,  -369,  2567,  -369,    19,
    -369,  -369,  -369,    26,  2520,   -20,  -369,  -369,   300,  -369,
      -1,    11,   192,  2567,    16,    32,    13,    -4,  -369,    20,
      45,  -369,    38,    53,    57,  -369,  -369,    72,  -369,  -369,
     749,  2567,   749,  -369,   359,  -369,    18,    44,   110,  2567,
      60,  -369,  2140,  2087,  -369,  -369,  -369,  -369,  -369,    97,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,   749,   749,  -369,  2015,  2622,  -369,  -369,   827,  -369,
    -369,  -369,  -369,  -369,   -21,  2143,   111,   101,   -30,   710,
     133,   114,   163,   300,  2048,   123,   127,    89,    17,  1328,
    1354,   860,   749,  -369,  2568,  -369,  -369,  -369,   749,  -369,
     138,  -369,   718,   749,   152,   132,  2219,  2401,   -25,  -369,
     122,  -369,   164,  -369,  2567,   179,   200,  -369,   153,   102,
     157,  -369,   201,   161,   207,  2670,  2670,  2670,  1370,  1386,
    -369,  2567,  -369,  2015,  -369,   162,  2015,   130,   166,   223,
     176,  -369,   749,   184,  2245,   188,   190,   194,   293,  2271,
    2401,  2401,  -369,  -369,    13,   174,   196,   189,  2567,  -369,
     216,  -369,  -369,   208,  -369,   210,   217,  -369,  -369,  -369,
    -369,  2670,  2670,   219,  -369,   218,   230,   231,   232,   749,
     285,   236,   749,  1419,  -369,  -369,   749,   249,   254,   258,
     260,  -369,  -369,  -369,    41,  -369,  2297,  2323,  -369,    13,
      13,   259,  2155,  -369,   255,   262,   261,  2670,  -369,  -369,
     270,  -369,  -369,  -369,  -369,  1451,   273,  2427,  1459,  -369,
    1492,  -369,  -369,  -369,  -369,   280,  -369,  -369,  -369,    13,
     -18,  2128,    13,  -369,  -369,   277,   307,   749,   297,   298,
     301,   306,  2349,   294,  -369,   749,   299,  1062,  1286,    -8,
     310,   191,   319,  1524,  -369,  -369,  -369,  -369,  -369,   749,
     316,   329,   333,   335,  2505,  1556,    39,   339,   385,  -369,
     944,   944,   390,  -369,   -31,   346,   351,  1094,   352,   353,
     116,  1126,  1158,  1286,   749,  2559,   354,   356,  2375,   388,
     749,  -369,  1582,  -369,  -369,  -369,  -369,   749,   358,   360,
     362,  2453,   408,  2181,   944,   400,   361,   944,   944,  -369,
    1597,  2638,  -369,  1636,    55,  -369,   415,  -369,  -369,  -369,
     944,   -22,   368,   369,   371,   372,  -369,  -369,   279,  -369,
    -369,  1190,  1222,  1651,   373,  -369,  -369,   374,  -369,   749,
     379,   381,   384,   386,  1270,  -369,  1690,  -369,  -369,  -369,
    -369,   749,   389,   391,   395,   392,  -369,   811,  -369,  1705,
     393,  1254,  1731,  1746,  -369,   902,   944,   434,  2654,  -369,
    -369,  -369,   944,   944,  2193,  -369,  2095,    12,   241,  1785,
    -369,  -369,  -369,  -369,  -369,   402,  -369,  -369,  -369,  -369,
     191,  1801,  -369,  -369,  -369,  -369,  -369,   420,  -369,  1817,
    -369,  -369,  -369,  2551,   431,  -369,  -369,  2567,   406,   407,
     435,  -369,   944,   464,   419,   412,  -369,  -369,   421,   424,
     998,  2670,  2594,  2670,  1856,  1871,  -369,  -369,  -369,  2079,
    2079,  -369,  1014,   474,   423,   425,   478,  -369,  -369,   427,
    -369,  -369,   944,  2479,  -369,   429,  -369,   430,   432,  2567,
    2670,  -369,   634,   436,  1910,    55,  -369,  -369,  -369,  -369,
     944,   438,   440,   444,  -369,  -369,  -369,  -369,  2670,  2608,
    -369,   442,    92,   449,    13,  1926,  -369,  -369,    13,   452,
    -369,   944,   451,   560,   209,   944,  -369,  1942,  -369,  -369,
    -369,  -369,  -369,  -369,   458,   485,  -369,  -369,   502,  -369,
    2567,  1975,  -369,   450,  -369,   944,  -369,   461,   462,  1312,
    -369,   749,   463,   459,   467,  -369,   634,  2007,  -369,  -369,
    -369,   487,  2015,   466,  2551,   506,    13,  1030,  -369,   468,
    -369,   471,  2567,  -369,  -369,  -369,    13,   505,  -369,  2567,
     479,    13,  -369
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,   218,   223,   224,     0,    14,   225,     0,   222,     0,
     219,   221,   220,     0,     3,     0,    10,    12,    11,    13,
       0,     0,     0,     0,     0,   218,     0,     0,   218,     0,
       0,     1,     0,     0,     0,     4,    29,     0,     6,     8,
       0,     0,     0,    26,     0,    25,     0,     0,     0,     0,
       0,    15,     0,     0,     5,     7,     9,    30,    28,   218,
     227,   226,   228,   229,   235,   234,   236,   232,   233,   230,
     231,     0,     0,   197,    16,   196,   198,    19,     0,    24,
      21,    23,    20,    22,     0,     0,     0,     0,     0,     0,
       0,   218,   112,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   208,   207,   202,   199,    31,     0,    27,
     218,    32,     0,     0,     0,     0,     0,     0,     0,    45,
       0,    43,     0,    40,     0,     0,     0,    96,     0,     0,
       0,   103,     0,     0,     0,   203,   205,   211,     0,     0,
     210,     0,   209,    17,    33,   218,    18,     0,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,    44,     0,     0,     0,   106,     0,   105,
       0,   104,    97,     0,   129,     0,     0,   200,   204,   206,
     212,   213,   215,     0,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,    36,     0,     0,     0,     0,
       0,    53,    55,    57,     0,    38,     0,     0,    41,     0,
       0,     0,     0,   130,   109,     0,   108,     0,   214,   216,
       0,    50,    47,    49,    48,     0,     0,     0,     0,    59,
       0,    52,    54,    56,    58,     0,    37,    39,    42,     0,
       0,     0,     0,   201,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    60,     0,   107,     0,     0,     0,
     110,     0,     0,     0,    86,    88,    90,    92,    81,     0,
       0,     0,     0,     0,     0,     0,   218,     0,     0,   131,
       0,     0,   112,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,    87,    89,    91,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
       0,   175,   177,     0,     0,   144,     0,   142,   146,   133,
       0,     0,     0,     0,     0,     0,   148,   150,     0,   134,
     132,     0,     0,     0,     0,    63,    66,     0,    61,     0,
       0,     0,     0,     0,     0,    95,     0,    73,    75,    77,
      72,     0,     0,     0,     0,     0,   124,     0,   137,     0,
       0,     0,     0,     0,   152,     0,     0,     0,   185,   179,
     178,   127,     0,     0,     0,   113,     0,     0,     0,     0,
     145,   143,   147,   149,   151,     0,   135,   136,    70,    64,
       0,     0,    65,    67,    69,    68,    85,     0,    79,     0,
      74,    76,    78,     0,     0,   126,   140,     0,     0,     0,
       0,   101,     0,   112,     0,    98,    99,   100,     0,     0,
       0,   180,   182,   189,     0,     0,   186,   188,   187,   119,
     121,   125,     0,     0,     0,     0,     0,   122,   116,     0,
     115,   153,     0,     0,    71,     0,    80,    24,     0,     0,
     138,   141,     0,     0,     0,   102,   167,   169,   171,   162,
       0,     0,     0,     0,   181,   184,   183,   190,   191,   193,
     128,     0,     0,     0,     0,     0,    62,    84,     0,     0,
     139,     0,     0,     0,     0,     0,   173,     0,   168,   170,
     172,   192,   195,   194,     0,     0,   114,   117,     0,    82,
       0,     0,   156,     0,   154,     0,   158,     0,     0,     0,
     174,     0,     0,     0,     0,   160,     0,     0,   159,   157,
     166,     0,   120,     0,     0,     0,     0,     0,   161,     0,
     123,     0,     0,    83,   155,   165,     0,     0,   163,     0,
       0,     0,   164
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -369,  -369,  -369,   248,  -369,   103,    95,   -14,  -369,   524,
     -76,  -117,  -106,  -146,   139,   347,  -369,  -123,  -369,  -369,
     526,  -368,  -369,   447,    87,  -109,  -223,  -369,   416,   168,
    -234,  -285,    22,  -275,  -369,  -369,   308,   355,     0,   394
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    13,    14,   153,    16,    17,    45,    18,    19,    20,
      89,   117,   154,   155,   298,   156,   311,   157,   191,   252,
      21,   492,    94,    95,   425,   426,   427,   129,   130,   367,
     287,   288,   493,   289,   316,   430,   320,    74,    75,    76
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   161,   334,   424,    27,   115,   334,    29,   198,   112,
     115,   159,   335,   198,    22,   445,   335,   115,    37,    47,
     133,   325,    30,    46,   291,   108,    31,   115,   116,   326,
     390,   200,    35,   160,   286,   286,   200,    44,   326,    93,
     257,    77,    40,    41,    79,    80,    81,    82,    83,    87,
     292,    38,    90,    97,   206,   207,   334,   334,   341,   342,
     198,   198,   471,    39,   333,   281,   335,   335,   333,   286,
     286,    44,   446,    52,   104,    84,    48,   134,   104,    23,
      93,   249,    24,   200,   200,    90,   428,   235,    49,   120,
      54,    50,   313,    37,    97,    23,   429,    85,    50,   104,
     104,   382,   383,    53,   251,    55,   271,    26,   384,    56,
     385,   386,   120,    86,   387,   297,   158,   158,   333,   333,
      48,    51,   165,   258,   166,   518,   126,    57,   309,   273,
      44,   172,    58,   185,   186,   187,   241,   188,   104,   104,
      96,   183,   293,   104,    43,   472,   104,    44,   285,   285,
      44,   505,   351,   353,   158,   473,    98,   113,   114,   158,
     158,   158,    40,    41,   447,   363,   125,    28,   211,   518,
     124,    43,     2,     3,   338,   131,   147,   162,   332,   109,
      44,    96,   332,   285,   285,   123,     6,   132,   121,   122,
       8,    44,   144,   104,     1,    10,    11,    12,   108,     2,
       3,     4,   148,   170,   175,   171,   158,   158,   150,   174,
     177,     5,    90,     6,   176,   163,   184,     8,   294,   189,
     169,   164,    10,    11,    12,   104,   190,   158,   104,   192,
     104,   209,   332,   332,   167,   168,   194,    44,    40,    41,
     201,   120,   202,    93,    93,    42,   203,    43,    15,  -113,
      44,   295,   158,   210,   297,    40,    41,   290,   290,   208,
     213,    22,    32,   104,    43,   214,   215,    44,    44,   212,
     216,   217,   220,    93,    22,   104,   221,    93,    93,    93,
     321,   321,    79,    80,    81,    82,    83,   290,   222,   223,
     224,   290,   290,   290,   227,    22,   448,   449,    22,    44,
     226,   231,   104,    28,   238,   109,   232,   351,     2,     3,
     233,    22,   234,   368,   321,  -116,   239,   321,   321,   242,
     378,  -115,     6,   378,   244,   395,     8,    93,    93,   246,
     321,    10,    11,    12,   256,   261,   255,   260,   262,    40,
      41,   290,   290,   104,   284,   284,    42,   517,    43,   264,
     265,   204,   274,   266,   104,    36,   104,    93,   267,  -114,
     283,   283,    79,    80,    81,    82,    83,   418,   303,   378,
    -117,   290,   378,   378,   331,   321,   321,   300,   331,   284,
     284,   304,   321,   321,   368,   305,   444,   306,   315,   378,
     283,   517,   314,   324,   283,   283,   283,    78,   327,   148,
      22,   104,   197,   328,   336,   337,   345,   197,   346,   104,
     357,   365,   358,   458,   359,   370,    93,   460,   388,   371,
     391,   392,   321,   393,   394,   399,    99,   100,   331,   331,
     290,   402,   400,   403,   378,   378,   404,   436,   405,   378,
     378,   410,   418,   411,   283,   283,   459,   412,    93,   420,
     413,   455,   321,    22,   197,   197,   138,   139,   452,   489,
     414,   461,   494,   143,   378,   462,   463,   465,   146,   106,
     321,   466,   326,   467,   283,   248,   468,   481,   313,    93,
     482,   483,   510,   450,   484,   378,   487,  -218,   522,   488,
     498,   321,   499,   494,   495,   321,   500,   378,   142,   504,
     270,   199,   384,   512,   521,   523,   199,   193,   526,   296,
     524,   378,    93,   528,   529,   321,   533,   534,   539,   378,
     540,   542,   308,    93,   536,   545,   494,   378,   546,   178,
     179,   180,   104,   283,   541,   549,   551,   494,    33,   453,
      34,   128,   547,   344,   225,   173,   350,   228,   537,   550,
       0,   230,   442,   199,   199,     0,     0,     0,     0,   362,
       0,     0,     0,   276,     0,   283,     0,     0,     2,     3,
       0,   148,   513,   514,   250,   218,   219,   506,     0,   507,
     421,     0,     6,   509,     0,     0,     8,   515,     0,   323,
       0,    10,    11,    12,     0,     0,   283,     0,     0,   272,
       0,     0,   263,     0,     0,     0,     0,     0,   299,     0,
     275,   243,   516,   281,     0,     0,     0,     0,   535,     0,
     423,   310,   369,     0,   302,   372,   373,     0,     0,   283,
       0,   543,     0,     0,     0,     0,     0,   276,   389,     0,
     283,   548,     2,     3,     0,   352,   552,     0,   296,   343,
       0,     0,     0,     0,   421,   354,     6,     0,   364,     0,
       8,   491,   356,     0,     0,    10,    11,    12,     0,     0,
       0,     0,     0,     0,   322,   322,     0,     0,     0,     0,
       0,     0,     0,   434,   435,     0,     0,   281,     0,     0,
     439,   440,     0,     0,   423,     0,     0,     0,     0,     0,
       0,   350,     0,     0,   401,     0,     0,     0,   322,     0,
       0,   322,   322,    28,     0,   380,   409,     0,     2,     3,
       0,   145,     0,     0,   322,     0,     2,     3,     0,     0,
     464,     0,     6,     0,     0,     0,     8,     0,     0,     0,
       6,    10,    11,    12,     8,     0,     0,   299,     0,    10,
      11,    12,    59,     0,     0,     0,     0,     2,     3,     0,
     485,     0,     0,     0,   118,   119,     0,     0,     0,   322,
     322,     6,   438,   119,     0,     8,   322,   322,   497,     0,
      10,    11,    12,    60,    61,    62,    63,    64,     0,    65,
      66,    67,    68,    69,     0,    70,     0,     0,     0,   511,
     352,     0,    71,   519,     0,    72,     0,     0,     0,    73,
       0,     0,     0,     0,    28,     0,   322,     0,     0,     2,
       3,     0,     0,   527,     0,   474,   476,   477,     0,     0,
      28,     0,     0,     6,     0,     2,     3,     8,     0,     0,
       0,     0,    10,    11,    12,     0,   322,     0,     0,     6,
       0,     0,     0,     8,   490,     0,     0,     0,    10,    11,
      12,     0,     0,    59,   322,   415,   416,     0,     2,     3,
       0,   417,   501,   503,     0,     0,   532,     0,     0,     0,
     101,   107,     6,   102,     0,   322,     8,   103,     0,   322,
       0,    10,    11,    12,    60,    61,    62,    63,    64,     0,
      65,    66,    67,    68,    69,    28,    70,     0,     0,   322,
       2,     3,     0,    71,   137,     0,    72,     0,     0,     0,
      73,     0,     0,     0,     6,     0,     0,     0,     8,     0,
       0,     0,     0,    10,    11,    12,    60,    61,    62,    63,
      64,     0,    65,    66,    67,    68,    69,    28,    70,     0,
       0,     0,     2,     3,     0,   317,   433,     0,   318,     0,
       0,     0,   319,     0,     0,     0,     6,     0,     0,     0,
       8,     0,     0,     0,     0,    10,    11,    12,    60,    61,
      62,    63,    64,     0,    65,    66,    67,    68,    69,     0,
      70,     0,     0,     0,     0,     0,     0,   317,     0,     0,
     318,   276,     0,     0,   319,     0,     2,     3,     0,   277,
       0,     0,   278,     0,   469,     0,     0,    28,   421,     0,
       6,     0,     2,     3,     8,   470,     0,     0,     0,    10,
      11,    12,     0,   276,     0,     0,     6,     0,     2,     3,
       8,   148,     0,   544,     0,    10,    11,    12,     0,     0,
     421,   281,     6,     0,     0,     0,     8,   515,   423,     0,
       0,    10,    11,    12,     0,   276,     0,     0,   480,   416,
       2,     3,     0,   277,   417,     0,   278,     0,     0,     0,
       0,     0,   516,   281,     6,     0,     0,   279,     8,   280,
     423,     0,     0,    10,    11,    12,     0,   276,     0,     0,
       0,     0,     2,     3,     0,   277,     0,     0,   278,     0,
       0,     0,     0,     0,     0,   281,     6,     0,     0,   329,
       8,   330,   282,     0,     0,    10,    11,    12,     0,   276,
       0,     0,     0,     0,     2,     3,     0,   277,     0,     0,
     278,     0,     0,     0,     0,     0,     0,   281,     6,     0,
       0,   339,     8,   330,   282,     0,     0,    10,    11,    12,
       0,   276,     0,     0,     0,     0,     2,     3,     0,   277,
       0,     0,   278,     0,     0,     0,     0,     0,     0,   281,
       6,     0,     0,   340,     8,   280,   282,     0,     0,    10,
      11,    12,     0,   276,     0,     0,     0,     0,     2,     3,
       0,   277,     0,     0,   278,     0,     0,     0,     0,     0,
       0,   281,     6,     0,     0,   396,     8,   330,   282,     0,
       0,    10,    11,    12,     0,   276,     0,     0,     0,     0,
       2,     3,     0,   277,     0,     0,   278,     0,     0,     0,
       0,     0,     0,   281,     6,     0,     0,   397,     8,   330,
     282,     0,     0,    10,    11,    12,     0,   276,     0,     0,
       0,     0,     2,     3,     0,   277,     0,     0,   278,     0,
       0,     0,     0,    28,   421,   281,     6,     0,     2,     3,
       8,   422,   282,     0,     0,    10,    11,    12,     0,   276,
       0,     0,     6,     0,     2,     3,     8,   277,     0,     0,
     278,    10,    11,    12,     0,     0,     0,   281,     6,     0,
       0,     0,     8,   280,   423,    28,     0,    10,    11,    12,
       2,     3,     0,   101,     0,     0,   102,   406,   407,     0,
     103,    28,     0,     0,     6,     0,     2,     3,     8,   281,
       0,     0,     0,    10,    11,    12,   282,     0,     0,     0,
       6,     0,     0,     0,     8,     0,     0,    28,     0,    10,
      11,    12,     2,     3,     0,   375,     0,     0,   376,   530,
     531,     0,   377,    28,     0,     0,     6,     0,     2,     3,
       8,   101,   135,     0,   102,    10,    11,    12,   103,    28,
       0,     0,     6,     0,     2,     3,     8,     0,     0,     0,
       0,    10,    11,    12,     0,     0,     0,   101,     6,     0,
     102,   136,     8,     0,   103,     0,     0,    10,    11,    12,
       0,     0,    28,   101,   181,     0,   102,     2,     3,     0,
     103,     0,     0,     0,     0,     0,     0,     0,     0,   101,
       0,     6,   102,   182,     0,     8,   103,     0,     0,     0,
      10,    11,    12,     0,    28,     0,     0,     0,     0,     2,
       3,     0,    28,     0,     0,     0,     0,     2,     3,     0,
       0,   229,   101,     6,     0,   102,     0,     8,     0,   103,
       0,     6,    10,    11,    12,     8,     0,     0,     0,     0,
      10,    11,    12,     0,     0,    28,     0,     0,     0,     0,
       2,     3,     0,     0,   101,   245,     0,   102,     0,     0,
       0,   103,   101,   253,     6,   102,     0,     0,     8,   103,
       0,     0,     0,    10,    11,    12,     0,    28,     0,     0,
       0,     0,     2,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   254,   101,     6,     0,   102,     0,
       8,     0,   103,     0,     0,    10,    11,    12,     0,    28,
       0,     0,     0,     0,     2,     3,     0,     0,     0,     0,
     312,     0,     0,     0,     0,     0,   301,   101,     6,     0,
     102,     0,     8,     0,   103,    28,     0,    10,    11,    12,
       2,     3,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     6,     2,     3,     0,     8,   101,
       0,     0,   102,    10,    11,    12,   103,     0,     0,     6,
       0,     0,     0,     8,     0,     0,     0,     0,    10,    11,
      12,     0,     0,     0,   355,   101,     0,     0,   102,    28,
       0,     0,   103,     0,     2,     3,     0,     0,     0,   374,
     375,     0,     0,   376,    28,     0,     0,   377,     6,     2,
       3,     0,     8,     0,     0,     0,     0,    10,    11,    12,
       0,     0,     0,     6,     0,     0,     0,     8,     0,     0,
       0,     0,    10,    11,    12,     0,     0,     0,     0,   375,
     381,     0,   376,    28,     0,     0,   377,     0,     2,     3,
       0,     0,     0,   398,   101,     0,     0,   102,    28,     0,
       0,   103,     6,     2,     3,     0,     8,     0,     0,     0,
       0,    10,    11,    12,     0,     0,     0,     6,     0,     0,
       0,     8,     0,     0,    28,     0,    10,    11,    12,     2,
       3,     0,   408,   101,     0,     0,   102,     0,     0,    28,
     103,     0,     0,     6,     2,     3,     0,     8,   375,   419,
       0,   376,    10,    11,    12,   377,     0,     0,     6,     0,
       0,     0,     8,     0,     0,     0,     0,    10,    11,    12,
       0,     0,     0,     0,   375,   431,     0,   376,    28,     0,
       0,   377,     0,     2,     3,     0,     0,     0,     0,   375,
       0,     0,   376,   432,    28,     0,   377,     6,     0,     2,
       3,     8,     0,     0,     0,     0,    10,    11,    12,     0,
      28,     0,     0,     6,     0,     2,     3,     8,     0,     0,
       0,     0,    10,    11,    12,     0,     0,   451,   375,     6,
       0,   376,     0,     8,     0,   377,     0,     0,    10,    11,
      12,     0,     0,   454,   101,     0,     0,   102,     0,    28,
       0,   103,    25,     0,     2,     3,     0,     2,     3,   456,
     101,     0,     0,   102,    28,     0,     0,   103,     6,     2,
       3,     6,     8,     0,     0,     8,     0,    10,    11,    12,
      10,    11,    12,     6,     0,     0,     0,     8,     0,     0,
       0,     0,    10,    11,    12,     0,     0,     0,     0,   375,
     478,     0,   376,    28,     0,     0,   377,     0,     2,     3,
       0,     0,     0,     0,   375,     0,     0,   376,   479,    28,
       0,   377,     6,     0,     2,     3,     8,     0,     0,     0,
     508,    10,    11,    12,     0,    28,     0,     0,     6,     0,
       2,     3,     8,     0,     0,     0,     0,    10,    11,    12,
       0,     0,   496,   375,     6,     0,   376,     0,     8,     0,
     377,     0,     0,    10,    11,    12,     0,     0,    28,   375,
       0,     0,   376,     2,     3,     0,   377,     0,     0,     0,
       0,     0,     0,     0,   520,   375,     0,     6,   376,     0,
       0,     8,   377,     0,     0,     0,    10,    11,    12,     0,
      28,     0,     0,     0,     0,     2,     3,     0,    28,     0,
       0,     0,     0,     2,     3,     0,     0,   525,   375,     6,
       0,   376,     0,     8,     0,   377,     0,     6,    10,    11,
      12,     8,     0,     0,     0,     0,    10,    11,    12,     0,
       0,    91,     0,     0,     0,     0,     2,     3,     0,   538,
     375,     0,     0,   376,     0,     0,     0,   377,   101,     0,
       6,   102,   126,     0,     8,   103,     0,   127,     0,    10,
      11,    12,    28,     0,     0,     0,     0,     2,     3,     0,
      91,     0,     0,     0,     0,     2,     3,     0,    28,     0,
       0,     6,     0,     2,     3,     8,     0,     0,    92,     6,
      10,    11,    12,     8,     0,     0,     0,     6,    10,    11,
      12,     8,     0,     0,     0,     0,    10,    11,    12,     0,
       0,    28,   375,     0,     0,   376,     2,     3,     0,   377,
       0,     0,     0,    28,     0,     0,   110,    92,     2,     3,
       6,     2,     3,     0,     8,   443,     0,     0,    28,    10,
      11,    12,     6,     2,     3,     6,     8,     0,     0,     8,
       0,    10,    11,    12,    10,    11,    12,     6,     0,     0,
       0,     8,   259,   119,    28,     0,    10,    11,    12,     2,
       3,     0,     0,     0,    88,     0,    28,   111,     0,     0,
       0,     2,     3,     6,     0,     0,     0,     8,     0,   240,
       0,     0,    10,    11,    12,     6,     0,     0,     0,     8,
       0,     0,     1,     0,    10,    11,    12,     2,     3,     4,
     148,     0,     0,   149,     0,   366,   150,     0,     0,     5,
       0,     6,     0,     0,   151,     8,   152,   441,     1,     0,
      10,    11,    12,     2,     3,     4,   148,     0,     0,   149,
       0,     0,   150,     0,     0,     5,     0,     6,     0,     0,
     195,     8,   196,     0,     1,     0,    10,    11,    12,     2,
       3,     4,   148,     0,     0,   149,     0,     0,   150,     0,
       0,     5,     0,     6,     0,     0,   205,     8,   196,     0,
       1,     0,    10,    11,    12,     2,     3,     4,   148,     0,
       0,   149,     0,     0,   150,     0,     0,     5,     0,     6,
       0,     0,   236,     8,   196,     0,     1,     0,    10,    11,
      12,     2,     3,     4,   148,     0,     0,   149,     0,     0,
     150,     0,     0,     5,     0,     6,     0,     0,   237,     8,
     196,     0,     1,     0,    10,    11,    12,     2,     3,     4,
     148,     0,     0,   149,     0,   268,   150,     0,     0,     5,
       0,     6,     0,     0,     0,     8,   269,     0,     1,     0,
      10,    11,    12,     2,     3,     4,   148,   347,   348,     0,
       0,     0,   150,     0,     0,     5,     0,     6,     0,     0,
       0,     8,   349,     0,     1,     0,    10,    11,    12,     2,
       3,     4,   148,     0,     0,   149,     0,     0,   150,     0,
       0,     5,     0,     6,     0,     0,     0,     8,   152,     0,
       1,     0,    10,    11,    12,     2,     3,     4,   148,     0,
       0,   149,     0,     0,   150,     0,     0,     5,     0,     6,
       0,     0,     0,     8,   247,     0,     1,     0,    10,    11,
      12,     2,     3,     4,   148,     0,     0,     0,     0,     0,
     150,   360,     0,     5,     0,     6,     0,     0,     0,     8,
     361,     0,     1,     0,    10,    11,    12,     2,     3,     4,
     148,     0,   486,     0,     0,     0,   150,     0,     0,     5,
       0,     6,     0,     0,     0,     8,   349,     0,     1,     0,
      10,    11,    12,     2,     3,     4,   148,     0,     0,     0,
       0,     0,   150,     1,     0,     5,     0,     6,     2,     3,
       4,     8,   307,     0,     0,     0,    10,    11,    12,     0,
       5,     0,     6,     0,     7,     0,     8,     0,     9,     0,
       0,    10,    11,    12,   457,    80,    81,    82,    83,     2,
       3,     0,     1,     0,     0,     0,     0,     2,     3,     4,
      28,     0,     0,     6,     0,     2,     3,     8,     0,     5,
       0,     6,    10,    11,    12,     8,     0,     0,     0,     6,
      10,    11,    12,     8,     0,     0,     0,     0,    10,    11,
      12,     0,    60,    61,    62,    63,    64,     0,    65,    66,
      67,    68,    69,     0,    70,     0,     0,     0,     0,     0,
       0,     0,     0,   140,     0,     0,     0,   141,    60,    61,
      62,    63,    64,     0,    65,    66,    67,    68,    69,     0,
      70,     0,    60,    61,    62,    63,    64,     0,    65,    66,
      67,    68,    69,   475,    70,     0,    60,    61,    62,    63,
      64,     0,    65,    66,    67,    68,    69,   502,    70,     0,
       0,     0,    60,    61,    62,    63,    64,   105,    65,    66,
      67,    68,    69,     0,    70,     0,     0,     0,    60,    61,
      62,    63,    64,   379,    65,    66,    67,    68,    69,     0,
      70,     0,     0,     0,    60,    61,    62,    63,    64,   437,
      65,    66,    67,    68,    69,     0,    70
};

static const yytype_int16 yycheck[] =
{
       0,   118,   287,   371,     4,    35,   291,     7,   154,    85,
      35,   117,   287,   159,    14,     3,   291,    35,    18,     3,
       3,    52,     3,    23,   258,    46,     0,    35,    58,    60,
      52,   154,    52,    58,   257,   258,   159,    58,    60,    53,
      58,    41,    46,    47,     3,     4,     5,     6,     7,    49,
      58,    52,    52,    53,   160,   161,   341,   342,   292,   293,
     206,   207,   430,    52,   287,    53,   341,   342,   291,   292,
     293,    58,    60,    53,    74,    57,    60,    60,    78,    56,
      94,   227,    59,   206,   207,    85,   371,    46,    56,    89,
      52,    59,    53,    93,    94,    56,   371,    53,    59,    99,
     100,    46,    47,    58,   227,    52,   252,     4,    53,    52,
      55,    56,   112,     3,    59,   261,   116,   117,   341,   342,
      60,    26,   122,   240,   124,   493,    24,    55,   274,   252,
      58,    29,    37,     3,     4,     5,   212,     7,   138,   139,
      53,   141,   259,   143,    55,   430,   146,    58,   257,   258,
      58,    59,   298,   299,   154,   430,    59,    46,    57,   159,
     160,   161,    46,    47,   387,   311,     3,     3,   168,   537,
      56,    55,     8,     9,    58,    52,    44,    55,   287,    84,
      58,    94,   291,   292,   293,    90,    22,    60,    55,    56,
      26,    58,    54,   193,     3,    31,    32,    33,    46,     8,
       9,    10,    11,     3,     3,    52,   206,   207,    17,    52,
       3,    20,   212,    22,    53,   120,    54,    26,    27,    53,
     125,    57,    31,    32,    33,   225,     3,   227,   228,    53,
     230,    57,   341,   342,    55,    56,    52,    58,    46,    47,
      52,   241,    52,   257,   258,    53,    52,    55,     0,    60,
      58,    60,   252,    57,   400,    46,    47,   257,   258,   164,
      52,   261,    14,   263,    55,    55,    56,    58,    58,    53,
     175,    54,    53,   287,   274,   275,    58,   291,   292,   293,
     280,   281,     3,     4,     5,     6,     7,   287,    58,    58,
      58,   291,   292,   293,    58,   295,    55,    56,   298,    58,
      15,    52,   302,     3,   209,   210,    52,   453,     8,     9,
      52,   311,    52,   313,   314,    60,    57,   317,   318,    57,
     320,    60,    22,   323,    54,    46,    26,   341,   342,    56,
     330,    31,    32,    33,   239,    58,    56,   242,    31,    46,
      47,   341,   342,   343,   257,   258,    53,   493,    55,    52,
      52,    58,    58,    52,   354,    55,   356,   371,    52,    60,
     257,   258,     3,     4,     5,     6,     7,   367,    52,   369,
      60,   371,   372,   373,   287,   375,   376,    58,   291,   292,
     293,    52,   382,   383,   384,    52,   386,    52,     3,   389,
     287,   537,    53,     3,   291,   292,   293,    42,    52,    11,
     400,   401,   154,    52,    52,    52,    52,   159,    52,   409,
      52,     3,    52,   413,    52,    15,   430,   417,     3,    58,
      52,    52,   422,    52,    52,    52,    71,    72,   341,   342,
     430,    52,    58,    52,   434,   435,    52,     3,    52,   439,
     440,    52,   442,    52,   341,   342,    15,    52,   462,    56,
      58,    31,   452,   453,   206,   207,   101,   102,    56,   459,
     365,    55,   462,   108,   464,    58,    31,     3,   113,    75,
     470,    52,    60,    52,   371,   227,    52,     3,    53,   493,
      57,     3,    30,   388,    57,   485,    57,    57,     3,    57,
      52,   491,    52,   493,    58,   495,    52,   497,   104,    57,
     252,   154,    53,    52,    46,     3,   159,   152,    58,   261,
     510,   511,   526,    52,    52,   515,    53,    58,    31,   519,
      54,    15,   274,   537,    57,    57,   526,   527,    57,   135,
     136,   137,   532,   430,   534,    30,    57,   537,    14,   400,
      14,    94,   542,   295,   189,   129,   298,   192,   526,   549,
      -1,   196,   384,   206,   207,    -1,    -1,    -1,    -1,   311,
      -1,    -1,    -1,     3,    -1,   462,    -1,    -1,     8,     9,
      -1,    11,    12,    13,   227,   181,   182,   482,    -1,   484,
      20,    -1,    22,   488,    -1,    -1,    26,    27,    -1,   281,
      -1,    31,    32,    33,    -1,    -1,   493,    -1,    -1,   252,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,   261,    -1,
     255,   217,    52,    53,    -1,    -1,    -1,    -1,   523,    -1,
      60,   274,   314,    -1,   269,   317,   318,    -1,    -1,   526,
      -1,   536,    -1,    -1,    -1,    -1,    -1,     3,   330,    -1,
     537,   546,     8,     9,    -1,   298,   551,    -1,   400,   294,
      -1,    -1,    -1,    -1,    20,   300,    22,    -1,   311,    -1,
      26,    27,   307,    -1,    -1,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,   280,   281,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   375,   376,    -1,    -1,    53,    -1,    -1,
     382,   383,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,   453,    -1,    -1,   349,    -1,    -1,    -1,   314,    -1,
      -1,   317,   318,     3,    -1,   321,   361,    -1,     8,     9,
      -1,     3,    -1,    -1,   330,    -1,     8,     9,    -1,    -1,
     422,    -1,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      22,    31,    32,    33,    26,    -1,    -1,   400,    -1,    31,
      32,    33,     3,    -1,    -1,    -1,    -1,     8,     9,    -1,
     452,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,   375,
     376,    22,   378,    55,    -1,    26,   382,   383,   470,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,   491,
     453,    -1,    53,   495,    -1,    56,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,     3,    -1,   422,    -1,    -1,     8,
       9,    -1,    -1,   515,    -1,   431,   432,   433,    -1,    -1,
       3,    -1,    -1,    22,    -1,     8,     9,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,   452,    -1,    -1,    22,
      -1,    -1,    -1,    26,   460,    -1,    -1,    -1,    31,    32,
      33,    -1,    -1,     3,   470,    54,    55,    -1,     8,     9,
      -1,    60,   478,   479,    -1,    -1,   521,    -1,    -1,    -1,
      53,    54,    22,    56,    -1,   491,    26,    60,    -1,   495,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      40,    41,    42,    43,    44,     3,    46,    -1,    -1,   515,
       8,     9,    -1,    53,    54,    -1,    56,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    40,    41,    42,    43,    44,     3,    46,    -1,
      -1,    -1,     8,     9,    -1,    53,    54,    -1,    56,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    40,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      56,     3,    -1,    -1,    60,    -1,     8,     9,    -1,    11,
      -1,    -1,    14,    -1,    16,    -1,    -1,     3,    20,    -1,
      22,    -1,     8,     9,    26,    27,    -1,    -1,    -1,    31,
      32,    33,    -1,     3,    -1,    -1,    22,    -1,     8,     9,
      26,    11,    -1,    13,    -1,    31,    32,    33,    -1,    -1,
      20,    53,    22,    -1,    -1,    -1,    26,    27,    60,    -1,
      -1,    31,    32,    33,    -1,     3,    -1,    -1,    54,    55,
       8,     9,    -1,    11,    60,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    52,    53,    22,    -1,    -1,    25,    26,    27,
      60,    -1,    -1,    31,    32,    33,    -1,     3,    -1,    -1,
      -1,    -1,     8,     9,    -1,    11,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    22,    -1,    -1,    25,
      26,    27,    60,    -1,    -1,    31,    32,    33,    -1,     3,
      -1,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    53,    22,    -1,
      -1,    25,    26,    27,    60,    -1,    -1,    31,    32,    33,
      -1,     3,    -1,    -1,    -1,    -1,     8,     9,    -1,    11,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      22,    -1,    -1,    25,    26,    27,    60,    -1,    -1,    31,
      32,    33,    -1,     3,    -1,    -1,    -1,    -1,     8,     9,
      -1,    11,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    22,    -1,    -1,    25,    26,    27,    60,    -1,
      -1,    31,    32,    33,    -1,     3,    -1,    -1,    -1,    -1,
       8,     9,    -1,    11,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    22,    -1,    -1,    25,    26,    27,
      60,    -1,    -1,    31,    32,    33,    -1,     3,    -1,    -1,
      -1,    -1,     8,     9,    -1,    11,    -1,    -1,    14,    -1,
      -1,    -1,    -1,     3,    20,    53,    22,    -1,     8,     9,
      26,    27,    60,    -1,    -1,    31,    32,    33,    -1,     3,
      -1,    -1,    22,    -1,     8,     9,    26,    11,    -1,    -1,
      14,    31,    32,    33,    -1,    -1,    -1,    53,    22,    -1,
      -1,    -1,    26,    27,    60,     3,    -1,    31,    32,    33,
       8,     9,    -1,    53,    -1,    -1,    56,    57,    58,    -1,
      60,     3,    -1,    -1,    22,    -1,     8,     9,    26,    53,
      -1,    -1,    -1,    31,    32,    33,    60,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    26,    -1,    -1,     3,    -1,    31,
      32,    33,     8,     9,    -1,    53,    -1,    -1,    56,    57,
      58,    -1,    60,     3,    -1,    -1,    22,    -1,     8,     9,
      26,    53,    54,    -1,    56,    31,    32,    33,    60,     3,
      -1,    -1,    22,    -1,     8,     9,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,    -1,    -1,    -1,    53,    22,    -1,
      56,    57,    26,    -1,    60,    -1,    -1,    31,    32,    33,
      -1,    -1,     3,    53,    54,    -1,    56,     8,     9,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    22,    56,    57,    -1,    26,    60,    -1,    -1,    -1,
      31,    32,    33,    -1,     3,    -1,    -1,    -1,    -1,     8,
       9,    -1,     3,    -1,    -1,    -1,    -1,     8,     9,    -1,
      -1,    52,    53,    22,    -1,    56,    -1,    26,    -1,    60,
      -1,    22,    31,    32,    33,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    -1,     3,    -1,    -1,    -1,    -1,
       8,     9,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,
      -1,    60,    53,    54,    22,    56,    -1,    -1,    26,    60,
      -1,    -1,    -1,    31,    32,    33,    -1,     3,    -1,    -1,
      -1,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    22,    -1,    56,    -1,
      26,    -1,    60,    -1,    -1,    31,    32,    33,    -1,     3,
      -1,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    52,    53,    22,    -1,
      56,    -1,    26,    -1,    60,     3,    -1,    31,    32,    33,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    22,     8,     9,    -1,    26,    53,
      -1,    -1,    56,    31,    32,    33,    60,    -1,    -1,    22,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,     3,
      -1,    -1,    60,    -1,     8,     9,    -1,    -1,    -1,    52,
      53,    -1,    -1,    56,     3,    -1,    -1,    60,    22,     8,
       9,    -1,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    -1,    -1,    -1,    53,
      54,    -1,    56,     3,    -1,    -1,    60,    -1,     8,     9,
      -1,    -1,    -1,    52,    53,    -1,    -1,    56,     3,    -1,
      -1,    60,    22,     8,     9,    -1,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    -1,    -1,     3,    -1,    31,    32,    33,     8,
       9,    -1,    52,    53,    -1,    -1,    56,    -1,    -1,     3,
      60,    -1,    -1,    22,     8,     9,    -1,    26,    53,    54,
      -1,    56,    31,    32,    33,    60,    -1,    -1,    22,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    -1,    -1,    -1,    53,    54,    -1,    56,     3,    -1,
      -1,    60,    -1,     8,     9,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    56,    57,     3,    -1,    60,    22,    -1,     8,
       9,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
       3,    -1,    -1,    22,    -1,     8,     9,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    -1,    52,    53,    22,
      -1,    56,    -1,    26,    -1,    60,    -1,    -1,    31,    32,
      33,    -1,    -1,    52,    53,    -1,    -1,    56,    -1,     3,
      -1,    60,     3,    -1,     8,     9,    -1,     8,     9,    52,
      53,    -1,    -1,    56,     3,    -1,    -1,    60,    22,     8,
       9,    22,    26,    -1,    -1,    26,    -1,    31,    32,    33,
      31,    32,    33,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    -1,    -1,    -1,    53,
      54,    -1,    56,     3,    -1,    -1,    60,    -1,     8,     9,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    56,    57,     3,
      -1,    60,    22,    -1,     8,     9,    26,    -1,    -1,    -1,
      14,    31,    32,    33,    -1,     3,    -1,    -1,    22,    -1,
       8,     9,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    -1,    52,    53,    22,    -1,    56,    -1,    26,    -1,
      60,    -1,    -1,    31,    32,    33,    -1,    -1,     3,    53,
      -1,    -1,    56,     8,     9,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    22,    56,    -1,
      -1,    26,    60,    -1,    -1,    -1,    31,    32,    33,    -1,
       3,    -1,    -1,    -1,    -1,     8,     9,    -1,     3,    -1,
      -1,    -1,    -1,     8,     9,    -1,    -1,    52,    53,    22,
      -1,    56,    -1,    26,    -1,    60,    -1,    22,    31,    32,
      33,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
      -1,     3,    -1,    -1,    -1,    -1,     8,     9,    -1,    52,
      53,    -1,    -1,    56,    -1,    -1,    -1,    60,    53,    -1,
      22,    56,    24,    -1,    26,    60,    -1,    29,    -1,    31,
      32,    33,     3,    -1,    -1,    -1,    -1,     8,     9,    -1,
       3,    -1,    -1,    -1,    -1,     8,     9,    -1,     3,    -1,
      -1,    22,    -1,     8,     9,    26,    -1,    -1,    60,    22,
      31,    32,    33,    26,    -1,    -1,    -1,    22,    31,    32,
      33,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
      -1,     3,    53,    -1,    -1,    56,     8,     9,    -1,    60,
      -1,    -1,    -1,     3,    -1,    -1,     3,    60,     8,     9,
      22,     8,     9,    -1,    26,    60,    -1,    -1,     3,    31,
      32,    33,    22,     8,     9,    22,    26,    -1,    -1,    26,
      -1,    31,    32,    33,    31,    32,    33,    22,    -1,    -1,
      -1,    26,    54,    55,     3,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    54,    -1,     3,    54,    -1,    -1,
      -1,     8,     9,    22,    -1,    -1,    -1,    26,    -1,    54,
      -1,    -1,    31,    32,    33,    22,    -1,    -1,    -1,    26,
      -1,    -1,     3,    -1,    31,    32,    33,     8,     9,    10,
      11,    -1,    -1,    14,    -1,    54,    17,    -1,    -1,    20,
      -1,    22,    -1,    -1,    25,    26,    27,    54,     3,    -1,
      31,    32,    33,     8,     9,    10,    11,    -1,    -1,    14,
      -1,    -1,    17,    -1,    -1,    20,    -1,    22,    -1,    -1,
      25,    26,    27,    -1,     3,    -1,    31,    32,    33,     8,
       9,    10,    11,    -1,    -1,    14,    -1,    -1,    17,    -1,
      -1,    20,    -1,    22,    -1,    -1,    25,    26,    27,    -1,
       3,    -1,    31,    32,    33,     8,     9,    10,    11,    -1,
      -1,    14,    -1,    -1,    17,    -1,    -1,    20,    -1,    22,
      -1,    -1,    25,    26,    27,    -1,     3,    -1,    31,    32,
      33,     8,     9,    10,    11,    -1,    -1,    14,    -1,    -1,
      17,    -1,    -1,    20,    -1,    22,    -1,    -1,    25,    26,
      27,    -1,     3,    -1,    31,    32,    33,     8,     9,    10,
      11,    -1,    -1,    14,    -1,    16,    17,    -1,    -1,    20,
      -1,    22,    -1,    -1,    -1,    26,    27,    -1,     3,    -1,
      31,    32,    33,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    17,    -1,    -1,    20,    -1,    22,    -1,    -1,
      -1,    26,    27,    -1,     3,    -1,    31,    32,    33,     8,
       9,    10,    11,    -1,    -1,    14,    -1,    -1,    17,    -1,
      -1,    20,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,
       3,    -1,    31,    32,    33,     8,     9,    10,    11,    -1,
      -1,    14,    -1,    -1,    17,    -1,    -1,    20,    -1,    22,
      -1,    -1,    -1,    26,    27,    -1,     3,    -1,    31,    32,
      33,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    -1,    26,
      27,    -1,     3,    -1,    31,    32,    33,     8,     9,    10,
      11,    -1,    13,    -1,    -1,    -1,    17,    -1,    -1,    20,
      -1,    22,    -1,    -1,    -1,    26,    27,    -1,     3,    -1,
      31,    32,    33,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    17,     3,    -1,    20,    -1,    22,     8,     9,
      10,    26,    27,    -1,    -1,    -1,    31,    32,    33,    -1,
      20,    -1,    22,    -1,    24,    -1,    26,    -1,    28,    -1,
      -1,    31,    32,    33,     3,     4,     5,     6,     7,     8,
       9,    -1,     3,    -1,    -1,    -1,    -1,     8,     9,    10,
       3,    -1,    -1,    22,    -1,     8,     9,    26,    -1,    20,
      -1,    22,    31,    32,    33,    26,    -1,    -1,    -1,    22,
      31,    32,    33,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,    34,    35,    36,    37,    38,    -1,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    59,    34,    35,
      36,    37,    38,    -1,    40,    41,    42,    43,    44,    -1,
      46,    -1,    34,    35,    36,    37,    38,    -1,    40,    41,
      42,    43,    44,    59,    46,    -1,    34,    35,    36,    37,
      38,    -1,    40,    41,    42,    43,    44,    59,    46,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    55,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    55,    40,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    -1,    34,    35,    36,    37,    38,    55,
      40,    41,    42,    43,    44,    -1,    46
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     8,     9,    10,    20,    22,    24,    26,    28,
      31,    32,    33,    67,    68,    69,    70,    71,    73,    74,
      75,    86,   104,    56,    59,     3,    71,   104,     3,   104,
       3,     0,    69,    75,    86,    52,    55,   104,    52,    52,
      46,    47,    53,    55,    58,    72,   104,     3,    60,    56,
      59,    72,    53,    58,    52,    52,    52,    55,    72,     3,
      34,    35,    36,    37,    38,    40,    41,    42,    43,    44,
      46,    53,    56,    60,   103,   104,   105,   104,   103,     3,
       4,     5,     6,     7,    57,    53,     3,   104,    54,    76,
     104,     3,    60,    73,    88,    89,    90,   104,    59,   103,
     103,    53,    56,    60,   104,    55,   105,    54,    46,    72,
       3,    54,    76,    46,    57,    35,    58,    77,    54,    55,
     104,    55,    56,    72,    56,     3,    24,    29,    89,    93,
      94,    52,    60,     3,    60,    54,    57,    54,   103,   103,
      55,    59,   105,   103,    54,     3,   103,    44,    11,    14,
      17,    25,    27,    69,    78,    79,    81,    83,   104,    78,
      58,    77,    55,    72,    57,   104,   104,    55,    56,    72,
       3,    52,    29,    94,    52,     3,    53,     3,   105,   105,
     105,    54,    57,   104,    54,     3,     4,     5,     7,    53,
       3,    84,    53,   103,    52,    25,    27,    69,    79,    81,
      83,    52,    52,    52,    58,    25,    78,    78,    72,    57,
      57,   104,    53,    52,    55,    56,    72,    54,   105,   105,
      53,    58,    58,    58,    58,   103,    15,    58,   103,    52,
     103,    52,    52,    52,    52,    46,    25,    25,    72,    57,
      54,    76,    57,   105,    54,    54,    56,    27,    69,    79,
      81,    83,    85,    54,    52,    56,    72,    58,    77,    54,
      72,    58,    31,   103,    52,    52,    52,    52,    16,    27,
      69,    79,    81,    83,    58,   103,     3,    11,    14,    25,
      27,    53,    60,    71,    90,    91,    92,    96,    97,    99,
     104,    96,    58,    77,    27,    60,    69,    79,    80,    81,
      58,    52,   103,    52,    52,    52,    52,    27,    69,    79,
      81,    82,    14,    53,    53,     3,   100,    53,    56,    60,
     102,   104,   105,   102,     3,    52,    60,    52,    52,    25,
      27,    90,    91,    92,    97,    99,    52,    52,    58,    25,
      25,    96,    96,   103,    69,    52,    52,    12,    13,    27,
      69,    79,    81,    79,   103,    52,   103,    52,    52,    52,
      18,    27,    69,    79,    81,     3,    54,    95,   104,   102,
      15,    58,   102,   102,    52,    53,    56,    60,   104,    55,
     105,    54,    46,    47,    53,    55,    56,    59,     3,   102,
      52,    52,    52,    52,    52,    46,    25,    25,    52,    52,
      58,   103,    52,    52,    52,    52,    57,    58,    52,   103,
      52,    52,    52,    58,    72,    54,    55,    60,   104,    54,
      56,    20,    27,    60,    87,    90,    91,    92,    97,    99,
     101,    54,    57,    54,   102,   102,     3,    55,   105,   102,
     102,    54,    95,    60,   104,     3,    60,    92,    55,    56,
      72,    52,    56,    80,    52,    31,    52,     3,   104,    15,
     104,    55,    58,    31,   102,     3,    52,    52,    52,    16,
      27,    87,    97,    99,   105,    59,   105,   105,    54,    57,
      54,     3,    57,     3,    57,   102,    13,    57,    57,   104,
     105,    27,    87,    98,   104,    58,    52,   102,    52,    52,
      52,   105,    59,   105,    57,    59,    72,    72,    14,    72,
      30,   102,    52,    12,    13,    27,    52,    79,    87,   102,
      52,    46,     3,     3,   104,    52,    58,   102,    52,    52,
      57,    58,   103,    53,    58,    72,    57,    98,    52,    31,
      54,   104,    15,    72,    13,    57,    57,   104,    72,    30,
     104,    57,    72
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    67,    68,    68,    68,    68,    68,    68,
      69,    69,    69,    69,    69,    70,    71,    71,    71,    71,
      72,    72,    72,    72,    72,    73,    73,    73,    73,    73,
      73,    74,    74,    74,    74,    75,    75,    75,    75,    75,
      76,    76,    76,    76,    76,    76,    76,    77,    77,    77,
      77,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    79,    79,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    81,    82,    82,    82,    82,    82,    82,    82,
      82,    83,    83,    83,    84,    84,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    86,    86,    87,    87,
      87,    87,    87,    88,    88,    89,    89,    89,    89,    89,
      89,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      91,    91,    91,    91,    92,    92,    92,    92,    92,    93,
      93,    94,    94,    94,    94,    94,    94,    95,    95,    95,
      95,    95,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    97,    97,    98,    98,    98,    98,
      98,    98,    99,    99,    99,   100,   100,   101,   101,   101,
     101,   101,   101,   101,   101,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   104,   104,
     104,   104,   104,   104,   104,   104,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     3,     2,     3,     2,     3,
       1,     1,     1,     1,     1,     3,     3,     6,     6,     3,
       2,     2,     2,     2,     2,     2,     2,     5,     3,     2,
       3,     4,     5,     6,     7,     6,     7,     8,     7,     8,
       2,     4,     5,     2,     3,     2,     3,     4,     4,     4,
       4,     2,     3,     2,     3,     2,     3,     2,     3,     3,
       4,     7,    10,     2,     3,     3,     2,     3,     3,     3,
       3,     4,     7,     2,     3,     2,     3,     2,     3,     3,
       4,     5,    11,    14,     9,     7,     2,     3,     2,     3,
       2,     3,     2,     3,     3,     4,     5,     6,     1,     1,
       1,     1,     2,     2,     3,     3,     3,     6,     4,     4,
       6,     1,     1,     3,     6,     4,     4,     6,     1,     4,
       8,     4,     4,     9,     3,     4,     4,     3,     5,     2,
       3,     6,     7,     7,     7,     8,     8,     1,     3,     4,
       2,     3,     2,     3,     2,     3,     2,     3,     2,     3,
       2,     3,     3,     4,     7,    10,     2,     3,     2,     3,
       3,     4,     5,    11,    14,     9,     7,     2,     3,     2,
       3,     2,     3,     3,     4,     1,     1,     1,     2,     2,
       3,     4,     3,     4,     4,     2,     3,     3,     3,     3,
       4,     4,     5,     4,     5,     5,     1,     1,     1,     2,
       4,     6,     2,     3,     4,     3,     4,     2,     2,     3,
       3,     3,     4,     4,     5,     4,     5,     6,     1,     1,
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
#line 149 "parcer.y"
  {
	if (yyerror_count == 0) {
		puts(c_prologue);
		printf("%s\n", (yyvsp[0].str));
	}
  }
#line 1970 "parcer.tab.c"
    break;

  case 4: /* program_body: expression DEL_QUEST  */
#line 157 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1976 "parcer.tab.c"
    break;

  case 5: /* program_body: program_body expression DEL_QUEST  */
#line 158 "parcer.y"
                                                {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1982 "parcer.tab.c"
    break;

  case 6: /* program_body: make_fcn DEL_QUEST  */
#line 159 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str)); }
#line 1988 "parcer.tab.c"
    break;

  case 7: /* program_body: program_body make_fcn DEL_QUEST  */
#line 160 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1994 "parcer.tab.c"
    break;

  case 8: /* program_body: comp_statement DEL_QUEST  */
#line 161 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2000 "parcer.tab.c"
    break;

  case 9: /* program_body: program_body comp_statement DEL_QUEST  */
#line 162 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2006 "parcer.tab.c"
    break;

  case 14: /* expression: KW_continue  */
#line 171 "parcer.y"
                {(yyval.str) = template(" continue");}
#line 2012 "parcer.tab.c"
    break;

  case 15: /* constant: KW_const assignment var_type  */
#line 176 "parcer.y"
                                         {(yyval.str) = template("const %s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 2018 "parcer.tab.c"
    break;

  case 16: /* assignment: attribute OP_EQUAL right_part  */
#line 179 "parcer.y"
                                                                                        {(yyval.str) = template("%s = %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2024 "parcer.tab.c"
    break;

  case 17: /* assignment: T_ID DEL_LBRAC attribute DEL_RBRAC OP_EQUAL right_part  */
#line 180 "parcer.y"
                                                                {(yyval.str) = template("%s[%s] = %s", (yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[0].str));}
#line 2030 "parcer.tab.c"
    break;

  case 18: /* assignment: T_ID DEL_DOT DEL_HASHTAG T_ID OP_EQUAL right_part  */
#line 181 "parcer.y"
                                                                {(yyval.str) = template("%s.%s = %s", (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2036 "parcer.tab.c"
    break;

  case 19: /* assignment: attribute OP_INCREM attribute  */
#line 182 "parcer.y"
                                                                                        {(yyval.str) = template("%s += %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2042 "parcer.tab.c"
    break;

  case 20: /* var_type: DEL_DOTS KW_str  */
#line 185 "parcer.y"
                        {(yyval.str) = template("char* ");}
#line 2048 "parcer.tab.c"
    break;

  case 21: /* var_type: DEL_DOTS KW_integer  */
#line 186 "parcer.y"
                        {(yyval.str) = template("int "); }
#line 2054 "parcer.tab.c"
    break;

  case 22: /* var_type: DEL_DOTS KW_boolean  */
#line 187 "parcer.y"
                        {(yyval.str) = template("int ");}
#line 2060 "parcer.tab.c"
    break;

  case 23: /* var_type: DEL_DOTS KW_scalar  */
#line 188 "parcer.y"
                        {(yyval.str) = template("double ");}
#line 2066 "parcer.tab.c"
    break;

  case 24: /* var_type: DEL_DOTS T_ID  */
#line 189 "parcer.y"
                                {(yyval.str) = template(" %s ", (yyvsp[0].str));}
#line 2072 "parcer.tab.c"
    break;

  case 25: /* declaration: attribute var_type  */
#line 194 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 2078 "parcer.tab.c"
    break;

  case 26: /* declaration: attribute DEL_COMMA  */
#line 196 "parcer.y"
                                                                                {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 2084 "parcer.tab.c"
    break;

  case 27: /* declaration: T_ID DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 197 "parcer.y"
                                                {(yyval.str) = template("%s%s[%s]", (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-2].str));}
#line 2090 "parcer.tab.c"
    break;

  case 28: /* declaration: declaration attribute var_type  */
#line 198 "parcer.y"
                                                                        {(yyval.str) = template("%s%s%s", (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2096 "parcer.tab.c"
    break;

  case 29: /* declaration: declaration DEL_COMMA  */
#line 199 "parcer.y"
                                                                                {(yyval.str) = template("%s, ",  (yyvsp[-1].str));}
#line 2102 "parcer.tab.c"
    break;

  case 30: /* declaration: declaration attribute DEL_COMMA  */
#line 200 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2108 "parcer.tab.c"
    break;

  case 31: /* fcn_call: attribute DEL_LPAR right_part DEL_RPAR  */
#line 205 "parcer.y"
                                                        {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2114 "parcer.tab.c"
    break;

  case 32: /* fcn_call: T_ID DEL_DOT T_ID DEL_LPAR DEL_RPAR  */
#line 206 "parcer.y"
                                                                {(yyval.str) = template("%s.%s(&%s)", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str));}
#line 2120 "parcer.tab.c"
    break;

  case 33: /* fcn_call: T_ID DEL_DOT T_ID DEL_LPAR T_ID DEL_RPAR  */
#line 207 "parcer.y"
                                                {(yyval.str) = template("%s.%s(&%s,%s)", (yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2126 "parcer.tab.c"
    break;

  case 34: /* fcn_call: T_ID DEL_DOT T_ID DEL_LPAR fcn_arguments T_ID DEL_RPAR  */
#line 208 "parcer.y"
                                                                {(yyval.str) = template("%s.%s(&%s,%s%s)", (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-6].str), (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2132 "parcer.tab.c"
    break;

  case 35: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR DEL_DOTS KW_enddef  */
#line 213 "parcer.y"
                                                                                                                        {(yyval.str) = template("\nvoid %s()\n{\n}", (yyvsp[-4].str));}
#line 2138 "parcer.tab.c"
    break;

  case 36: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR DEL_DOTS fcn_body KW_enddef  */
#line 214 "parcer.y"
                                                                                                                {(yyval.str) = template("\nvoid %s()\n{\n%s}", (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2144 "parcer.tab.c"
    break;

  case 37: /* make_fcn: KW_def attribute DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS fcn_body KW_enddef  */
#line 215 "parcer.y"
                                                                                                {(yyval.str) = template("\nvoid %s(%s)\n{\n%s}",(yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2150 "parcer.tab.c"
    break;

  case 38: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR fcn_ret_type fcn_body KW_enddef  */
#line 216 "parcer.y"
                                                                                                                {(yyval.str) = template("\n%s%s()\n{\n%s}", (yyvsp[-2].str), (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2156 "parcer.tab.c"
    break;

  case 39: /* make_fcn: KW_def attribute DEL_LPAR fcn_arguments DEL_RPAR fcn_ret_type fcn_body KW_enddef  */
#line 217 "parcer.y"
                                                                                                {(yyval.str) = template("\n%s%s(%s)\n{\n%s}", (yyvsp[-2].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2162 "parcer.tab.c"
    break;

  case 40: /* fcn_arguments: attribute var_type  */
#line 220 "parcer.y"
                                                                                                {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 2168 "parcer.tab.c"
    break;

  case 41: /* fcn_arguments: attribute DEL_LBRAC DEL_RBRAC var_type  */
#line 221 "parcer.y"
                                                                        {(yyval.str) = template("%s*%s", (yyvsp[0].str), (yyvsp[-3].str));}
#line 2174 "parcer.tab.c"
    break;

  case 42: /* fcn_arguments: attribute DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 222 "parcer.y"
                                                        {(yyval.str) = template("%s*%s", (yyvsp[0].str), (yyvsp[-4].str));}
#line 2180 "parcer.tab.c"
    break;

  case 43: /* fcn_arguments: attribute DEL_COMMA  */
#line 223 "parcer.y"
                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));	}
#line 2186 "parcer.tab.c"
    break;

  case 44: /* fcn_arguments: fcn_arguments attribute var_type  */
#line 224 "parcer.y"
                                                                        {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-1].str));}
#line 2192 "parcer.tab.c"
    break;

  case 45: /* fcn_arguments: fcn_arguments DEL_COMMA  */
#line 225 "parcer.y"
                                                                                {(yyval.str) = template("%s, ",  (yyvsp[-1].str));}
#line 2198 "parcer.tab.c"
    break;

  case 46: /* fcn_arguments: fcn_arguments attribute DEL_COMMA  */
#line 226 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2204 "parcer.tab.c"
    break;

  case 47: /* fcn_ret_type: OP_MINUS OP_GREATER KW_integer DEL_DOTS  */
#line 229 "parcer.y"
                                                {(yyval.str) = template("int "); }
#line 2210 "parcer.tab.c"
    break;

  case 48: /* fcn_ret_type: OP_MINUS OP_GREATER KW_boolean DEL_DOTS  */
#line 230 "parcer.y"
                                                {(yyval.str) = template("int "); }
#line 2216 "parcer.tab.c"
    break;

  case 49: /* fcn_ret_type: OP_MINUS OP_GREATER KW_scalar DEL_DOTS  */
#line 231 "parcer.y"
                                                {(yyval.str) = template("double ");}
#line 2222 "parcer.tab.c"
    break;

  case 50: /* fcn_ret_type: OP_MINUS OP_GREATER T_ID DEL_DOTS  */
#line 232 "parcer.y"
                                                {(yyval.str) = template("%s ", (yyvsp[-1].str));}
#line 2228 "parcer.tab.c"
    break;

  case 51: /* fcn_body: expression DEL_QUEST  */
#line 235 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2234 "parcer.tab.c"
    break;

  case 52: /* fcn_body: fcn_body expression DEL_QUEST  */
#line 236 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2240 "parcer.tab.c"
    break;

  case 53: /* fcn_body: if_statement DEL_QUEST  */
#line 237 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2246 "parcer.tab.c"
    break;

  case 54: /* fcn_body: fcn_body if_statement DEL_QUEST  */
#line 238 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2252 "parcer.tab.c"
    break;

  case 55: /* fcn_body: while_statement DEL_QUEST  */
#line 239 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2258 "parcer.tab.c"
    break;

  case 56: /* fcn_body: fcn_body while_statement DEL_QUEST  */
#line 240 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2264 "parcer.tab.c"
    break;

  case 57: /* fcn_body: for_statement DEL_QUEST  */
#line 241 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2270 "parcer.tab.c"
    break;

  case 58: /* fcn_body: fcn_body for_statement DEL_QUEST  */
#line 242 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2276 "parcer.tab.c"
    break;

  case 59: /* fcn_body: KW_return right_part DEL_QUEST  */
#line 243 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2282 "parcer.tab.c"
    break;

  case 60: /* fcn_body: fcn_body KW_return right_part DEL_QUEST  */
#line 244 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2288 "parcer.tab.c"
    break;

  case 61: /* if_statement: KW_if DEL_LPAR right_part DEL_RPAR DEL_DOTS if_body KW_endif  */
#line 249 "parcer.y"
                                                                                                                        {(yyval.str) = template("if (%s){\n%s}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2294 "parcer.tab.c"
    break;

  case 62: /* if_statement: KW_if DEL_LPAR right_part DEL_RPAR DEL_DOTS if_body KW_else DEL_DOTS if_body KW_endif  */
#line 250 "parcer.y"
                                                                                                {(yyval.str) = template("if (%s){\n%s}else{\n%s}", (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2300 "parcer.tab.c"
    break;

  case 63: /* if_body: expression DEL_QUEST  */
#line 253 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2306 "parcer.tab.c"
    break;

  case 64: /* if_body: DEL_HASHTAG expression DEL_QUEST  */
#line 254 "parcer.y"
                                                {(yyval.str) = template("self->%s;\n", (yyvsp[-1].str));}
#line 2312 "parcer.tab.c"
    break;

  case 65: /* if_body: if_body expression DEL_QUEST  */
#line 255 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2318 "parcer.tab.c"
    break;

  case 66: /* if_body: if_statement DEL_QUEST  */
#line 256 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2324 "parcer.tab.c"
    break;

  case 67: /* if_body: if_body if_statement DEL_QUEST  */
#line 257 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2330 "parcer.tab.c"
    break;

  case 68: /* if_body: while_statement if_statement DEL_QUEST  */
#line 258 "parcer.y"
                                                {(yyval.str) = template("%s\n", (yyvsp[-2].str));}
#line 2336 "parcer.tab.c"
    break;

  case 69: /* if_body: if_body while_statement DEL_QUEST  */
#line 259 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2342 "parcer.tab.c"
    break;

  case 70: /* if_body: KW_return right_part DEL_QUEST  */
#line 260 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2348 "parcer.tab.c"
    break;

  case 71: /* if_body: if_body KW_return right_part DEL_QUEST  */
#line 261 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2354 "parcer.tab.c"
    break;

  case 72: /* while_statement: KW_while DEL_LPAR right_part DEL_RPAR DEL_DOTS while_body KW_endwhile  */
#line 265 "parcer.y"
                                                                              {(yyval.str) = template("while (%s){\n%s}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2360 "parcer.tab.c"
    break;

  case 73: /* while_body: expression DEL_QUEST  */
#line 268 "parcer.y"
                                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2366 "parcer.tab.c"
    break;

  case 74: /* while_body: while_body expression DEL_QUEST  */
#line 269 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2372 "parcer.tab.c"
    break;

  case 75: /* while_body: if_statement DEL_QUEST  */
#line 270 "parcer.y"
                                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2378 "parcer.tab.c"
    break;

  case 76: /* while_body: while_body if_statement DEL_QUEST  */
#line 271 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2384 "parcer.tab.c"
    break;

  case 77: /* while_body: while_statement DEL_QUEST  */
#line 272 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2390 "parcer.tab.c"
    break;

  case 78: /* while_body: while_body while_statement DEL_QUEST  */
#line 273 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2396 "parcer.tab.c"
    break;

  case 79: /* while_body: KW_return right_part DEL_QUEST  */
#line 274 "parcer.y"
                                                                {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2402 "parcer.tab.c"
    break;

  case 80: /* while_body: while_body KW_return right_part DEL_QUEST  */
#line 275 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2408 "parcer.tab.c"
    break;

  case 81: /* for_statement: KW_for for_arguments DEL_DOTS for_body KW_endfor  */
#line 280 "parcer.y"
                                                                                                                                                                                                         {(yyval.str) = template("for (%s){\n%s}", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2414 "parcer.tab.c"
    break;

  case 82: /* for_statement: attribute DEL_DOTS OP_EQUAL DEL_LBRAC right_part KW_for T_ID DEL_DOTS attribute DEL_RBRAC var_type  */
#line 281 "parcer.y"
                                                                                                                                                         {(yyval.str) = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s = 0; %s < %s; %s++){\n%s[%s] = %s;\n}", (yyvsp[0].str), (yyvsp[-10].str), (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[-10].str), (yyvsp[-4].str), (yyvsp[-6].str));}
#line 2420 "parcer.tab.c"
    break;

  case 83: /* for_statement: attribute DEL_DOTS OP_EQUAL DEL_LBRAC right_part KW_for T_ID var_type KW_in attribute KW_of attribute DEL_RBRAC var_type  */
#line 282 "parcer.y"
                                                                                                                                 {(yyval.str) = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s_i = 0; %s_i < %s; %s_i++){\n%s%s = %s[%s_i];\n%s[%s_i] = %s;\n}", (yyvsp[0].str), (yyvsp[-13].str), (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[0].str), (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-13].str), (yyvsp[-4].str), (yyvsp[-9].str));}
#line 2426 "parcer.tab.c"
    break;

  case 84: /* for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS right_part DEL_DOTS T_INT DEL_RBRAC  */
#line 285 "parcer.y"
                                                                                {(yyval.str) = template("int %s = %s; %s < %s; %s += %s", (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-8].str), (yyvsp[-3].str), (yyvsp[-8].str), (yyvsp[-1].str));}
#line 2432 "parcer.tab.c"
    break;

  case 85: /* for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS right_part DEL_RBRAC  */
#line 286 "parcer.y"
                                                                                        {(yyval.str) = template("int %s = %s; %s < %s; %s += 1", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-6].str), (yyvsp[-1].str), (yyvsp[-6].str));}
#line 2438 "parcer.tab.c"
    break;

  case 86: /* for_body: expression DEL_QUEST  */
#line 289 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2444 "parcer.tab.c"
    break;

  case 87: /* for_body: for_body expression DEL_QUEST  */
#line 290 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2450 "parcer.tab.c"
    break;

  case 88: /* for_body: if_statement DEL_QUEST  */
#line 291 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2456 "parcer.tab.c"
    break;

  case 89: /* for_body: for_body if_statement DEL_QUEST  */
#line 292 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2462 "parcer.tab.c"
    break;

  case 90: /* for_body: while_statement DEL_QUEST  */
#line 293 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2468 "parcer.tab.c"
    break;

  case 91: /* for_body: for_body while_statement DEL_QUEST  */
#line 294 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2474 "parcer.tab.c"
    break;

  case 92: /* for_body: for_statement DEL_QUEST  */
#line 295 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2480 "parcer.tab.c"
    break;

  case 93: /* for_body: for_body for_statement DEL_QUEST  */
#line 296 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2486 "parcer.tab.c"
    break;

  case 94: /* for_body: KW_return right_part DEL_QUEST  */
#line 297 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2492 "parcer.tab.c"
    break;

  case 95: /* for_body: for_body KW_return right_part DEL_QUEST  */
#line 298 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2498 "parcer.tab.c"
    break;

  case 96: /* comp_statement: KW_comp T_ID DEL_DOTS comp_declarations KW_endcomp  */
#line 303 "parcer.y"
                                                           {(yyval.str) = template("#define SELF struct %s *self\ntypedef struct %s {\n%s\n}%s;\n\n#undef SELF\n\n", (yyvsp[-3].str), (yyvsp[-3].str), (yyvsp[-1].str), (yyvsp[-3].str));}
#line 2504 "parcer.tab.c"
    break;

  case 97: /* comp_statement: KW_comp T_ID DEL_DOTS comp_declarations comp_functions KW_endcomp  */
#line 304 "parcer.y"
                                                                          {(yyval.str) = template("#define SELF struct %s *self\ntypedef struct %s {\n%s%s\n}%s;\n\n%s\nconst %s ctor_%s = {%s};\n#undef SELF\n\n", (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-1].comp_func).func_name, (yyvsp[-4].str), (yyvsp[-1].comp_func).func_all, (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-1].comp_func).func_const);}
#line 2510 "parcer.tab.c"
    break;

  case 101: /* comp_expression: KW_continue  */
#line 311 "parcer.y"
                                {(yyval.str) = template(" continue");}
#line 2516 "parcer.tab.c"
    break;

  case 102: /* comp_expression: DEL_HASHTAG T_ID  */
#line 312 "parcer.y"
                        {(yyval.str) = template("self->%s",(yyvsp[0].str));}
#line 2522 "parcer.tab.c"
    break;

  case 103: /* comp_declarations: comp_declaration_init DEL_QUEST  */
#line 316 "parcer.y"
                                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2528 "parcer.tab.c"
    break;

  case 104: /* comp_declarations: comp_declarations comp_declaration_init DEL_QUEST  */
#line 317 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2534 "parcer.tab.c"
    break;

  case 105: /* comp_declaration_init: DEL_HASHTAG T_ID var_type  */
#line 320 "parcer.y"
                                                                                                                {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 2540 "parcer.tab.c"
    break;

  case 106: /* comp_declaration_init: DEL_HASHTAG T_ID DEL_COMMA  */
#line 321 "parcer.y"
                                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 2546 "parcer.tab.c"
    break;

  case 107: /* comp_declaration_init: DEL_HASHTAG T_ID DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 322 "parcer.y"
                                                                                {(yyval.str) = template("%s%s[%s]", (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-2].str));}
#line 2552 "parcer.tab.c"
    break;

  case 108: /* comp_declaration_init: comp_declaration DEL_HASHTAG T_ID var_type  */
#line 323 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s%s",(yyvsp[0].str), (yyvsp[-3].str) ,(yyvsp[-1].str));}
#line 2558 "parcer.tab.c"
    break;

  case 109: /* comp_declaration_init: comp_declaration DEL_HASHTAG T_ID DEL_COMMA  */
#line 324 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2564 "parcer.tab.c"
    break;

  case 110: /* comp_declaration_init: comp_declaration DEL_HASHTAG T_ID DEL_LBRAC DEL_RBRAC var_type  */
#line 325 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-5].str), (yyvsp[-3].str));}
#line 2570 "parcer.tab.c"
    break;

  case 112: /* comp_declaration: DEL_HASHTAG  */
#line 330 "parcer.y"
                                                                                                                                {(yyval.str) = template("self->");}
#line 2576 "parcer.tab.c"
    break;

  case 113: /* comp_declaration: DEL_HASHTAG T_ID DEL_COMMA  */
#line 331 "parcer.y"
                                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 2582 "parcer.tab.c"
    break;

  case 114: /* comp_declaration: DEL_HASHTAG T_ID DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 332 "parcer.y"
                                                                                {(yyval.str) = template("%s%s[%s]", (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-2].str));}
#line 2588 "parcer.tab.c"
    break;

  case 115: /* comp_declaration: comp_declaration DEL_HASHTAG T_ID var_type  */
#line 333 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s%s",(yyvsp[0].str), (yyvsp[-3].str) ,(yyvsp[-1].str));}
#line 2594 "parcer.tab.c"
    break;

  case 116: /* comp_declaration: comp_declaration DEL_HASHTAG T_ID DEL_COMMA  */
#line 334 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2600 "parcer.tab.c"
    break;

  case 117: /* comp_declaration: comp_declaration DEL_HASHTAG T_ID DEL_LBRAC DEL_RBRAC var_type  */
#line 335 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-5].str), (yyvsp[-3].str));}
#line 2606 "parcer.tab.c"
    break;

  case 119: /* comp_assignment: DEL_HASHTAG T_ID OP_EQUAL comp_right_part  */
#line 340 "parcer.y"
                                                                                                                        {(yyval.str) = template("self->%s = %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2612 "parcer.tab.c"
    break;

  case 120: /* comp_assignment: DEL_HASHTAG T_ID DEL_LBRAC DEL_HASHTAG T_ID DEL_RBRAC OP_EQUAL right_part  */
#line 341 "parcer.y"
                                                                                        {(yyval.str) = template("self->%s[self->%s] = %s", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[0].str));}
#line 2618 "parcer.tab.c"
    break;

  case 121: /* comp_assignment: DEL_HASHTAG T_ID OP_INCREM comp_right_part  */
#line 342 "parcer.y"
                                                                                                                        {(yyval.str) = template("self->%s += %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2624 "parcer.tab.c"
    break;

  case 122: /* comp_assignment: DEL_HASHTAG T_ID DEL_DOT comp_fcn_call  */
#line 343 "parcer.y"
                                                                                                                                {(yyval.str) = template("self->%s.%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2630 "parcer.tab.c"
    break;

  case 123: /* comp_assignment: DEL_HASHTAG T_ID DEL_LBRAC attribute DEL_RBRAC DEL_DOT T_ID DEL_LPAR DEL_RPAR  */
#line 344 "parcer.y"
                                                                                        {(yyval.str) = template("self->%s[%s].%s()", (yyvsp[-7].str), (yyvsp[-5].str), (yyvsp[-2].str));}
#line 2636 "parcer.tab.c"
    break;

  case 124: /* comp_fcn_call: T_ID DEL_LPAR DEL_RPAR  */
#line 348 "parcer.y"
                                                                                                {(yyval.str) = template("%s(&%s)", (yyvsp[-2].str), (yyvsp[-2].str));}
#line 2642 "parcer.tab.c"
    break;

  case 125: /* comp_fcn_call: DEL_HASHTAG T_ID DEL_LPAR DEL_RPAR  */
#line 349 "parcer.y"
                                                                                {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 2648 "parcer.tab.c"
    break;

  case 126: /* comp_fcn_call: T_ID DEL_LPAR comp_fcn_arguments DEL_RPAR  */
#line 350 "parcer.y"
                                                                        {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2654 "parcer.tab.c"
    break;

  case 127: /* comp_fcn_call: DEL_LPAR comp_right_part DEL_RPAR  */
#line 351 "parcer.y"
                                                                                {(yyval.str) = template("(%s)", (yyvsp[-1].str));}
#line 2660 "parcer.tab.c"
    break;

  case 128: /* comp_fcn_call: DEL_HASHTAG T_ID DEL_LPAR comp_fcn_arguments DEL_RPAR  */
#line 352 "parcer.y"
                                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2666 "parcer.tab.c"
    break;

  case 129: /* comp_functions: comp_function DEL_QUEST  */
#line 356 "parcer.y"
                                                                {(yyval.comp_func).func_name = template("%s(*%s) (%s);", (yyvsp[-1].comp_func).func_ret_type, (yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_args); (yyval.comp_func).func_const = template(" .%s=%s",(yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_name); (yyval.comp_func).func_all = template("%s\n", (yyvsp[-1].comp_func).func_all);}
#line 2672 "parcer.tab.c"
    break;

  case 130: /* comp_functions: comp_functions comp_function DEL_QUEST  */
#line 357 "parcer.y"
                                                {(yyval.comp_func).func_name = template("%s\n%s(*%s) (%s);\n",(yyvsp[-2].comp_func).func_name, (yyvsp[-1].comp_func).func_ret_type, (yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_args); (yyval.comp_func).func_const = template("%s, .%s=%s",(yyvsp[-2].comp_func).func_const, (yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_name); (yyval.comp_func).func_all = template("%s\n%s\n", (yyvsp[-2].comp_func).func_all, (yyvsp[-1].comp_func).func_all);}
#line 2678 "parcer.tab.c"
    break;

  case 131: /* comp_function: KW_def T_ID DEL_LPAR DEL_RPAR DEL_DOTS KW_enddef  */
#line 360 "parcer.y"
                                                                                                                                        {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-4].str); (yyval.comp_func).func_args = template("SELF"); (yyval.comp_func).func_all = template("void %s (SELF){\n}", (yyvsp[-4].str));}
#line 2684 "parcer.tab.c"
    break;

  case 132: /* comp_function: KW_def T_ID DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS KW_enddef  */
#line 361 "parcer.y"
                                                                                                                        {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-5].str); (yyval.comp_func).func_args = template("SELF, %s", (yyvsp[-3].str)); (yyval.comp_func).func_all = template("void %s (SELF){\n}", (yyvsp[-5].str));}
#line 2690 "parcer.tab.c"
    break;

  case 133: /* comp_function: KW_def T_ID DEL_LPAR DEL_RPAR DEL_DOTS comp_function_body KW_enddef  */
#line 362 "parcer.y"
                                                                                                                        {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-5].str); (yyval.comp_func).func_args = template("SELF"); (yyval.comp_func).func_all = template("void %s (SELF){\n%s}", (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2696 "parcer.tab.c"
    break;

  case 134: /* comp_function: KW_def T_ID DEL_LPAR DEL_RPAR fcn_ret_type comp_function_body KW_enddef  */
#line 363 "parcer.y"
                                                                                                                {(yyval.comp_func).func_ret_type = template("%s ", (yyvsp[-2].str)); (yyval.comp_func).func_name = (yyvsp[-5].str); (yyval.comp_func).func_args = template("SELF"); (yyval.comp_func).func_all = template("%s %s (SELF){\n%s}", (yyvsp[-2].str), (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2702 "parcer.tab.c"
    break;

  case 135: /* comp_function: KW_def T_ID DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS comp_function_body KW_enddef  */
#line 364 "parcer.y"
                                                                                                {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-6].str); (yyval.comp_func).func_args = template("SELF, %s", (yyvsp[-4].str)); (yyval.comp_func).func_all = template("void %s (SELF, %s){\n%s}", (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2708 "parcer.tab.c"
    break;

  case 136: /* comp_function: KW_def T_ID DEL_LPAR fcn_arguments DEL_RPAR fcn_ret_type comp_function_body KW_enddef  */
#line 365 "parcer.y"
                                                                                                {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-6].str); (yyval.comp_func).func_args = template("SELF, %s", (yyvsp[-4].str)); (yyval.comp_func).func_all = template("void %s (SELF, %s){\n%s}", (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2714 "parcer.tab.c"
    break;

  case 138: /* comp_fcn_arguments: comp_fcn_arguments DEL_HASHTAG attribute  */
#line 369 "parcer.y"
                                                                        {(yyval.str) = template("%sself->%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2720 "parcer.tab.c"
    break;

  case 139: /* comp_fcn_arguments: comp_fcn_arguments DEL_HASHTAG attribute operator  */
#line 370 "parcer.y"
                                                                {(yyval.str) = template("%sself->%s", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2726 "parcer.tab.c"
    break;

  case 140: /* comp_fcn_arguments: comp_fcn_arguments DEL_COMMA  */
#line 371 "parcer.y"
                                                                                        {(yyval.str) = template("%s, ",  (yyvsp[-1].str));}
#line 2732 "parcer.tab.c"
    break;

  case 141: /* comp_fcn_arguments: comp_fcn_arguments attribute DEL_COMMA  */
#line 372 "parcer.y"
                                                                                {(yyval.str) = template("%sself->%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2738 "parcer.tab.c"
    break;

  case 142: /* comp_function_body: comp_assignment DEL_QUEST  */
#line 375 "parcer.y"
                                                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2744 "parcer.tab.c"
    break;

  case 143: /* comp_function_body: comp_function_body comp_assignment DEL_QUEST  */
#line 376 "parcer.y"
                                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2750 "parcer.tab.c"
    break;

  case 144: /* comp_function_body: comp_declaration DEL_QUEST  */
#line 377 "parcer.y"
                                                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2756 "parcer.tab.c"
    break;

  case 145: /* comp_function_body: comp_function_body comp_declaration DEL_QUEST  */
#line 378 "parcer.y"
                                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2762 "parcer.tab.c"
    break;

  case 146: /* comp_function_body: comp_fcn_call DEL_QUEST  */
#line 379 "parcer.y"
                                                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2768 "parcer.tab.c"
    break;

  case 147: /* comp_function_body: comp_function_body comp_fcn_call DEL_QUEST  */
#line 380 "parcer.y"
                                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2774 "parcer.tab.c"
    break;

  case 148: /* comp_function_body: comp_if_statement DEL_QUEST  */
#line 381 "parcer.y"
                                                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2780 "parcer.tab.c"
    break;

  case 149: /* comp_function_body: comp_function_body comp_if_statement DEL_QUEST  */
#line 382 "parcer.y"
                                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2786 "parcer.tab.c"
    break;

  case 150: /* comp_function_body: comp_for_statement DEL_QUEST  */
#line 383 "parcer.y"
                                                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2792 "parcer.tab.c"
    break;

  case 151: /* comp_function_body: comp_function_body comp_for_statement DEL_QUEST  */
#line 384 "parcer.y"
                                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2798 "parcer.tab.c"
    break;

  case 152: /* comp_function_body: KW_return comp_right_part DEL_QUEST  */
#line 385 "parcer.y"
                                                                                {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2804 "parcer.tab.c"
    break;

  case 153: /* comp_function_body: comp_function_body KW_return comp_right_part DEL_QUEST  */
#line 386 "parcer.y"
                                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2810 "parcer.tab.c"
    break;

  case 154: /* comp_if_statement: KW_if DEL_LPAR comp_right_part DEL_RPAR DEL_DOTS comp_if_body KW_endif  */
#line 390 "parcer.y"
                                                                                                                                {(yyval.str) = template("if (%s){\n%s}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2816 "parcer.tab.c"
    break;

  case 155: /* comp_if_statement: KW_if DEL_LPAR comp_right_part DEL_RPAR DEL_DOTS comp_if_body KW_else DEL_DOTS comp_if_body KW_endif  */
#line 391 "parcer.y"
                                                                                                         {(yyval.str) = template("if (%s){\n%s}else{\n%s}", (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2822 "parcer.tab.c"
    break;

  case 156: /* comp_if_body: comp_expression DEL_QUEST  */
#line 394 "parcer.y"
                                                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2828 "parcer.tab.c"
    break;

  case 157: /* comp_if_body: comp_if_body comp_expression DEL_QUEST  */
#line 395 "parcer.y"
                                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2834 "parcer.tab.c"
    break;

  case 158: /* comp_if_body: comp_if_body DEL_QUEST  */
#line 396 "parcer.y"
                                                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2840 "parcer.tab.c"
    break;

  case 159: /* comp_if_body: comp_if_body if_statement DEL_QUEST  */
#line 397 "parcer.y"
                                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2846 "parcer.tab.c"
    break;

  case 160: /* comp_if_body: KW_return comp_right_part DEL_QUEST  */
#line 398 "parcer.y"
                                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2852 "parcer.tab.c"
    break;

  case 161: /* comp_if_body: comp_if_body KW_return comp_right_part DEL_QUEST  */
#line 399 "parcer.y"
                                                        {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2858 "parcer.tab.c"
    break;

  case 162: /* comp_for_statement: KW_for comp_for_arguments DEL_DOTS comp_for_body KW_endfor  */
#line 403 "parcer.y"
                                                                                                                                                                                                                {(yyval.str) = template("for (%s){\n%s}", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2864 "parcer.tab.c"
    break;

  case 163: /* comp_for_statement: attribute DEL_DOTS OP_EQUAL DEL_LBRAC comp_right_part KW_for T_ID DEL_DOTS attribute DEL_RBRAC var_type  */
#line 404 "parcer.y"
                                                                                                                                                                {(yyval.str) = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s_i = 0; %s_i < %s; %s_i++){\n%s[%s_i] = %s;\n}", (yyvsp[0].str), (yyvsp[-10].str), (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[-10].str), (yyvsp[-4].str), (yyvsp[-6].str));}
#line 2870 "parcer.tab.c"
    break;

  case 164: /* comp_for_statement: attribute DEL_DOTS OP_EQUAL DEL_LBRAC comp_right_part KW_for T_ID var_type KW_in attribute KW_of attribute DEL_RBRAC var_type  */
#line 405 "parcer.y"
                                                                                                                                        {(yyval.str) = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s_i = 0; %s_i < %s; %s_i++){\n%s%s = %s[%s_i];\n%s[%s_i] = %s;\n}", (yyvsp[0].str), (yyvsp[-13].str), (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[0].str), (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-13].str), (yyvsp[-4].str), (yyvsp[-9].str));}
#line 2876 "parcer.tab.c"
    break;

  case 165: /* comp_for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS comp_right_part DEL_DOTS T_INT DEL_RBRAC  */
#line 408 "parcer.y"
                                                                                        {(yyval.str) = template("int %s = %s; %s < %s; %s += %s", (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-8].str), (yyvsp[-3].str), (yyvsp[-8].str), (yyvsp[-1].str));}
#line 2882 "parcer.tab.c"
    break;

  case 166: /* comp_for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS comp_right_part DEL_RBRAC  */
#line 409 "parcer.y"
                                                                                                        {(yyval.str) = template("int %s = %s; %s < %s; %s += 1", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-6].str), (yyvsp[-1].str), (yyvsp[-6].str));}
#line 2888 "parcer.tab.c"
    break;

  case 167: /* comp_for_body: comp_expression DEL_QUEST  */
#line 412 "parcer.y"
                                                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2894 "parcer.tab.c"
    break;

  case 168: /* comp_for_body: comp_for_body comp_expression DEL_QUEST  */
#line 413 "parcer.y"
                                                                {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2900 "parcer.tab.c"
    break;

  case 169: /* comp_for_body: comp_if_statement DEL_QUEST  */
#line 414 "parcer.y"
                                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2906 "parcer.tab.c"
    break;

  case 170: /* comp_for_body: comp_for_body comp_if_statement DEL_QUEST  */
#line 415 "parcer.y"
                                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2912 "parcer.tab.c"
    break;

  case 171: /* comp_for_body: comp_for_statement DEL_QUEST  */
#line 416 "parcer.y"
                                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2918 "parcer.tab.c"
    break;

  case 172: /* comp_for_body: comp_for_body comp_for_statement DEL_QUEST  */
#line 417 "parcer.y"
                                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2924 "parcer.tab.c"
    break;

  case 173: /* comp_for_body: KW_return comp_right_part DEL_QUEST  */
#line 418 "parcer.y"
                                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2930 "parcer.tab.c"
    break;

  case 174: /* comp_for_body: comp_for_body KW_return comp_right_part DEL_QUEST  */
#line 419 "parcer.y"
                                                        {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2936 "parcer.tab.c"
    break;

  case 176: /* comp_right_part: DEL_HASHTAG  */
#line 424 "parcer.y"
                                                                                                                        {(yyval.str) = template("self->");}
#line 2942 "parcer.tab.c"
    break;

  case 178: /* comp_right_part: attribute operator  */
#line 426 "parcer.y"
                                                                                                                {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 2948 "parcer.tab.c"
    break;

  case 179: /* comp_right_part: attribute DEL_COMMA  */
#line 427 "parcer.y"
                                                                                                                {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 2954 "parcer.tab.c"
    break;

  case 180: /* comp_right_part: DEL_LPAR comp_right_part DEL_RPAR  */
#line 428 "parcer.y"
                                                                                                {(yyval.str) = template("(%s)", (yyvsp[-1].str));}
#line 2960 "parcer.tab.c"
    break;

  case 181: /* comp_right_part: DEL_LPAR comp_right_part DEL_RPAR operator  */
#line 429 "parcer.y"
                                                                                        {(yyval.str) = template("(%s)%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2966 "parcer.tab.c"
    break;

  case 182: /* comp_right_part: DEL_LBRAC comp_right_part DEL_RBRAC  */
#line 430 "parcer.y"
                                                                                                {(yyval.str) = template("[%s]", (yyvsp[-1].str));}
#line 2972 "parcer.tab.c"
    break;

  case 183: /* comp_right_part: DEL_LBRAC comp_right_part DEL_RBRAC operator  */
#line 431 "parcer.y"
                                                                                        {(yyval.str) = template("[%s]%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2978 "parcer.tab.c"
    break;

  case 184: /* comp_right_part: DEL_LBRAC comp_right_part DEL_RBRAC DEL_DOT  */
#line 432 "parcer.y"
                                                                                        {(yyval.str) = template("[%s].", (yyvsp[-2].str));}
#line 2984 "parcer.tab.c"
    break;

  case 185: /* comp_right_part: comp_right_part attribute  */
#line 433 "parcer.y"
                                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 2990 "parcer.tab.c"
    break;

  case 186: /* comp_right_part: comp_right_part DEL_HASHTAG T_ID  */
#line 434 "parcer.y"
                                                                                                {(yyval.str) = template("%sself->%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2996 "parcer.tab.c"
    break;

  case 187: /* comp_right_part: comp_right_part attribute operator  */
#line 435 "parcer.y"
                                                                                                {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str));}
#line 3002 "parcer.tab.c"
    break;

  case 188: /* comp_right_part: comp_right_part attribute DEL_COMMA  */
#line 436 "parcer.y"
                                                                                                {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 3008 "parcer.tab.c"
    break;

  case 189: /* comp_right_part: comp_right_part DEL_LPAR DEL_RPAR  */
#line 437 "parcer.y"
                                                                                                {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 3014 "parcer.tab.c"
    break;

  case 190: /* comp_right_part: comp_right_part DEL_LPAR DEL_RPAR operator  */
#line 438 "parcer.y"
                                                                                        {(yyval.str) = template("%s()%s", (yyvsp[-3].str), (yyvsp[0].str));}
#line 3020 "parcer.tab.c"
    break;

  case 191: /* comp_right_part: comp_right_part DEL_LPAR comp_right_part DEL_RPAR  */
#line 439 "parcer.y"
                                                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 3026 "parcer.tab.c"
    break;

  case 192: /* comp_right_part: comp_right_part DEL_LPAR comp_right_part DEL_RPAR operator  */
#line 440 "parcer.y"
                                                                        {(yyval.str) = template("%s(%s)%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 3032 "parcer.tab.c"
    break;

  case 193: /* comp_right_part: comp_right_part DEL_LBRAC comp_right_part DEL_RBRAC  */
#line 441 "parcer.y"
                                                                                {(yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 3038 "parcer.tab.c"
    break;

  case 194: /* comp_right_part: comp_right_part DEL_LBRAC comp_right_part DEL_RBRAC operator  */
#line 442 "parcer.y"
                                                                        {(yyval.str) = template("%s[%s]%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 3044 "parcer.tab.c"
    break;

  case 195: /* comp_right_part: comp_right_part DEL_LBRAC comp_right_part DEL_RBRAC DEL_DOT  */
#line 443 "parcer.y"
                                                                        {(yyval.str) = template("%s[%s].", (yyvsp[-4].str), (yyvsp[-2].str));}
#line 3050 "parcer.tab.c"
    break;

  case 197: /* right_part: DEL_HASHTAG  */
#line 449 "parcer.y"
                                                                                                                {(yyval.str) = template("");}
#line 3056 "parcer.tab.c"
    break;

  case 199: /* right_part: attribute operator  */
#line 451 "parcer.y"
                                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 3062 "parcer.tab.c"
    break;

  case 200: /* right_part: T_ID DEL_DOT DEL_HASHTAG T_ID  */
#line 452 "parcer.y"
                                                                                                {(yyval.str) = template("%s.%s", (yyvsp[-3].str), (yyvsp[0].str));}
#line 3068 "parcer.tab.c"
    break;

  case 201: /* right_part: T_ID DEL_DOT T_ID DEL_LPAR DEL_RPAR operator  */
#line 453 "parcer.y"
                                                                                {(yyval.str) = template("%s.%s(&%s)%s",(yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[-5].str), (yyvsp[0].str));}
#line 3074 "parcer.tab.c"
    break;

  case 202: /* right_part: attribute DEL_COMMA  */
#line 454 "parcer.y"
                                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 3080 "parcer.tab.c"
    break;

  case 203: /* right_part: DEL_LPAR right_part DEL_RPAR  */
#line 455 "parcer.y"
                                                                                                {(yyval.str) = template("(%s)", (yyvsp[-1].str));}
#line 3086 "parcer.tab.c"
    break;

  case 204: /* right_part: DEL_LPAR right_part DEL_RPAR operator  */
#line 456 "parcer.y"
                                                                                        {(yyval.str) = template("(%s)%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 3092 "parcer.tab.c"
    break;

  case 205: /* right_part: DEL_LBRAC right_part DEL_RBRAC  */
#line 457 "parcer.y"
                                                                                                {(yyval.str) = template("[%s]", (yyvsp[-1].str));}
#line 3098 "parcer.tab.c"
    break;

  case 206: /* right_part: DEL_LBRAC right_part DEL_RBRAC operator  */
#line 458 "parcer.y"
                                                                                {(yyval.str) = template("[%s]%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 3104 "parcer.tab.c"
    break;

  case 207: /* right_part: right_part attribute  */
#line 459 "parcer.y"
                                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 3110 "parcer.tab.c"
    break;

  case 208: /* right_part: right_part DEL_HASHTAG  */
#line 460 "parcer.y"
                                                                                                {(yyval.str) = template("%s", (yyvsp[-1].str));}
#line 3116 "parcer.tab.c"
    break;

  case 209: /* right_part: right_part attribute operator  */
#line 461 "parcer.y"
                                                                                                {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str));}
#line 3122 "parcer.tab.c"
    break;

  case 210: /* right_part: right_part attribute DEL_COMMA  */
#line 462 "parcer.y"
                                                                                                {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 3128 "parcer.tab.c"
    break;

  case 211: /* right_part: right_part DEL_LPAR DEL_RPAR  */
#line 463 "parcer.y"
                                                                                                {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 3134 "parcer.tab.c"
    break;

  case 212: /* right_part: right_part DEL_LPAR DEL_RPAR operator  */
#line 464 "parcer.y"
                                                                                        {(yyval.str) = template("%s()%s", (yyvsp[-3].str), (yyvsp[0].str));}
#line 3140 "parcer.tab.c"
    break;

  case 213: /* right_part: right_part DEL_LPAR right_part DEL_RPAR  */
#line 465 "parcer.y"
                                                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 3146 "parcer.tab.c"
    break;

  case 214: /* right_part: right_part DEL_LPAR right_part DEL_RPAR operator  */
#line 466 "parcer.y"
                                                                        {(yyval.str) = template("%s(%s)%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 3152 "parcer.tab.c"
    break;

  case 215: /* right_part: right_part DEL_LBRAC right_part DEL_RBRAC  */
#line 467 "parcer.y"
                                                                                {(yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 3158 "parcer.tab.c"
    break;

  case 216: /* right_part: right_part DEL_LBRAC right_part DEL_RBRAC operator  */
#line 468 "parcer.y"
                                                                        {(yyval.str) = template("%s[%s]%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 3164 "parcer.tab.c"
    break;

  case 217: /* right_part: right_part attribute DEL_DOT attribute DEL_LPAR DEL_RPAR  */
#line 469 "parcer.y"
                                                                {(yyval.str) = template("%s%s.%s(&%s)", (yyvsp[-5].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str));}
#line 3170 "parcer.tab.c"
    break;

  case 222: /* attribute: KW_main  */
#line 476 "parcer.y"
                {(yyval.str) = template("main");}
#line 3176 "parcer.tab.c"
    break;

  case 223: /* attribute: KW_True  */
#line 477 "parcer.y"
                {(yyval.str) = template("1");}
#line 3182 "parcer.tab.c"
    break;

  case 224: /* attribute: KW_False  */
#line 478 "parcer.y"
                {(yyval.str) = template("0");}
#line 3188 "parcer.tab.c"
    break;

  case 225: /* attribute: KW_and  */
#line 479 "parcer.y"
                {(yyval.str) = template(" && ");}
#line 3194 "parcer.tab.c"
    break;

  case 226: /* operator: OP_MINUS  */
#line 482 "parcer.y"
                        {(yyval.str) = template(" - ");}
#line 3200 "parcer.tab.c"
    break;

  case 227: /* operator: OP_PLUS  */
#line 483 "parcer.y"
                        {(yyval.str) = template(" + ");}
#line 3206 "parcer.tab.c"
    break;

  case 228: /* operator: OP_MUL  */
#line 484 "parcer.y"
                        {(yyval.str) = template("*");}
#line 3212 "parcer.tab.c"
    break;

  case 229: /* operator: OP_DIV  */
#line 485 "parcer.y"
                        {(yyval.str) = template(" %s ", "/");}
#line 3218 "parcer.tab.c"
    break;

  case 230: /* operator: OP_GREATER  */
#line 486 "parcer.y"
                {(yyval.str) = template(" > ");}
#line 3224 "parcer.tab.c"
    break;

  case 231: /* operator: OP_EQUAL  */
#line 487 "parcer.y"
                {(yyval.str) = template(" = ");}
#line 3230 "parcer.tab.c"
    break;

  case 232: /* operator: OP_LESS  */
#line 488 "parcer.y"
                        {(yyval.str) = template(" < ");}
#line 3236 "parcer.tab.c"
    break;

  case 233: /* operator: OP_LEQ  */
#line 489 "parcer.y"
                        {(yyval.str) = template(" <= ");}
#line 3242 "parcer.tab.c"
    break;

  case 234: /* operator: OP_EQ  */
#line 490 "parcer.y"
                        {(yyval.str) = template(" == ");}
#line 3248 "parcer.tab.c"
    break;

  case 235: /* operator: OP_MOD  */
#line 491 "parcer.y"
                        {(yyval.str) = template(" %s ", "%"); }
#line 3254 "parcer.tab.c"
    break;

  case 236: /* operator: OP_NOTEQ  */
#line 492 "parcer.y"
                {(yyval.str) = template(" != ");}
#line 3260 "parcer.tab.c"
    break;


#line 3264 "parcer.tab.c"

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

#line 496 "parcer.y"

int main(){
	if (yyparse() == 0)
		printf("\n");
	else
		printf("\n");
}
