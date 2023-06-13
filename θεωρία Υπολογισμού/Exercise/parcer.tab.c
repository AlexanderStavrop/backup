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
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2906

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  246
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  568

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
     183,   184,   185,   188,   189,   190,   191,   192,   197,   198,
     199,   200,   201,   202,   207,   208,   209,   210,   215,   216,
     217,   218,   219,   222,   223,   224,   225,   226,   227,   228,
     231,   232,   233,   234,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   251,   252,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   269,   272,   273,
     274,   275,   276,   277,   278,   279,   284,   285,   286,   289,
     290,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   307,   308,   312,   313,   314,   315,   316,   317,   321,
     322,   325,   326,   327,   328,   329,   330,   334,   335,   336,
     337,   338,   339,   340,   344,   345,   346,   347,   348,   349,
     353,   354,   355,   356,   357,   361,   362,   365,   366,   367,
     368,   369,   370,   373,   374,   375,   376,   377,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     395,   396,   399,   400,   401,   402,   403,   404,   408,   409,
     410,   413,   414,   417,   418,   419,   420,   421,   422,   423,
     424,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501
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

#define YYPACT_NINF (-374)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-225)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2621,   -36,  -374,  -374,  2694,  -374,  -374,  -374,  2710,  -374,
      10,  -374,  -374,  -374,    51,  2621,    15,  -374,  -374,  2169,
    -374,    37,    42,   206,  2710,     4,    52,    21,    94,  -374,
      48,    44,  -374,    54,    55,    67,  -374,  -374,    62,  -374,
    -374,   931,  2710,  2710,  2710,  2710,   931,  -374,   311,  -374,
      57,    68,   122,  2710,    76,  -374,  2207,  2079,  -374,  -374,
    -374,  -374,  -374,    79,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,   931,   931,
    -374,  1951,  2789,  -374,  -374,  -374,  -374,  -374,  1299,  -374,
    -374,  -374,  -374,  -374,   -25,  2219,    99,    89,   -19,  2127,
     110,   101,   144,  2169,  1977,   103,   102,   141,    11,  1325,
    1341,   760,   931,  -374,  2711,  -374,  -374,  -374,   931,  -374,
     118,  -374,  2181,   931,   135,   143,  2335,  2517,   -17,  -374,
     154,  -374,  2111,  -374,  2710,   214,   185,  -374,   140,    58,
     149,  -374,   199,   162,   204,  2855,  2855,  2855,  1380,  1396,
    -374,  2710,  -374,  1951,  -374,   164,  1951,    93,   172,   233,
     181,  -374,   931,   187,  2361,   189,   190,   194,   531,  2387,
    2517,  2517,  -374,  -374,    21,   201,   203,   215,  2710,  -374,
     210,  -374,  -374,   222,  -374,   231,   224,  -374,  -374,  -374,
    -374,  2855,  2855,   226,  -374,   230,   237,   242,   246,   931,
     265,   248,   931,  1435,  -374,  -374,   931,   255,   260,   267,
     268,  -374,  -374,  -374,    22,  -374,  2413,  2439,  -374,    21,
      21,   266,  2245,  -374,   272,   276,   275,  2855,  -374,  -374,
     283,  -374,  -374,  -374,  -374,  1451,   282,  2543,  1467,  -374,
    1493,  -374,  -374,  -374,  -374,   286,  -374,  -374,  -374,    21,
      -4,  2143,    21,  -374,  -374,   281,   313,   931,   293,   299,
     305,   307,  2465,   308,  -374,   931,   303,  1055,   197,    20,
     310,   623,   314,  1509,  -374,  -374,  -374,  -374,  -374,   931,
     316,   319,   323,   325,  2595,  1525,    27,   312,   375,  -374,
     977,   977,   376,  -374,   -22,   329,   331,  1087,   335,   338,
     300,  1119,  1151,   197,   931,  2678,   339,   340,  2309,   383,
     341,   931,  -374,  1551,  -374,  -374,  -374,  -374,   931,   346,
     348,   349,  2569,   401,  2257,   977,   390,   352,   977,   977,
    -374,  1567,  2811,  -374,  1583,   127,  -374,   412,  -374,  -374,
    -374,   977,     6,   364,   365,   366,   367,  -374,  -374,    70,
    -374,  -374,  1183,  1215,  1609,   369,  -374,  -374,   368,  -374,
     931,   370,   372,   373,   377,   378,  -374,  1241,  -374,  1625,
    -374,  -374,  -374,  -374,   931,   380,   381,   384,   386,  -374,
    2009,  -374,  1641,   379,   833,  1667,  1683,  -374,   882,   977,
     425,  2833,  -374,  -374,  -374,   977,   977,  2283,  -374,  2095,
      -1,   238,  1722,  -374,  -374,  -374,  -374,  -374,   391,  -374,
    -374,  -374,  -374,   623,  1738,  -374,  -374,  -374,  -374,  -374,
    -374,   403,  -374,  1754,  -374,  -374,  -374,  2652,   427,  -374,
    -374,  2710,   385,   393,   417,  -374,  -374,   977,   449,   404,
     400,  -374,  -374,   409,   410,   721,  2855,  2737,  2855,  1793,
    1809,  -374,  -374,  -374,  2021,  2021,  -374,  2053,   450,   406,
     413,   462,  -374,  -374,   416,  -374,  -374,   977,  2491,  -374,
     418,  -374,   419,   423,  2710,  2855,  -374,  1257,   424,  1848,
     127,  -374,  -374,  -374,  -374,   977,   429,   432,   434,  -374,
    -374,  -374,  -374,  2855,  2763,  -374,   430,   -24,   435,    21,
    1864,  -374,  -374,    21,   440,  -374,   977,   437,   673,   776,
     977,  -374,  1880,  -374,  -374,  -374,  -374,  -374,  -374,   445,
     492,  -374,  -374,   494,  -374,  2710,  1919,  -374,   441,  -374,
     977,  -374,   446,   451,  1283,  -374,   931,   448,   444,   452,
    -374,  1257,  1935,  -374,  -374,  -374,   474,  1951,   453,  2652,
     496,    21,  1023,  -374,   456,  -374,   458,  2710,  -374,  -374,
    -374,    21,   486,  -374,  2710,   460,    21,  -374
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,   224,   229,   230,     0,    14,   231,   232,     0,   228,
       0,   225,   227,   226,     0,     3,     0,    10,    12,    11,
      13,     0,     0,     0,     0,     0,   224,     0,     0,   224,
       0,     0,     1,     0,     0,     0,     4,    32,     0,     6,
       8,     0,     0,     0,     0,     0,     0,    29,     0,    28,
       0,     0,     0,     0,     0,    15,     0,     0,     5,     7,
       9,    33,    31,   224,   234,   233,   235,   236,   237,   238,
     245,   246,   239,   240,   241,   242,   243,   244,     0,     0,
     203,    16,   202,   204,    19,    20,    21,    22,     0,    27,
      24,    26,    23,    25,     0,     0,     0,     0,     0,     0,
       0,   224,   118,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   214,   213,   208,   205,    34,     0,    30,
     224,    35,     0,     0,     0,     0,     0,     0,     0,    48,
       0,    46,     0,    43,     0,     0,     0,   101,     0,     0,
       0,   109,     0,     0,     0,   209,   211,   217,     0,     0,
     216,     0,   215,    17,    36,   224,    18,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,    47,     0,     0,     0,   112,     0,   111,
       0,   110,   102,     0,   135,     0,     0,   206,   210,   212,
     218,   219,   221,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    39,     0,     0,     0,     0,
       0,    56,    58,    60,     0,    41,     0,     0,    44,     0,
       0,     0,     0,   136,   115,     0,   114,     0,   220,   222,
       0,    53,    50,    52,    51,     0,     0,     0,     0,    62,
       0,    55,    57,    59,    61,     0,    40,    42,    45,     0,
       0,     0,     0,   207,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,     0,   113,     0,     0,     0,
     116,     0,     0,     0,    91,    93,    95,    97,    86,     0,
       0,     0,     0,     0,     0,     0,   224,     0,     0,   137,
       0,     0,   118,   124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    99,     0,    92,    94,    96,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     182,     0,   181,   183,     0,     0,   150,     0,   148,   152,
     139,     0,     0,     0,     0,     0,     0,   154,   156,     0,
     140,   138,     0,     0,     0,     0,    66,    69,     0,    64,
       0,     0,     0,     0,     0,     0,    71,     0,   100,     0,
      78,    80,    82,    77,     0,     0,     0,     0,     0,   130,
       0,   143,     0,     0,     0,     0,     0,   158,     0,     0,
       0,   191,   185,   184,   133,     0,     0,     0,   119,     0,
       0,     0,     0,   151,   149,   153,   155,   157,     0,   141,
     142,    75,    67,     0,     0,    68,    70,    74,    72,    73,
      90,     0,    84,     0,    79,    81,    83,     0,     0,   132,
     146,     0,     0,     0,     0,   107,   106,     0,   118,     0,
     103,   104,   105,     0,     0,     0,   186,   188,   195,     0,
       0,   192,   194,   193,   125,   127,   131,     0,     0,     0,
       0,     0,   128,   122,     0,   121,   159,     0,     0,    76,
       0,    85,    27,     0,     0,   144,   147,     0,     0,     0,
     108,   173,   175,   177,   168,     0,     0,     0,     0,   187,
     190,   189,   196,   197,   199,   134,     0,     0,     0,     0,
       0,    65,    89,     0,     0,   145,     0,     0,     0,     0,
       0,   179,     0,   174,   176,   178,   198,   201,   200,     0,
       0,   120,   123,     0,    87,     0,     0,   162,     0,   160,
       0,   164,     0,     0,     0,   180,     0,     0,     0,     0,
     166,     0,     0,   165,   163,   172,     0,   126,     0,     0,
       0,     0,     0,   167,     0,   129,     0,     0,    88,   161,
     171,     0,     0,   169,     0,     0,     0,   170
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -374,  -374,  -374,   277,  -374,    59,    91,   106,  -374,   503,
     -94,  -119,  -122,  -132,   107,  -147,  -374,  -104,  -374,  -374,
     504,  -373,  -374,   420,   -54,  -108,   -70,  -374,   392,   124,
    -256,  -291,   -18,  -261,  -374,  -374,   279,   360,     0,   382
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    14,    15,   163,    17,    18,    49,    19,    20,    21,
      99,   127,   164,   165,   308,   166,   322,   167,   201,   262,
      22,   507,   104,   105,   440,   441,   442,   139,   140,   380,
     297,   298,   508,   299,   327,   445,   331,    81,    82,    83
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   122,   460,   106,    28,   169,   345,    51,    30,   171,
     345,   439,   301,    31,   143,    23,   125,   209,   125,    38,
      24,   118,   209,    25,    50,    89,    90,    91,    92,    93,
     336,   125,   208,    48,    48,   520,   346,   208,   337,   126,
     346,   170,    84,    85,    86,    87,   352,   353,   216,   217,
     106,    32,   291,    97,   267,   125,   100,   107,   403,   461,
     210,   345,   345,    27,    52,   210,   337,    36,   245,   209,
     209,   144,   486,    89,    90,    91,    92,    93,   302,    48,
     324,   114,   136,    24,   208,   208,    54,   182,   114,    39,
     260,   346,   346,   443,    40,   100,   195,   196,   197,   130,
     198,    56,    57,    38,   107,   259,    58,    59,    53,   114,
     114,    54,   210,   210,    94,   282,   408,    61,    55,    60,
      48,    95,   130,   444,   309,    96,   168,   168,   251,    62,
     281,   268,   175,   261,   176,   533,    52,   321,   108,   307,
      41,    42,    43,    44,    45,   123,   124,   135,   114,   114,
     303,   193,   320,   114,   487,   141,   114,   134,   283,   295,
     295,   363,   142,   103,   168,   131,   132,   310,    48,   168,
     168,   168,   154,   395,   396,   377,   362,   365,   221,   533,
     397,   118,   398,   399,   488,   119,   400,   157,   180,   343,
     376,   133,   181,   343,   295,   295,    47,   296,   296,    48,
     286,   184,   185,   114,   364,     2,     3,   187,   287,   172,
     103,   288,    48,   294,   294,   186,   168,   168,   194,     6,
       7,   173,   100,     9,   290,   199,   179,   344,    11,    12,
      13,   344,   296,   296,   202,   114,   200,   168,   114,   204,
     114,   211,   212,   342,   343,   343,   213,   342,   294,   294,
     291,   130,    41,    42,    43,    44,    45,   292,   219,    46,
     220,    47,   168,   222,    48,   218,   309,   300,   300,   177,
     178,   168,    48,   114,   223,  -119,   226,    16,   227,   230,
     236,   307,   344,   344,    23,   114,   224,   225,   231,    48,
     332,   332,    33,   463,   464,   232,    48,   300,   342,   342,
     233,   300,   300,   300,   234,    23,   237,   241,   168,   310,
     248,   119,   242,   114,    89,    90,    91,    92,    93,   243,
     244,   363,    23,   249,   381,   332,   293,   293,   332,   332,
     462,   391,  -122,   252,   391,  -121,   362,   254,   256,   271,
     266,   332,   265,   270,   272,   274,    41,    42,    43,    44,
      45,   275,   300,   300,   114,    47,   293,   276,   349,   277,
     293,   293,   293,  -120,   364,   325,   284,   114,   314,   114,
    -123,   315,   311,   103,   103,   316,   532,   317,   326,   335,
     432,   338,   391,   339,   300,   391,   391,   347,   332,   332,
     348,   356,   357,   366,   158,   332,   332,   381,   370,   459,
     371,   372,   391,   103,   378,   383,    88,   103,   103,   103,
     384,   293,   293,   168,   114,   401,   404,   405,   406,   407,
     532,   412,   415,   114,   416,   417,   413,   473,   451,   418,
     419,   475,   424,   425,   470,   434,   426,   332,   109,   110,
     476,   207,   474,   293,   427,   300,   207,   467,   478,   391,
     391,   477,   480,   496,   391,   391,   481,   432,   103,   103,
     337,   482,   483,   497,   116,   498,   324,   332,   168,   428,
     525,   148,   149,   499,   504,   502,  -224,   509,   153,   391,
     503,   513,   510,   156,   514,   332,   515,   519,   397,   527,
     103,   536,   465,   207,   207,   537,   152,   538,   543,   541,
     391,   548,   549,   544,   293,   554,   332,   555,   509,   551,
     332,   557,   391,   560,   258,   561,   564,   566,    34,    35,
     468,   457,   203,   552,   138,   539,   391,   188,   189,   190,
     332,   183,     0,     0,   391,     0,   293,     0,     0,   280,
       0,   509,   391,     0,     0,     0,     0,   114,   306,   556,
       0,   103,   509,     0,     0,     0,     0,   562,     0,   235,
       0,   319,   238,     0,   565,     0,   240,   293,     0,     0,
     334,     0,     0,   228,   229,     0,     0,    41,    42,    43,
      44,    45,   355,   103,    46,   361,    47,     0,   521,   214,
     522,     0,     0,     0,   524,     0,     0,     0,     0,   375,
     293,     0,     0,     0,   382,     0,     0,   385,   386,   253,
       0,   293,     0,     0,   103,     0,     0,   273,     0,     0,
     402,     0,     0,     0,     0,   285,     1,     0,     0,   550,
       0,     2,     3,     4,   158,     0,     0,   159,     0,   313,
     160,     0,   558,     5,     0,     6,     7,   103,     0,     9,
     304,     0,   563,     0,    11,    12,    13,   567,   103,     0,
       0,     0,     0,     0,   354,     0,     0,   449,   450,     0,
       0,   367,   333,   333,   454,   455,   286,     0,   369,     0,
       0,     2,     3,   305,   158,   528,   529,     0,     0,     0,
     306,     0,   435,   436,     0,     6,     7,     0,     0,     9,
     530,     0,     0,     0,    11,    12,    13,   333,     0,     0,
     333,   333,     0,     0,   393,     0,   479,     0,     0,     0,
     414,     0,     0,   333,   286,   531,   291,     0,     0,     2,
       3,     0,   287,   438,   423,   288,     0,   484,     0,     0,
     435,   436,     0,     6,     7,   361,   500,     9,   485,     0,
       0,     0,    11,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,    63,   512,     0,     0,     0,     2,     3,
     333,   333,     0,   453,   291,     0,     0,   333,   333,     0,
       0,   438,     6,     7,     0,   526,     9,     0,     0,   534,
       0,    11,    12,    13,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,     0,     0,     0,   542,
      76,    77,     0,    78,   147,     0,    79,     0,     0,   333,
      80,     0,    41,    42,    43,    44,    45,     0,   489,   491,
     492,    47,     0,     0,    48,     0,   286,     0,     0,     0,
       0,     2,     3,     0,   287,     0,     0,   288,     0,   333,
       0,     0,   435,   436,     0,     6,     7,   505,     0,     9,
     437,     0,     0,     0,    11,    12,    13,   333,     0,     0,
       0,     0,     0,     0,     0,   516,   518,     0,     0,     0,
       0,     0,     0,     0,     0,    29,   291,     0,   333,     0,
       2,     3,   333,   438,     0,     0,   547,     0,     0,     0,
       0,     0,     0,     0,     6,     7,     0,     0,     9,     0,
       0,     0,   333,    11,    12,    13,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,    76,    77,    63,   328,   448,     0,   329,     2,
       3,     0,   330,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,     7,     0,     0,     9,     0,     0,
       0,     0,    11,    12,    13,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,     0,     0,     0,
      29,    76,    77,     0,    78,     2,     3,    79,     0,     0,
       0,    80,     0,     0,     0,     0,     0,     0,     0,     6,
       7,     0,     0,     9,     0,     0,     0,     0,    11,    12,
      13,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     0,     0,     0,   286,    76,    77,     0,
     328,     2,     3,   329,   158,     0,   559,   330,     0,     0,
       0,     0,   435,   436,     0,     6,     7,     0,     0,     9,
     530,     0,     0,     0,    11,    12,    13,     0,   286,     0,
       0,     0,     0,     2,     3,     0,   287,     0,     0,   288,
       0,     0,     0,     0,     0,   531,   291,     6,     7,     0,
     289,     9,   290,   438,     0,     0,    11,    12,    13,     0,
     286,     0,     0,     0,     0,     2,     3,     0,   287,     0,
       0,   288,     0,     0,     0,     0,     0,     0,   291,     6,
       7,     0,   340,     9,   341,   292,     0,     0,    11,    12,
      13,     0,   286,     0,     0,     0,     0,     2,     3,     0,
     287,     0,     0,   288,     0,     0,     0,     0,     0,     0,
     291,     6,     7,     0,   350,     9,   341,   292,     0,     0,
      11,    12,    13,     0,   286,     0,     0,     0,     0,     2,
       3,     0,   287,     0,     0,   288,     0,     0,     0,     0,
       0,     0,   291,     6,     7,     0,   351,     9,   290,   292,
       0,     0,    11,    12,    13,     0,   286,     0,     0,     0,
       0,     2,     3,     0,   287,     0,     0,   288,     0,     0,
       0,     0,     0,     0,   291,     6,     7,     0,   409,     9,
     341,   292,     0,     0,    11,    12,    13,     0,   286,     0,
       0,     0,     0,     2,     3,     0,   287,     0,     0,   288,
       0,     0,     0,     0,     0,     0,   291,     6,     7,     0,
     410,     9,   341,   292,    29,     0,    11,    12,    13,     2,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     286,     0,     0,     6,     7,     2,     3,     9,   291,     0,
       0,     0,    11,    12,    13,   292,   435,   436,     0,     6,
       7,     0,     0,     9,   506,     0,    29,     0,    11,    12,
      13,     2,     3,     0,   111,     0,     0,   112,   420,   421,
       0,   113,    29,     0,     0,     6,     7,     2,     3,     9,
     291,     0,     0,     0,    11,    12,    13,   438,     0,     0,
       0,     6,     7,     0,     0,     9,     0,     0,    29,     0,
      11,    12,    13,     2,     3,     0,   388,     0,     0,   389,
     545,   546,     0,   390,    29,     0,     0,     6,     7,     2,
       3,     9,   111,   117,     0,   112,    11,    12,    13,   113,
       0,     0,     0,     6,     7,     0,     0,     9,     0,     0,
       0,     0,    11,    12,    13,     0,     0,     0,   111,   145,
       0,   112,     0,    29,     0,   113,     0,     0,     2,     3,
       0,     0,     0,     0,   111,     0,     0,   112,   146,    29,
       0,   113,     6,     7,     2,     3,     9,     0,     0,     0,
       0,    11,    12,    13,     0,     0,     0,     0,     6,     7,
       0,     0,     9,     0,     0,     0,     0,    11,    12,    13,
       0,     0,     0,   111,   191,     0,   112,     0,    29,     0,
     113,     0,     0,     2,     3,     0,     0,     0,     0,   111,
       0,     0,   112,   192,    29,     0,   113,     6,     7,     2,
       3,     9,     0,     0,     0,     0,    11,    12,    13,     0,
      29,     0,     0,     6,     7,     2,     3,     9,     0,     0,
       0,     0,    11,    12,    13,     0,     0,   239,   111,     6,
       7,   112,     0,     9,     0,   113,    29,     0,    11,    12,
      13,     2,     3,     0,   111,   255,     0,   112,     0,     0,
       0,   113,    29,     0,     0,     6,     7,     2,     3,     9,
     111,   263,     0,   112,    11,    12,    13,   113,    29,     0,
       0,     6,     7,     2,     3,     9,     0,     0,     0,   323,
      11,    12,    13,     0,     0,   264,   111,     6,     7,   112,
       0,     9,     0,   113,    29,     0,    11,    12,    13,     2,
       3,   312,   111,     0,     0,   112,     0,     0,     0,   113,
      29,     0,     0,     6,     7,     2,     3,     9,   111,     0,
       0,   112,    11,    12,    13,   113,    29,     0,     0,     6,
       7,     2,     3,     9,     0,     0,     0,     0,    11,    12,
      13,     0,     0,   368,   111,     6,     7,   112,     0,     9,
       0,   113,    29,     0,    11,    12,    13,     2,     3,   387,
     388,     0,     0,   389,     0,     0,     0,   390,    29,     0,
       0,     6,     7,     2,     3,     9,   388,   394,     0,   389,
      11,    12,    13,   390,    29,     0,     0,     6,     7,     2,
       3,     9,     0,     0,     0,     0,    11,    12,    13,     0,
       0,   411,   111,     6,     7,   112,     0,     9,     0,   113,
      29,     0,    11,    12,    13,     2,     3,   422,   111,     0,
       0,   112,     0,     0,     0,   113,    29,     0,     0,     6,
       7,     2,     3,     9,   388,   433,     0,   389,    11,    12,
      13,   390,     0,     0,     0,     6,     7,     0,     0,     9,
       0,     0,     0,     0,    11,    12,    13,     0,     0,     0,
     388,   446,     0,   389,     0,    29,     0,   390,     0,     0,
       2,     3,     0,     0,     0,     0,   388,     0,     0,   389,
     447,    29,     0,   390,     6,     7,     2,     3,     9,     0,
       0,     0,     0,    11,    12,    13,     0,    29,     0,     0,
       6,     7,     2,     3,     9,     0,     0,     0,     0,    11,
      12,    13,     0,     0,   466,   388,     6,     7,   389,     0,
       9,     0,   390,     0,     0,    11,    12,    13,     0,     0,
     469,   111,     0,     0,   112,     0,    29,     0,   113,     0,
       0,     2,     3,     0,     0,     0,   471,   111,     0,     0,
     112,     0,    29,     0,   113,     6,     7,     2,     3,     9,
       0,     0,     0,     0,    11,    12,    13,     0,     0,     0,
       0,     6,     7,     0,     0,     9,     0,     0,     0,     0,
      11,    12,    13,     0,     0,     0,   388,   493,     0,   389,
       0,    29,     0,   390,     0,     0,     2,     3,     0,     0,
       0,     0,   388,     0,     0,   389,   494,    29,     0,   390,
       6,     7,     2,     3,     9,     0,     0,     0,   523,    11,
      12,    13,     0,    29,     0,     0,     6,     7,     2,     3,
       9,     0,     0,     0,     0,    11,    12,    13,     0,     0,
     511,   388,     6,     7,   389,     0,     9,     0,   390,     0,
       0,    11,    12,    13,     0,     0,     0,   388,     0,     0,
     389,     0,    29,     0,   390,     0,     0,     2,     3,     0,
       0,     0,   535,   388,     0,     0,   389,     0,    29,     0,
     390,     6,     7,     2,     3,     9,     0,     0,     0,     0,
      11,    12,    13,     0,    29,     0,     0,     6,     7,     2,
       3,     9,     0,     0,     0,     0,    11,    12,    13,     0,
       0,   540,   388,     6,     7,   389,     0,     9,     0,   390,
     101,     0,    11,    12,    13,     2,     3,   553,   388,     0,
       0,   389,     0,     0,     0,   390,     0,     0,     0,     6,
       7,   136,     0,     9,   111,     0,   137,   112,    11,    12,
      13,   113,    29,     0,     0,     0,     0,     2,     3,     0,
       0,     0,     0,     0,    29,     0,     0,     0,     0,     2,
       3,     6,     7,     0,     0,     9,     0,   102,     0,     0,
      11,    12,    13,     6,     7,     0,     0,     9,     0,     0,
       0,     0,    11,    12,    13,     0,    29,     0,     0,     0,
       0,     2,     3,   429,   430,     0,     0,     0,     0,   431,
       0,     0,     0,     0,   388,     6,     7,   389,     0,     9,
       0,   390,   101,     0,    11,    12,    13,     2,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,     6,     7,     2,     3,     9,     0,   495,   430,     0,
      11,    12,    13,   431,    29,     0,     0,     6,     7,     2,
       3,     9,     0,     0,     0,     0,    11,    12,    13,     0,
      29,     0,     0,     6,     7,     2,     3,     9,     0,   102,
       0,     0,    11,    12,    13,     0,    29,     0,     0,     6,
       7,     2,     3,     9,     0,   458,     0,     0,    11,    12,
      13,     0,     0,     0,     0,     6,     7,     0,   174,     9,
       0,     0,    29,     0,    11,    12,    13,     2,     3,     0,
       0,   128,   129,     0,   155,     0,     0,     0,     0,     2,
       3,     6,     7,     0,     0,     9,     0,   269,   129,     0,
      11,    12,    13,     6,     7,     0,     0,     9,     0,     0,
      29,     0,    11,    12,    13,     2,     3,     0,     0,     0,
       0,     0,   120,     0,    37,     0,     0,     2,     3,     6,
       7,     0,     0,     9,     0,     0,   129,     0,    11,    12,
      13,     6,     7,     0,     0,     9,     0,     0,    29,     0,
      11,    12,    13,     2,     3,     0,     0,     0,     0,     0,
      29,    98,     0,     0,     0,     2,     3,     6,     7,     0,
       0,     9,     0,   121,     0,     0,    11,    12,    13,     6,
       7,     0,     0,     9,     0,     0,    29,     0,    11,    12,
      13,     2,     3,     0,     0,     0,     0,     0,     0,   250,
       0,     0,     0,     0,     0,     6,     7,     0,     0,     9,
       0,   379,     1,     0,    11,    12,    13,     2,     3,     4,
     158,   358,   359,   159,     0,     0,   160,     0,     0,     5,
       0,     6,     7,     0,     0,     9,   360,   456,     1,     0,
      11,    12,    13,     2,     3,     4,   158,     0,     0,   159,
       0,     0,   160,     0,     0,     5,     0,     6,     7,     0,
     161,     9,   162,     0,     1,     0,    11,    12,    13,     2,
       3,     4,   158,     0,     0,   159,     0,     0,   160,     0,
       0,     5,     0,     6,     7,     0,   205,     9,   206,     0,
       1,     0,    11,    12,    13,     2,     3,     4,   158,     0,
       0,   159,     0,     0,   160,     0,     0,     5,     0,     6,
       7,     0,   215,     9,   206,     0,     1,     0,    11,    12,
      13,     2,     3,     4,   158,     0,     0,   159,     0,     0,
     160,     0,     0,     5,     0,     6,     7,     0,   246,     9,
     206,     0,     1,     0,    11,    12,    13,     2,     3,     4,
     158,     0,     0,   159,     0,     0,   160,     0,     0,     5,
       0,     6,     7,     0,   247,     9,   206,     0,     1,     0,
      11,    12,    13,     2,     3,     4,   158,     0,     0,   159,
       0,   278,   160,     0,     0,     5,     0,     6,     7,     0,
       0,     9,   279,     0,     1,     0,    11,    12,    13,     2,
       3,     4,   158,     0,   501,   159,     0,     0,   160,     0,
       0,     5,     0,     6,     7,     0,     0,     9,   360,     0,
       1,     0,    11,    12,    13,     2,     3,     4,   158,     0,
       0,   159,     0,     0,   160,     0,     0,     5,     0,     6,
       7,     0,     0,     9,   162,     0,     1,     0,    11,    12,
      13,     2,     3,     4,   158,     0,     0,   159,     0,     0,
     160,     0,     0,     5,     0,     6,     7,     0,     0,     9,
     257,     0,     1,     0,    11,    12,    13,     2,     3,     4,
     158,     0,     0,     0,     0,     0,   160,   373,     0,     5,
       0,     6,     7,     0,     0,     9,   374,     0,     1,     0,
      11,    12,    13,     2,     3,     4,   158,     0,     0,     0,
       0,     0,   160,     0,     0,     5,     0,     6,     7,     0,
       0,     9,   318,     0,     1,     0,    11,    12,    13,     2,
       3,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     0,     6,     7,     8,     0,     9,     0,    10,
       0,     0,    11,    12,    13,   472,    90,    91,    92,    93,
       2,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     7,     0,     0,     9,     0,
       0,     1,     0,    11,    12,    13,     2,     3,     4,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     5,     0,
       6,     7,     2,     3,     9,     0,     0,     0,     0,    11,
      12,    13,     0,    29,     0,     0,     6,     7,     2,     3,
       9,     0,     0,     0,     0,    11,    12,    13,     0,     0,
       0,     0,     6,     7,     0,     0,     9,     0,     0,     0,
       0,    11,    12,    13,     0,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,     0,     0,     0,
       0,    76,    77,     0,     0,     0,   150,     0,     0,     0,
     151,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     0,     0,     0,     0,    76,    77,     0,
       0,     0,     0,     0,     0,     0,   490,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     0,
       0,     0,     0,    76,    77,     0,     0,     0,     0,     0,
       0,     0,   517,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,     0,     0,     0,     0,    76,
      77,     0,     0,     0,   115,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,     0,     0,     0,
       0,    76,    77,     0,     0,     0,   392,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     0,
       0,     0,     0,    76,    77,     0,     0,     0,   452,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,     0,     0,     0,     0,    76,    77
};

static const yytype_int16 yycheck[] =
{
       0,    95,     3,    57,     4,   127,   297,     3,     8,   128,
     301,   384,   268,     3,     3,    15,    35,   164,    35,    19,
      56,    46,   169,    59,    24,     3,     4,     5,     6,     7,
      52,    35,   164,    58,    58,    59,   297,   169,    60,    58,
     301,    58,    42,    43,    44,    45,   302,   303,   170,   171,
     104,     0,    53,    53,    58,    35,    56,    57,    52,    60,
     164,   352,   353,     4,    60,   169,    60,    52,    46,   216,
     217,    60,   445,     3,     4,     5,     6,     7,    58,    58,
      53,    81,    24,    56,   216,   217,    59,    29,    88,    52,
     237,   352,   353,   384,    52,    95,     3,     4,     5,    99,
       7,    53,    58,   103,   104,   237,    52,    52,    56,   109,
     110,    59,   216,   217,    57,   262,    46,    55,    27,    52,
      58,    53,   122,   384,   271,     3,   126,   127,   222,    38,
     262,   250,   132,   237,   134,   508,    60,   284,    59,   271,
      46,    47,    48,    49,    50,    46,    57,     3,   148,   149,
     269,   151,   284,   153,   445,    52,   156,    56,   262,   267,
     268,   308,    60,    57,   164,    55,    56,   271,    58,   169,
     170,   171,    54,    46,    47,   322,   308,   309,   178,   552,
      53,    46,    55,    56,   445,    94,    59,    44,     3,   297,
     322,   100,    52,   301,   302,   303,    55,   267,   268,    58,
       3,    52,     3,   203,   308,     8,     9,     3,    11,    55,
     104,    14,    58,   267,   268,    53,   216,   217,    54,    22,
      23,   130,   222,    26,    27,    53,   135,   297,    31,    32,
      33,   301,   302,   303,    53,   235,     3,   237,   238,    52,
     240,    52,    52,   297,   352,   353,    52,   301,   302,   303,
      53,   251,    46,    47,    48,    49,    50,    60,    57,    53,
      57,    55,   262,    53,    58,   174,   413,   267,   268,    55,
      56,   271,    58,   273,    52,    60,   185,     0,    54,    53,
      15,   413,   352,   353,   284,   285,    55,    56,    58,    58,
     290,   291,    15,    55,    56,    58,    58,   297,   352,   353,
      58,   301,   302,   303,    58,   305,    58,    52,   308,   413,
     219,   220,    52,   313,     3,     4,     5,     6,     7,    52,
      52,   468,   322,    57,   324,   325,   267,   268,   328,   329,
     400,   331,    60,    57,   334,    60,   468,    54,    56,    58,
     249,   341,    56,   252,    31,    52,    46,    47,    48,    49,
      50,    52,   352,   353,   354,    55,   297,    52,    58,    52,
     301,   302,   303,    60,   468,    53,    58,   367,    52,   369,
      60,    52,    58,   267,   268,    52,   508,    52,     3,     3,
     380,    52,   382,    52,   384,   385,   386,    52,   388,   389,
      52,    52,    52,    52,    11,   395,   396,   397,    52,   399,
      52,    52,   402,   297,     3,    15,    46,   301,   302,   303,
      58,   352,   353,   413,   414,     3,    52,    52,    52,    52,
     552,    52,    52,   423,    52,    52,    58,   427,     3,    52,
      52,   431,    52,    52,    31,    56,    52,   437,    78,    79,
      55,   164,    15,   384,    58,   445,   169,    56,    31,   449,
     450,    58,     3,     3,   454,   455,    52,   457,   352,   353,
      60,    52,    52,    57,    82,     3,    53,   467,   468,   378,
      30,   111,   112,    57,   474,    57,    57,   477,   118,   479,
      57,    52,    58,   123,    52,   485,    52,    57,    53,    52,
     384,    46,   401,   216,   217,     3,   114,     3,    52,    58,
     500,    53,    58,    52,   445,    31,   506,    54,   508,    57,
     510,    15,   512,    57,   237,    57,    30,    57,    15,    15,
     413,   397,   162,   541,   104,   525,   526,   145,   146,   147,
     530,   139,    -1,    -1,   534,    -1,   477,    -1,    -1,   262,
      -1,   541,   542,    -1,    -1,    -1,    -1,   547,   271,   549,
      -1,   445,   552,    -1,    -1,    -1,    -1,   557,    -1,   199,
      -1,   284,   202,    -1,   564,    -1,   206,   508,    -1,    -1,
     291,    -1,    -1,   191,   192,    -1,    -1,    46,    47,    48,
      49,    50,   305,   477,    53,   308,    55,    -1,   497,    58,
     499,    -1,    -1,    -1,   503,    -1,    -1,    -1,    -1,   322,
     541,    -1,    -1,    -1,   325,    -1,    -1,   328,   329,   227,
      -1,   552,    -1,    -1,   508,    -1,    -1,   257,    -1,    -1,
     341,    -1,    -1,    -1,    -1,   265,     3,    -1,    -1,   538,
      -1,     8,     9,    10,    11,    -1,    -1,    14,    -1,   279,
      17,    -1,   551,    20,    -1,    22,    23,   541,    -1,    26,
      27,    -1,   561,    -1,    31,    32,    33,   566,   552,    -1,
      -1,    -1,    -1,    -1,   304,    -1,    -1,   388,   389,    -1,
      -1,   311,   290,   291,   395,   396,     3,    -1,   318,    -1,
      -1,     8,     9,    60,    11,    12,    13,    -1,    -1,    -1,
     413,    -1,    19,    20,    -1,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    32,    33,   325,    -1,    -1,
     328,   329,    -1,    -1,   332,    -1,   437,    -1,    -1,    -1,
     360,    -1,    -1,   341,     3,    52,    53,    -1,    -1,     8,
       9,    -1,    11,    60,   374,    14,    -1,    16,    -1,    -1,
      19,    20,    -1,    22,    23,   468,   467,    26,    27,    -1,
      -1,    -1,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,   485,    -1,    -1,    -1,     8,     9,
     388,   389,    -1,   391,    53,    -1,    -1,   395,   396,    -1,
      -1,    60,    22,    23,    -1,   506,    26,    -1,    -1,   510,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    -1,    -1,   530,
      50,    51,    -1,    53,    54,    -1,    56,    -1,    -1,   437,
      60,    -1,    46,    47,    48,    49,    50,    -1,   446,   447,
     448,    55,    -1,    -1,    58,    -1,     3,    -1,    -1,    -1,
      -1,     8,     9,    -1,    11,    -1,    -1,    14,    -1,   467,
      -1,    -1,    19,    20,    -1,    22,    23,   475,    -1,    26,
      27,    -1,    -1,    -1,    31,    32,    33,   485,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   493,   494,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    53,    -1,   506,    -1,
       8,     9,   510,    60,    -1,    -1,   536,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,   530,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    50,    51,     3,    53,    54,    -1,    56,     8,
       9,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
       3,    50,    51,    -1,    53,     8,     9,    56,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,     3,    50,    51,    -1,
      53,     8,     9,    56,    11,    -1,    13,    60,    -1,    -1,
      -1,    -1,    19,    20,    -1,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    32,    33,    -1,     3,    -1,
      -1,    -1,    -1,     8,     9,    -1,    11,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    52,    53,    22,    23,    -1,
      25,    26,    27,    60,    -1,    -1,    31,    32,    33,    -1,
       3,    -1,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    53,    22,
      23,    -1,    25,    26,    27,    60,    -1,    -1,    31,    32,
      33,    -1,     3,    -1,    -1,    -1,    -1,     8,     9,    -1,
      11,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    22,    23,    -1,    25,    26,    27,    60,    -1,    -1,
      31,    32,    33,    -1,     3,    -1,    -1,    -1,    -1,     8,
       9,    -1,    11,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    22,    23,    -1,    25,    26,    27,    60,
      -1,    -1,    31,    32,    33,    -1,     3,    -1,    -1,    -1,
      -1,     8,     9,    -1,    11,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    22,    23,    -1,    25,    26,
      27,    60,    -1,    -1,    31,    32,    33,    -1,     3,    -1,
      -1,    -1,    -1,     8,     9,    -1,    11,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    22,    23,    -1,
      25,    26,    27,    60,     3,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    22,    23,     8,     9,    26,    53,    -1,
      -1,    -1,    31,    32,    33,    60,    19,    20,    -1,    22,
      23,    -1,    -1,    26,    27,    -1,     3,    -1,    31,    32,
      33,     8,     9,    -1,    53,    -1,    -1,    56,    57,    58,
      -1,    60,     3,    -1,    -1,    22,    23,     8,     9,    26,
      53,    -1,    -1,    -1,    31,    32,    33,    60,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,    -1,     3,    -1,
      31,    32,    33,     8,     9,    -1,    53,    -1,    -1,    56,
      57,    58,    -1,    60,     3,    -1,    -1,    22,    23,     8,
       9,    26,    53,    54,    -1,    56,    31,    32,    33,    60,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    -1,    -1,    53,    54,
      -1,    56,    -1,     3,    -1,    60,    -1,    -1,     8,     9,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    56,    57,     3,
      -1,    60,    22,    23,     8,     9,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    -1,    -1,    53,    54,    -1,    56,    -1,     3,    -1,
      60,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    56,    57,     3,    -1,    60,    22,    23,     8,
       9,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
       3,    -1,    -1,    22,    23,     8,     9,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    -1,    52,    53,    22,
      23,    56,    -1,    26,    -1,    60,     3,    -1,    31,    32,
      33,     8,     9,    -1,    53,    54,    -1,    56,    -1,    -1,
      -1,    60,     3,    -1,    -1,    22,    23,     8,     9,    26,
      53,    54,    -1,    56,    31,    32,    33,    60,     3,    -1,
      -1,    22,    23,     8,     9,    26,    -1,    -1,    -1,    14,
      31,    32,    33,    -1,    -1,    52,    53,    22,    23,    56,
      -1,    26,    -1,    60,     3,    -1,    31,    32,    33,     8,
       9,    52,    53,    -1,    -1,    56,    -1,    -1,    -1,    60,
       3,    -1,    -1,    22,    23,     8,     9,    26,    53,    -1,
      -1,    56,    31,    32,    33,    60,     3,    -1,    -1,    22,
      23,     8,     9,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,    -1,    52,    53,    22,    23,    56,    -1,    26,
      -1,    60,     3,    -1,    31,    32,    33,     8,     9,    52,
      53,    -1,    -1,    56,    -1,    -1,    -1,    60,     3,    -1,
      -1,    22,    23,     8,     9,    26,    53,    54,    -1,    56,
      31,    32,    33,    60,     3,    -1,    -1,    22,    23,     8,
       9,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
      -1,    52,    53,    22,    23,    56,    -1,    26,    -1,    60,
       3,    -1,    31,    32,    33,     8,     9,    52,    53,    -1,
      -1,    56,    -1,    -1,    -1,    60,     3,    -1,    -1,    22,
      23,     8,     9,    26,    53,    54,    -1,    56,    31,    32,
      33,    60,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    -1,    -1,
      53,    54,    -1,    56,    -1,     3,    -1,    60,    -1,    -1,
       8,     9,    -1,    -1,    -1,    -1,    53,    -1,    -1,    56,
      57,     3,    -1,    60,    22,    23,     8,     9,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,     3,    -1,    -1,
      22,    23,     8,     9,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,    -1,    -1,    52,    53,    22,    23,    56,    -1,
      26,    -1,    60,    -1,    -1,    31,    32,    33,    -1,    -1,
      52,    53,    -1,    -1,    56,    -1,     3,    -1,    60,    -1,
      -1,     8,     9,    -1,    -1,    -1,    52,    53,    -1,    -1,
      56,    -1,     3,    -1,    60,    22,    23,     8,     9,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    -1,    -1,    53,    54,    -1,    56,
      -1,     3,    -1,    60,    -1,    -1,     8,     9,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    56,    57,     3,    -1,    60,
      22,    23,     8,     9,    26,    -1,    -1,    -1,    14,    31,
      32,    33,    -1,     3,    -1,    -1,    22,    23,     8,     9,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    -1,
      52,    53,    22,    23,    56,    -1,    26,    -1,    60,    -1,
      -1,    31,    32,    33,    -1,    -1,    -1,    53,    -1,    -1,
      56,    -1,     3,    -1,    60,    -1,    -1,     8,     9,    -1,
      -1,    -1,    52,    53,    -1,    -1,    56,    -1,     3,    -1,
      60,    22,    23,     8,     9,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,     3,    -1,    -1,    22,    23,     8,
       9,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
      -1,    52,    53,    22,    23,    56,    -1,    26,    -1,    60,
       3,    -1,    31,    32,    33,     8,     9,    52,    53,    -1,
      -1,    56,    -1,    -1,    -1,    60,    -1,    -1,    -1,    22,
      23,    24,    -1,    26,    53,    -1,    29,    56,    31,    32,
      33,    60,     3,    -1,    -1,    -1,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,     8,
       9,    22,    23,    -1,    -1,    26,    -1,    60,    -1,    -1,
      31,    32,    33,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,     3,    -1,    -1,    -1,
      -1,     8,     9,    54,    55,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    53,    22,    23,    56,    -1,    26,
      -1,    60,     3,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    22,    23,     8,     9,    26,    -1,    54,    55,    -1,
      31,    32,    33,    60,     3,    -1,    -1,    22,    23,     8,
       9,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
       3,    -1,    -1,    22,    23,     8,     9,    26,    -1,    60,
      -1,    -1,    31,    32,    33,    -1,     3,    -1,    -1,    22,
      23,     8,     9,    26,    -1,    60,    -1,    -1,    31,    32,
      33,    -1,    -1,    -1,    -1,    22,    23,    -1,    57,    26,
      -1,    -1,     3,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    54,    55,    -1,     3,    -1,    -1,    -1,    -1,     8,
       9,    22,    23,    -1,    -1,    26,    -1,    54,    55,    -1,
      31,    32,    33,    22,    23,    -1,    -1,    26,    -1,    -1,
       3,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    55,    -1,    -1,     8,     9,    22,
      23,    -1,    -1,    26,    -1,    -1,    55,    -1,    31,    32,
      33,    22,    23,    -1,    -1,    26,    -1,    -1,     3,    -1,
      31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,
       3,    54,    -1,    -1,    -1,     8,     9,    22,    23,    -1,
      -1,    26,    -1,    54,    -1,    -1,    31,    32,    33,    22,
      23,    -1,    -1,    26,    -1,    -1,     3,    -1,    31,    32,
      33,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    54,     3,    -1,    31,    32,    33,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    17,    -1,    -1,    20,
      -1,    22,    23,    -1,    -1,    26,    27,    54,     3,    -1,
      31,    32,    33,     8,     9,    10,    11,    -1,    -1,    14,
      -1,    -1,    17,    -1,    -1,    20,    -1,    22,    23,    -1,
      25,    26,    27,    -1,     3,    -1,    31,    32,    33,     8,
       9,    10,    11,    -1,    -1,    14,    -1,    -1,    17,    -1,
      -1,    20,    -1,    22,    23,    -1,    25,    26,    27,    -1,
       3,    -1,    31,    32,    33,     8,     9,    10,    11,    -1,
      -1,    14,    -1,    -1,    17,    -1,    -1,    20,    -1,    22,
      23,    -1,    25,    26,    27,    -1,     3,    -1,    31,    32,
      33,     8,     9,    10,    11,    -1,    -1,    14,    -1,    -1,
      17,    -1,    -1,    20,    -1,    22,    23,    -1,    25,    26,
      27,    -1,     3,    -1,    31,    32,    33,     8,     9,    10,
      11,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    20,
      -1,    22,    23,    -1,    25,    26,    27,    -1,     3,    -1,
      31,    32,    33,     8,     9,    10,    11,    -1,    -1,    14,
      -1,    16,    17,    -1,    -1,    20,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,     3,    -1,    31,    32,    33,     8,
       9,    10,    11,    -1,    13,    14,    -1,    -1,    17,    -1,
      -1,    20,    -1,    22,    23,    -1,    -1,    26,    27,    -1,
       3,    -1,    31,    32,    33,     8,     9,    10,    11,    -1,
      -1,    14,    -1,    -1,    17,    -1,    -1,    20,    -1,    22,
      23,    -1,    -1,    26,    27,    -1,     3,    -1,    31,    32,
      33,     8,     9,    10,    11,    -1,    -1,    14,    -1,    -1,
      17,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,    26,
      27,    -1,     3,    -1,    31,    32,    33,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    23,    -1,    -1,    26,    27,    -1,     3,    -1,
      31,    32,    33,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    20,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,     3,    -1,    31,    32,    33,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    22,    23,    24,    -1,    26,    -1,    28,
      -1,    -1,    31,    32,    33,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,     3,    -1,    31,    32,    33,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    20,    -1,
      22,    23,     8,     9,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,    -1,     3,    -1,    -1,    22,    23,     8,     9,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      59,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    55,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    55,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    50,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     8,     9,    10,    20,    22,    23,    24,    26,
      28,    31,    32,    33,    67,    68,    69,    70,    71,    73,
      74,    75,    86,   104,    56,    59,     3,    71,   104,     3,
     104,     3,     0,    69,    75,    86,    52,    55,   104,    52,
      52,    46,    47,    48,    49,    50,    53,    55,    58,    72,
     104,     3,    60,    56,    59,    72,    53,    58,    52,    52,
      52,    55,    72,     3,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    50,    51,    53,    56,
      60,   103,   104,   105,   104,   104,   104,   104,   103,     3,
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
      83,    58,    52,   103,    52,    52,    52,    52,    27,    69,
      79,    81,    82,    14,    53,    53,     3,   100,    53,    56,
      60,   102,   104,   105,   102,     3,    52,    60,    52,    52,
      25,    27,    90,    91,    92,    97,    99,    52,    52,    58,
      25,    25,    96,    96,   103,    69,    52,    52,    12,    13,
      27,    69,    79,    81,    83,    79,    52,   103,    52,   103,
      52,    52,    52,    18,    27,    69,    79,    81,     3,    54,
      95,   104,   102,    15,    58,   102,   102,    52,    53,    56,
      60,   104,    55,   105,    54,    46,    47,    53,    55,    56,
      59,     3,   102,    52,    52,    52,    52,    52,    46,    25,
      25,    52,    52,    58,   103,    52,    52,    52,    52,    52,
      57,    58,    52,   103,    52,    52,    52,    58,    72,    54,
      55,    60,   104,    54,    56,    19,    20,    27,    60,    87,
      90,    91,    92,    97,    99,   101,    54,    57,    54,   102,
     102,     3,    55,   105,   102,   102,    54,    95,    60,   104,
       3,    60,    92,    55,    56,    72,    52,    56,    80,    52,
      31,    52,     3,   104,    15,   104,    55,    58,    31,   102,
       3,    52,    52,    52,    16,    27,    87,    97,    99,   105,
      59,   105,   105,    54,    57,    54,     3,    57,     3,    57,
     102,    13,    57,    57,   104,   105,    27,    87,    98,   104,
      58,    52,   102,    52,    52,    52,   105,    59,   105,    57,
      59,    72,    72,    14,    72,    30,   102,    52,    12,    13,
      27,    52,    79,    87,   102,    52,    46,     3,     3,   104,
      52,    58,   102,    52,    52,    57,    58,   103,    53,    58,
      72,    57,    98,    52,    31,    54,   104,    15,    72,    13,
      57,    57,   104,    72,    30,   104,    57,    72
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    67,    68,    68,    68,    68,    68,    68,
      69,    69,    69,    69,    69,    70,    71,    71,    71,    71,
      71,    71,    71,    72,    72,    72,    72,    72,    73,    73,
      73,    73,    73,    73,    74,    74,    74,    74,    75,    75,
      75,    75,    75,    76,    76,    76,    76,    76,    76,    76,
      77,    77,    77,    77,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    79,    79,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    82,    82,
      82,    82,    82,    82,    82,    82,    83,    83,    83,    84,
      84,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    86,    86,    87,    87,    87,    87,    87,    87,    88,
      88,    89,    89,    89,    89,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    91,    91,    91,    91,    91,    91,
      92,    92,    92,    92,    92,    93,    93,    94,    94,    94,
      94,    94,    94,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      97,    97,    98,    98,    98,    98,    98,    98,    99,    99,
      99,   100,   100,   101,   101,   101,   101,   101,   101,   101,
     101,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     3,     2,     3,     2,     3,
       1,     1,     1,     1,     1,     3,     3,     6,     6,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       5,     3,     2,     3,     4,     5,     6,     7,     6,     7,
       8,     7,     8,     2,     4,     5,     2,     3,     2,     3,
       4,     4,     4,     4,     2,     3,     2,     3,     2,     3,
       2,     3,     3,     4,     7,    10,     2,     3,     3,     2,
       3,     2,     3,     3,     3,     3,     4,     7,     2,     3,
       2,     3,     2,     3,     3,     4,     5,    11,    14,     9,
       7,     2,     3,     2,     3,     2,     3,     2,     3,     3,
       4,     5,     6,     1,     1,     1,     1,     1,     2,     2,
       3,     3,     3,     6,     4,     4,     6,     1,     1,     3,
       6,     4,     4,     6,     1,     4,     8,     4,     4,     9,
       3,     4,     4,     3,     5,     2,     3,     6,     7,     7,
       7,     8,     8,     1,     3,     4,     2,     3,     2,     3,
       2,     3,     2,     3,     2,     3,     2,     3,     3,     4,
       7,    10,     2,     3,     2,     3,     3,     4,     5,    11,
      14,     9,     7,     2,     3,     2,     3,     2,     3,     3,
       4,     1,     1,     1,     2,     2,     3,     4,     3,     4,
       4,     2,     3,     3,     3,     3,     4,     4,     5,     4,
       5,     5,     1,     1,     1,     2,     4,     6,     2,     3,
       4,     3,     4,     2,     2,     3,     3,     3,     4,     4,
       5,     4,     5,     6,     1,     1,     1,     1,     1,     1,
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
#line 2014 "parcer.tab.c"
    break;

  case 4: /* program_body: expression DEL_QUEST  */
#line 157 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2020 "parcer.tab.c"
    break;

  case 5: /* program_body: program_body expression DEL_QUEST  */
#line 158 "parcer.y"
                                                {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2026 "parcer.tab.c"
    break;

  case 6: /* program_body: make_fcn DEL_QUEST  */
#line 159 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str)); }
#line 2032 "parcer.tab.c"
    break;

  case 7: /* program_body: program_body make_fcn DEL_QUEST  */
#line 160 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2038 "parcer.tab.c"
    break;

  case 8: /* program_body: comp_statement DEL_QUEST  */
#line 161 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2044 "parcer.tab.c"
    break;

  case 9: /* program_body: program_body comp_statement DEL_QUEST  */
#line 162 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2050 "parcer.tab.c"
    break;

  case 14: /* expression: KW_continue  */
#line 171 "parcer.y"
                {(yyval.str) = template(" continue");}
#line 2056 "parcer.tab.c"
    break;

  case 15: /* constant: KW_const assignment var_type  */
#line 176 "parcer.y"
                                         {(yyval.str) = template("const %s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 2062 "parcer.tab.c"
    break;

  case 16: /* assignment: attribute OP_EQUAL right_part  */
#line 179 "parcer.y"
                                                                                        {(yyval.str) = template("%s = %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2068 "parcer.tab.c"
    break;

  case 17: /* assignment: T_ID DEL_LBRAC attribute DEL_RBRAC OP_EQUAL right_part  */
#line 180 "parcer.y"
                                                                {(yyval.str) = template("%s[%s] = %s", (yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[0].str));}
#line 2074 "parcer.tab.c"
    break;

  case 18: /* assignment: T_ID DEL_DOT DEL_HASHTAG T_ID OP_EQUAL right_part  */
#line 181 "parcer.y"
                                                                {(yyval.str) = template("%s.%s = %s", (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2080 "parcer.tab.c"
    break;

  case 19: /* assignment: attribute OP_INCREM attribute  */
#line 182 "parcer.y"
                                                                                        {(yyval.str) = template("%s += %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2086 "parcer.tab.c"
    break;

  case 20: /* assignment: attribute OP_DECREM attribute  */
#line 183 "parcer.y"
                                                                                        {(yyval.str) = template("%s -= %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2092 "parcer.tab.c"
    break;

  case 21: /* assignment: attribute OP_MULCREM attribute  */
#line 184 "parcer.y"
                                                                                        {(yyval.str) = template("%s *= %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2098 "parcer.tab.c"
    break;

  case 22: /* assignment: attribute OP_DIVCREM attribute  */
#line 185 "parcer.y"
                                                                                        {(yyval.str) = template("%s /= %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2104 "parcer.tab.c"
    break;

  case 23: /* var_type: DEL_DOTS KW_str  */
#line 188 "parcer.y"
                        {(yyval.str) = template("char* ");}
#line 2110 "parcer.tab.c"
    break;

  case 24: /* var_type: DEL_DOTS KW_integer  */
#line 189 "parcer.y"
                        {(yyval.str) = template("int "); }
#line 2116 "parcer.tab.c"
    break;

  case 25: /* var_type: DEL_DOTS KW_boolean  */
#line 190 "parcer.y"
                        {(yyval.str) = template("int ");}
#line 2122 "parcer.tab.c"
    break;

  case 26: /* var_type: DEL_DOTS KW_scalar  */
#line 191 "parcer.y"
                        {(yyval.str) = template("double ");}
#line 2128 "parcer.tab.c"
    break;

  case 27: /* var_type: DEL_DOTS T_ID  */
#line 192 "parcer.y"
                                {(yyval.str) = template(" %s ", (yyvsp[0].str));}
#line 2134 "parcer.tab.c"
    break;

  case 28: /* declaration: attribute var_type  */
#line 197 "parcer.y"
                                                                                {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 2140 "parcer.tab.c"
    break;

  case 29: /* declaration: attribute DEL_COMMA  */
#line 198 "parcer.y"
                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 2146 "parcer.tab.c"
    break;

  case 30: /* declaration: T_ID DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 199 "parcer.y"
                                                {(yyval.str) = template("%s%s[%s]", (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-2].str));}
#line 2152 "parcer.tab.c"
    break;

  case 31: /* declaration: declaration attribute var_type  */
#line 200 "parcer.y"
                                                                {(yyval.str) = template("%s%s%s", (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2158 "parcer.tab.c"
    break;

  case 32: /* declaration: declaration DEL_COMMA  */
#line 201 "parcer.y"
                                                                        {(yyval.str) = template("%s, ",  (yyvsp[-1].str));}
#line 2164 "parcer.tab.c"
    break;

  case 33: /* declaration: declaration attribute DEL_COMMA  */
#line 202 "parcer.y"
                                                                {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2170 "parcer.tab.c"
    break;

  case 34: /* fcn_call: attribute DEL_LPAR right_part DEL_RPAR  */
#line 207 "parcer.y"
                                                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2176 "parcer.tab.c"
    break;

  case 35: /* fcn_call: T_ID DEL_DOT T_ID DEL_LPAR DEL_RPAR  */
#line 208 "parcer.y"
                                                                                        {(yyval.str) = template("%s.%s(&%s)", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str));}
#line 2182 "parcer.tab.c"
    break;

  case 36: /* fcn_call: T_ID DEL_DOT T_ID DEL_LPAR T_ID DEL_RPAR  */
#line 209 "parcer.y"
                                                                        {(yyval.str) = template("%s.%s(&%s,%s)", (yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2188 "parcer.tab.c"
    break;

  case 37: /* fcn_call: T_ID DEL_DOT T_ID DEL_LPAR fcn_arguments T_ID DEL_RPAR  */
#line 210 "parcer.y"
                                                                {(yyval.str) = template("%s.%s(&%s,%s%s)", (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-6].str), (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2194 "parcer.tab.c"
    break;

  case 38: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR DEL_DOTS KW_enddef  */
#line 215 "parcer.y"
                                                                                                                        {(yyval.str) = template("\nvoid %s()\n{\n}", (yyvsp[-4].str));}
#line 2200 "parcer.tab.c"
    break;

  case 39: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR DEL_DOTS fcn_body KW_enddef  */
#line 216 "parcer.y"
                                                                                                                {(yyval.str) = template("\nvoid %s()\n{\n%s}", (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2206 "parcer.tab.c"
    break;

  case 40: /* make_fcn: KW_def attribute DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS fcn_body KW_enddef  */
#line 217 "parcer.y"
                                                                                                {(yyval.str) = template("\nvoid %s(%s)\n{\n%s}",(yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2212 "parcer.tab.c"
    break;

  case 41: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR fcn_ret_type fcn_body KW_enddef  */
#line 218 "parcer.y"
                                                                                                                {(yyval.str) = template("\n%s%s()\n{\n%s}", (yyvsp[-2].str), (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2218 "parcer.tab.c"
    break;

  case 42: /* make_fcn: KW_def attribute DEL_LPAR fcn_arguments DEL_RPAR fcn_ret_type fcn_body KW_enddef  */
#line 219 "parcer.y"
                                                                                                {(yyval.str) = template("\n%s%s(%s)\n{\n%s}", (yyvsp[-2].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2224 "parcer.tab.c"
    break;

  case 43: /* fcn_arguments: attribute var_type  */
#line 222 "parcer.y"
                                                                                                {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 2230 "parcer.tab.c"
    break;

  case 44: /* fcn_arguments: attribute DEL_LBRAC DEL_RBRAC var_type  */
#line 223 "parcer.y"
                                                                        {(yyval.str) = template("%s*%s", (yyvsp[0].str), (yyvsp[-3].str));}
#line 2236 "parcer.tab.c"
    break;

  case 45: /* fcn_arguments: attribute DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 224 "parcer.y"
                                                        {(yyval.str) = template("%s*%s", (yyvsp[0].str), (yyvsp[-4].str));}
#line 2242 "parcer.tab.c"
    break;

  case 46: /* fcn_arguments: attribute DEL_COMMA  */
#line 225 "parcer.y"
                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));	}
#line 2248 "parcer.tab.c"
    break;

  case 47: /* fcn_arguments: fcn_arguments attribute var_type  */
#line 226 "parcer.y"
                                                                        {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-1].str));}
#line 2254 "parcer.tab.c"
    break;

  case 48: /* fcn_arguments: fcn_arguments DEL_COMMA  */
#line 227 "parcer.y"
                                                                                {(yyval.str) = template("%s, ",  (yyvsp[-1].str));}
#line 2260 "parcer.tab.c"
    break;

  case 49: /* fcn_arguments: fcn_arguments attribute DEL_COMMA  */
#line 228 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2266 "parcer.tab.c"
    break;

  case 50: /* fcn_ret_type: OP_MINUS OP_GREATER KW_integer DEL_DOTS  */
#line 231 "parcer.y"
                                                {(yyval.str) = template("int "); }
#line 2272 "parcer.tab.c"
    break;

  case 51: /* fcn_ret_type: OP_MINUS OP_GREATER KW_boolean DEL_DOTS  */
#line 232 "parcer.y"
                                                {(yyval.str) = template("int "); }
#line 2278 "parcer.tab.c"
    break;

  case 52: /* fcn_ret_type: OP_MINUS OP_GREATER KW_scalar DEL_DOTS  */
#line 233 "parcer.y"
                                                {(yyval.str) = template("double ");}
#line 2284 "parcer.tab.c"
    break;

  case 53: /* fcn_ret_type: OP_MINUS OP_GREATER T_ID DEL_DOTS  */
#line 234 "parcer.y"
                                                {(yyval.str) = template("%s ", (yyvsp[-1].str));}
#line 2290 "parcer.tab.c"
    break;

  case 54: /* fcn_body: expression DEL_QUEST  */
#line 237 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2296 "parcer.tab.c"
    break;

  case 55: /* fcn_body: fcn_body expression DEL_QUEST  */
#line 238 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2302 "parcer.tab.c"
    break;

  case 56: /* fcn_body: if_statement DEL_QUEST  */
#line 239 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2308 "parcer.tab.c"
    break;

  case 57: /* fcn_body: fcn_body if_statement DEL_QUEST  */
#line 240 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2314 "parcer.tab.c"
    break;

  case 58: /* fcn_body: while_statement DEL_QUEST  */
#line 241 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2320 "parcer.tab.c"
    break;

  case 59: /* fcn_body: fcn_body while_statement DEL_QUEST  */
#line 242 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2326 "parcer.tab.c"
    break;

  case 60: /* fcn_body: for_statement DEL_QUEST  */
#line 243 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2332 "parcer.tab.c"
    break;

  case 61: /* fcn_body: fcn_body for_statement DEL_QUEST  */
#line 244 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2338 "parcer.tab.c"
    break;

  case 62: /* fcn_body: KW_return right_part DEL_QUEST  */
#line 245 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2344 "parcer.tab.c"
    break;

  case 63: /* fcn_body: fcn_body KW_return right_part DEL_QUEST  */
#line 246 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2350 "parcer.tab.c"
    break;

  case 64: /* if_statement: KW_if DEL_LPAR right_part DEL_RPAR DEL_DOTS if_body KW_endif  */
#line 251 "parcer.y"
                                                                                                                        {(yyval.str) = template("if (%s){\n%s}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2356 "parcer.tab.c"
    break;

  case 65: /* if_statement: KW_if DEL_LPAR right_part DEL_RPAR DEL_DOTS if_body KW_else DEL_DOTS if_body KW_endif  */
#line 252 "parcer.y"
                                                                                                {(yyval.str) = template("if (%s){\n%s}else{\n%s}", (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2362 "parcer.tab.c"
    break;

  case 66: /* if_body: expression DEL_QUEST  */
#line 255 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2368 "parcer.tab.c"
    break;

  case 67: /* if_body: DEL_HASHTAG expression DEL_QUEST  */
#line 256 "parcer.y"
                                                {(yyval.str) = template("self->%s;\n", (yyvsp[-1].str));}
#line 2374 "parcer.tab.c"
    break;

  case 68: /* if_body: if_body expression DEL_QUEST  */
#line 257 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2380 "parcer.tab.c"
    break;

  case 69: /* if_body: if_statement DEL_QUEST  */
#line 258 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2386 "parcer.tab.c"
    break;

  case 70: /* if_body: if_body if_statement DEL_QUEST  */
#line 259 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2392 "parcer.tab.c"
    break;

  case 71: /* if_body: for_statement DEL_QUEST  */
#line 260 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2398 "parcer.tab.c"
    break;

  case 72: /* if_body: if_body for_statement DEL_QUEST  */
#line 261 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2404 "parcer.tab.c"
    break;

  case 73: /* if_body: while_statement if_statement DEL_QUEST  */
#line 262 "parcer.y"
                                                {(yyval.str) = template("%s\n", (yyvsp[-2].str));}
#line 2410 "parcer.tab.c"
    break;

  case 74: /* if_body: if_body while_statement DEL_QUEST  */
#line 263 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2416 "parcer.tab.c"
    break;

  case 75: /* if_body: KW_return right_part DEL_QUEST  */
#line 264 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2422 "parcer.tab.c"
    break;

  case 76: /* if_body: if_body KW_return right_part DEL_QUEST  */
#line 265 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2428 "parcer.tab.c"
    break;

  case 77: /* while_statement: KW_while DEL_LPAR right_part DEL_RPAR DEL_DOTS while_body KW_endwhile  */
#line 269 "parcer.y"
                                                                              {(yyval.str) = template("while (%s){\n%s}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2434 "parcer.tab.c"
    break;

  case 78: /* while_body: expression DEL_QUEST  */
#line 272 "parcer.y"
                                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2440 "parcer.tab.c"
    break;

  case 79: /* while_body: while_body expression DEL_QUEST  */
#line 273 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2446 "parcer.tab.c"
    break;

  case 80: /* while_body: if_statement DEL_QUEST  */
#line 274 "parcer.y"
                                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2452 "parcer.tab.c"
    break;

  case 81: /* while_body: while_body if_statement DEL_QUEST  */
#line 275 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2458 "parcer.tab.c"
    break;

  case 82: /* while_body: while_statement DEL_QUEST  */
#line 276 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2464 "parcer.tab.c"
    break;

  case 83: /* while_body: while_body while_statement DEL_QUEST  */
#line 277 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2470 "parcer.tab.c"
    break;

  case 84: /* while_body: KW_return right_part DEL_QUEST  */
#line 278 "parcer.y"
                                                                {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2476 "parcer.tab.c"
    break;

  case 85: /* while_body: while_body KW_return right_part DEL_QUEST  */
#line 279 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2482 "parcer.tab.c"
    break;

  case 86: /* for_statement: KW_for for_arguments DEL_DOTS for_body KW_endfor  */
#line 284 "parcer.y"
                                                                                                                                                                                                         {(yyval.str) = template("for (%s){\n%s}", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2488 "parcer.tab.c"
    break;

  case 87: /* for_statement: attribute DEL_DOTS OP_EQUAL DEL_LBRAC right_part KW_for T_ID DEL_DOTS attribute DEL_RBRAC var_type  */
#line 285 "parcer.y"
                                                                                                                                                         {(yyval.str) = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s = 0; %s < %s; %s++){\n%s[%s] = %s;\n}", (yyvsp[0].str), (yyvsp[-10].str), (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[-10].str), (yyvsp[-4].str), (yyvsp[-6].str));}
#line 2494 "parcer.tab.c"
    break;

  case 88: /* for_statement: attribute DEL_DOTS OP_EQUAL DEL_LBRAC right_part KW_for T_ID var_type KW_in attribute KW_of attribute DEL_RBRAC var_type  */
#line 286 "parcer.y"
                                                                                                                                 {(yyval.str) = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s_i = 0; %s_i < %s; %s_i++){\n%s%s = %s[%s_i];\n%s[%s_i] = %s;\n}", (yyvsp[0].str), (yyvsp[-13].str), (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[0].str), (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-13].str), (yyvsp[-4].str), (yyvsp[-9].str));}
#line 2500 "parcer.tab.c"
    break;

  case 89: /* for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS right_part DEL_DOTS T_INT DEL_RBRAC  */
#line 289 "parcer.y"
                                                                                {(yyval.str) = template("int %s = %s; %s < %s; %s += %s", (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-8].str), (yyvsp[-3].str), (yyvsp[-8].str), (yyvsp[-1].str));}
#line 2506 "parcer.tab.c"
    break;

  case 90: /* for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS right_part DEL_RBRAC  */
#line 290 "parcer.y"
                                                                                        {(yyval.str) = template("int %s = %s; %s < %s; %s += 1", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-6].str), (yyvsp[-1].str), (yyvsp[-6].str));}
#line 2512 "parcer.tab.c"
    break;

  case 91: /* for_body: expression DEL_QUEST  */
#line 293 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2518 "parcer.tab.c"
    break;

  case 92: /* for_body: for_body expression DEL_QUEST  */
#line 294 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2524 "parcer.tab.c"
    break;

  case 93: /* for_body: if_statement DEL_QUEST  */
#line 295 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2530 "parcer.tab.c"
    break;

  case 94: /* for_body: for_body if_statement DEL_QUEST  */
#line 296 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2536 "parcer.tab.c"
    break;

  case 95: /* for_body: while_statement DEL_QUEST  */
#line 297 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2542 "parcer.tab.c"
    break;

  case 96: /* for_body: for_body while_statement DEL_QUEST  */
#line 298 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2548 "parcer.tab.c"
    break;

  case 97: /* for_body: for_statement DEL_QUEST  */
#line 299 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2554 "parcer.tab.c"
    break;

  case 98: /* for_body: for_body for_statement DEL_QUEST  */
#line 300 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2560 "parcer.tab.c"
    break;

  case 99: /* for_body: KW_return right_part DEL_QUEST  */
#line 301 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2566 "parcer.tab.c"
    break;

  case 100: /* for_body: for_body KW_return right_part DEL_QUEST  */
#line 302 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2572 "parcer.tab.c"
    break;

  case 101: /* comp_statement: KW_comp T_ID DEL_DOTS comp_declarations KW_endcomp  */
#line 307 "parcer.y"
                                                           {(yyval.str) = template("#define SELF struct %s *self\ntypedef struct %s {\n%s\n}%s;\n\n#undef SELF\n\n", (yyvsp[-3].str), (yyvsp[-3].str), (yyvsp[-1].str), (yyvsp[-3].str));}
#line 2578 "parcer.tab.c"
    break;

  case 102: /* comp_statement: KW_comp T_ID DEL_DOTS comp_declarations comp_functions KW_endcomp  */
#line 308 "parcer.y"
                                                                          {(yyval.str) = template("#define SELF struct %s *self\ntypedef struct %s {\n%s%s\n}%s;\n\n%s\nconst %s ctor_%s = {%s};\n#undef SELF\n\n", (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-1].comp_func).func_name, (yyvsp[-4].str), (yyvsp[-1].comp_func).func_all, (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-1].comp_func).func_const);}
#line 2584 "parcer.tab.c"
    break;

  case 106: /* comp_expression: KW_continue  */
#line 315 "parcer.y"
                                {(yyval.str) = template(" continue");}
#line 2590 "parcer.tab.c"
    break;

  case 107: /* comp_expression: KW_break  */
#line 316 "parcer.y"
                                {(yyval.str) = template(" break");}
#line 2596 "parcer.tab.c"
    break;

  case 108: /* comp_expression: DEL_HASHTAG T_ID  */
#line 317 "parcer.y"
                        {(yyval.str) = template("self->%s",(yyvsp[0].str));}
#line 2602 "parcer.tab.c"
    break;

  case 109: /* comp_declarations: comp_declaration_init DEL_QUEST  */
#line 321 "parcer.y"
                                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2608 "parcer.tab.c"
    break;

  case 110: /* comp_declarations: comp_declarations comp_declaration_init DEL_QUEST  */
#line 322 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2614 "parcer.tab.c"
    break;

  case 111: /* comp_declaration_init: DEL_HASHTAG T_ID var_type  */
#line 325 "parcer.y"
                                                                                                                {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 2620 "parcer.tab.c"
    break;

  case 112: /* comp_declaration_init: DEL_HASHTAG T_ID DEL_COMMA  */
#line 326 "parcer.y"
                                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 2626 "parcer.tab.c"
    break;

  case 113: /* comp_declaration_init: DEL_HASHTAG T_ID DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 327 "parcer.y"
                                                                                {(yyval.str) = template("%s%s[%s]", (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-2].str));}
#line 2632 "parcer.tab.c"
    break;

  case 114: /* comp_declaration_init: comp_declaration DEL_HASHTAG T_ID var_type  */
#line 328 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s%s",(yyvsp[0].str), (yyvsp[-3].str) ,(yyvsp[-1].str));}
#line 2638 "parcer.tab.c"
    break;

  case 115: /* comp_declaration_init: comp_declaration DEL_HASHTAG T_ID DEL_COMMA  */
#line 329 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2644 "parcer.tab.c"
    break;

  case 116: /* comp_declaration_init: comp_declaration DEL_HASHTAG T_ID DEL_LBRAC DEL_RBRAC var_type  */
#line 330 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-5].str), (yyvsp[-3].str));}
#line 2650 "parcer.tab.c"
    break;

  case 118: /* comp_declaration: DEL_HASHTAG  */
#line 335 "parcer.y"
                                                                                                                                {(yyval.str) = template("self->");}
#line 2656 "parcer.tab.c"
    break;

  case 119: /* comp_declaration: DEL_HASHTAG T_ID DEL_COMMA  */
#line 336 "parcer.y"
                                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 2662 "parcer.tab.c"
    break;

  case 120: /* comp_declaration: DEL_HASHTAG T_ID DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 337 "parcer.y"
                                                                                {(yyval.str) = template("%s%s[%s]", (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-2].str));}
#line 2668 "parcer.tab.c"
    break;

  case 121: /* comp_declaration: comp_declaration DEL_HASHTAG T_ID var_type  */
#line 338 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s%s",(yyvsp[0].str), (yyvsp[-3].str) ,(yyvsp[-1].str));}
#line 2674 "parcer.tab.c"
    break;

  case 122: /* comp_declaration: comp_declaration DEL_HASHTAG T_ID DEL_COMMA  */
#line 339 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2680 "parcer.tab.c"
    break;

  case 123: /* comp_declaration: comp_declaration DEL_HASHTAG T_ID DEL_LBRAC DEL_RBRAC var_type  */
#line 340 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-5].str), (yyvsp[-3].str));}
#line 2686 "parcer.tab.c"
    break;

  case 125: /* comp_assignment: DEL_HASHTAG T_ID OP_EQUAL comp_right_part  */
#line 345 "parcer.y"
                                                                                                                        {(yyval.str) = template("self->%s = %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2692 "parcer.tab.c"
    break;

  case 126: /* comp_assignment: DEL_HASHTAG T_ID DEL_LBRAC DEL_HASHTAG T_ID DEL_RBRAC OP_EQUAL right_part  */
#line 346 "parcer.y"
                                                                                        {(yyval.str) = template("self->%s[self->%s] = %s", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[0].str));}
#line 2698 "parcer.tab.c"
    break;

  case 127: /* comp_assignment: DEL_HASHTAG T_ID OP_INCREM comp_right_part  */
#line 347 "parcer.y"
                                                                                                                        {(yyval.str) = template("self->%s += %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2704 "parcer.tab.c"
    break;

  case 128: /* comp_assignment: DEL_HASHTAG T_ID DEL_DOT comp_fcn_call  */
#line 348 "parcer.y"
                                                                                                                                {(yyval.str) = template("self->%s.%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2710 "parcer.tab.c"
    break;

  case 129: /* comp_assignment: DEL_HASHTAG T_ID DEL_LBRAC attribute DEL_RBRAC DEL_DOT T_ID DEL_LPAR DEL_RPAR  */
#line 349 "parcer.y"
                                                                                        {(yyval.str) = template("self->%s[%s].%s()", (yyvsp[-7].str), (yyvsp[-5].str), (yyvsp[-2].str));}
#line 2716 "parcer.tab.c"
    break;

  case 130: /* comp_fcn_call: T_ID DEL_LPAR DEL_RPAR  */
#line 353 "parcer.y"
                                                                                                {(yyval.str) = template("%s(&%s)", (yyvsp[-2].str), (yyvsp[-2].str));}
#line 2722 "parcer.tab.c"
    break;

  case 131: /* comp_fcn_call: DEL_HASHTAG T_ID DEL_LPAR DEL_RPAR  */
#line 354 "parcer.y"
                                                                                {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 2728 "parcer.tab.c"
    break;

  case 132: /* comp_fcn_call: T_ID DEL_LPAR comp_fcn_arguments DEL_RPAR  */
#line 355 "parcer.y"
                                                                        {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2734 "parcer.tab.c"
    break;

  case 133: /* comp_fcn_call: DEL_LPAR comp_right_part DEL_RPAR  */
#line 356 "parcer.y"
                                                                                {(yyval.str) = template("(%s)", (yyvsp[-1].str));}
#line 2740 "parcer.tab.c"
    break;

  case 134: /* comp_fcn_call: DEL_HASHTAG T_ID DEL_LPAR comp_fcn_arguments DEL_RPAR  */
#line 357 "parcer.y"
                                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2746 "parcer.tab.c"
    break;

  case 135: /* comp_functions: comp_function DEL_QUEST  */
#line 361 "parcer.y"
                                                                {(yyval.comp_func).func_name = template("%s(*%s) (%s);", (yyvsp[-1].comp_func).func_ret_type, (yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_args); (yyval.comp_func).func_const = template(" .%s=%s",(yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_name); (yyval.comp_func).func_all = template("%s\n", (yyvsp[-1].comp_func).func_all);}
#line 2752 "parcer.tab.c"
    break;

  case 136: /* comp_functions: comp_functions comp_function DEL_QUEST  */
#line 362 "parcer.y"
                                                {(yyval.comp_func).func_name = template("%s\n%s(*%s) (%s);\n",(yyvsp[-2].comp_func).func_name, (yyvsp[-1].comp_func).func_ret_type, (yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_args); (yyval.comp_func).func_const = template("%s, .%s=%s",(yyvsp[-2].comp_func).func_const, (yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_name); (yyval.comp_func).func_all = template("%s\n%s\n", (yyvsp[-2].comp_func).func_all, (yyvsp[-1].comp_func).func_all);}
#line 2758 "parcer.tab.c"
    break;

  case 137: /* comp_function: KW_def T_ID DEL_LPAR DEL_RPAR DEL_DOTS KW_enddef  */
#line 365 "parcer.y"
                                                                                                                                        {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-4].str); (yyval.comp_func).func_args = template("SELF"); (yyval.comp_func).func_all = template("void %s (SELF){\n}", (yyvsp[-4].str));}
#line 2764 "parcer.tab.c"
    break;

  case 138: /* comp_function: KW_def T_ID DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS KW_enddef  */
#line 366 "parcer.y"
                                                                                                                        {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-5].str); (yyval.comp_func).func_args = template("SELF, %s", (yyvsp[-3].str)); (yyval.comp_func).func_all = template("void %s (SELF){\n}", (yyvsp[-5].str));}
#line 2770 "parcer.tab.c"
    break;

  case 139: /* comp_function: KW_def T_ID DEL_LPAR DEL_RPAR DEL_DOTS comp_function_body KW_enddef  */
#line 367 "parcer.y"
                                                                                                                        {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-5].str); (yyval.comp_func).func_args = template("SELF"); (yyval.comp_func).func_all = template("void %s (SELF){\n%s}", (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2776 "parcer.tab.c"
    break;

  case 140: /* comp_function: KW_def T_ID DEL_LPAR DEL_RPAR fcn_ret_type comp_function_body KW_enddef  */
#line 368 "parcer.y"
                                                                                                                {(yyval.comp_func).func_ret_type = template("%s ", (yyvsp[-2].str)); (yyval.comp_func).func_name = (yyvsp[-5].str); (yyval.comp_func).func_args = template("SELF"); (yyval.comp_func).func_all = template("%s %s (SELF){\n%s}", (yyvsp[-2].str), (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2782 "parcer.tab.c"
    break;

  case 141: /* comp_function: KW_def T_ID DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS comp_function_body KW_enddef  */
#line 369 "parcer.y"
                                                                                                {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-6].str); (yyval.comp_func).func_args = template("SELF, %s", (yyvsp[-4].str)); (yyval.comp_func).func_all = template("void %s (SELF, %s){\n%s}", (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2788 "parcer.tab.c"
    break;

  case 142: /* comp_function: KW_def T_ID DEL_LPAR fcn_arguments DEL_RPAR fcn_ret_type comp_function_body KW_enddef  */
#line 370 "parcer.y"
                                                                                                {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-6].str); (yyval.comp_func).func_args = template("SELF, %s", (yyvsp[-4].str)); (yyval.comp_func).func_all = template("void %s (SELF, %s){\n%s}", (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2794 "parcer.tab.c"
    break;

  case 144: /* comp_fcn_arguments: comp_fcn_arguments DEL_HASHTAG attribute  */
#line 374 "parcer.y"
                                                                        {(yyval.str) = template("%sself->%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2800 "parcer.tab.c"
    break;

  case 145: /* comp_fcn_arguments: comp_fcn_arguments DEL_HASHTAG attribute operator  */
#line 375 "parcer.y"
                                                                {(yyval.str) = template("%sself->%s", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2806 "parcer.tab.c"
    break;

  case 146: /* comp_fcn_arguments: comp_fcn_arguments DEL_COMMA  */
#line 376 "parcer.y"
                                                                                        {(yyval.str) = template("%s, ",  (yyvsp[-1].str));}
#line 2812 "parcer.tab.c"
    break;

  case 147: /* comp_fcn_arguments: comp_fcn_arguments attribute DEL_COMMA  */
#line 377 "parcer.y"
                                                                                {(yyval.str) = template("%sself->%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2818 "parcer.tab.c"
    break;

  case 148: /* comp_function_body: comp_assignment DEL_QUEST  */
#line 380 "parcer.y"
                                                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2824 "parcer.tab.c"
    break;

  case 149: /* comp_function_body: comp_function_body comp_assignment DEL_QUEST  */
#line 381 "parcer.y"
                                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2830 "parcer.tab.c"
    break;

  case 150: /* comp_function_body: comp_declaration DEL_QUEST  */
#line 382 "parcer.y"
                                                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2836 "parcer.tab.c"
    break;

  case 151: /* comp_function_body: comp_function_body comp_declaration DEL_QUEST  */
#line 383 "parcer.y"
                                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2842 "parcer.tab.c"
    break;

  case 152: /* comp_function_body: comp_fcn_call DEL_QUEST  */
#line 384 "parcer.y"
                                                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2848 "parcer.tab.c"
    break;

  case 153: /* comp_function_body: comp_function_body comp_fcn_call DEL_QUEST  */
#line 385 "parcer.y"
                                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2854 "parcer.tab.c"
    break;

  case 154: /* comp_function_body: comp_if_statement DEL_QUEST  */
#line 386 "parcer.y"
                                                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2860 "parcer.tab.c"
    break;

  case 155: /* comp_function_body: comp_function_body comp_if_statement DEL_QUEST  */
#line 387 "parcer.y"
                                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2866 "parcer.tab.c"
    break;

  case 156: /* comp_function_body: comp_for_statement DEL_QUEST  */
#line 388 "parcer.y"
                                                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2872 "parcer.tab.c"
    break;

  case 157: /* comp_function_body: comp_function_body comp_for_statement DEL_QUEST  */
#line 389 "parcer.y"
                                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2878 "parcer.tab.c"
    break;

  case 158: /* comp_function_body: KW_return comp_right_part DEL_QUEST  */
#line 390 "parcer.y"
                                                                                {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2884 "parcer.tab.c"
    break;

  case 159: /* comp_function_body: comp_function_body KW_return comp_right_part DEL_QUEST  */
#line 391 "parcer.y"
                                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2890 "parcer.tab.c"
    break;

  case 160: /* comp_if_statement: KW_if DEL_LPAR comp_right_part DEL_RPAR DEL_DOTS comp_if_body KW_endif  */
#line 395 "parcer.y"
                                                                                                                                {(yyval.str) = template("if (%s){\n%s}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2896 "parcer.tab.c"
    break;

  case 161: /* comp_if_statement: KW_if DEL_LPAR comp_right_part DEL_RPAR DEL_DOTS comp_if_body KW_else DEL_DOTS comp_if_body KW_endif  */
#line 396 "parcer.y"
                                                                                                         {(yyval.str) = template("if (%s){\n%s}else{\n%s}", (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2902 "parcer.tab.c"
    break;

  case 162: /* comp_if_body: comp_expression DEL_QUEST  */
#line 399 "parcer.y"
                                                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2908 "parcer.tab.c"
    break;

  case 163: /* comp_if_body: comp_if_body comp_expression DEL_QUEST  */
#line 400 "parcer.y"
                                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2914 "parcer.tab.c"
    break;

  case 164: /* comp_if_body: comp_if_body DEL_QUEST  */
#line 401 "parcer.y"
                                                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2920 "parcer.tab.c"
    break;

  case 165: /* comp_if_body: comp_if_body if_statement DEL_QUEST  */
#line 402 "parcer.y"
                                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2926 "parcer.tab.c"
    break;

  case 166: /* comp_if_body: KW_return comp_right_part DEL_QUEST  */
#line 403 "parcer.y"
                                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2932 "parcer.tab.c"
    break;

  case 167: /* comp_if_body: comp_if_body KW_return comp_right_part DEL_QUEST  */
#line 404 "parcer.y"
                                                        {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2938 "parcer.tab.c"
    break;

  case 168: /* comp_for_statement: KW_for comp_for_arguments DEL_DOTS comp_for_body KW_endfor  */
#line 408 "parcer.y"
                                                                                                                                                                                                                {(yyval.str) = template("for (%s){\n%s}", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2944 "parcer.tab.c"
    break;

  case 169: /* comp_for_statement: attribute DEL_DOTS OP_EQUAL DEL_LBRAC comp_right_part KW_for T_ID DEL_DOTS attribute DEL_RBRAC var_type  */
#line 409 "parcer.y"
                                                                                                                                                                {(yyval.str) = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s_i = 0; %s_i < %s; %s_i++){\n%s[%s_i] = %s;\n}", (yyvsp[0].str), (yyvsp[-10].str), (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[-10].str), (yyvsp[-4].str), (yyvsp[-6].str));}
#line 2950 "parcer.tab.c"
    break;

  case 170: /* comp_for_statement: attribute DEL_DOTS OP_EQUAL DEL_LBRAC comp_right_part KW_for T_ID var_type KW_in attribute KW_of attribute DEL_RBRAC var_type  */
#line 410 "parcer.y"
                                                                                                                                        {(yyval.str) = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s_i = 0; %s_i < %s; %s_i++){\n%s%s = %s[%s_i];\n%s[%s_i] = %s;\n}", (yyvsp[0].str), (yyvsp[-13].str), (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[0].str), (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-13].str), (yyvsp[-4].str), (yyvsp[-9].str));}
#line 2956 "parcer.tab.c"
    break;

  case 171: /* comp_for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS comp_right_part DEL_DOTS T_INT DEL_RBRAC  */
#line 413 "parcer.y"
                                                                                        {(yyval.str) = template("int %s = %s; %s < %s; %s += %s", (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-8].str), (yyvsp[-3].str), (yyvsp[-8].str), (yyvsp[-1].str));}
#line 2962 "parcer.tab.c"
    break;

  case 172: /* comp_for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS comp_right_part DEL_RBRAC  */
#line 414 "parcer.y"
                                                                                                        {(yyval.str) = template("int %s = %s; %s < %s; %s += 1", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-6].str), (yyvsp[-1].str), (yyvsp[-6].str));}
#line 2968 "parcer.tab.c"
    break;

  case 173: /* comp_for_body: comp_expression DEL_QUEST  */
#line 417 "parcer.y"
                                                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2974 "parcer.tab.c"
    break;

  case 174: /* comp_for_body: comp_for_body comp_expression DEL_QUEST  */
#line 418 "parcer.y"
                                                                {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2980 "parcer.tab.c"
    break;

  case 175: /* comp_for_body: comp_if_statement DEL_QUEST  */
#line 419 "parcer.y"
                                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2986 "parcer.tab.c"
    break;

  case 176: /* comp_for_body: comp_for_body comp_if_statement DEL_QUEST  */
#line 420 "parcer.y"
                                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2992 "parcer.tab.c"
    break;

  case 177: /* comp_for_body: comp_for_statement DEL_QUEST  */
#line 421 "parcer.y"
                                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2998 "parcer.tab.c"
    break;

  case 178: /* comp_for_body: comp_for_body comp_for_statement DEL_QUEST  */
#line 422 "parcer.y"
                                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 3004 "parcer.tab.c"
    break;

  case 179: /* comp_for_body: KW_return comp_right_part DEL_QUEST  */
#line 423 "parcer.y"
                                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 3010 "parcer.tab.c"
    break;

  case 180: /* comp_for_body: comp_for_body KW_return comp_right_part DEL_QUEST  */
#line 424 "parcer.y"
                                                        {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 3016 "parcer.tab.c"
    break;

  case 182: /* comp_right_part: DEL_HASHTAG  */
#line 429 "parcer.y"
                                                                                                                        {(yyval.str) = template("self->");}
#line 3022 "parcer.tab.c"
    break;

  case 184: /* comp_right_part: attribute operator  */
#line 431 "parcer.y"
                                                                                                                {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 3028 "parcer.tab.c"
    break;

  case 185: /* comp_right_part: attribute DEL_COMMA  */
#line 432 "parcer.y"
                                                                                                                {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 3034 "parcer.tab.c"
    break;

  case 186: /* comp_right_part: DEL_LPAR comp_right_part DEL_RPAR  */
#line 433 "parcer.y"
                                                                                                {(yyval.str) = template("(%s)", (yyvsp[-1].str));}
#line 3040 "parcer.tab.c"
    break;

  case 187: /* comp_right_part: DEL_LPAR comp_right_part DEL_RPAR operator  */
#line 434 "parcer.y"
                                                                                        {(yyval.str) = template("(%s)%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 3046 "parcer.tab.c"
    break;

  case 188: /* comp_right_part: DEL_LBRAC comp_right_part DEL_RBRAC  */
#line 435 "parcer.y"
                                                                                                {(yyval.str) = template("[%s]", (yyvsp[-1].str));}
#line 3052 "parcer.tab.c"
    break;

  case 189: /* comp_right_part: DEL_LBRAC comp_right_part DEL_RBRAC operator  */
#line 436 "parcer.y"
                                                                                        {(yyval.str) = template("[%s]%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 3058 "parcer.tab.c"
    break;

  case 190: /* comp_right_part: DEL_LBRAC comp_right_part DEL_RBRAC DEL_DOT  */
#line 437 "parcer.y"
                                                                                        {(yyval.str) = template("[%s].", (yyvsp[-2].str));}
#line 3064 "parcer.tab.c"
    break;

  case 191: /* comp_right_part: comp_right_part attribute  */
#line 438 "parcer.y"
                                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 3070 "parcer.tab.c"
    break;

  case 192: /* comp_right_part: comp_right_part DEL_HASHTAG T_ID  */
#line 439 "parcer.y"
                                                                                                {(yyval.str) = template("%sself->%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 3076 "parcer.tab.c"
    break;

  case 193: /* comp_right_part: comp_right_part attribute operator  */
#line 440 "parcer.y"
                                                                                                {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str));}
#line 3082 "parcer.tab.c"
    break;

  case 194: /* comp_right_part: comp_right_part attribute DEL_COMMA  */
#line 441 "parcer.y"
                                                                                                {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 3088 "parcer.tab.c"
    break;

  case 195: /* comp_right_part: comp_right_part DEL_LPAR DEL_RPAR  */
#line 442 "parcer.y"
                                                                                                {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 3094 "parcer.tab.c"
    break;

  case 196: /* comp_right_part: comp_right_part DEL_LPAR DEL_RPAR operator  */
#line 443 "parcer.y"
                                                                                        {(yyval.str) = template("%s()%s", (yyvsp[-3].str), (yyvsp[0].str));}
#line 3100 "parcer.tab.c"
    break;

  case 197: /* comp_right_part: comp_right_part DEL_LPAR comp_right_part DEL_RPAR  */
#line 444 "parcer.y"
                                                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 3106 "parcer.tab.c"
    break;

  case 198: /* comp_right_part: comp_right_part DEL_LPAR comp_right_part DEL_RPAR operator  */
#line 445 "parcer.y"
                                                                        {(yyval.str) = template("%s(%s)%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 3112 "parcer.tab.c"
    break;

  case 199: /* comp_right_part: comp_right_part DEL_LBRAC comp_right_part DEL_RBRAC  */
#line 446 "parcer.y"
                                                                                {(yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 3118 "parcer.tab.c"
    break;

  case 200: /* comp_right_part: comp_right_part DEL_LBRAC comp_right_part DEL_RBRAC operator  */
#line 447 "parcer.y"
                                                                        {(yyval.str) = template("%s[%s]%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 3124 "parcer.tab.c"
    break;

  case 201: /* comp_right_part: comp_right_part DEL_LBRAC comp_right_part DEL_RBRAC DEL_DOT  */
#line 448 "parcer.y"
                                                                        {(yyval.str) = template("%s[%s].", (yyvsp[-4].str), (yyvsp[-2].str));}
#line 3130 "parcer.tab.c"
    break;

  case 203: /* right_part: DEL_HASHTAG  */
#line 454 "parcer.y"
                                                                                                                {(yyval.str) = template("");}
#line 3136 "parcer.tab.c"
    break;

  case 205: /* right_part: attribute operator  */
#line 456 "parcer.y"
                                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 3142 "parcer.tab.c"
    break;

  case 206: /* right_part: T_ID DEL_DOT DEL_HASHTAG T_ID  */
#line 457 "parcer.y"
                                                                                                {(yyval.str) = template("%s.%s", (yyvsp[-3].str), (yyvsp[0].str));}
#line 3148 "parcer.tab.c"
    break;

  case 207: /* right_part: T_ID DEL_DOT T_ID DEL_LPAR DEL_RPAR operator  */
#line 458 "parcer.y"
                                                                                {(yyval.str) = template("%s.%s(&%s)%s",(yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[-5].str), (yyvsp[0].str));}
#line 3154 "parcer.tab.c"
    break;

  case 208: /* right_part: attribute DEL_COMMA  */
#line 459 "parcer.y"
                                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 3160 "parcer.tab.c"
    break;

  case 209: /* right_part: DEL_LPAR right_part DEL_RPAR  */
#line 460 "parcer.y"
                                                                                                {(yyval.str) = template("(%s)", (yyvsp[-1].str));}
#line 3166 "parcer.tab.c"
    break;

  case 210: /* right_part: DEL_LPAR right_part DEL_RPAR operator  */
#line 461 "parcer.y"
                                                                                        {(yyval.str) = template("(%s)%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 3172 "parcer.tab.c"
    break;

  case 211: /* right_part: DEL_LBRAC right_part DEL_RBRAC  */
#line 462 "parcer.y"
                                                                                                {(yyval.str) = template("[%s]", (yyvsp[-1].str));}
#line 3178 "parcer.tab.c"
    break;

  case 212: /* right_part: DEL_LBRAC right_part DEL_RBRAC operator  */
#line 463 "parcer.y"
                                                                                {(yyval.str) = template("[%s]%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 3184 "parcer.tab.c"
    break;

  case 213: /* right_part: right_part attribute  */
#line 464 "parcer.y"
                                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 3190 "parcer.tab.c"
    break;

  case 214: /* right_part: right_part DEL_HASHTAG  */
#line 465 "parcer.y"
                                                                                                {(yyval.str) = template("%s", (yyvsp[-1].str));}
#line 3196 "parcer.tab.c"
    break;

  case 215: /* right_part: right_part attribute operator  */
#line 466 "parcer.y"
                                                                                                {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str));}
#line 3202 "parcer.tab.c"
    break;

  case 216: /* right_part: right_part attribute DEL_COMMA  */
#line 467 "parcer.y"
                                                                                                {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 3208 "parcer.tab.c"
    break;

  case 217: /* right_part: right_part DEL_LPAR DEL_RPAR  */
#line 468 "parcer.y"
                                                                                                {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 3214 "parcer.tab.c"
    break;

  case 218: /* right_part: right_part DEL_LPAR DEL_RPAR operator  */
#line 469 "parcer.y"
                                                                                        {(yyval.str) = template("%s()%s", (yyvsp[-3].str), (yyvsp[0].str));}
#line 3220 "parcer.tab.c"
    break;

  case 219: /* right_part: right_part DEL_LPAR right_part DEL_RPAR  */
#line 470 "parcer.y"
                                                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 3226 "parcer.tab.c"
    break;

  case 220: /* right_part: right_part DEL_LPAR right_part DEL_RPAR operator  */
#line 471 "parcer.y"
                                                                        {(yyval.str) = template("%s(%s)%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 3232 "parcer.tab.c"
    break;

  case 221: /* right_part: right_part DEL_LBRAC right_part DEL_RBRAC  */
#line 472 "parcer.y"
                                                                                {(yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 3238 "parcer.tab.c"
    break;

  case 222: /* right_part: right_part DEL_LBRAC right_part DEL_RBRAC operator  */
#line 473 "parcer.y"
                                                                        {(yyval.str) = template("%s[%s]%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 3244 "parcer.tab.c"
    break;

  case 223: /* right_part: right_part attribute DEL_DOT attribute DEL_LPAR DEL_RPAR  */
#line 474 "parcer.y"
                                                                {(yyval.str) = template("%s%s.%s(&%s)", (yyvsp[-5].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str));}
#line 3250 "parcer.tab.c"
    break;

  case 228: /* attribute: KW_main  */
#line 481 "parcer.y"
                {(yyval.str) = template("main");}
#line 3256 "parcer.tab.c"
    break;

  case 229: /* attribute: KW_True  */
#line 482 "parcer.y"
                {(yyval.str) = template("1");}
#line 3262 "parcer.tab.c"
    break;

  case 230: /* attribute: KW_False  */
#line 483 "parcer.y"
                {(yyval.str) = template("0");}
#line 3268 "parcer.tab.c"
    break;

  case 231: /* attribute: KW_and  */
#line 484 "parcer.y"
                {(yyval.str) = template(" && ");}
#line 3274 "parcer.tab.c"
    break;

  case 232: /* attribute: KW_or  */
#line 485 "parcer.y"
                        {(yyval.str) = template(" || ");}
#line 3280 "parcer.tab.c"
    break;

  case 233: /* operator: OP_MINUS  */
#line 488 "parcer.y"
                        {(yyval.str) = template(" - ");}
#line 3286 "parcer.tab.c"
    break;

  case 234: /* operator: OP_PLUS  */
#line 489 "parcer.y"
                        {(yyval.str) = template(" + ");}
#line 3292 "parcer.tab.c"
    break;

  case 235: /* operator: OP_MUL  */
#line 490 "parcer.y"
                        {(yyval.str) = template("*");}
#line 3298 "parcer.tab.c"
    break;

  case 236: /* operator: OP_DIV  */
#line 491 "parcer.y"
                        {(yyval.str) = template(" %s ", "/");}
#line 3304 "parcer.tab.c"
    break;

  case 237: /* operator: OP_MOD  */
#line 492 "parcer.y"
                        {(yyval.str) = template(" %s ", "%");}
#line 3310 "parcer.tab.c"
    break;

  case 238: /* operator: OP_EXP  */
#line 493 "parcer.y"
                        {(yyval.str) = template(" ** ");}
#line 3316 "parcer.tab.c"
    break;

  case 239: /* operator: OP_LESS  */
#line 494 "parcer.y"
                        {(yyval.str) = template(" < ");}
#line 3322 "parcer.tab.c"
    break;

  case 240: /* operator: OP_LEQ  */
#line 495 "parcer.y"
                        {(yyval.str) = template(" <= ");}
#line 3328 "parcer.tab.c"
    break;

  case 241: /* operator: OP_GREATER  */
#line 496 "parcer.y"
                {(yyval.str) = template(" > ");}
#line 3334 "parcer.tab.c"
    break;

  case 242: /* operator: OP_GEQ  */
#line 497 "parcer.y"
                        {(yyval.str) = template(" >= ");}
#line 3340 "parcer.tab.c"
    break;

  case 243: /* operator: OP_DIVCREM  */
#line 498 "parcer.y"
                {(yyval.str) = template(" /= ");}
#line 3346 "parcer.tab.c"
    break;

  case 244: /* operator: OP_MODCREM  */
#line 499 "parcer.y"
                {(yyval.str) = template(" %= ");}
#line 3352 "parcer.tab.c"
    break;

  case 245: /* operator: OP_EQ  */
#line 500 "parcer.y"
                        {(yyval.str) = template(" == ");}
#line 3358 "parcer.tab.c"
    break;

  case 246: /* operator: OP_NOTEQ  */
#line 501 "parcer.y"
                {(yyval.str) = template(" != ");}
#line 3364 "parcer.tab.c"
    break;


#line 3368 "parcer.tab.c"

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

#line 505 "parcer.y"

int main(){
	if (yyparse() == 0)
		printf("\n");
	else
		printf("\n");
}
