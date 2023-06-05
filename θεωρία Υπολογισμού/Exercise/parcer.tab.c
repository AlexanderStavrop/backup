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
#define YYLAST   2880

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  244
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  561

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
     310,   311,   312,   313,   317,   318,   321,   322,   323,   324,
     325,   326,   330,   331,   332,   333,   334,   335,   336,   340,
     341,   342,   343,   344,   345,   349,   350,   351,   352,   353,
     357,   358,   361,   362,   363,   364,   365,   366,   369,   370,
     371,   372,   373,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   391,   392,   395,   396,   397,
     398,   399,   400,   404,   405,   406,   409,   410,   413,   414,
     415,   416,   417,   418,   419,   420,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   494,   496,   497,
     498,   499,   500,   501,   502
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

#define YYPACT_NINF (-377)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-220)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2595,   -26,  -377,  -377,  2668,  -377,  -377,  -377,  2684,  -377,
      17,  -377,  -377,  -377,    66,  2595,    22,  -377,  -377,  2143,
    -377,    28,    51,   149,  2684,     4,    20,   -32,    41,  -377,
      25,    35,  -377,    56,    64,    68,  -377,  -377,    44,  -377,
    -377,   912,  2684,   912,  -377,   248,  -377,    38,    57,   115,
    2684,    62,  -377,  2181,  2043,  -377,  -377,  -377,  -377,  -377,
      67,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,   912,   912,
    -377,  1959,  2763,  -377,  -377,  1307,  -377,  -377,  -377,  -377,
    -377,   -19,  2193,    91,    85,   -14,  2101,   216,    88,   148,
    2143,   587,   100,    96,   178,    15,  1333,  1349,   739,   912,
    -377,  2685,  -377,  -377,  -377,   912,  -377,   106,  -377,  2155,
     912,   124,   142,  2283,  2465,    -6,  -377,   208,  -377,  2085,
    -377,  2684,   258,   171,  -377,   135,    43,   145,  -377,   195,
     146,   200,  2829,  2829,  2829,  1388,  1404,  -377,  2684,  -377,
    1959,  -377,   151,  1959,   129,   157,   219,   158,  -377,   912,
     177,  2309,   179,   188,   189,   237,  2335,  2465,  2465,  -377,
    -377,   -32,   185,   192,   197,  2684,  -377,   205,  -377,  -377,
     215,  -377,   280,   221,  -377,  -377,  -377,  -377,  2829,  2829,
     220,  -377,   222,   227,   228,   235,   912,   262,   238,   912,
    1443,  -377,  -377,   912,   245,   249,   251,   252,  -377,  -377,
    -377,    31,  -377,  2361,  2387,  -377,   -32,   -32,   250,  2219,
    -377,   246,   260,   259,  2829,  -377,  -377,   254,  -377,  -377,
    -377,  -377,  1459,   266,  2491,  1475,  -377,  1501,  -377,  -377,
    -377,  -377,   267,  -377,  -377,  -377,   -32,    26,  2117,   -32,
    -377,  -377,   276,   300,   912,   290,   293,   295,   299,  2413,
     281,  -377,   912,   292,  1047,   828,    36,   294,  1079,   297,
    1517,  -377,  -377,  -377,  -377,  -377,   912,   301,   304,   305,
     306,  2569,  1533,   162,   307,   356,  -377,   961,   961,   359,
    -377,   -29,   312,   313,  1105,   314,   315,   136,  1137,  1169,
     828,   912,  2652,   316,   319,  2439,   361,   912,  -377,  1559,
    -377,  -377,  -377,  -377,   912,   321,   323,   325,  2517,   378,
    2231,   961,   372,   327,   961,   961,  -377,  1575,  2785,  -377,
    1591,    58,  -377,   391,  -377,  -377,  -377,   961,    13,   343,
     345,   346,   349,  -377,  -377,   174,  -377,  -377,  1201,  1233,
    1617,   357,  -377,  -377,   352,  -377,   912,   360,   362,   363,
     366,   132,  -377,  1633,  -377,  -377,  -377,  -377,   912,   367,
     369,   371,   353,  -377,  1985,  -377,  1649,   373,   703,  1675,
    1691,  -377,   863,   961,   410,  2807,  -377,  -377,  -377,   961,
     961,  2257,  -377,  2069,    -2,   288,  1730,  -377,  -377,  -377,
    -377,  -377,   377,  -377,  -377,  -377,  -377,  1079,  1746,  -377,
    -377,  -377,  -377,  -377,   395,  -377,  1762,  -377,  -377,  -377,
    2626,   407,  -377,  -377,  2684,   379,   381,   396,  -377,  -377,
     961,   425,   383,   376,  -377,  -377,   388,   389,  1015,  2829,
    2711,  2829,  1801,  1817,  -377,  -377,  -377,  2001,  2001,  -377,
    2027,   442,   392,   393,   448,  -377,  -377,   398,  -377,  -377,
     961,  2543,  -377,   399,  -377,   401,   402,  2684,  2829,  -377,
    1265,   406,  1856,    58,  -377,  -377,  -377,  -377,   961,   413,
     414,   416,  -377,  -377,  -377,  -377,  2829,  2737,  -377,   412,
     -18,   420,   -32,  1872,  -377,  -377,   -32,   444,  -377,   961,
     423,   629,   170,   961,  -377,  1888,  -377,  -377,  -377,  -377,
    -377,  -377,   430,   474,  -377,  -377,   476,  -377,  2684,  1927,
    -377,   422,  -377,   961,  -377,   432,   433,  1291,  -377,   912,
     429,   431,   434,  -377,  1265,  1943,  -377,  -377,  -377,   456,
    1959,   436,  2626,   473,   -32,   793,  -377,   435,  -377,   437,
    2684,  -377,  -377,  -377,   -32,   465,  -377,  2684,   440,   -32,
    -377
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,   219,   224,   225,     0,    14,   226,   227,     0,   223,
       0,   220,   222,   221,     0,     3,     0,    10,    12,    11,
      13,     0,     0,     0,     0,     0,   219,     0,     0,   219,
       0,     0,     1,     0,     0,     0,     4,    29,     0,     6,
       8,     0,     0,     0,    26,     0,    25,     0,     0,     0,
       0,     0,    15,     0,     0,     5,     7,     9,    30,    28,
     219,   229,   228,   230,   231,   232,   233,   243,   244,   234,
     235,   236,   237,   238,   239,   240,   241,   242,     0,     0,
     198,    16,   197,   199,    19,     0,    24,    21,    23,    20,
      22,     0,     0,     0,     0,     0,     0,     0,   219,   113,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     209,   208,   203,   200,    31,     0,    27,   219,    32,     0,
       0,     0,     0,     0,     0,     0,    45,     0,    43,     0,
      40,     0,     0,     0,    96,     0,     0,     0,   104,     0,
       0,     0,   204,   206,   212,     0,     0,   211,     0,   210,
      17,    33,   219,    18,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
      44,     0,     0,     0,   107,     0,   106,     0,   105,    97,
       0,   130,     0,     0,   201,   205,   207,   213,   214,   216,
       0,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,    36,     0,     0,     0,     0,     0,    53,    55,
      57,     0,    38,     0,     0,    41,     0,     0,     0,     0,
     131,   110,     0,   109,     0,   215,   217,     0,    50,    47,
      49,    48,     0,     0,     0,     0,    59,     0,    52,    54,
      56,    58,     0,    37,    39,    42,     0,     0,     0,     0,
     202,   218,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    60,     0,   108,     0,     0,     0,   111,     0,     0,
       0,    86,    88,    90,    92,    81,     0,     0,     0,     0,
       0,     0,     0,   219,     0,     0,   132,     0,     0,   113,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
      87,    89,    91,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   177,     0,   176,   178,
       0,     0,   145,     0,   143,   147,   134,     0,     0,     0,
       0,     0,     0,   149,   151,     0,   135,   133,     0,     0,
       0,     0,    63,    66,     0,    61,     0,     0,     0,     0,
       0,     0,    95,     0,    73,    75,    77,    72,     0,     0,
       0,     0,     0,   125,     0,   138,     0,     0,     0,     0,
       0,   153,     0,     0,     0,   186,   180,   179,   128,     0,
       0,     0,   114,     0,     0,     0,     0,   146,   144,   148,
     150,   152,     0,   136,   137,    70,    64,     0,     0,    65,
      67,    69,    68,    85,     0,    79,     0,    74,    76,    78,
       0,     0,   127,   141,     0,     0,     0,     0,   102,   101,
       0,   113,     0,    98,    99,   100,     0,     0,     0,   181,
     183,   190,     0,     0,   187,   189,   188,   120,   122,   126,
       0,     0,     0,     0,     0,   123,   117,     0,   116,   154,
       0,     0,    71,     0,    80,    24,     0,     0,   139,   142,
       0,     0,     0,   103,   168,   170,   172,   163,     0,     0,
       0,     0,   182,   185,   184,   191,   192,   194,   129,     0,
       0,     0,     0,     0,    62,    84,     0,     0,   140,     0,
       0,     0,     0,     0,   174,     0,   169,   171,   173,   193,
     196,   195,     0,     0,   115,   118,     0,    82,     0,     0,
     157,     0,   155,     0,   159,     0,     0,     0,   175,     0,
       0,     0,     0,   161,     0,     0,   160,   158,   167,     0,
     121,     0,     0,     0,     0,     0,   162,     0,   124,     0,
       0,    83,   156,   166,     0,     0,   164,     0,     0,     0,
     165
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -377,  -377,  -377,    10,  -377,   105,    30,   -38,  -377,   485,
     -89,  -119,  -112,   296,    95,   -75,  -377,  -144,  -377,  -377,
     489,  -376,  -377,   405,   287,   273,  -251,  -377,   375,   117,
    -254,  -289,   -17,  -266,  -377,  -377,   241,   130,     0,   370
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    14,    15,   160,    17,    18,    46,    19,    20,    21,
      96,   124,   161,   162,   305,   163,   318,   164,   198,   259,
      22,   500,   101,   102,   433,   434,   435,   136,   137,   374,
     294,   295,   501,   296,   323,   438,   327,    81,    82,    83
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   453,   432,   119,    28,   341,   168,    48,    30,   341,
      16,   298,   166,   293,   293,    23,   100,   207,   140,    38,
      31,   122,   207,   332,    47,    33,    45,   115,   342,   122,
      24,   333,   342,    25,    86,    87,    88,    89,    90,    45,
      45,   513,    84,   340,   123,   348,   349,   340,   293,   293,
      94,   288,   167,    97,   104,   213,   214,    52,   454,   341,
     341,   122,   479,   100,    49,   397,    32,   133,    59,   207,
     207,   122,   179,   333,    36,   141,    50,   242,    53,    51,
      39,   111,   342,   342,   264,   111,   206,    41,    42,   436,
     258,   206,    97,    54,   299,    91,   127,   340,   340,    58,
      38,   104,    45,    40,   389,   390,   111,   111,    55,    27,
      92,   391,   437,   392,   393,   280,    56,   394,    93,   127,
      57,   116,    49,   165,   165,   526,   105,   130,   265,   172,
     248,   173,   192,   193,   194,    29,   195,   120,   206,   206,
       2,     3,   121,   455,   131,   111,   111,   300,   190,   480,
     111,   132,   138,   111,     6,     7,   139,   170,     9,   257,
     151,   165,   176,    11,    12,    13,   165,   165,   165,   526,
     115,   204,   481,    85,   177,   218,   204,    86,    87,    88,
      89,    90,    41,    42,   279,   108,   154,   178,   109,   413,
     414,    44,   110,   306,   345,    41,    42,   181,   182,   183,
     111,   215,    43,   184,    44,   191,   317,    45,   106,   107,
     196,   199,   223,   165,   165,   320,    41,    42,    24,    97,
     402,    51,   197,   204,   204,    44,   100,   100,    45,   201,
     359,   208,   111,    44,   165,   111,    45,   111,   145,   146,
     209,   210,   216,   371,   255,   150,   245,   116,   127,   217,
     153,    86,    87,    88,    89,    90,   100,  -114,   219,   165,
     100,   100,   100,   169,   297,   297,    45,   220,    23,   277,
     111,   128,   129,   227,    45,   224,   263,   233,   303,   267,
     228,    23,   111,    41,    42,   229,   230,   328,   328,   200,
      43,   315,    44,   231,   297,   211,   234,   238,   297,   297,
     297,   239,    23,   240,   241,    23,  -117,   246,   251,   111,
     100,   100,   351,   174,   175,   357,    45,   249,    23,  -116,
     375,   328,   253,   262,   328,   328,   232,   385,   369,   235,
     385,   269,   306,   237,   268,   221,   222,   328,    45,   281,
     100,   103,   271,   456,   457,   272,    45,   273,   297,   297,
     111,   274,  -115,   310,  -118,   307,   311,   312,   313,   322,
     321,   111,   331,   111,   334,   335,   343,   344,   352,   290,
     290,   353,   155,   364,   425,   365,   385,   366,   297,   385,
     385,   372,   328,   328,   270,   378,   359,   377,   103,   328,
     328,   375,   282,   452,   395,   398,   385,   399,   400,   290,
     100,   401,   421,   290,   290,   290,   309,    23,   111,   406,
     407,   420,   409,   444,   410,   411,   111,   303,   412,   417,
     466,   418,   467,   419,   468,   458,   463,   471,   473,   427,
     328,   350,   100,   460,   469,   474,   333,   361,   297,   470,
     475,   476,   385,   385,   363,   489,   320,   385,   385,   490,
     425,   491,   113,   290,   290,   492,   495,   205,  -219,   496,
     328,    23,   205,   100,   503,   506,   507,   497,   508,   512,
     502,   357,   385,   391,   518,   520,   529,   530,   328,   531,
     534,   149,   541,   290,   536,   537,   408,   547,   550,   542,
     548,   544,   553,   385,   554,   557,   100,   559,   416,   328,
      34,   502,   461,   328,    35,   385,   135,   100,   450,   205,
     205,   180,   185,   186,   187,     0,     0,   545,   532,   385,
     514,     0,   515,   328,     0,     0,   517,   385,     0,   330,
     256,     0,     0,     0,   502,   385,     0,   292,   292,     0,
     111,     0,   549,   290,     0,   502,     0,     0,     0,     0,
     555,   291,   291,     0,     0,   278,     0,   558,   225,   226,
       0,   543,   376,     0,   304,   379,   380,   339,     0,     0,
       0,   339,   292,   292,   551,   290,     0,   316,   396,     0,
       0,   338,     0,     0,   556,   338,   291,   291,     0,   560,
      98,     0,     0,     0,   250,     2,     3,     0,     0,     0,
       0,   358,   360,     0,     0,     0,   290,     0,     0,     6,
       7,   133,     0,     9,   370,     0,   134,     0,    11,    12,
      13,   339,   339,   442,   443,     0,     0,     0,     0,     0,
     447,   448,   283,     0,     0,   338,   338,     2,     3,   290,
     155,   521,   522,     0,     0,     0,     0,    99,   428,   429,
     290,     6,     7,     0,     0,     9,   523,   329,   329,   540,
      11,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,   472,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   524,   288,     0,     0,     0,     0,     0,     0,   431,
       0,   329,     0,     0,   329,   329,     0,     0,   387,     0,
       0,   493,     0,   304,     0,     0,   283,   329,     0,     0,
       0,     2,     3,     0,   284,     0,     0,   285,     0,   505,
       0,     0,   428,   429,     0,     6,     7,     0,     0,     9,
     430,     0,     0,     0,    11,    12,    13,     0,     0,     0,
     519,     0,    60,     0,   527,     0,     0,     2,     3,     0,
       0,     0,   329,   329,     0,   446,   288,   358,     0,   329,
     329,     6,     7,   431,   535,     9,     0,     0,     0,     0,
      11,    12,    13,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,    73,    74,    75,    76,
      77,     0,    78,   144,     0,    79,   283,   525,     0,    80,
     329,     2,     3,     0,   155,     0,   552,     0,     0,   482,
     484,   485,   428,   429,     0,     6,     7,     0,     0,     9,
     523,     0,     0,     0,    11,    12,    13,     0,     0,     0,
     329,   283,     0,     0,     0,     0,     2,     3,   498,   284,
       0,   525,   285,     0,     0,   524,   288,     0,   329,     0,
       6,     7,     0,   431,     9,   287,   509,   511,     0,    11,
      12,    13,     0,     0,     0,     0,    29,     0,     0,   329,
       0,     2,     3,   329,     0,     0,     0,     0,     0,     0,
       0,   288,     0,     0,     0,     6,     7,     0,   289,     9,
       0,     0,     0,   329,    11,    12,    13,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
      73,    74,    75,    76,    77,    60,   324,   441,     0,   325,
       2,     3,     0,   326,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     7,     0,     0,     9,     0,
       0,     0,     0,    11,    12,    13,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,    73,
      74,    75,    76,    77,    29,    78,     0,     0,    79,     2,
       3,     0,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,     7,     0,     0,     9,     0,     0,
       0,     0,    11,    12,    13,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,    73,    74,
      75,    76,    77,     0,   324,     0,     0,   325,   283,     0,
       0,   326,     0,     2,     3,     0,   284,     0,     0,   285,
       0,   477,     0,     0,   428,   429,     0,     6,     7,     0,
       0,     9,   478,     0,     0,     0,    11,    12,    13,     0,
     283,     0,     0,     0,     0,     2,     3,     0,   284,     0,
       0,   285,     0,     0,     0,     0,     0,     0,   288,     6,
       7,     0,   286,     9,   287,   431,     0,     0,    11,    12,
      13,     0,     1,     0,     0,     0,     0,     2,     3,     4,
     155,     0,     0,     0,     0,     0,   157,     0,     0,     5,
     288,     6,     7,     0,     0,     9,   301,   289,   283,     0,
      11,    12,    13,     2,     3,     0,   284,     0,     0,   285,
       0,     0,     0,     0,     0,     0,     0,     6,     7,     0,
     336,     9,   337,     0,     0,     0,    11,    12,    13,   302,
     283,     0,     0,     0,     0,     2,     3,     0,   284,     0,
       0,   285,     0,     0,     0,     0,     0,     0,   288,     6,
       7,     0,   346,     9,   337,   289,     0,     0,    11,    12,
      13,     0,   283,     0,     0,     0,     0,     2,     3,     0,
     284,     0,     0,   285,     0,     0,     0,     0,     0,     0,
     288,     6,     7,     0,   347,     9,   287,   289,     0,     0,
      11,    12,    13,     0,   283,     0,     0,     0,     0,     2,
       3,     0,   284,     0,     0,   285,     0,     0,     0,     0,
       0,     0,   288,     6,     7,     0,   403,     9,   337,   289,
       0,     0,    11,    12,    13,     0,   283,     0,     0,     0,
       0,     2,     3,     0,   284,     0,     0,   285,     0,     0,
       0,     0,     0,     0,   288,     6,     7,     0,   404,     9,
     337,   289,     0,     0,    11,    12,    13,     0,   283,     0,
       0,     0,     0,     2,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   428,   429,   288,     6,     7,     0,
       0,     9,   499,   289,    29,     0,    11,    12,    13,     2,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,     0,     6,     7,     2,     3,     9,   288,     0,
       0,     0,    11,    12,    13,   431,     0,     0,     0,     6,
       7,     0,     0,     9,     0,     0,    29,     0,    11,    12,
      13,     2,     3,     0,   382,     0,     0,   383,   538,   539,
       0,   384,    29,     0,     0,     6,     7,     2,     3,     9,
     108,   114,     0,   109,    11,    12,    13,   110,     0,     0,
       0,     6,     7,     0,     0,     9,     0,     0,     0,     0,
      11,    12,    13,     0,     0,     0,   108,   142,     0,   109,
       0,    29,     0,   110,     0,     0,     2,     3,     0,     0,
       0,     0,   108,     0,     0,   109,   143,    29,     0,   110,
       6,     7,     2,     3,     9,     0,     0,     0,     0,    11,
      12,    13,     0,     0,     0,     0,     6,     7,     0,     0,
       9,     0,     0,     0,     0,    11,    12,    13,     0,     0,
       0,   108,   188,     0,   109,     0,    29,     0,   110,     0,
       0,     2,     3,     0,     0,     0,     0,   108,     0,     0,
     109,   189,    29,     0,   110,     6,     7,     2,     3,     9,
       0,     0,     0,     0,    11,    12,    13,     0,    29,     0,
       0,     6,     7,     2,     3,     9,     0,     0,     0,     0,
      11,    12,    13,     0,     0,   236,   108,     6,     7,   109,
       0,     9,     0,   110,    29,     0,    11,    12,    13,     2,
       3,     0,   108,   252,     0,   109,     0,     0,     0,   110,
      29,     0,     0,     6,     7,     2,     3,     9,   108,   260,
       0,   109,    11,    12,    13,   110,    29,     0,     0,     6,
       7,     2,     3,     9,     0,     0,     0,   319,    11,    12,
      13,     0,     0,   261,   108,     6,     7,   109,     0,     9,
       0,   110,    29,     0,    11,    12,    13,     2,     3,   308,
     108,     0,     0,   109,     0,     0,     0,   110,    29,     0,
       0,     6,     7,     2,     3,     9,   108,     0,     0,   109,
      11,    12,    13,   110,    29,     0,     0,     6,     7,     2,
       3,     9,     0,     0,     0,     0,    11,    12,    13,     0,
       0,   362,   108,     6,     7,   109,     0,     9,     0,   110,
      29,     0,    11,    12,    13,     2,     3,   381,   382,     0,
       0,   383,     0,     0,     0,   384,    29,     0,     0,     6,
       7,     2,     3,     9,   382,   388,     0,   383,    11,    12,
      13,   384,    29,     0,     0,     6,     7,     2,     3,     9,
       0,     0,     0,     0,    11,    12,    13,     0,     0,   405,
     108,     6,     7,   109,     0,     9,     0,   110,    29,     0,
      11,    12,    13,     2,     3,   415,   108,     0,     0,   109,
       0,     0,     0,   110,    29,     0,     0,     6,     7,     2,
       3,     9,   382,   426,     0,   383,    11,    12,    13,   384,
       0,     0,     0,     6,     7,     0,     0,     9,     0,     0,
       0,     0,    11,    12,    13,     0,     0,     0,   382,   439,
       0,   383,     0,    29,     0,   384,     0,     0,     2,     3,
       0,     0,     0,     0,   382,     0,     0,   383,   440,    29,
       0,   384,     6,     7,     2,     3,     9,     0,     0,     0,
       0,    11,    12,    13,     0,    29,     0,     0,     6,     7,
       2,     3,     9,     0,     0,     0,     0,    11,    12,    13,
       0,     0,   459,   382,     6,     7,   383,     0,     9,     0,
     384,     0,     0,    11,    12,    13,     0,     0,   462,   108,
       0,     0,   109,     0,    29,     0,   110,     0,     0,     2,
       3,     0,     0,     0,   464,   108,     0,     0,   109,     0,
      29,     0,   110,     6,     7,     2,     3,     9,     0,     0,
       0,     0,    11,    12,    13,     0,     0,     0,     0,     6,
       7,     0,     0,     9,     0,     0,     0,     0,    11,    12,
      13,     0,     0,     0,   382,   486,     0,   383,     0,    29,
       0,   384,     0,     0,     2,     3,     0,     0,     0,     0,
     382,     0,     0,   383,   487,    29,     0,   384,     6,     7,
       2,     3,     9,     0,     0,     0,   516,    11,    12,    13,
       0,    29,     0,     0,     6,     7,     2,     3,     9,     0,
       0,     0,     0,    11,    12,    13,     0,     0,   504,   382,
       6,     7,   383,     0,     9,     0,   384,     0,     0,    11,
      12,    13,     0,     0,     0,   382,     0,     0,   383,     0,
      29,     0,   384,     0,     0,     2,     3,     0,     0,     0,
     528,   382,     0,     0,   383,     0,    29,     0,   384,     6,
       7,     2,     3,     9,     0,     0,     0,     0,    11,    12,
      13,     0,    29,     0,     0,     6,     7,     2,     3,     9,
       0,     0,     0,     0,    11,    12,    13,     0,     0,   533,
     382,     6,     7,   383,     0,     9,     0,   384,    29,     0,
      11,    12,    13,     2,     3,   546,   382,     0,     0,   383,
       0,     0,     0,   384,    29,     0,     0,     6,     7,     2,
       3,     9,   108,     0,     0,   109,    11,    12,    13,   110,
       0,     0,     0,     6,     7,     0,     0,     9,     0,     0,
      29,     0,    11,    12,    13,     2,     3,     0,     0,   422,
     423,     0,     0,     0,     0,   424,    98,     0,     0,     6,
       7,     2,     3,     9,   382,     0,     0,   383,    11,    12,
      13,   384,     0,     0,     0,     6,     7,     0,     0,     9,
       0,     0,    29,     0,    11,    12,    13,     2,     3,     0,
       0,   488,   423,     0,     0,     0,     0,   424,    29,     0,
       0,     6,     7,     2,     3,     9,     0,     0,     0,     0,
      11,    12,    13,    99,    29,     0,     0,     6,     7,     2,
       3,     9,     0,     0,     0,     0,    11,    12,    13,     0,
      29,     0,     0,     6,     7,     2,     3,     9,     0,   451,
       0,     0,    11,    12,    13,     0,     0,     0,     0,     6,
       7,     0,   171,     9,     0,     0,    29,     0,    11,    12,
      13,     2,     3,     0,     0,   125,   126,     0,   152,     0,
       0,     0,     0,     2,     3,     6,     7,     0,     0,     9,
       0,   266,   126,     0,    11,    12,    13,     6,     7,     0,
       0,     9,     0,     0,    29,     0,    11,    12,    13,     2,
       3,     0,     0,     0,     0,     0,   117,     0,    37,     0,
       0,     2,     3,     6,     7,     0,     0,     9,     0,     0,
     126,     0,    11,    12,    13,     6,     7,     0,     0,     9,
       0,     0,    29,     0,    11,    12,    13,     2,     3,     0,
       0,     0,     0,     0,    29,    95,     0,     0,     0,     2,
       3,     6,     7,     0,     0,     9,     0,   118,     0,     0,
      11,    12,    13,     6,     7,     0,     0,     9,     0,     0,
      29,     0,    11,    12,    13,     2,     3,     0,     0,     0,
       0,     0,     0,   247,     0,     0,     0,     0,     0,     6,
       7,     0,     0,     9,     0,   373,     1,     0,    11,    12,
      13,     2,     3,     4,   155,     0,     0,   156,     0,     0,
     157,     0,     0,     5,     0,     6,     7,     0,   158,     9,
     159,   449,     1,     0,    11,    12,    13,     2,     3,     4,
     155,     0,     0,   156,     0,     0,   157,     0,     0,     5,
       0,     6,     7,     0,   202,     9,   203,     0,     1,     0,
      11,    12,    13,     2,     3,     4,   155,     0,     0,   156,
       0,     0,   157,     0,     0,     5,     0,     6,     7,     0,
     212,     9,   203,     0,     1,     0,    11,    12,    13,     2,
       3,     4,   155,     0,     0,   156,     0,     0,   157,     0,
       0,     5,     0,     6,     7,     0,   243,     9,   203,     0,
       1,     0,    11,    12,    13,     2,     3,     4,   155,     0,
       0,   156,     0,     0,   157,     0,     0,     5,     0,     6,
       7,     0,   244,     9,   203,     0,     1,     0,    11,    12,
      13,     2,     3,     4,   155,     0,     0,   156,     0,   275,
     157,     0,     0,     5,     0,     6,     7,     0,     0,     9,
     276,     0,     1,     0,    11,    12,    13,     2,     3,     4,
     155,   354,   355,     0,     0,     0,   157,     0,     0,     5,
       0,     6,     7,     0,     0,     9,   356,     0,     1,     0,
      11,    12,    13,     2,     3,     4,   155,     0,     0,   156,
       0,     0,   157,     0,     0,     5,     0,     6,     7,     0,
       0,     9,   159,     0,     1,     0,    11,    12,    13,     2,
       3,     4,   155,     0,     0,   156,     0,     0,   157,     0,
       0,     5,     0,     6,     7,     0,     0,     9,   254,     0,
       1,     0,    11,    12,    13,     2,     3,     4,   155,     0,
       0,     0,     0,     0,   157,   367,     0,     5,     0,     6,
       7,     0,     0,     9,   368,     0,     1,     0,    11,    12,
      13,     2,     3,     4,   155,     0,   494,     0,     0,     0,
     157,     0,     0,     5,     0,     6,     7,     0,     0,     9,
     356,     0,     1,     0,    11,    12,    13,     2,     3,     4,
     155,     0,     0,     0,     0,     0,   157,     0,     0,     5,
       0,     6,     7,     0,     0,     9,   314,     0,     1,     0,
      11,    12,    13,     2,     3,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     0,     6,     7,     8,
       0,     9,     0,    10,     0,     0,    11,    12,    13,   465,
      87,    88,    89,    90,     2,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,     7,
       0,     0,     9,     0,     0,     1,     0,    11,    12,    13,
       2,     3,     4,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     5,     0,     6,     7,     2,     3,     9,     0,
       0,     0,     0,    11,    12,    13,     0,    29,     0,     0,
       6,     7,     2,     3,     9,     0,     0,     0,     0,    11,
      12,    13,     0,     0,     0,     0,     6,     7,     0,     0,
       9,     0,     0,     0,     0,    11,    12,    13,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,    73,    74,    75,    76,    77,     0,     0,     0,
     147,     0,     0,     0,   148,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
     483,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,   510,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
      73,    74,    75,    76,    77,     0,     0,     0,   112,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,    73,    74,    75,    76,    77,     0,     0,     0,
     386,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,    73,    74,    75,    76,    77,     0,
       0,     0,   445,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,    73,    74,    75,    76,
      77
};

static const yytype_int16 yycheck[] =
{
       0,     3,   378,    92,     4,   294,   125,     3,     8,   298,
       0,   265,   124,   264,   265,    15,    54,   161,     3,    19,
       3,    35,   166,    52,    24,    15,    58,    46,   294,    35,
      56,    60,   298,    59,     3,     4,     5,     6,     7,    58,
      58,    59,    42,   294,    58,   299,   300,   298,   299,   300,
      50,    53,    58,    53,    54,   167,   168,    27,    60,   348,
     349,    35,   438,   101,    60,    52,     0,    24,    38,   213,
     214,    35,    29,    60,    52,    60,    56,    46,    53,    59,
      52,    81,   348,   349,    58,    85,   161,    46,    47,   378,
     234,   166,    92,    58,    58,    57,    96,   348,   349,    55,
     100,   101,    58,    52,    46,    47,   106,   107,    52,     4,
      53,    53,   378,    55,    56,   259,    52,    59,     3,   119,
      52,    91,    60,   123,   124,   501,    59,    97,   247,   129,
     219,   131,     3,     4,     5,     3,     7,    46,   213,   214,
       8,     9,    57,   394,    56,   145,   146,   266,   148,   438,
     150,     3,    52,   153,    22,    23,    60,   127,    26,   234,
      54,   161,   132,    31,    32,    33,   166,   167,   168,   545,
      46,   161,   438,    43,     3,   175,   166,     3,     4,     5,
       6,     7,    46,    47,   259,    53,    44,    52,    56,    57,
      58,    55,    60,   268,    58,    46,    47,    52,     3,    53,
     200,   171,    53,     3,    55,    54,   281,    58,    78,    79,
      53,    53,   182,   213,   214,    53,    46,    47,    56,   219,
      46,    59,     3,   213,   214,    55,   264,   265,    58,    52,
     305,    52,   232,    55,   234,   235,    58,   237,   108,   109,
      52,    52,    57,   318,   234,   115,   216,   217,   248,    57,
     120,     3,     4,     5,     6,     7,   294,    60,    53,   259,
     298,   299,   300,    55,   264,   265,    58,    52,   268,   259,
     270,    55,    56,    53,    58,    54,   246,    15,   268,   249,
      58,   281,   282,    46,    47,    58,    58,   287,   288,   159,
      53,   281,    55,    58,   294,    58,    58,    52,   298,   299,
     300,    52,   302,    52,    52,   305,    60,    57,    54,   309,
     348,   349,   302,    55,    56,   305,    58,    57,   318,    60,
     320,   321,    56,    56,   324,   325,   196,   327,   318,   199,
     330,    31,   407,   203,    58,    55,    56,   337,    58,    58,
     378,    54,    52,    55,    56,    52,    58,    52,   348,   349,
     350,    52,    60,    52,    60,    58,    52,    52,    52,     3,
      53,   361,     3,   363,    52,    52,    52,    52,    52,   264,
     265,    52,    11,    52,   374,    52,   376,    52,   378,   379,
     380,     3,   382,   383,   254,    58,   461,    15,   101,   389,
     390,   391,   262,   393,     3,    52,   396,    52,    52,   294,
     438,    52,   372,   298,   299,   300,   276,   407,   408,    52,
      58,    58,    52,     3,    52,    52,   416,   407,    52,    52,
     420,    52,    15,    52,   424,   395,    31,    31,     3,    56,
     430,   301,   470,    56,    55,    52,    60,   307,   438,    58,
      52,    52,   442,   443,   314,     3,    53,   447,   448,    57,
     450,     3,    82,   348,   349,    57,    57,   161,    57,    57,
     460,   461,   166,   501,    58,    52,    52,   467,    52,    57,
     470,   461,   472,    53,    30,    52,    46,     3,   478,     3,
      58,   111,    53,   378,    52,    52,   356,    31,    15,    58,
      54,    57,    57,   493,    57,    30,   534,    57,   368,   499,
      15,   501,   407,   503,    15,   505,   101,   545,   391,   213,
     214,   136,   142,   143,   144,    -1,    -1,   534,   518,   519,
     490,    -1,   492,   523,    -1,    -1,   496,   527,    -1,   288,
     234,    -1,    -1,    -1,   534,   535,    -1,   264,   265,    -1,
     540,    -1,   542,   438,    -1,   545,    -1,    -1,    -1,    -1,
     550,   264,   265,    -1,    -1,   259,    -1,   557,   188,   189,
      -1,   531,   321,    -1,   268,   324,   325,   294,    -1,    -1,
      -1,   298,   299,   300,   544,   470,    -1,   281,   337,    -1,
      -1,   294,    -1,    -1,   554,   298,   299,   300,    -1,   559,
       3,    -1,    -1,    -1,   224,     8,     9,    -1,    -1,    -1,
      -1,   305,   306,    -1,    -1,    -1,   501,    -1,    -1,    22,
      23,    24,    -1,    26,   318,    -1,    29,    -1,    31,    32,
      33,   348,   349,   382,   383,    -1,    -1,    -1,    -1,    -1,
     389,   390,     3,    -1,    -1,   348,   349,     8,     9,   534,
      11,    12,    13,    -1,    -1,    -1,    -1,    60,    19,    20,
     545,    22,    23,    -1,    -1,    26,    27,   287,   288,   529,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,   321,    -1,    -1,   324,   325,    -1,    -1,   328,    -1,
      -1,   460,    -1,   407,    -1,    -1,     3,   337,    -1,    -1,
      -1,     8,     9,    -1,    11,    -1,    -1,    14,    -1,   478,
      -1,    -1,    19,    20,    -1,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    32,    33,    -1,    -1,    -1,
     499,    -1,     3,    -1,   503,    -1,    -1,     8,     9,    -1,
      -1,    -1,   382,   383,    -1,   385,    53,   461,    -1,   389,
     390,    22,    23,    60,   523,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    48,    49,    50,
      51,    -1,    53,    54,    -1,    56,     3,   501,    -1,    60,
     430,     8,     9,    -1,    11,    -1,    13,    -1,    -1,   439,
     440,   441,    19,    20,    -1,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    32,    33,    -1,    -1,    -1,
     460,     3,    -1,    -1,    -1,    -1,     8,     9,   468,    11,
      -1,   545,    14,    -1,    -1,    52,    53,    -1,   478,    -1,
      22,    23,    -1,    60,    26,    27,   486,   487,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,     3,    -1,    -1,   499,
      -1,     8,     9,   503,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    22,    23,    -1,    60,    26,
      -1,    -1,    -1,   523,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    49,    50,    51,     3,    53,    54,    -1,    56,
       8,     9,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    47,
      48,    49,    50,    51,     3,    53,    -1,    -1,    56,     8,
       9,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    47,    48,
      49,    50,    51,    -1,    53,    -1,    -1,    56,     3,    -1,
      -1,    60,    -1,     8,     9,    -1,    11,    -1,    -1,    14,
      -1,    16,    -1,    -1,    19,    20,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    32,    33,    -1,
       3,    -1,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    53,    22,
      23,    -1,    25,    26,    27,    60,    -1,    -1,    31,    32,
      33,    -1,     3,    -1,    -1,    -1,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    20,
      53,    22,    23,    -1,    -1,    26,    27,    60,     3,    -1,
      31,    32,    33,     8,     9,    -1,    11,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    33,    60,
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
      -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    53,    22,    23,    -1,
      -1,    26,    27,    60,     3,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    22,    23,     8,     9,    26,    53,    -1,
      -1,    -1,    31,    32,    33,    60,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,    -1,     3,    -1,    31,    32,
      33,     8,     9,    -1,    53,    -1,    -1,    56,    57,    58,
      -1,    60,     3,    -1,    -1,    22,    23,     8,     9,    26,
      53,    54,    -1,    56,    31,    32,    33,    60,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    -1,    -1,    53,    54,    -1,    56,
      -1,     3,    -1,    60,    -1,    -1,     8,     9,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    56,    57,     3,    -1,    60,
      22,    23,     8,     9,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    -1,
      -1,    53,    54,    -1,    56,    -1,     3,    -1,    60,    -1,
      -1,     8,     9,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      56,    57,     3,    -1,    60,    22,    23,     8,     9,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,     3,    -1,
      -1,    22,    23,     8,     9,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    -1,    52,    53,    22,    23,    56,
      -1,    26,    -1,    60,     3,    -1,    31,    32,    33,     8,
       9,    -1,    53,    54,    -1,    56,    -1,    -1,    -1,    60,
       3,    -1,    -1,    22,    23,     8,     9,    26,    53,    54,
      -1,    56,    31,    32,    33,    60,     3,    -1,    -1,    22,
      23,     8,     9,    26,    -1,    -1,    -1,    14,    31,    32,
      33,    -1,    -1,    52,    53,    22,    23,    56,    -1,    26,
      -1,    60,     3,    -1,    31,    32,    33,     8,     9,    52,
      53,    -1,    -1,    56,    -1,    -1,    -1,    60,     3,    -1,
      -1,    22,    23,     8,     9,    26,    53,    -1,    -1,    56,
      31,    32,    33,    60,     3,    -1,    -1,    22,    23,     8,
       9,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
      -1,    52,    53,    22,    23,    56,    -1,    26,    -1,    60,
       3,    -1,    31,    32,    33,     8,     9,    52,    53,    -1,
      -1,    56,    -1,    -1,    -1,    60,     3,    -1,    -1,    22,
      23,     8,     9,    26,    53,    54,    -1,    56,    31,    32,
      33,    60,     3,    -1,    -1,    22,    23,     8,     9,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    -1,    52,
      53,    22,    23,    56,    -1,    26,    -1,    60,     3,    -1,
      31,    32,    33,     8,     9,    52,    53,    -1,    -1,    56,
      -1,    -1,    -1,    60,     3,    -1,    -1,    22,    23,     8,
       9,    26,    53,    54,    -1,    56,    31,    32,    33,    60,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    -1,    -1,    53,    54,
      -1,    56,    -1,     3,    -1,    60,    -1,    -1,     8,     9,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    56,    57,     3,
      -1,    60,    22,    23,     8,     9,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,    -1,     3,    -1,    -1,    22,    23,
       8,     9,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    -1,    52,    53,    22,    23,    56,    -1,    26,    -1,
      60,    -1,    -1,    31,    32,    33,    -1,    -1,    52,    53,
      -1,    -1,    56,    -1,     3,    -1,    60,    -1,    -1,     8,
       9,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,    -1,
       3,    -1,    60,    22,    23,     8,     9,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,    -1,    -1,    53,    54,    -1,    56,    -1,     3,
      -1,    60,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    56,    57,     3,    -1,    60,    22,    23,
       8,     9,    26,    -1,    -1,    -1,    14,    31,    32,    33,
      -1,     3,    -1,    -1,    22,    23,     8,     9,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,    -1,    52,    53,
      22,    23,    56,    -1,    26,    -1,    60,    -1,    -1,    31,
      32,    33,    -1,    -1,    -1,    53,    -1,    -1,    56,    -1,
       3,    -1,    60,    -1,    -1,     8,     9,    -1,    -1,    -1,
      52,    53,    -1,    -1,    56,    -1,     3,    -1,    60,    22,
      23,     8,     9,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,     3,    -1,    -1,    22,    23,     8,     9,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    -1,    52,
      53,    22,    23,    56,    -1,    26,    -1,    60,     3,    -1,
      31,    32,    33,     8,     9,    52,    53,    -1,    -1,    56,
      -1,    -1,    -1,    60,     3,    -1,    -1,    22,    23,     8,
       9,    26,    53,    -1,    -1,    56,    31,    32,    33,    60,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
       3,    -1,    31,    32,    33,     8,     9,    -1,    -1,    54,
      55,    -1,    -1,    -1,    -1,    60,     3,    -1,    -1,    22,
      23,     8,     9,    26,    53,    -1,    -1,    56,    31,    32,
      33,    60,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    -1,     3,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    54,    55,    -1,    -1,    -1,    -1,    60,     3,    -1,
      -1,    22,    23,     8,     9,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    60,     3,    -1,    -1,    22,    23,     8,
       9,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
       3,    -1,    -1,    22,    23,     8,     9,    26,    -1,    60,
      -1,    -1,    31,    32,    33,    -1,    -1,    -1,    -1,    22,
      23,    -1,    57,    26,    -1,    -1,     3,    -1,    31,    32,
      33,     8,     9,    -1,    -1,    54,    55,    -1,     3,    -1,
      -1,    -1,    -1,     8,     9,    22,    23,    -1,    -1,    26,
      -1,    54,    55,    -1,    31,    32,    33,    22,    23,    -1,
      -1,    26,    -1,    -1,     3,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    -1,     3,    -1,    55,    -1,
      -1,     8,     9,    22,    23,    -1,    -1,    26,    -1,    -1,
      55,    -1,    31,    32,    33,    22,    23,    -1,    -1,    26,
      -1,    -1,     3,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    -1,    -1,    -1,     3,    54,    -1,    -1,    -1,     8,
       9,    22,    23,    -1,    -1,    26,    -1,    54,    -1,    -1,
      31,    32,    33,    22,    23,    -1,    -1,    26,    -1,    -1,
       3,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,    54,     3,    -1,    31,    32,
      33,     8,     9,    10,    11,    -1,    -1,    14,    -1,    -1,
      17,    -1,    -1,    20,    -1,    22,    23,    -1,    25,    26,
      27,    54,     3,    -1,    31,    32,    33,     8,     9,    10,
      11,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    20,
      -1,    22,    23,    -1,    25,    26,    27,    -1,     3,    -1,
      31,    32,    33,     8,     9,    10,    11,    -1,    -1,    14,
      -1,    -1,    17,    -1,    -1,    20,    -1,    22,    23,    -1,
      25,    26,    27,    -1,     3,    -1,    31,    32,    33,     8,
       9,    10,    11,    -1,    -1,    14,    -1,    -1,    17,    -1,
      -1,    20,    -1,    22,    23,    -1,    25,    26,    27,    -1,
       3,    -1,    31,    32,    33,     8,     9,    10,    11,    -1,
      -1,    14,    -1,    -1,    17,    -1,    -1,    20,    -1,    22,
      23,    -1,    25,    26,    27,    -1,     3,    -1,    31,    32,
      33,     8,     9,    10,    11,    -1,    -1,    14,    -1,    16,
      17,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,    26,
      27,    -1,     3,    -1,    31,    32,    33,     8,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    17,    -1,    -1,    20,
      -1,    22,    23,    -1,    -1,    26,    27,    -1,     3,    -1,
      31,    32,    33,     8,     9,    10,    11,    -1,    -1,    14,
      -1,    -1,    17,    -1,    -1,    20,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,     3,    -1,    31,    32,    33,     8,
       9,    10,    11,    -1,    -1,    14,    -1,    -1,    17,    -1,
      -1,    20,    -1,    22,    23,    -1,    -1,    26,    27,    -1,
       3,    -1,    31,    32,    33,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      23,    -1,    -1,    26,    27,    -1,     3,    -1,    31,    32,
      33,     8,     9,    10,    11,    -1,    13,    -1,    -1,    -1,
      17,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,    26,
      27,    -1,     3,    -1,    31,    32,    33,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    20,
      -1,    22,    23,    -1,    -1,    26,    27,    -1,     3,    -1,
      31,    32,    33,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    22,    23,    24,
      -1,    26,    -1,    28,    -1,    -1,    31,    32,    33,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,     3,    -1,    31,    32,    33,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    20,    -1,    22,    23,     8,     9,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,     3,    -1,    -1,
      22,    23,     8,     9,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,    48,    49,    50,    51,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    59,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    48,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    49,    50,    51,    -1,    -1,    -1,    55,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,    48,    49,    50,    51,    -1,    -1,    -1,
      55,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    48,    49,    50,    51,    -1,
      -1,    -1,    55,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    48,    49,    50,
      51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     8,     9,    10,    20,    22,    23,    24,    26,
      28,    31,    32,    33,    67,    68,    69,    70,    71,    73,
      74,    75,    86,   104,    56,    59,     3,    71,   104,     3,
     104,     3,     0,    69,    75,    86,    52,    55,   104,    52,
      52,    46,    47,    53,    55,    58,    72,   104,     3,    60,
      56,    59,    72,    53,    58,    52,    52,    52,    55,    72,
       3,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    47,    48,    49,    50,    51,    53,    56,
      60,   103,   104,   105,   104,   103,     3,     4,     5,     6,
       7,    57,    53,     3,   104,    54,    76,   104,     3,    60,
      73,    88,    89,    90,   104,    59,   103,   103,    53,    56,
      60,   104,    55,   105,    54,    46,    72,     3,    54,    76,
      46,    57,    35,    58,    77,    54,    55,   104,    55,    56,
      72,    56,     3,    24,    29,    89,    93,    94,    52,    60,
       3,    60,    54,    57,    54,   103,   103,    55,    59,   105,
     103,    54,     3,   103,    44,    11,    14,    17,    25,    27,
      69,    78,    79,    81,    83,   104,    78,    58,    77,    55,
      72,    57,   104,   104,    55,    56,    72,     3,    52,    29,
      94,    52,     3,    53,     3,   105,   105,   105,    54,    57,
     104,    54,     3,     4,     5,     7,    53,     3,    84,    53,
     103,    52,    25,    27,    69,    79,    81,    83,    52,    52,
      52,    58,    25,    78,    78,    72,    57,    57,   104,    53,
      52,    55,    56,    72,    54,   105,   105,    53,    58,    58,
      58,    58,   103,    15,    58,   103,    52,   103,    52,    52,
      52,    52,    46,    25,    25,    72,    57,    54,    76,    57,
     105,    54,    54,    56,    27,    69,    79,    81,    83,    85,
      54,    52,    56,    72,    58,    77,    54,    72,    58,    31,
     103,    52,    52,    52,    52,    16,    27,    69,    79,    81,
      83,    58,   103,     3,    11,    14,    25,    27,    53,    60,
      71,    90,    91,    92,    96,    97,    99,   104,    96,    58,
      77,    27,    60,    69,    79,    80,    81,    58,    52,   103,
      52,    52,    52,    52,    27,    69,    79,    81,    82,    14,
      53,    53,     3,   100,    53,    56,    60,   102,   104,   105,
     102,     3,    52,    60,    52,    52,    25,    27,    90,    91,
      92,    97,    99,    52,    52,    58,    25,    25,    96,    96,
     103,    69,    52,    52,    12,    13,    27,    69,    79,    81,
      79,   103,    52,   103,    52,    52,    52,    18,    27,    69,
      79,    81,     3,    54,    95,   104,   102,    15,    58,   102,
     102,    52,    53,    56,    60,   104,    55,   105,    54,    46,
      47,    53,    55,    56,    59,     3,   102,    52,    52,    52,
      52,    52,    46,    25,    25,    52,    52,    58,   103,    52,
      52,    52,    52,    57,    58,    52,   103,    52,    52,    52,
      58,    72,    54,    55,    60,   104,    54,    56,    19,    20,
      27,    60,    87,    90,    91,    92,    97,    99,   101,    54,
      57,    54,   102,   102,     3,    55,   105,   102,   102,    54,
      95,    60,   104,     3,    60,    92,    55,    56,    72,    52,
      56,    80,    52,    31,    52,     3,   104,    15,   104,    55,
      58,    31,   102,     3,    52,    52,    52,    16,    27,    87,
      97,    99,   105,    59,   105,   105,    54,    57,    54,     3,
      57,     3,    57,   102,    13,    57,    57,   104,   105,    27,
      87,    98,   104,    58,    52,   102,    52,    52,    52,   105,
      59,   105,    57,    59,    72,    72,    14,    72,    30,   102,
      52,    12,    13,    27,    52,    79,    87,   102,    52,    46,
       3,     3,   104,    52,    58,   102,    52,    52,    57,    58,
     103,    53,    58,    72,    57,    98,    52,    31,    54,   104,
      15,    72,    13,    57,    57,   104,    72,    30,   104,    57,
      72
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
      87,    87,    87,    87,    88,    88,    89,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    90,    90,    90,    91,
      91,    91,    91,    91,    91,    92,    92,    92,    92,    92,
      93,    93,    94,    94,    94,    94,    94,    94,    95,    95,
      95,    95,    95,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    97,    97,    98,    98,    98,
      98,    98,    98,    99,    99,    99,   100,   100,   101,   101,
     101,   101,   101,   101,   101,   101,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105
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
       1,     1,     1,     2,     2,     3,     3,     3,     6,     4,
       4,     6,     1,     1,     3,     6,     4,     4,     6,     1,
       4,     8,     4,     4,     9,     3,     4,     4,     3,     5,
       2,     3,     6,     7,     7,     7,     8,     8,     1,     3,
       4,     2,     3,     2,     3,     2,     3,     2,     3,     2,
       3,     2,     3,     3,     4,     7,    10,     2,     3,     2,
       3,     3,     4,     5,    11,    14,     9,     7,     2,     3,
       2,     3,     2,     3,     3,     4,     1,     1,     1,     2,
       2,     3,     4,     3,     4,     4,     2,     3,     3,     3,
       3,     4,     4,     5,     4,     5,     5,     1,     1,     1,
       2,     4,     6,     2,     3,     4,     3,     4,     2,     2,
       3,     3,     3,     4,     4,     5,     4,     5,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
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
#line 2010 "parcer.tab.c"
    break;

  case 4: /* program_body: expression DEL_QUEST  */
#line 157 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2016 "parcer.tab.c"
    break;

  case 5: /* program_body: program_body expression DEL_QUEST  */
#line 158 "parcer.y"
                                                {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2022 "parcer.tab.c"
    break;

  case 6: /* program_body: make_fcn DEL_QUEST  */
#line 159 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str)); }
#line 2028 "parcer.tab.c"
    break;

  case 7: /* program_body: program_body make_fcn DEL_QUEST  */
#line 160 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2034 "parcer.tab.c"
    break;

  case 8: /* program_body: comp_statement DEL_QUEST  */
#line 161 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2040 "parcer.tab.c"
    break;

  case 9: /* program_body: program_body comp_statement DEL_QUEST  */
#line 162 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2046 "parcer.tab.c"
    break;

  case 14: /* expression: KW_continue  */
#line 171 "parcer.y"
                {(yyval.str) = template(" continue");}
#line 2052 "parcer.tab.c"
    break;

  case 15: /* constant: KW_const assignment var_type  */
#line 176 "parcer.y"
                                         {(yyval.str) = template("const %s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 2058 "parcer.tab.c"
    break;

  case 16: /* assignment: attribute OP_EQUAL right_part  */
#line 179 "parcer.y"
                                                                                        {(yyval.str) = template("%s = %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2064 "parcer.tab.c"
    break;

  case 17: /* assignment: T_ID DEL_LBRAC attribute DEL_RBRAC OP_EQUAL right_part  */
#line 180 "parcer.y"
                                                                {(yyval.str) = template("%s[%s] = %s", (yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[0].str));}
#line 2070 "parcer.tab.c"
    break;

  case 18: /* assignment: T_ID DEL_DOT DEL_HASHTAG T_ID OP_EQUAL right_part  */
#line 181 "parcer.y"
                                                                {(yyval.str) = template("%s.%s = %s", (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2076 "parcer.tab.c"
    break;

  case 19: /* assignment: attribute OP_INCREM attribute  */
#line 182 "parcer.y"
                                                                                        {(yyval.str) = template("%s += %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2082 "parcer.tab.c"
    break;

  case 20: /* var_type: DEL_DOTS KW_str  */
#line 185 "parcer.y"
                        {(yyval.str) = template("char* ");}
#line 2088 "parcer.tab.c"
    break;

  case 21: /* var_type: DEL_DOTS KW_integer  */
#line 186 "parcer.y"
                        {(yyval.str) = template("int "); }
#line 2094 "parcer.tab.c"
    break;

  case 22: /* var_type: DEL_DOTS KW_boolean  */
#line 187 "parcer.y"
                        {(yyval.str) = template("int ");}
#line 2100 "parcer.tab.c"
    break;

  case 23: /* var_type: DEL_DOTS KW_scalar  */
#line 188 "parcer.y"
                        {(yyval.str) = template("double ");}
#line 2106 "parcer.tab.c"
    break;

  case 24: /* var_type: DEL_DOTS T_ID  */
#line 189 "parcer.y"
                                {(yyval.str) = template(" %s ", (yyvsp[0].str));}
#line 2112 "parcer.tab.c"
    break;

  case 25: /* declaration: attribute var_type  */
#line 194 "parcer.y"
                                                                                {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 2118 "parcer.tab.c"
    break;

  case 26: /* declaration: attribute DEL_COMMA  */
#line 196 "parcer.y"
                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 2124 "parcer.tab.c"
    break;

  case 27: /* declaration: T_ID DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 197 "parcer.y"
                                                {(yyval.str) = template("%s%s[%s]", (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-2].str));}
#line 2130 "parcer.tab.c"
    break;

  case 28: /* declaration: declaration attribute var_type  */
#line 198 "parcer.y"
                                                                {(yyval.str) = template("%s%s%s", (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2136 "parcer.tab.c"
    break;

  case 29: /* declaration: declaration DEL_COMMA  */
#line 199 "parcer.y"
                                                                        {(yyval.str) = template("%s, ",  (yyvsp[-1].str));}
#line 2142 "parcer.tab.c"
    break;

  case 30: /* declaration: declaration attribute DEL_COMMA  */
#line 200 "parcer.y"
                                                                {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2148 "parcer.tab.c"
    break;

  case 31: /* fcn_call: attribute DEL_LPAR right_part DEL_RPAR  */
#line 205 "parcer.y"
                                                        {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2154 "parcer.tab.c"
    break;

  case 32: /* fcn_call: T_ID DEL_DOT T_ID DEL_LPAR DEL_RPAR  */
#line 206 "parcer.y"
                                                                {(yyval.str) = template("%s.%s(&%s)", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str));}
#line 2160 "parcer.tab.c"
    break;

  case 33: /* fcn_call: T_ID DEL_DOT T_ID DEL_LPAR T_ID DEL_RPAR  */
#line 207 "parcer.y"
                                                {(yyval.str) = template("%s.%s(&%s,%s)", (yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2166 "parcer.tab.c"
    break;

  case 34: /* fcn_call: T_ID DEL_DOT T_ID DEL_LPAR fcn_arguments T_ID DEL_RPAR  */
#line 208 "parcer.y"
                                                                {(yyval.str) = template("%s.%s(&%s,%s%s)", (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-6].str), (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2172 "parcer.tab.c"
    break;

  case 35: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR DEL_DOTS KW_enddef  */
#line 213 "parcer.y"
                                                                                                                        {(yyval.str) = template("\nvoid %s()\n{\n}", (yyvsp[-4].str));}
#line 2178 "parcer.tab.c"
    break;

  case 36: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR DEL_DOTS fcn_body KW_enddef  */
#line 214 "parcer.y"
                                                                                                                {(yyval.str) = template("\nvoid %s()\n{\n%s}", (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2184 "parcer.tab.c"
    break;

  case 37: /* make_fcn: KW_def attribute DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS fcn_body KW_enddef  */
#line 215 "parcer.y"
                                                                                                {(yyval.str) = template("\nvoid %s(%s)\n{\n%s}",(yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2190 "parcer.tab.c"
    break;

  case 38: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR fcn_ret_type fcn_body KW_enddef  */
#line 216 "parcer.y"
                                                                                                                {(yyval.str) = template("\n%s%s()\n{\n%s}", (yyvsp[-2].str), (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2196 "parcer.tab.c"
    break;

  case 39: /* make_fcn: KW_def attribute DEL_LPAR fcn_arguments DEL_RPAR fcn_ret_type fcn_body KW_enddef  */
#line 217 "parcer.y"
                                                                                                {(yyval.str) = template("\n%s%s(%s)\n{\n%s}", (yyvsp[-2].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2202 "parcer.tab.c"
    break;

  case 40: /* fcn_arguments: attribute var_type  */
#line 220 "parcer.y"
                                                                                                {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 2208 "parcer.tab.c"
    break;

  case 41: /* fcn_arguments: attribute DEL_LBRAC DEL_RBRAC var_type  */
#line 221 "parcer.y"
                                                                        {(yyval.str) = template("%s*%s", (yyvsp[0].str), (yyvsp[-3].str));}
#line 2214 "parcer.tab.c"
    break;

  case 42: /* fcn_arguments: attribute DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 222 "parcer.y"
                                                        {(yyval.str) = template("%s*%s", (yyvsp[0].str), (yyvsp[-4].str));}
#line 2220 "parcer.tab.c"
    break;

  case 43: /* fcn_arguments: attribute DEL_COMMA  */
#line 223 "parcer.y"
                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));	}
#line 2226 "parcer.tab.c"
    break;

  case 44: /* fcn_arguments: fcn_arguments attribute var_type  */
#line 224 "parcer.y"
                                                                        {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-1].str));}
#line 2232 "parcer.tab.c"
    break;

  case 45: /* fcn_arguments: fcn_arguments DEL_COMMA  */
#line 225 "parcer.y"
                                                                                {(yyval.str) = template("%s, ",  (yyvsp[-1].str));}
#line 2238 "parcer.tab.c"
    break;

  case 46: /* fcn_arguments: fcn_arguments attribute DEL_COMMA  */
#line 226 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2244 "parcer.tab.c"
    break;

  case 47: /* fcn_ret_type: OP_MINUS OP_GREATER KW_integer DEL_DOTS  */
#line 229 "parcer.y"
                                                {(yyval.str) = template("int "); }
#line 2250 "parcer.tab.c"
    break;

  case 48: /* fcn_ret_type: OP_MINUS OP_GREATER KW_boolean DEL_DOTS  */
#line 230 "parcer.y"
                                                {(yyval.str) = template("int "); }
#line 2256 "parcer.tab.c"
    break;

  case 49: /* fcn_ret_type: OP_MINUS OP_GREATER KW_scalar DEL_DOTS  */
#line 231 "parcer.y"
                                                {(yyval.str) = template("double ");}
#line 2262 "parcer.tab.c"
    break;

  case 50: /* fcn_ret_type: OP_MINUS OP_GREATER T_ID DEL_DOTS  */
#line 232 "parcer.y"
                                                {(yyval.str) = template("%s ", (yyvsp[-1].str));}
#line 2268 "parcer.tab.c"
    break;

  case 51: /* fcn_body: expression DEL_QUEST  */
#line 235 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2274 "parcer.tab.c"
    break;

  case 52: /* fcn_body: fcn_body expression DEL_QUEST  */
#line 236 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2280 "parcer.tab.c"
    break;

  case 53: /* fcn_body: if_statement DEL_QUEST  */
#line 237 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2286 "parcer.tab.c"
    break;

  case 54: /* fcn_body: fcn_body if_statement DEL_QUEST  */
#line 238 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2292 "parcer.tab.c"
    break;

  case 55: /* fcn_body: while_statement DEL_QUEST  */
#line 239 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2298 "parcer.tab.c"
    break;

  case 56: /* fcn_body: fcn_body while_statement DEL_QUEST  */
#line 240 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2304 "parcer.tab.c"
    break;

  case 57: /* fcn_body: for_statement DEL_QUEST  */
#line 241 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2310 "parcer.tab.c"
    break;

  case 58: /* fcn_body: fcn_body for_statement DEL_QUEST  */
#line 242 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2316 "parcer.tab.c"
    break;

  case 59: /* fcn_body: KW_return right_part DEL_QUEST  */
#line 243 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2322 "parcer.tab.c"
    break;

  case 60: /* fcn_body: fcn_body KW_return right_part DEL_QUEST  */
#line 244 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2328 "parcer.tab.c"
    break;

  case 61: /* if_statement: KW_if DEL_LPAR right_part DEL_RPAR DEL_DOTS if_body KW_endif  */
#line 249 "parcer.y"
                                                                                                                        {(yyval.str) = template("if (%s){\n%s}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2334 "parcer.tab.c"
    break;

  case 62: /* if_statement: KW_if DEL_LPAR right_part DEL_RPAR DEL_DOTS if_body KW_else DEL_DOTS if_body KW_endif  */
#line 250 "parcer.y"
                                                                                                {(yyval.str) = template("if (%s){\n%s}else{\n%s}", (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2340 "parcer.tab.c"
    break;

  case 63: /* if_body: expression DEL_QUEST  */
#line 253 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2346 "parcer.tab.c"
    break;

  case 64: /* if_body: DEL_HASHTAG expression DEL_QUEST  */
#line 254 "parcer.y"
                                                {(yyval.str) = template("self->%s;\n", (yyvsp[-1].str));}
#line 2352 "parcer.tab.c"
    break;

  case 65: /* if_body: if_body expression DEL_QUEST  */
#line 255 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2358 "parcer.tab.c"
    break;

  case 66: /* if_body: if_statement DEL_QUEST  */
#line 256 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2364 "parcer.tab.c"
    break;

  case 67: /* if_body: if_body if_statement DEL_QUEST  */
#line 257 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2370 "parcer.tab.c"
    break;

  case 68: /* if_body: while_statement if_statement DEL_QUEST  */
#line 258 "parcer.y"
                                                {(yyval.str) = template("%s\n", (yyvsp[-2].str));}
#line 2376 "parcer.tab.c"
    break;

  case 69: /* if_body: if_body while_statement DEL_QUEST  */
#line 259 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2382 "parcer.tab.c"
    break;

  case 70: /* if_body: KW_return right_part DEL_QUEST  */
#line 260 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2388 "parcer.tab.c"
    break;

  case 71: /* if_body: if_body KW_return right_part DEL_QUEST  */
#line 261 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2394 "parcer.tab.c"
    break;

  case 72: /* while_statement: KW_while DEL_LPAR right_part DEL_RPAR DEL_DOTS while_body KW_endwhile  */
#line 265 "parcer.y"
                                                                              {(yyval.str) = template("while (%s){\n%s}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2400 "parcer.tab.c"
    break;

  case 73: /* while_body: expression DEL_QUEST  */
#line 268 "parcer.y"
                                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2406 "parcer.tab.c"
    break;

  case 74: /* while_body: while_body expression DEL_QUEST  */
#line 269 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2412 "parcer.tab.c"
    break;

  case 75: /* while_body: if_statement DEL_QUEST  */
#line 270 "parcer.y"
                                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2418 "parcer.tab.c"
    break;

  case 76: /* while_body: while_body if_statement DEL_QUEST  */
#line 271 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2424 "parcer.tab.c"
    break;

  case 77: /* while_body: while_statement DEL_QUEST  */
#line 272 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2430 "parcer.tab.c"
    break;

  case 78: /* while_body: while_body while_statement DEL_QUEST  */
#line 273 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2436 "parcer.tab.c"
    break;

  case 79: /* while_body: KW_return right_part DEL_QUEST  */
#line 274 "parcer.y"
                                                                {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2442 "parcer.tab.c"
    break;

  case 80: /* while_body: while_body KW_return right_part DEL_QUEST  */
#line 275 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2448 "parcer.tab.c"
    break;

  case 81: /* for_statement: KW_for for_arguments DEL_DOTS for_body KW_endfor  */
#line 280 "parcer.y"
                                                                                                                                                                                                         {(yyval.str) = template("for (%s){\n%s}", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2454 "parcer.tab.c"
    break;

  case 82: /* for_statement: attribute DEL_DOTS OP_EQUAL DEL_LBRAC right_part KW_for T_ID DEL_DOTS attribute DEL_RBRAC var_type  */
#line 281 "parcer.y"
                                                                                                                                                         {(yyval.str) = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s = 0; %s < %s; %s++){\n%s[%s] = %s;\n}", (yyvsp[0].str), (yyvsp[-10].str), (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[-10].str), (yyvsp[-4].str), (yyvsp[-6].str));}
#line 2460 "parcer.tab.c"
    break;

  case 83: /* for_statement: attribute DEL_DOTS OP_EQUAL DEL_LBRAC right_part KW_for T_ID var_type KW_in attribute KW_of attribute DEL_RBRAC var_type  */
#line 282 "parcer.y"
                                                                                                                                 {(yyval.str) = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s_i = 0; %s_i < %s; %s_i++){\n%s%s = %s[%s_i];\n%s[%s_i] = %s;\n}", (yyvsp[0].str), (yyvsp[-13].str), (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[0].str), (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-13].str), (yyvsp[-4].str), (yyvsp[-9].str));}
#line 2466 "parcer.tab.c"
    break;

  case 84: /* for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS right_part DEL_DOTS T_INT DEL_RBRAC  */
#line 285 "parcer.y"
                                                                                {(yyval.str) = template("int %s = %s; %s < %s; %s += %s", (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-8].str), (yyvsp[-3].str), (yyvsp[-8].str), (yyvsp[-1].str));}
#line 2472 "parcer.tab.c"
    break;

  case 85: /* for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS right_part DEL_RBRAC  */
#line 286 "parcer.y"
                                                                                        {(yyval.str) = template("int %s = %s; %s < %s; %s += 1", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-6].str), (yyvsp[-1].str), (yyvsp[-6].str));}
#line 2478 "parcer.tab.c"
    break;

  case 86: /* for_body: expression DEL_QUEST  */
#line 289 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2484 "parcer.tab.c"
    break;

  case 87: /* for_body: for_body expression DEL_QUEST  */
#line 290 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2490 "parcer.tab.c"
    break;

  case 88: /* for_body: if_statement DEL_QUEST  */
#line 291 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2496 "parcer.tab.c"
    break;

  case 89: /* for_body: for_body if_statement DEL_QUEST  */
#line 292 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2502 "parcer.tab.c"
    break;

  case 90: /* for_body: while_statement DEL_QUEST  */
#line 293 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2508 "parcer.tab.c"
    break;

  case 91: /* for_body: for_body while_statement DEL_QUEST  */
#line 294 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2514 "parcer.tab.c"
    break;

  case 92: /* for_body: for_statement DEL_QUEST  */
#line 295 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2520 "parcer.tab.c"
    break;

  case 93: /* for_body: for_body for_statement DEL_QUEST  */
#line 296 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2526 "parcer.tab.c"
    break;

  case 94: /* for_body: KW_return right_part DEL_QUEST  */
#line 297 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2532 "parcer.tab.c"
    break;

  case 95: /* for_body: for_body KW_return right_part DEL_QUEST  */
#line 298 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2538 "parcer.tab.c"
    break;

  case 96: /* comp_statement: KW_comp T_ID DEL_DOTS comp_declarations KW_endcomp  */
#line 303 "parcer.y"
                                                           {(yyval.str) = template("#define SELF struct %s *self\ntypedef struct %s {\n%s\n}%s;\n\n#undef SELF\n\n", (yyvsp[-3].str), (yyvsp[-3].str), (yyvsp[-1].str), (yyvsp[-3].str));}
#line 2544 "parcer.tab.c"
    break;

  case 97: /* comp_statement: KW_comp T_ID DEL_DOTS comp_declarations comp_functions KW_endcomp  */
#line 304 "parcer.y"
                                                                          {(yyval.str) = template("#define SELF struct %s *self\ntypedef struct %s {\n%s%s\n}%s;\n\n%s\nconst %s ctor_%s = {%s};\n#undef SELF\n\n", (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-1].comp_func).func_name, (yyvsp[-4].str), (yyvsp[-1].comp_func).func_all, (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-1].comp_func).func_const);}
#line 2550 "parcer.tab.c"
    break;

  case 101: /* comp_expression: KW_continue  */
#line 311 "parcer.y"
                                {(yyval.str) = template(" continue");}
#line 2556 "parcer.tab.c"
    break;

  case 102: /* comp_expression: KW_break  */
#line 312 "parcer.y"
                                {(yyval.str) = template(" break");}
#line 2562 "parcer.tab.c"
    break;

  case 103: /* comp_expression: DEL_HASHTAG T_ID  */
#line 313 "parcer.y"
                        {(yyval.str) = template("self->%s",(yyvsp[0].str));}
#line 2568 "parcer.tab.c"
    break;

  case 104: /* comp_declarations: comp_declaration_init DEL_QUEST  */
#line 317 "parcer.y"
                                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2574 "parcer.tab.c"
    break;

  case 105: /* comp_declarations: comp_declarations comp_declaration_init DEL_QUEST  */
#line 318 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2580 "parcer.tab.c"
    break;

  case 106: /* comp_declaration_init: DEL_HASHTAG T_ID var_type  */
#line 321 "parcer.y"
                                                                                                                {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 2586 "parcer.tab.c"
    break;

  case 107: /* comp_declaration_init: DEL_HASHTAG T_ID DEL_COMMA  */
#line 322 "parcer.y"
                                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 2592 "parcer.tab.c"
    break;

  case 108: /* comp_declaration_init: DEL_HASHTAG T_ID DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 323 "parcer.y"
                                                                                {(yyval.str) = template("%s%s[%s]", (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-2].str));}
#line 2598 "parcer.tab.c"
    break;

  case 109: /* comp_declaration_init: comp_declaration DEL_HASHTAG T_ID var_type  */
#line 324 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s%s",(yyvsp[0].str), (yyvsp[-3].str) ,(yyvsp[-1].str));}
#line 2604 "parcer.tab.c"
    break;

  case 110: /* comp_declaration_init: comp_declaration DEL_HASHTAG T_ID DEL_COMMA  */
#line 325 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2610 "parcer.tab.c"
    break;

  case 111: /* comp_declaration_init: comp_declaration DEL_HASHTAG T_ID DEL_LBRAC DEL_RBRAC var_type  */
#line 326 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-5].str), (yyvsp[-3].str));}
#line 2616 "parcer.tab.c"
    break;

  case 113: /* comp_declaration: DEL_HASHTAG  */
#line 331 "parcer.y"
                                                                                                                                {(yyval.str) = template("self->");}
#line 2622 "parcer.tab.c"
    break;

  case 114: /* comp_declaration: DEL_HASHTAG T_ID DEL_COMMA  */
#line 332 "parcer.y"
                                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 2628 "parcer.tab.c"
    break;

  case 115: /* comp_declaration: DEL_HASHTAG T_ID DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 333 "parcer.y"
                                                                                {(yyval.str) = template("%s%s[%s]", (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-2].str));}
#line 2634 "parcer.tab.c"
    break;

  case 116: /* comp_declaration: comp_declaration DEL_HASHTAG T_ID var_type  */
#line 334 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s%s",(yyvsp[0].str), (yyvsp[-3].str) ,(yyvsp[-1].str));}
#line 2640 "parcer.tab.c"
    break;

  case 117: /* comp_declaration: comp_declaration DEL_HASHTAG T_ID DEL_COMMA  */
#line 335 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2646 "parcer.tab.c"
    break;

  case 118: /* comp_declaration: comp_declaration DEL_HASHTAG T_ID DEL_LBRAC DEL_RBRAC var_type  */
#line 336 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-5].str), (yyvsp[-3].str));}
#line 2652 "parcer.tab.c"
    break;

  case 120: /* comp_assignment: DEL_HASHTAG T_ID OP_EQUAL comp_right_part  */
#line 341 "parcer.y"
                                                                                                                        {(yyval.str) = template("self->%s = %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2658 "parcer.tab.c"
    break;

  case 121: /* comp_assignment: DEL_HASHTAG T_ID DEL_LBRAC DEL_HASHTAG T_ID DEL_RBRAC OP_EQUAL right_part  */
#line 342 "parcer.y"
                                                                                        {(yyval.str) = template("self->%s[self->%s] = %s", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[0].str));}
#line 2664 "parcer.tab.c"
    break;

  case 122: /* comp_assignment: DEL_HASHTAG T_ID OP_INCREM comp_right_part  */
#line 343 "parcer.y"
                                                                                                                        {(yyval.str) = template("self->%s += %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2670 "parcer.tab.c"
    break;

  case 123: /* comp_assignment: DEL_HASHTAG T_ID DEL_DOT comp_fcn_call  */
#line 344 "parcer.y"
                                                                                                                                {(yyval.str) = template("self->%s.%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2676 "parcer.tab.c"
    break;

  case 124: /* comp_assignment: DEL_HASHTAG T_ID DEL_LBRAC attribute DEL_RBRAC DEL_DOT T_ID DEL_LPAR DEL_RPAR  */
#line 345 "parcer.y"
                                                                                        {(yyval.str) = template("self->%s[%s].%s()", (yyvsp[-7].str), (yyvsp[-5].str), (yyvsp[-2].str));}
#line 2682 "parcer.tab.c"
    break;

  case 125: /* comp_fcn_call: T_ID DEL_LPAR DEL_RPAR  */
#line 349 "parcer.y"
                                                                                                {(yyval.str) = template("%s(&%s)", (yyvsp[-2].str), (yyvsp[-2].str));}
#line 2688 "parcer.tab.c"
    break;

  case 126: /* comp_fcn_call: DEL_HASHTAG T_ID DEL_LPAR DEL_RPAR  */
#line 350 "parcer.y"
                                                                                {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 2694 "parcer.tab.c"
    break;

  case 127: /* comp_fcn_call: T_ID DEL_LPAR comp_fcn_arguments DEL_RPAR  */
#line 351 "parcer.y"
                                                                        {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2700 "parcer.tab.c"
    break;

  case 128: /* comp_fcn_call: DEL_LPAR comp_right_part DEL_RPAR  */
#line 352 "parcer.y"
                                                                                {(yyval.str) = template("(%s)", (yyvsp[-1].str));}
#line 2706 "parcer.tab.c"
    break;

  case 129: /* comp_fcn_call: DEL_HASHTAG T_ID DEL_LPAR comp_fcn_arguments DEL_RPAR  */
#line 353 "parcer.y"
                                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2712 "parcer.tab.c"
    break;

  case 130: /* comp_functions: comp_function DEL_QUEST  */
#line 357 "parcer.y"
                                                                {(yyval.comp_func).func_name = template("%s(*%s) (%s);", (yyvsp[-1].comp_func).func_ret_type, (yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_args); (yyval.comp_func).func_const = template(" .%s=%s",(yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_name); (yyval.comp_func).func_all = template("%s\n", (yyvsp[-1].comp_func).func_all);}
#line 2718 "parcer.tab.c"
    break;

  case 131: /* comp_functions: comp_functions comp_function DEL_QUEST  */
#line 358 "parcer.y"
                                                {(yyval.comp_func).func_name = template("%s\n%s(*%s) (%s);\n",(yyvsp[-2].comp_func).func_name, (yyvsp[-1].comp_func).func_ret_type, (yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_args); (yyval.comp_func).func_const = template("%s, .%s=%s",(yyvsp[-2].comp_func).func_const, (yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_name); (yyval.comp_func).func_all = template("%s\n%s\n", (yyvsp[-2].comp_func).func_all, (yyvsp[-1].comp_func).func_all);}
#line 2724 "parcer.tab.c"
    break;

  case 132: /* comp_function: KW_def T_ID DEL_LPAR DEL_RPAR DEL_DOTS KW_enddef  */
#line 361 "parcer.y"
                                                                                                                                        {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-4].str); (yyval.comp_func).func_args = template("SELF"); (yyval.comp_func).func_all = template("void %s (SELF){\n}", (yyvsp[-4].str));}
#line 2730 "parcer.tab.c"
    break;

  case 133: /* comp_function: KW_def T_ID DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS KW_enddef  */
#line 362 "parcer.y"
                                                                                                                        {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-5].str); (yyval.comp_func).func_args = template("SELF, %s", (yyvsp[-3].str)); (yyval.comp_func).func_all = template("void %s (SELF){\n}", (yyvsp[-5].str));}
#line 2736 "parcer.tab.c"
    break;

  case 134: /* comp_function: KW_def T_ID DEL_LPAR DEL_RPAR DEL_DOTS comp_function_body KW_enddef  */
#line 363 "parcer.y"
                                                                                                                        {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-5].str); (yyval.comp_func).func_args = template("SELF"); (yyval.comp_func).func_all = template("void %s (SELF){\n%s}", (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2742 "parcer.tab.c"
    break;

  case 135: /* comp_function: KW_def T_ID DEL_LPAR DEL_RPAR fcn_ret_type comp_function_body KW_enddef  */
#line 364 "parcer.y"
                                                                                                                {(yyval.comp_func).func_ret_type = template("%s ", (yyvsp[-2].str)); (yyval.comp_func).func_name = (yyvsp[-5].str); (yyval.comp_func).func_args = template("SELF"); (yyval.comp_func).func_all = template("%s %s (SELF){\n%s}", (yyvsp[-2].str), (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2748 "parcer.tab.c"
    break;

  case 136: /* comp_function: KW_def T_ID DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS comp_function_body KW_enddef  */
#line 365 "parcer.y"
                                                                                                {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-6].str); (yyval.comp_func).func_args = template("SELF, %s", (yyvsp[-4].str)); (yyval.comp_func).func_all = template("void %s (SELF, %s){\n%s}", (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2754 "parcer.tab.c"
    break;

  case 137: /* comp_function: KW_def T_ID DEL_LPAR fcn_arguments DEL_RPAR fcn_ret_type comp_function_body KW_enddef  */
#line 366 "parcer.y"
                                                                                                {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-6].str); (yyval.comp_func).func_args = template("SELF, %s", (yyvsp[-4].str)); (yyval.comp_func).func_all = template("void %s (SELF, %s){\n%s}", (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2760 "parcer.tab.c"
    break;

  case 139: /* comp_fcn_arguments: comp_fcn_arguments DEL_HASHTAG attribute  */
#line 370 "parcer.y"
                                                                        {(yyval.str) = template("%sself->%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2766 "parcer.tab.c"
    break;

  case 140: /* comp_fcn_arguments: comp_fcn_arguments DEL_HASHTAG attribute operator  */
#line 371 "parcer.y"
                                                                {(yyval.str) = template("%sself->%s", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2772 "parcer.tab.c"
    break;

  case 141: /* comp_fcn_arguments: comp_fcn_arguments DEL_COMMA  */
#line 372 "parcer.y"
                                                                                        {(yyval.str) = template("%s, ",  (yyvsp[-1].str));}
#line 2778 "parcer.tab.c"
    break;

  case 142: /* comp_fcn_arguments: comp_fcn_arguments attribute DEL_COMMA  */
#line 373 "parcer.y"
                                                                                {(yyval.str) = template("%sself->%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2784 "parcer.tab.c"
    break;

  case 143: /* comp_function_body: comp_assignment DEL_QUEST  */
#line 376 "parcer.y"
                                                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2790 "parcer.tab.c"
    break;

  case 144: /* comp_function_body: comp_function_body comp_assignment DEL_QUEST  */
#line 377 "parcer.y"
                                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2796 "parcer.tab.c"
    break;

  case 145: /* comp_function_body: comp_declaration DEL_QUEST  */
#line 378 "parcer.y"
                                                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2802 "parcer.tab.c"
    break;

  case 146: /* comp_function_body: comp_function_body comp_declaration DEL_QUEST  */
#line 379 "parcer.y"
                                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2808 "parcer.tab.c"
    break;

  case 147: /* comp_function_body: comp_fcn_call DEL_QUEST  */
#line 380 "parcer.y"
                                                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2814 "parcer.tab.c"
    break;

  case 148: /* comp_function_body: comp_function_body comp_fcn_call DEL_QUEST  */
#line 381 "parcer.y"
                                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2820 "parcer.tab.c"
    break;

  case 149: /* comp_function_body: comp_if_statement DEL_QUEST  */
#line 382 "parcer.y"
                                                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2826 "parcer.tab.c"
    break;

  case 150: /* comp_function_body: comp_function_body comp_if_statement DEL_QUEST  */
#line 383 "parcer.y"
                                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2832 "parcer.tab.c"
    break;

  case 151: /* comp_function_body: comp_for_statement DEL_QUEST  */
#line 384 "parcer.y"
                                                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2838 "parcer.tab.c"
    break;

  case 152: /* comp_function_body: comp_function_body comp_for_statement DEL_QUEST  */
#line 385 "parcer.y"
                                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2844 "parcer.tab.c"
    break;

  case 153: /* comp_function_body: KW_return comp_right_part DEL_QUEST  */
#line 386 "parcer.y"
                                                                                {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2850 "parcer.tab.c"
    break;

  case 154: /* comp_function_body: comp_function_body KW_return comp_right_part DEL_QUEST  */
#line 387 "parcer.y"
                                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2856 "parcer.tab.c"
    break;

  case 155: /* comp_if_statement: KW_if DEL_LPAR comp_right_part DEL_RPAR DEL_DOTS comp_if_body KW_endif  */
#line 391 "parcer.y"
                                                                                                                                {(yyval.str) = template("if (%s){\n%s}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2862 "parcer.tab.c"
    break;

  case 156: /* comp_if_statement: KW_if DEL_LPAR comp_right_part DEL_RPAR DEL_DOTS comp_if_body KW_else DEL_DOTS comp_if_body KW_endif  */
#line 392 "parcer.y"
                                                                                                         {(yyval.str) = template("if (%s){\n%s}else{\n%s}", (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2868 "parcer.tab.c"
    break;

  case 157: /* comp_if_body: comp_expression DEL_QUEST  */
#line 395 "parcer.y"
                                                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2874 "parcer.tab.c"
    break;

  case 158: /* comp_if_body: comp_if_body comp_expression DEL_QUEST  */
#line 396 "parcer.y"
                                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2880 "parcer.tab.c"
    break;

  case 159: /* comp_if_body: comp_if_body DEL_QUEST  */
#line 397 "parcer.y"
                                                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2886 "parcer.tab.c"
    break;

  case 160: /* comp_if_body: comp_if_body if_statement DEL_QUEST  */
#line 398 "parcer.y"
                                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2892 "parcer.tab.c"
    break;

  case 161: /* comp_if_body: KW_return comp_right_part DEL_QUEST  */
#line 399 "parcer.y"
                                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2898 "parcer.tab.c"
    break;

  case 162: /* comp_if_body: comp_if_body KW_return comp_right_part DEL_QUEST  */
#line 400 "parcer.y"
                                                        {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2904 "parcer.tab.c"
    break;

  case 163: /* comp_for_statement: KW_for comp_for_arguments DEL_DOTS comp_for_body KW_endfor  */
#line 404 "parcer.y"
                                                                                                                                                                                                                {(yyval.str) = template("for (%s){\n%s}", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2910 "parcer.tab.c"
    break;

  case 164: /* comp_for_statement: attribute DEL_DOTS OP_EQUAL DEL_LBRAC comp_right_part KW_for T_ID DEL_DOTS attribute DEL_RBRAC var_type  */
#line 405 "parcer.y"
                                                                                                                                                                {(yyval.str) = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s_i = 0; %s_i < %s; %s_i++){\n%s[%s_i] = %s;\n}", (yyvsp[0].str), (yyvsp[-10].str), (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[-10].str), (yyvsp[-4].str), (yyvsp[-6].str));}
#line 2916 "parcer.tab.c"
    break;

  case 165: /* comp_for_statement: attribute DEL_DOTS OP_EQUAL DEL_LBRAC comp_right_part KW_for T_ID var_type KW_in attribute KW_of attribute DEL_RBRAC var_type  */
#line 406 "parcer.y"
                                                                                                                                        {(yyval.str) = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s_i = 0; %s_i < %s; %s_i++){\n%s%s = %s[%s_i];\n%s[%s_i] = %s;\n}", (yyvsp[0].str), (yyvsp[-13].str), (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[0].str), (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-13].str), (yyvsp[-4].str), (yyvsp[-9].str));}
#line 2922 "parcer.tab.c"
    break;

  case 166: /* comp_for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS comp_right_part DEL_DOTS T_INT DEL_RBRAC  */
#line 409 "parcer.y"
                                                                                        {(yyval.str) = template("int %s = %s; %s < %s; %s += %s", (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-8].str), (yyvsp[-3].str), (yyvsp[-8].str), (yyvsp[-1].str));}
#line 2928 "parcer.tab.c"
    break;

  case 167: /* comp_for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS comp_right_part DEL_RBRAC  */
#line 410 "parcer.y"
                                                                                                        {(yyval.str) = template("int %s = %s; %s < %s; %s += 1", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-6].str), (yyvsp[-1].str), (yyvsp[-6].str));}
#line 2934 "parcer.tab.c"
    break;

  case 168: /* comp_for_body: comp_expression DEL_QUEST  */
#line 413 "parcer.y"
                                                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2940 "parcer.tab.c"
    break;

  case 169: /* comp_for_body: comp_for_body comp_expression DEL_QUEST  */
#line 414 "parcer.y"
                                                                {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2946 "parcer.tab.c"
    break;

  case 170: /* comp_for_body: comp_if_statement DEL_QUEST  */
#line 415 "parcer.y"
                                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2952 "parcer.tab.c"
    break;

  case 171: /* comp_for_body: comp_for_body comp_if_statement DEL_QUEST  */
#line 416 "parcer.y"
                                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2958 "parcer.tab.c"
    break;

  case 172: /* comp_for_body: comp_for_statement DEL_QUEST  */
#line 417 "parcer.y"
                                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2964 "parcer.tab.c"
    break;

  case 173: /* comp_for_body: comp_for_body comp_for_statement DEL_QUEST  */
#line 418 "parcer.y"
                                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2970 "parcer.tab.c"
    break;

  case 174: /* comp_for_body: KW_return comp_right_part DEL_QUEST  */
#line 419 "parcer.y"
                                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2976 "parcer.tab.c"
    break;

  case 175: /* comp_for_body: comp_for_body KW_return comp_right_part DEL_QUEST  */
#line 420 "parcer.y"
                                                        {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2982 "parcer.tab.c"
    break;

  case 177: /* comp_right_part: DEL_HASHTAG  */
#line 425 "parcer.y"
                                                                                                                        {(yyval.str) = template("self->");}
#line 2988 "parcer.tab.c"
    break;

  case 179: /* comp_right_part: attribute operator  */
#line 427 "parcer.y"
                                                                                                                {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 2994 "parcer.tab.c"
    break;

  case 180: /* comp_right_part: attribute DEL_COMMA  */
#line 428 "parcer.y"
                                                                                                                {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 3000 "parcer.tab.c"
    break;

  case 181: /* comp_right_part: DEL_LPAR comp_right_part DEL_RPAR  */
#line 429 "parcer.y"
                                                                                                {(yyval.str) = template("(%s)", (yyvsp[-1].str));}
#line 3006 "parcer.tab.c"
    break;

  case 182: /* comp_right_part: DEL_LPAR comp_right_part DEL_RPAR operator  */
#line 430 "parcer.y"
                                                                                        {(yyval.str) = template("(%s)%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 3012 "parcer.tab.c"
    break;

  case 183: /* comp_right_part: DEL_LBRAC comp_right_part DEL_RBRAC  */
#line 431 "parcer.y"
                                                                                                {(yyval.str) = template("[%s]", (yyvsp[-1].str));}
#line 3018 "parcer.tab.c"
    break;

  case 184: /* comp_right_part: DEL_LBRAC comp_right_part DEL_RBRAC operator  */
#line 432 "parcer.y"
                                                                                        {(yyval.str) = template("[%s]%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 3024 "parcer.tab.c"
    break;

  case 185: /* comp_right_part: DEL_LBRAC comp_right_part DEL_RBRAC DEL_DOT  */
#line 433 "parcer.y"
                                                                                        {(yyval.str) = template("[%s].", (yyvsp[-2].str));}
#line 3030 "parcer.tab.c"
    break;

  case 186: /* comp_right_part: comp_right_part attribute  */
#line 434 "parcer.y"
                                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 3036 "parcer.tab.c"
    break;

  case 187: /* comp_right_part: comp_right_part DEL_HASHTAG T_ID  */
#line 435 "parcer.y"
                                                                                                {(yyval.str) = template("%sself->%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 3042 "parcer.tab.c"
    break;

  case 188: /* comp_right_part: comp_right_part attribute operator  */
#line 436 "parcer.y"
                                                                                                {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str));}
#line 3048 "parcer.tab.c"
    break;

  case 189: /* comp_right_part: comp_right_part attribute DEL_COMMA  */
#line 437 "parcer.y"
                                                                                                {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 3054 "parcer.tab.c"
    break;

  case 190: /* comp_right_part: comp_right_part DEL_LPAR DEL_RPAR  */
#line 438 "parcer.y"
                                                                                                {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 3060 "parcer.tab.c"
    break;

  case 191: /* comp_right_part: comp_right_part DEL_LPAR DEL_RPAR operator  */
#line 439 "parcer.y"
                                                                                        {(yyval.str) = template("%s()%s", (yyvsp[-3].str), (yyvsp[0].str));}
#line 3066 "parcer.tab.c"
    break;

  case 192: /* comp_right_part: comp_right_part DEL_LPAR comp_right_part DEL_RPAR  */
#line 440 "parcer.y"
                                                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 3072 "parcer.tab.c"
    break;

  case 193: /* comp_right_part: comp_right_part DEL_LPAR comp_right_part DEL_RPAR operator  */
#line 441 "parcer.y"
                                                                        {(yyval.str) = template("%s(%s)%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 3078 "parcer.tab.c"
    break;

  case 194: /* comp_right_part: comp_right_part DEL_LBRAC comp_right_part DEL_RBRAC  */
#line 442 "parcer.y"
                                                                                {(yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 3084 "parcer.tab.c"
    break;

  case 195: /* comp_right_part: comp_right_part DEL_LBRAC comp_right_part DEL_RBRAC operator  */
#line 443 "parcer.y"
                                                                        {(yyval.str) = template("%s[%s]%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 3090 "parcer.tab.c"
    break;

  case 196: /* comp_right_part: comp_right_part DEL_LBRAC comp_right_part DEL_RBRAC DEL_DOT  */
#line 444 "parcer.y"
                                                                        {(yyval.str) = template("%s[%s].", (yyvsp[-4].str), (yyvsp[-2].str));}
#line 3096 "parcer.tab.c"
    break;

  case 198: /* right_part: DEL_HASHTAG  */
#line 450 "parcer.y"
                                                                                                                {(yyval.str) = template("");}
#line 3102 "parcer.tab.c"
    break;

  case 200: /* right_part: attribute operator  */
#line 452 "parcer.y"
                                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 3108 "parcer.tab.c"
    break;

  case 201: /* right_part: T_ID DEL_DOT DEL_HASHTAG T_ID  */
#line 453 "parcer.y"
                                                                                                {(yyval.str) = template("%s.%s", (yyvsp[-3].str), (yyvsp[0].str));}
#line 3114 "parcer.tab.c"
    break;

  case 202: /* right_part: T_ID DEL_DOT T_ID DEL_LPAR DEL_RPAR operator  */
#line 454 "parcer.y"
                                                                                {(yyval.str) = template("%s.%s(&%s)%s",(yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[-5].str), (yyvsp[0].str));}
#line 3120 "parcer.tab.c"
    break;

  case 203: /* right_part: attribute DEL_COMMA  */
#line 455 "parcer.y"
                                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 3126 "parcer.tab.c"
    break;

  case 204: /* right_part: DEL_LPAR right_part DEL_RPAR  */
#line 456 "parcer.y"
                                                                                                {(yyval.str) = template("(%s)", (yyvsp[-1].str));}
#line 3132 "parcer.tab.c"
    break;

  case 205: /* right_part: DEL_LPAR right_part DEL_RPAR operator  */
#line 457 "parcer.y"
                                                                                        {(yyval.str) = template("(%s)%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 3138 "parcer.tab.c"
    break;

  case 206: /* right_part: DEL_LBRAC right_part DEL_RBRAC  */
#line 458 "parcer.y"
                                                                                                {(yyval.str) = template("[%s]", (yyvsp[-1].str));}
#line 3144 "parcer.tab.c"
    break;

  case 207: /* right_part: DEL_LBRAC right_part DEL_RBRAC operator  */
#line 459 "parcer.y"
                                                                                {(yyval.str) = template("[%s]%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 3150 "parcer.tab.c"
    break;

  case 208: /* right_part: right_part attribute  */
#line 460 "parcer.y"
                                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 3156 "parcer.tab.c"
    break;

  case 209: /* right_part: right_part DEL_HASHTAG  */
#line 461 "parcer.y"
                                                                                                {(yyval.str) = template("%s", (yyvsp[-1].str));}
#line 3162 "parcer.tab.c"
    break;

  case 210: /* right_part: right_part attribute operator  */
#line 462 "parcer.y"
                                                                                                {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str));}
#line 3168 "parcer.tab.c"
    break;

  case 211: /* right_part: right_part attribute DEL_COMMA  */
#line 463 "parcer.y"
                                                                                                {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 3174 "parcer.tab.c"
    break;

  case 212: /* right_part: right_part DEL_LPAR DEL_RPAR  */
#line 464 "parcer.y"
                                                                                                {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 3180 "parcer.tab.c"
    break;

  case 213: /* right_part: right_part DEL_LPAR DEL_RPAR operator  */
#line 465 "parcer.y"
                                                                                        {(yyval.str) = template("%s()%s", (yyvsp[-3].str), (yyvsp[0].str));}
#line 3186 "parcer.tab.c"
    break;

  case 214: /* right_part: right_part DEL_LPAR right_part DEL_RPAR  */
#line 466 "parcer.y"
                                                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 3192 "parcer.tab.c"
    break;

  case 215: /* right_part: right_part DEL_LPAR right_part DEL_RPAR operator  */
#line 467 "parcer.y"
                                                                        {(yyval.str) = template("%s(%s)%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 3198 "parcer.tab.c"
    break;

  case 216: /* right_part: right_part DEL_LBRAC right_part DEL_RBRAC  */
#line 468 "parcer.y"
                                                                                {(yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 3204 "parcer.tab.c"
    break;

  case 217: /* right_part: right_part DEL_LBRAC right_part DEL_RBRAC operator  */
#line 469 "parcer.y"
                                                                        {(yyval.str) = template("%s[%s]%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 3210 "parcer.tab.c"
    break;

  case 218: /* right_part: right_part attribute DEL_DOT attribute DEL_LPAR DEL_RPAR  */
#line 470 "parcer.y"
                                                                {(yyval.str) = template("%s%s.%s(&%s)", (yyvsp[-5].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str));}
#line 3216 "parcer.tab.c"
    break;

  case 223: /* attribute: KW_main  */
#line 477 "parcer.y"
                {(yyval.str) = template("main");}
#line 3222 "parcer.tab.c"
    break;

  case 224: /* attribute: KW_True  */
#line 478 "parcer.y"
                {(yyval.str) = template("1");}
#line 3228 "parcer.tab.c"
    break;

  case 225: /* attribute: KW_False  */
#line 479 "parcer.y"
                {(yyval.str) = template("0");}
#line 3234 "parcer.tab.c"
    break;

  case 226: /* attribute: KW_and  */
#line 480 "parcer.y"
                {(yyval.str) = template(" && ");}
#line 3240 "parcer.tab.c"
    break;

  case 227: /* attribute: KW_or  */
#line 481 "parcer.y"
                        {(yyval.str) = template(" || ");}
#line 3246 "parcer.tab.c"
    break;

  case 228: /* operator: OP_MINUS  */
#line 484 "parcer.y"
                        {(yyval.str) = template(" - ");}
#line 3252 "parcer.tab.c"
    break;

  case 229: /* operator: OP_PLUS  */
#line 485 "parcer.y"
                        {(yyval.str) = template(" + ");}
#line 3258 "parcer.tab.c"
    break;

  case 230: /* operator: OP_MUL  */
#line 486 "parcer.y"
                        {(yyval.str) = template("*");}
#line 3264 "parcer.tab.c"
    break;

  case 231: /* operator: OP_DIV  */
#line 487 "parcer.y"
                        {(yyval.str) = template(" %s ", "/");}
#line 3270 "parcer.tab.c"
    break;

  case 232: /* operator: OP_MOD  */
#line 488 "parcer.y"
                        {(yyval.str) = template(" %s ", "%");}
#line 3276 "parcer.tab.c"
    break;

  case 233: /* operator: OP_EXP  */
#line 489 "parcer.y"
                        {(yyval.str) = template(" ** ");}
#line 3282 "parcer.tab.c"
    break;

  case 234: /* operator: OP_LESS  */
#line 490 "parcer.y"
                        {(yyval.str) = template(" < ");}
#line 3288 "parcer.tab.c"
    break;

  case 235: /* operator: OP_LEQ  */
#line 491 "parcer.y"
                        {(yyval.str) = template(" <= ");}
#line 3294 "parcer.tab.c"
    break;

  case 236: /* operator: OP_GREATER  */
#line 492 "parcer.y"
                {(yyval.str) = template(" > ");}
#line 3300 "parcer.tab.c"
    break;

  case 237: /* operator: OP_GEQ  */
#line 494 "parcer.y"
                        {(yyval.str) = template(" >= ");}
#line 3306 "parcer.tab.c"
    break;

  case 238: /* operator: OP_INCREM  */
#line 496 "parcer.y"
                {(yyval.str) = template(" += ");}
#line 3312 "parcer.tab.c"
    break;

  case 239: /* operator: OP_DECREM  */
#line 497 "parcer.y"
                {(yyval.str) = template(" -= ");}
#line 3318 "parcer.tab.c"
    break;

  case 240: /* operator: OP_MULCREM  */
#line 498 "parcer.y"
                {(yyval.str) = template(" *= ");}
#line 3324 "parcer.tab.c"
    break;

  case 241: /* operator: OP_DIVCREM  */
#line 499 "parcer.y"
                {(yyval.str) = template(" /= ");}
#line 3330 "parcer.tab.c"
    break;

  case 242: /* operator: OP_MODCREM  */
#line 500 "parcer.y"
                {(yyval.str) = template(" %= ");}
#line 3336 "parcer.tab.c"
    break;

  case 243: /* operator: OP_EQ  */
#line 501 "parcer.y"
                        {(yyval.str) = template(" == ");}
#line 3342 "parcer.tab.c"
    break;

  case 244: /* operator: OP_NOTEQ  */
#line 502 "parcer.y"
                {(yyval.str) = template(" != ");}
#line 3348 "parcer.tab.c"
    break;


#line 3352 "parcer.tab.c"

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

#line 506 "parcer.y"

int main(){
	if (yyparse() == 0)
		printf("\n");
	else
		printf("\n");
}
