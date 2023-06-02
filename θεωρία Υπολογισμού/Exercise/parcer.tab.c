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
    int counter = 0;

#line 80 "parcer.tab.c"

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
  YYSYMBOL_KW_com = 28,                    /* KW_com  */
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
  YYSYMBOL_COMM_STR = 60,                  /* COMM_STR  */
  YYSYMBOL_NEW_LINE = 61,                  /* NEW_LINE  */
  YYSYMBOL_62_ = 62,                       /* '*'  */
  YYSYMBOL_63_ = 63,                       /* '/'  */
  YYSYMBOL_YYACCEPT = 64,                  /* $accept  */
  YYSYMBOL_program_start = 65,             /* program_start  */
  YYSYMBOL_program_body = 66,              /* program_body  */
  YYSYMBOL_full_expression = 67,           /* full_expression  */
  YYSYMBOL_constant = 68,                  /* constant  */
  YYSYMBOL_assignment = 69,                /* assignment  */
  YYSYMBOL_kati = 70,                      /* kati  */
  YYSYMBOL_declaration = 71,               /* declaration  */
  YYSYMBOL_var_type = 72,                  /* var_type  */
  YYSYMBOL_fcn_call = 73,                  /* fcn_call  */
  YYSYMBOL_one_liner = 74,                 /* one_liner  */
  YYSYMBOL_make_fcn = 75,                  /* make_fcn  */
  YYSYMBOL_fcn_arguments = 76,             /* fcn_arguments  */
  YYSYMBOL_fcn_ret_type = 77,              /* fcn_ret_type  */
  YYSYMBOL_fcn_body = 78,                  /* fcn_body  */
  YYSYMBOL_if_statement = 79,              /* if_statement  */
  YYSYMBOL_if_body = 80,                   /* if_body  */
  YYSYMBOL_while_statement = 81,           /* while_statement  */
  YYSYMBOL_expression = 82,                /* expression  */
  YYSYMBOL_operators = 83                  /* operators  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   794

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


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
       2,     2,    62,     2,     2,     2,     2,    63,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   120,   120,   121,   131,   132,   133,   135,   142,   143,
     144,   145,   146,   149,   153,   156,   157,   158,   159,   160,
     163,   164,   165,   166,   169,   170,   171,   172,   178,   179,
     180,   181,   182,   183,   186,   187,   188,   189,   190,   191,
     192,   195,   196,   197,   200,   201,   204,   205,   208,   209,
     210,   211,   212,   213,   214,   216,   217,   220,   221,   225,
     226,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   242,   258,   259,   260,   261,   262,   263,   264,
     269,   270,   271,   272,   273,   274,   275,   276
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
  "KW_or", "KW_def", "KW_enddef", "KW_main", "KW_return", "KW_com",
  "KW_endcomp", "KW_of", "T_INT", "T_FLOAT", "T_STRING", "OP_PLUS",
  "OP_MINUS", "OP_MUL", "OP_DIV", "OP_MOD", "OP_EXP", "OP_EQ", "OP_NOTEQ",
  "OP_LESS", "OP_LEQ", "OP_GREATER", "OP_GEQ", "OP_EQUAL", "OP_INCREM",
  "OP_DECREM", "OP_MULCREM", "OP_DIVCREM", "OP_MODCREM", "DEL_QUEST",
  "DEL_LPAR", "DEL_RPAR", "DEL_COMMA", "DEL_LBRAC", "DEL_RBRAC",
  "DEL_DOTS", "DEL_DOT", "COMM_STR", "NEW_LINE", "'*'", "'/'", "$accept",
  "program_start", "program_body", "full_expression", "constant",
  "assignment", "kati", "declaration", "var_type", "fcn_call", "one_liner",
  "make_fcn", "fcn_arguments", "fcn_ret_type", "fcn_body", "if_statement",
  "if_body", "while_statement", "expression", "operators", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-91)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      31,   -91,   -91,   761,   -49,   -91,   -91,   -91,   -91,   -91,
     761,     9,   618,   -36,   -91,   -91,   -47,   -91,   -91,    61,
     -41,   -17,   761,   303,   286,   -91,   761,   -12,   -19,   -91,
     761,   195,   -91,   578,   521,   761,   -91,   -91,   337,   761,
     -91,   761,   111,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     8,     7,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   725,   -91,    10,   -91,   -91,   340,   178,
     761,   -91,    16,   352,   -91,   -91,   543,   -91,   -91,   505,
     -91,   -91,   393,   214,   709,   -91,   -30,   -47,   563,   -33,
     -91,    10,   -91,   -91,    15,   761,    25,    -8,    29,   -91,
     635,    36,    39,   722,   722,    54,   -47,   761,   401,   -91,
     -91,   -91,    35,   -91,   761,    49,    -4,    50,    57,   -91,
      45,   761,    58,    17,    63,   647,   676,   722,   409,   -91,
     709,   447,   -91,   -91,   -91,   -91,    37,    55,   457,   -91,
     -91,   -91,   -91,   761,    69,    65,    70,    72,    74,   -91,
     688,    81,   157,   -91,   -91,   -91,   -91,   489,   250,   -91,
     -91,   -91,   -91,   -91,   -91,    79,   -91,   -91,   -91,   -91
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,    73,    78,     0,     0,    79,    77,    76,    74,    75,
       0,     0,     3,     0,     8,    10,     9,    11,    12,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     4,
       0,     0,    23,     0,     0,     0,    20,    13,     0,     0,
      29,     0,    38,    81,    80,    82,    86,    85,    87,    84,
      83,    36,    34,    35,     0,     0,     5,     7,    22,    26,
      25,    24,    27,    14,    16,    15,    17,    28,     0,     0,
       0,    21,     0,     0,    37,    39,     0,     6,    18,     0,
      32,    30,     0,     0,     0,    40,     0,    44,     0,     0,
      19,     0,    33,    31,     0,    76,     0,     0,     0,    61,
       0,     0,     0,     0,     0,     0,    45,     0,     0,    62,
      63,    64,     0,    59,    76,     0,     0,     0,     0,    66,
       0,    76,     0,     0,     0,     0,     0,     0,     0,    65,
       0,     0,    67,    68,    69,    70,     0,     0,     0,    48,
      49,    50,    41,    76,     0,     0,     0,     0,     0,    42,
       0,     0,     0,    71,    46,    47,    51,     0,     0,    52,
      54,    53,    55,    56,    43,     0,    60,    58,    57,    72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -91,   -91,   -91,   118,   -91,    43,   -91,     6,   -18,    12,
      64,   -91,   -91,    56,   -90,     3,    11,   -74,    -3,    66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    11,    12,    13,    14,   122,    63,   123,    32,   124,
      23,    28,    88,   104,   125,   147,   100,   148,    19,    53
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      21,    36,    37,    18,    22,   102,    16,    24,    30,    25,
     101,    31,    17,    55,   126,    18,    29,    31,    16,    24,
      42,    52,    35,    54,    17,    31,   118,    58,   103,    33,
      65,    69,    71,    57,     1,    42,    24,   150,    74,     2,
      56,     3,     4,    15,   110,    64,    20,    30,   133,   136,
      31,    30,   137,     5,    31,    15,   101,     6,     7,    77,
      78,    76,     8,    34,     9,    42,    52,    83,   107,   140,
      42,    36,    30,    89,    84,    31,    91,   109,   118,    42,
      52,   111,    87,   120,    10,    89,    38,    99,   119,   102,
      97,    90,    24,   130,   106,   154,    98,   169,    68,    66,
      70,   132,   134,    73,    24,    42,   116,    33,    75,   135,
     139,    24,   117,   155,    34,   141,    35,   160,    24,    31,
      30,   159,   161,    31,   162,    42,   163,    96,    42,    79,
      27,   145,   145,    99,    82,    42,    97,   146,   146,   165,
     158,   152,    98,   115,     0,    43,    44,    45,     0,    46,
       0,    47,    48,    49,    42,    52,   145,    50,   116,   108,
       1,   127,   146,     0,   117,     2,     0,     0,   144,   144,
     166,   128,     0,    96,    94,     0,     0,     0,   131,     5,
       0,     1,     0,     6,   114,   138,     2,     0,     8,     0,
       9,     0,     0,   144,     0,   115,     0,     0,    59,    60,
       5,    61,    62,     0,     6,     7,     0,   157,     0,     8,
      10,     9,    43,    44,    45,     0,    46,     1,    47,    48,
      49,     0,     2,     0,    50,     0,     0,     0,     0,     0,
       0,     0,    81,    51,     0,     0,     5,     0,     0,     0,
       6,     7,     0,     0,     0,     8,     0,     9,    43,    44,
      45,     0,    46,     1,    47,    48,    49,     0,     2,     0,
      50,     0,     0,     0,     0,     0,     0,     0,    93,    51,
       0,     0,     5,     0,     0,     0,     6,     7,     0,     0,
       0,     8,     0,     9,    43,    44,    45,     0,    46,     1,
      47,    48,    49,     0,     2,     0,    50,     0,     0,     0,
       0,     0,   168,     0,     0,    51,     1,     0,     5,     0,
       0,     2,     6,     7,     0,     0,     0,     8,     0,     9,
      43,    44,    45,     0,    46,     5,    47,    48,    49,     6,
       7,     0,    50,     0,     8,     0,     9,     0,     0,     0,
       1,    51,     0,     1,     0,     2,     0,     0,     2,     0,
       0,     0,     0,     0,     0,     1,    39,    40,    41,     5,
       2,     0,     5,     6,     7,     0,     6,     7,     8,     0,
       9,     8,     0,     9,     5,     0,     0,     0,     6,     7,
       0,     0,     0,     8,     0,     9,     0,     0,     0,     0,
      39,    72,    41,    39,    80,    41,     1,     0,     0,     0,
       0,     2,     0,     0,     1,    39,    85,    41,     0,     2,
       0,     0,     1,     0,     0,     5,     0,     2,     0,     6,
       7,     0,     0,     5,     8,     0,     9,     6,     7,     0,
       0,     5,     8,     0,     9,     6,     7,     0,     0,     0,
       8,     0,     9,     0,     0,     0,    39,    92,    41,     0,
       1,     0,     0,   129,    39,     2,    41,     0,     0,     0,
       1,     0,    39,   151,    41,     2,     0,     0,     0,     5,
       0,     0,     0,     6,     7,     0,     0,     0,     8,     5,
       9,     0,     0,     6,     7,     0,     0,     0,     8,     0,
       9,     0,     1,     0,     0,     0,     0,     2,     0,   153,
      39,     0,    41,     0,     0,     0,     0,     0,     1,   156,
      39,     5,    41,     2,     0,     6,     7,     0,     0,     0,
       8,     0,     9,     0,     1,     0,     0,     5,     0,     2,
       0,     6,     7,     0,     0,     0,     8,     0,     9,     0,
       0,   167,    39,     5,    41,     0,     1,     6,     7,     0,
       0,     2,     8,     0,     9,    43,    44,    45,    10,    46,
       0,    47,    48,    49,     0,     5,     1,    50,     0,     6,
       7,     2,     0,     0,     8,    67,     9,     0,     0,     0,
       0,     1,     0,     0,     0,     5,     2,     0,     0,     6,
       7,     0,     0,     0,     8,     0,     9,    86,     0,     0,
       5,     0,     0,     0,     6,     7,     0,     0,     0,     8,
       0,     9,    43,    44,    45,     0,    46,   105,    47,    48,
      49,     1,     0,     0,    50,     0,     2,     0,     3,     4,
       0,    10,     0,     0,     0,     0,     0,     0,     1,     0,
       5,     0,    26,     2,     6,     7,     0,   112,   113,     8,
       1,     9,    94,     0,     0,     2,     0,     5,     4,     0,
       0,     6,   114,     0,    94,     0,     8,     0,     9,     5,
       0,    10,   142,     6,   143,     0,     0,     0,     8,     1,
       9,     0,     0,     0,     2,     0,     0,     4,    10,     0,
       0,     1,     0,    94,     0,     0,     2,     0,     5,     4,
      10,   149,     6,   143,     0,    94,     0,     8,     0,     9,
       5,     0,     1,   164,     6,   143,     0,     2,     0,     8,
       4,     9,     0,     0,     0,     1,    94,     0,     1,    10,
       2,     5,     0,     2,     0,     6,    95,     0,     0,     0,
       8,    10,     9,     0,     5,     0,     0,     5,     6,   121,
       0,     6,     7,     8,     0,     9,     8,     0,     9,    43,
      44,    45,    10,    46,     1,    47,    48,    49,     0,     2,
       0,    50,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     5,     0,     0,     0,     6,     7,     0,
       0,     0,     8,     0,     9
};

static const yytype_int16 yycheck[] =
{
       3,    19,    20,     0,    53,    35,     0,    10,    55,     0,
      84,    58,     0,    25,   104,    12,    52,    58,    12,    22,
      23,    24,    55,    26,    12,    58,   100,    30,    58,    46,
      33,    34,    35,    52,     3,    38,    39,   127,    41,     8,
      52,    10,    11,     0,    52,    33,     3,    55,    52,     4,
      58,    55,     7,    22,    58,    12,   130,    26,    27,    52,
      63,    53,    31,    53,    33,    68,    69,    70,    53,    52,
      73,    89,    55,    76,    58,    58,    79,    52,   152,    82,
      83,    52,    76,    44,    53,    88,    22,    84,    52,    35,
      84,    79,    95,    58,    88,    58,    84,    18,    34,    33,
      34,    52,    52,    39,   107,   108,   100,    46,    42,    52,
      52,   114,   100,    58,    53,    52,    55,    52,   121,    58,
      55,    52,    52,    58,    52,   128,    52,    84,   131,    63,
      12,   125,   126,   130,    70,   138,   130,   125,   126,    58,
     143,   130,   130,   100,    -1,    34,    35,    36,    -1,    38,
      -1,    40,    41,    42,   157,   158,   150,    46,   152,    95,
       3,   105,   150,    -1,   152,     8,    -1,    -1,   125,   126,
      13,   107,    -1,   130,    17,    -1,    -1,    -1,   114,    22,
      -1,     3,    -1,    26,    27,   121,     8,    -1,    31,    -1,
      33,    -1,    -1,   150,    -1,   152,    -1,    -1,     3,     4,
      22,     6,     7,    -1,    26,    27,    -1,   143,    -1,    31,
      53,    33,    34,    35,    36,    -1,    38,     3,    40,    41,
      42,    -1,     8,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    -1,    -1,    22,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    33,    34,    35,
      36,    -1,    38,     3,    40,    41,    42,    -1,     8,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      -1,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    -1,    33,    34,    35,    36,    -1,    38,     3,
      40,    41,    42,    -1,     8,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,     3,    -1,    22,    -1,
      -1,     8,    26,    27,    -1,    -1,    -1,    31,    -1,    33,
      34,    35,    36,    -1,    38,    22,    40,    41,    42,    26,
      27,    -1,    46,    -1,    31,    -1,    33,    -1,    -1,    -1,
       3,    55,    -1,     3,    -1,     8,    -1,    -1,     8,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    53,    54,    55,    22,
       8,    -1,    22,    26,    27,    -1,    26,    27,    31,    -1,
      33,    31,    -1,    33,    22,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,
      53,    54,    55,    53,    54,    55,     3,    -1,    -1,    -1,
      -1,     8,    -1,    -1,     3,    53,    54,    55,    -1,     8,
      -1,    -1,     3,    -1,    -1,    22,    -1,     8,    -1,    26,
      27,    -1,    -1,    22,    31,    -1,    33,    26,    27,    -1,
      -1,    22,    31,    -1,    33,    26,    27,    -1,    -1,    -1,
      31,    -1,    33,    -1,    -1,    -1,    53,    54,    55,    -1,
       3,    -1,    -1,    52,    53,     8,    55,    -1,    -1,    -1,
       3,    -1,    53,    54,    55,     8,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,    22,
      33,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,
      33,    -1,     3,    -1,    -1,    -1,    -1,     8,    -1,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,     3,    52,
      53,    22,    55,     8,    -1,    26,    27,    -1,    -1,    -1,
      31,    -1,    33,    -1,     3,    -1,    -1,    22,    -1,     8,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    33,    -1,
      -1,    52,    53,    22,    55,    -1,     3,    26,    27,    -1,
      -1,     8,    31,    -1,    33,    34,    35,    36,    53,    38,
      -1,    40,    41,    42,    -1,    22,     3,    46,    -1,    26,
      27,     8,    -1,    -1,    31,    54,    33,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    22,     8,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    -1,    33,    54,    -1,    -1,
      22,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    33,    34,    35,    36,    -1,    38,    54,    40,    41,
      42,     3,    -1,    -1,    46,    -1,     8,    -1,    10,    11,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      22,    -1,    24,     8,    26,    27,    -1,    12,    13,    31,
       3,    33,    17,    -1,    -1,     8,    -1,    22,    11,    -1,
      -1,    26,    27,    -1,    17,    -1,    31,    -1,    33,    22,
      -1,    53,    25,    26,    27,    -1,    -1,    -1,    31,     3,
      33,    -1,    -1,    -1,     8,    -1,    -1,    11,    53,    -1,
      -1,     3,    -1,    17,    -1,    -1,     8,    -1,    22,    11,
      53,    25,    26,    27,    -1,    17,    -1,    31,    -1,    33,
      22,    -1,     3,    25,    26,    27,    -1,     8,    -1,    31,
      11,    33,    -1,    -1,    -1,     3,    17,    -1,     3,    53,
       8,    22,    -1,     8,    -1,    26,    27,    -1,    -1,    -1,
      31,    53,    33,    -1,    22,    -1,    -1,    22,    26,    27,
      -1,    26,    27,    31,    -1,    33,    31,    -1,    33,    34,
      35,    36,    53,    38,     3,    40,    41,    42,    -1,     8,
      -1,    46,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     8,    10,    11,    22,    26,    27,    31,    33,
      53,    65,    66,    67,    68,    69,    71,    73,    79,    82,
      69,    82,    53,    74,    82,     0,    24,    67,    75,    52,
      55,    58,    72,    46,    53,    55,    72,    72,    74,    53,
      54,    55,    82,    34,    35,    36,    38,    40,    41,    42,
      46,    55,    82,    83,    82,    25,    52,    52,    82,     3,
       4,     6,     7,    70,    73,    82,    83,    54,    74,    82,
      83,    82,    54,    74,    82,    83,    53,    52,    82,    83,
      54,    54,    74,    82,    58,    54,    54,    71,    76,    82,
      73,    82,    54,    54,    17,    27,    69,    71,    73,    79,
      80,    81,    35,    58,    77,    54,    71,    53,    74,    52,
      52,    52,    12,    13,    27,    69,    71,    73,    81,    52,
      44,    27,    69,    71,    73,    78,    78,    77,    74,    52,
      58,    74,    52,    52,    52,    52,     4,     7,    74,    52,
      52,    52,    25,    27,    69,    71,    73,    79,    81,    25,
      78,    54,    80,    52,    58,    58,    52,    74,    82,    52,
      52,    52,    52,    52,    25,    58,    13,    52,    52,    18
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    65,    66,    66,    66,    66,    67,    67,
      67,    67,    67,    68,    69,    70,    70,    70,    70,    70,
      71,    71,    71,    71,    72,    72,    72,    72,    73,    73,
      73,    73,    73,    73,    74,    74,    74,    74,    74,    74,
      74,    75,    75,    75,    76,    76,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    79,
      79,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    81,    82,    82,    82,    82,    82,    82,    82,
      83,    83,    83,    83,    83,    83,    83,    83
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     3,     4,     3,     1,     1,
       1,     1,     1,     3,     3,     1,     1,     1,     2,     3,
       2,     3,     3,     2,     2,     2,     2,     2,     3,     3,
       4,     5,     4,     5,     2,     2,     2,     3,     2,     3,
       4,     7,     7,     8,     1,     2,     4,     4,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     4,     4,     7,
      10,     1,     2,     2,     2,     3,     2,     3,     3,     3,
       3,     4,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
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
#line 122 "parcer.y"
  {
	if (yyerror_count == 0) {
		puts(c_prologue);
		printf("%s\n", (yyvsp[0].str));
	}
  }
#line 1392 "parcer.tab.c"
    break;

  case 4: /* program_body: full_expression DEL_QUEST  */
#line 131 "parcer.y"
                                                                                        {(yyval.str) = template("%s\n\n", (yyvsp[-1].str));}
#line 1398 "parcer.tab.c"
    break;

  case 5: /* program_body: program_body full_expression DEL_QUEST  */
#line 132 "parcer.y"
                                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1404 "parcer.tab.c"
    break;

  case 6: /* program_body: program_body full_expression KW_enddef DEL_QUEST  */
#line 133 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n}", (yyvsp[-3].str), (yyvsp[-2].str));}
#line 1410 "parcer.tab.c"
    break;

  case 7: /* program_body: program_body make_fcn DEL_QUEST  */
#line 135 "parcer.y"
                                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1416 "parcer.tab.c"
    break;

  case 13: /* constant: KW_const assignment var_type  */
#line 149 "parcer.y"
                                         {(yyval.str) = template("const %s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 1422 "parcer.tab.c"
    break;

  case 14: /* assignment: expression OP_EQUAL kati  */
#line 153 "parcer.y"
                                        {(yyval.str) = template("%s = %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1428 "parcer.tab.c"
    break;

  case 18: /* kati: kati expression  */
#line 159 "parcer.y"
                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1434 "parcer.tab.c"
    break;

  case 19: /* kati: kati operators fcn_call  */
#line 160 "parcer.y"
                                {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str));}
#line 1440 "parcer.tab.c"
    break;

  case 20: /* declaration: expression var_type  */
#line 163 "parcer.y"
                                                        {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 1446 "parcer.tab.c"
    break;

  case 21: /* declaration: expression DEL_COMMA expression  */
#line 164 "parcer.y"
                                        {(yyval.str) = template("%s, %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1452 "parcer.tab.c"
    break;

  case 22: /* declaration: declaration DEL_COMMA expression  */
#line 165 "parcer.y"
                                                                {(yyval.str) = template("%s, %s", (yyvsp[-2].str), (yyvsp[0].str) );}
#line 1458 "parcer.tab.c"
    break;

  case 23: /* declaration: declaration var_type  */
#line 166 "parcer.y"
                                                {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 1464 "parcer.tab.c"
    break;

  case 24: /* var_type: DEL_DOTS KW_str  */
#line 169 "parcer.y"
                        {(yyval.str) = template("char* ");}
#line 1470 "parcer.tab.c"
    break;

  case 25: /* var_type: DEL_DOTS KW_integer  */
#line 170 "parcer.y"
                        {(yyval.str) = template("int "); }
#line 1476 "parcer.tab.c"
    break;

  case 26: /* var_type: DEL_DOTS T_ID  */
#line 171 "parcer.y"
                                {(yyval.str) = template("%s ", (yyvsp[0].str));}
#line 1482 "parcer.tab.c"
    break;

  case 27: /* var_type: DEL_DOTS KW_boolean  */
#line 172 "parcer.y"
                        {(yyval.str) = template("int ");}
#line 1488 "parcer.tab.c"
    break;

  case 28: /* fcn_call: expression DEL_LPAR DEL_RPAR  */
#line 178 "parcer.y"
                                                                                {(yyval.str) = template("%s()",(yyvsp[-2].str));}
#line 1494 "parcer.tab.c"
    break;

  case 29: /* fcn_call: DEL_LPAR one_liner DEL_RPAR  */
#line 179 "parcer.y"
                                                                                {(yyval.str) = template("(%s)", (yyvsp[-1].str));}
#line 1500 "parcer.tab.c"
    break;

  case 30: /* fcn_call: expression DEL_LPAR expression DEL_RPAR  */
#line 180 "parcer.y"
                                                                        {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1506 "parcer.tab.c"
    break;

  case 31: /* fcn_call: expression DEL_LPAR operators expression DEL_RPAR  */
#line 181 "parcer.y"
                                                        {(yyval.str) = template("%s(%s%s)", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1512 "parcer.tab.c"
    break;

  case 32: /* fcn_call: expression DEL_LPAR one_liner DEL_RPAR  */
#line 182 "parcer.y"
                                                                        {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1518 "parcer.tab.c"
    break;

  case 33: /* fcn_call: expression DEL_LPAR operators one_liner DEL_RPAR  */
#line 183 "parcer.y"
                                                        {(yyval.str) = template("%s(%s%s)", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1524 "parcer.tab.c"
    break;

  case 34: /* one_liner: expression expression  */
#line 186 "parcer.y"
                                                                {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1530 "parcer.tab.c"
    break;

  case 35: /* one_liner: expression operators  */
#line 187 "parcer.y"
                                                                {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1536 "parcer.tab.c"
    break;

  case 36: /* one_liner: expression DEL_COMMA  */
#line 188 "parcer.y"
                                                                {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 1542 "parcer.tab.c"
    break;

  case 37: /* one_liner: one_liner DEL_COMMA expression  */
#line 189 "parcer.y"
                                                        {(yyval.str) = template("%s, %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1548 "parcer.tab.c"
    break;

  case 38: /* one_liner: one_liner expression  */
#line 190 "parcer.y"
                                                                {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1554 "parcer.tab.c"
    break;

  case 39: /* one_liner: one_liner expression operators  */
#line 191 "parcer.y"
                                                        {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str));}
#line 1560 "parcer.tab.c"
    break;

  case 40: /* one_liner: one_liner DEL_LPAR one_liner DEL_RPAR  */
#line 192 "parcer.y"
                                            {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1566 "parcer.tab.c"
    break;

  case 41: /* make_fcn: KW_def expression DEL_LPAR DEL_RPAR DEL_DOTS fcn_body KW_enddef  */
#line 195 "parcer.y"
                                                                                                                {(yyval.str) = template("\nvoid %s()\n{\n%s}", (yyvsp[-5].str), (yyvsp[-1].str));}
#line 1572 "parcer.tab.c"
    break;

  case 42: /* make_fcn: KW_def expression DEL_LPAR DEL_RPAR fcn_ret_type fcn_body KW_enddef  */
#line 196 "parcer.y"
                                                                                                        {(yyval.str) = template("\n%s%s()\n{\n%s}", (yyvsp[-2].str), (yyvsp[-5].str), (yyvsp[-1].str));}
#line 1578 "parcer.tab.c"
    break;

  case 43: /* make_fcn: KW_def expression DEL_LPAR fcn_arguments DEL_RPAR fcn_ret_type fcn_body KW_enddef  */
#line 197 "parcer.y"
                                                                                                {(yyval.str) = template("\n%s%s(%s)\n{\n%s}", (yyvsp[-2].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1584 "parcer.tab.c"
    break;

  case 45: /* fcn_arguments: fcn_arguments declaration  */
#line 201 "parcer.y"
                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1590 "parcer.tab.c"
    break;

  case 46: /* fcn_ret_type: OP_MINUS OP_GREATER KW_integer DEL_DOTS  */
#line 204 "parcer.y"
                                                {(yyval.str) = template("int "); }
#line 1596 "parcer.tab.c"
    break;

  case 47: /* fcn_ret_type: OP_MINUS OP_GREATER KW_boolean DEL_DOTS  */
#line 205 "parcer.y"
                                                {(yyval.str) = template("int "); }
#line 1602 "parcer.tab.c"
    break;

  case 48: /* fcn_body: assignment DEL_QUEST  */
#line 208 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1608 "parcer.tab.c"
    break;

  case 49: /* fcn_body: declaration DEL_QUEST  */
#line 209 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1614 "parcer.tab.c"
    break;

  case 50: /* fcn_body: fcn_call DEL_QUEST  */
#line 210 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1620 "parcer.tab.c"
    break;

  case 51: /* fcn_body: KW_return one_liner DEL_QUEST  */
#line 211 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 1626 "parcer.tab.c"
    break;

  case 52: /* fcn_body: fcn_body assignment DEL_QUEST  */
#line 212 "parcer.y"
                                                {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1632 "parcer.tab.c"
    break;

  case 53: /* fcn_body: fcn_body fcn_call DEL_QUEST  */
#line 213 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1638 "parcer.tab.c"
    break;

  case 54: /* fcn_body: fcn_body declaration DEL_QUEST  */
#line 214 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1644 "parcer.tab.c"
    break;

  case 55: /* fcn_body: fcn_body if_statement DEL_QUEST  */
#line 216 "parcer.y"
                                                        {(yyval.str) = template("%s%s", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1650 "parcer.tab.c"
    break;

  case 56: /* fcn_body: fcn_body while_statement DEL_QUEST  */
#line 217 "parcer.y"
                                                {(yyval.str) = template("%s%s", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1656 "parcer.tab.c"
    break;

  case 57: /* fcn_body: fcn_body KW_return expression DEL_QUEST  */
#line 220 "parcer.y"
                                            {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1662 "parcer.tab.c"
    break;

  case 58: /* fcn_body: fcn_body KW_return one_liner DEL_QUEST  */
#line 221 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1668 "parcer.tab.c"
    break;

  case 59: /* if_statement: KW_if DEL_LPAR one_liner DEL_RPAR DEL_DOTS if_body KW_endif  */
#line 225 "parcer.y"
                                                                    {(yyval.str) = template("if ( %s )\n{\n%s\n}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1674 "parcer.tab.c"
    break;

  case 60: /* if_statement: KW_if DEL_LPAR one_liner DEL_RPAR DEL_DOTS if_body KW_else DEL_DOTS if_body KW_endif  */
#line 226 "parcer.y"
                                                                                         {(yyval.str) = template("if ( %s )\n{\n%s\n}else{\n%s", (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-1].str)); }
#line 1680 "parcer.tab.c"
    break;

  case 62: /* if_body: assignment DEL_QUEST  */
#line 230 "parcer.y"
                                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1686 "parcer.tab.c"
    break;

  case 63: /* if_body: declaration DEL_QUEST  */
#line 231 "parcer.y"
                                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1692 "parcer.tab.c"
    break;

  case 64: /* if_body: fcn_call DEL_QUEST  */
#line 232 "parcer.y"
                                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1698 "parcer.tab.c"
    break;

  case 65: /* if_body: KW_return one_liner DEL_QUEST  */
#line 233 "parcer.y"
                                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 1704 "parcer.tab.c"
    break;

  case 66: /* if_body: while_statement DEL_QUEST  */
#line 234 "parcer.y"
                                                                        {(yyval.str) = template("%s", (yyvsp[-1].str));}
#line 1710 "parcer.tab.c"
    break;

  case 67: /* if_body: if_body assignment DEL_QUEST  */
#line 235 "parcer.y"
                                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1716 "parcer.tab.c"
    break;

  case 68: /* if_body: if_body declaration DEL_QUEST  */
#line 236 "parcer.y"
                                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1722 "parcer.tab.c"
    break;

  case 69: /* if_body: if_body fcn_call DEL_QUEST  */
#line 237 "parcer.y"
                                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1728 "parcer.tab.c"
    break;

  case 70: /* if_body: if_body while_statement DEL_QUEST  */
#line 238 "parcer.y"
                                                                {(yyval.str) = template("%s%s", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1734 "parcer.tab.c"
    break;

  case 71: /* if_body: if_body KW_return one_liner DEL_QUEST  */
#line 239 "parcer.y"
                                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1740 "parcer.tab.c"
    break;

  case 72: /* while_statement: KW_while DEL_LPAR one_liner DEL_RPAR DEL_DOTS KW_endwhile  */
#line 242 "parcer.y"
                                                                  {(yyval.str) = template("while(%s)\n{\n\n}", (yyvsp[-3].str));}
#line 1746 "parcer.tab.c"
    break;

  case 76: /* expression: KW_return  */
#line 261 "parcer.y"
               {(yyval.str) = template("return ");}
#line 1752 "parcer.tab.c"
    break;

  case 77: /* expression: KW_main  */
#line 262 "parcer.y"
               {(yyval.str) = template("main");}
#line 1758 "parcer.tab.c"
    break;

  case 78: /* expression: KW_True  */
#line 263 "parcer.y"
               {(yyval.str) = template("True");}
#line 1764 "parcer.tab.c"
    break;

  case 79: /* expression: KW_and  */
#line 264 "parcer.y"
               {(yyval.str) = template(" and ");}
#line 1770 "parcer.tab.c"
    break;

  case 80: /* operators: OP_MINUS  */
#line 269 "parcer.y"
                        {(yyval.str) = template(" - ");}
#line 1776 "parcer.tab.c"
    break;

  case 81: /* operators: OP_PLUS  */
#line 270 "parcer.y"
                        {(yyval.str) = template(" + ");}
#line 1782 "parcer.tab.c"
    break;

  case 82: /* operators: OP_MUL  */
#line 271 "parcer.y"
                        {(yyval.str) = template("*");}
#line 1788 "parcer.tab.c"
    break;

  case 83: /* operators: OP_EQUAL  */
#line 272 "parcer.y"
                {(yyval.str) = template(" = ");}
#line 1794 "parcer.tab.c"
    break;

  case 84: /* operators: OP_LESS  */
#line 273 "parcer.y"
                        {(yyval.str) = template(" < ");}
#line 1800 "parcer.tab.c"
    break;

  case 85: /* operators: OP_EQ  */
#line 274 "parcer.y"
                        {(yyval.str) = template(" == ");}
#line 1806 "parcer.tab.c"
    break;

  case 86: /* operators: OP_MOD  */
#line 275 "parcer.y"
                        {(yyval.str) = template(" % ");}
#line 1812 "parcer.tab.c"
    break;

  case 87: /* operators: OP_NOTEQ  */
#line 276 "parcer.y"
                {(yyval.str) = template(" != ");}
#line 1818 "parcer.tab.c"
    break;


#line 1822 "parcer.tab.c"

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

#line 278 "parcer.y"

int main(){
	if (yyparse() == 0)
		printf("Accepted\n");
	else
		printf("Rejected\n");
}
