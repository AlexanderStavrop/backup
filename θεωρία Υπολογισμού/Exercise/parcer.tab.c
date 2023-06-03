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
  YYSYMBOL_expression = 67,                /* expression  */
  YYSYMBOL_constant = 68,                  /* constant  */
  YYSYMBOL_assignment = 69,                /* assignment  */
  YYSYMBOL_var_type = 70,                  /* var_type  */
  YYSYMBOL_declaration = 71,               /* declaration  */
  YYSYMBOL_fcn_call = 72,                  /* fcn_call  */
  YYSYMBOL_make_fcn = 73,                  /* make_fcn  */
  YYSYMBOL_fcn_ret_type = 74,              /* fcn_ret_type  */
  YYSYMBOL_fcn_body = 75,                  /* fcn_body  */
  YYSYMBOL_if_statement = 76,              /* if_statement  */
  YYSYMBOL_if_body = 77,                   /* if_body  */
  YYSYMBOL_while_statement = 78,           /* while_statement  */
  YYSYMBOL_while_body = 79,                /* while_body  */
  YYSYMBOL_for_statement = 80,             /* for_statement  */
  YYSYMBOL_for_arguments = 81,             /* for_arguments  */
  YYSYMBOL_for_body = 82,                  /* for_body  */
  YYSYMBOL_right_part = 83,                /* right_part  */
  YYSYMBOL_attribute = 84,                 /* attribute  */
  YYSYMBOL_operator = 85                   /* operator  */
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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   865

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  204

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
       0,   120,   120,   121,   130,   131,   133,   134,   138,   139,
     140,   141,   145,   148,   151,   152,   153,   154,   159,   160,
     161,   162,   163,   168,   172,   173,   174,   177,   178,   181,
     182,   184,   185,   187,   188,   190,   191,   193,   194,   198,
     199,   202,   203,   205,   206,   208,   209,   211,   212,   216,
     219,   220,   222,   223,   225,   226,   228,   229,   233,   236,
     239,   240,   242,   243,   245,   246,   248,   249,   251,   252,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   271,   272,   273,   274,   275,   276,   277,   281,
     282,   283,   284,   285,   286,   287,   288,   289
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
  "program_start", "program_body", "expression", "constant", "assignment",
  "var_type", "declaration", "fcn_call", "make_fcn", "fcn_ret_type",
  "fcn_body", "if_statement", "if_body", "while_statement", "while_body",
  "for_statement", "for_arguments", "for_body", "right_part", "attribute",
  "operator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-68)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     793,   -68,   -68,   -68,   229,   -68,   229,   -68,   -68,   -68,
       3,   793,   -44,   -68,   -68,    39,   -68,   -39,   -36,   -31,
     -17,   -20,   -68,   -18,    -8,   -68,   -68,   -37,   -68,   359,
     359,   -68,    84,   -68,   -68,   333,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   359,
      76,   794,   -68,   241,   -68,   -68,   -68,   -68,   -34,   203,
     -32,   284,   244,   810,   -68,   -68,   -68,    -9,   653,   653,
      11,   735,   -68,   296,   -68,   -68,    36,    -4,    49,     2,
     359,     5,   523,    14,    17,    24,   549,   653,   -68,   735,
      -5,    19,   359,    43,    20,   359,   380,   -68,   -68,   359,
      28,    40,    47,    52,   -68,   -68,   -68,   -68,   575,   -68,
     -68,   -68,   299,    50,   679,   325,   -68,   395,   -68,   -68,
     -68,   -68,   -68,    53,    74,   359,    58,    60,    63,    67,
     601,    62,   -68,   757,    64,   427,   -68,   -68,   -68,   -68,
     -68,   359,    72,    73,    75,    79,   783,   359,    80,    82,
     627,   126,   359,   -68,   435,   -68,   -68,   -68,   -68,   359,
      86,    87,    88,   705,   443,   -68,   -68,    83,   -68,   359,
      91,    92,    95,    97,     6,   -68,   475,   -68,   -68,   -68,
     -68,   359,    99,   102,   106,   -68,   757,   483,   -68,   -68,
     -68,   -68,   128,   -68,   491,   -68,   -68,   -68,   731,   -68,
     104,   -68,   -68,   -68
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,    82,    86,    87,     0,    88,     0,    85,    83,    84,
       0,     3,     0,     8,    10,     9,    11,     0,     0,     0,
       0,     0,     1,     0,     0,     4,    21,     0,     6,     0,
       0,    19,     0,    18,    12,     0,     5,     7,    22,    20,
      90,    89,    91,    92,    96,    95,    97,    94,    93,     0,
      13,    70,    71,     0,    16,    15,    14,    17,     0,     0,
       0,     0,     0,    76,    73,    72,    23,     0,     0,     0,
       0,    74,    81,     0,    78,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,    80,
       0,     0,     0,     0,     0,     0,     0,    29,    24,     0,
       0,     0,     0,     0,    31,    33,    35,    25,     0,    79,
      27,    28,     0,     0,     0,     0,    37,     0,    30,    32,
      34,    36,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,    60,    62,    64,    66,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    68,     0,    61,    63,    65,    67,     0,
       0,     0,     0,     0,     0,    41,    43,     0,    39,     0,
       0,     0,     0,     0,     0,    69,     0,    50,    52,    54,
      49,     0,     0,     0,     0,    47,     0,     0,    42,    44,
      46,    45,     0,    56,     0,    51,    53,    55,     0,    48,
       0,    57,    40,    59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -68,   -68,   -68,     0,   -68,   158,   -15,   129,   -68,   155,
      98,   -67,    70,   -14,    85,   -68,   -41,   -68,   -68,   -24,
       1,    32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    10,    11,    81,    13,    14,    33,    15,    16,    17,
      69,    82,    83,   150,    84,   163,    85,    94,   130,    50,
      18,    52
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      12,    67,    86,    22,    34,    20,    53,    21,    25,     1,
      29,    23,    39,    28,     2,     3,    27,    30,    38,    31,
     108,    32,    32,    31,    68,    61,    32,    32,     5,    29,
      51,    51,     7,    35,    36,    76,    60,     8,    73,     9,
      90,   103,     1,    91,    37,   103,    67,     2,     3,    92,
      51,    63,    93,   110,    63,    95,    96,    97,   113,    62,
      27,     5,    63,    51,   192,     7,   104,   103,   112,   105,
       8,   115,     9,   129,    63,   117,   106,   111,   114,     1,
     118,    51,   100,    65,     2,     3,   100,    54,    55,   145,
      56,    57,   119,    51,    26,    75,    51,    63,     5,   120,
      51,   135,     7,    88,   121,   134,   124,     8,   100,     9,
     136,   133,   137,    63,   126,   138,    63,   154,    63,   139,
     146,   109,   152,   164,   155,   156,    51,   157,   174,    62,
     142,   158,   165,   148,   166,   176,    63,    77,   177,   178,
     179,   186,    51,   188,   189,   187,   160,   190,    51,   191,
     170,   195,   101,    51,   196,    63,   101,   194,   197,   200,
      51,   203,    19,   182,    59,    63,    24,   102,    87,     0,
      51,   102,   198,     0,     0,    63,     0,    63,   101,     0,
       0,     0,    51,     0,   127,     0,   148,     0,    63,     0,
       0,     0,     0,   102,     0,    63,     0,     0,   170,   128,
     143,     0,     0,   149,     0,     0,     1,     0,     0,     0,
       0,     2,     3,     0,     0,   144,   161,     0,   151,     0,
     171,   173,     0,     0,     0,     5,     0,     0,     0,     7,
       0,   162,     1,   183,     8,   172,     9,     2,     3,     0,
       0,     0,     0,     0,     1,     0,     0,     1,   184,     2,
       3,     5,     2,     3,     0,     7,   149,    70,    26,     0,
       8,     0,     9,     5,     0,     0,     5,     7,   171,     0,
       7,   151,     8,     0,     9,     8,     0,     9,    40,    41,
      42,    43,    44,   172,    45,    46,    47,     1,     0,     0,
      48,     0,     2,     3,    62,    66,     0,    49,    72,     1,
       0,     0,     1,     0,     2,     3,     5,     2,     3,     0,
       7,     0,     0,     0,     0,     8,     0,     9,     5,     0,
       0,     5,     7,     0,     0,     7,     0,     8,     1,     9,
       8,     0,     9,     2,     3,     0,     1,    62,    71,     0,
       0,     2,     3,     0,     0,     0,     0,     5,     0,    62,
      89,     7,    62,   123,     0,     5,     8,     0,     9,     7,
       0,     0,     1,     0,     8,     0,     9,     2,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    62,   131,
       0,     5,     0,     1,     0,     7,     0,    58,     2,     3,
       8,     0,     9,    40,    41,    42,    43,    44,     1,    45,
      46,    47,     5,     2,     3,    48,     7,     0,     0,     0,
       0,     8,    49,     9,     0,     0,     0,     5,     0,     0,
       0,     7,     0,     0,     0,     0,     8,     0,     9,     0,
       1,     0,   116,    62,     0,     2,     3,     0,     1,     0,
       0,     0,     0,     2,     3,     0,     1,   132,    62,     5,
       0,     2,     3,     7,     0,     0,     0,     5,     8,     0,
       9,     7,     0,     0,     0,     5,     8,     0,     9,     7,
       0,     0,     0,     0,     8,     0,     9,     0,     1,   153,
      62,     0,     0,     2,     3,     0,     1,   175,    62,     0,
       0,     2,     3,     0,     1,   185,    62,     5,     0,     2,
       3,     7,     0,     0,     0,     5,     8,     0,     9,     7,
       0,     0,     0,     5,     8,     0,     9,     7,     0,     0,
       0,     0,     8,     0,     9,     0,     1,   193,    62,     0,
       0,     2,     3,     4,    77,   199,    62,    78,     0,     0,
      79,     0,     0,   201,    62,     5,     0,     0,    98,     7,
      99,     0,     1,     0,     8,     0,     9,     2,     3,     4,
      77,     0,     0,    78,     0,     0,    79,     0,     0,     0,
       0,     5,     0,     0,   107,     7,    99,     0,     1,     0,
       8,     0,     9,     2,     3,     4,    77,     0,     0,    78,
       0,     0,    79,     0,     0,     0,     0,     5,     0,     0,
     122,     7,    99,     0,     1,     0,     8,     0,     9,     2,
       3,     4,    77,     0,     0,    78,     0,   140,    79,     0,
       0,     0,     0,     5,     0,     0,     0,     7,   141,     0,
       1,     0,     8,     0,     9,     2,     3,     4,    77,   167,
     168,     0,     0,     0,    79,     0,     0,     0,     0,     5,
       0,     0,     0,     7,   169,     0,     1,     0,     8,     0,
       9,     2,     3,     4,    77,     0,     0,    78,     0,     0,
      79,     0,     0,     0,     0,     5,     0,     0,     0,     7,
      80,     0,     1,     0,     8,     0,     9,     2,     3,     4,
      77,     0,     0,    78,     0,     0,    79,     0,     0,     0,
       0,     5,     0,     0,     0,     7,   125,     0,     1,     0,
       8,     0,     9,     2,     3,     4,    77,     0,     0,     0,
       0,     0,    79,   180,     0,     0,     0,     5,     0,     0,
       0,     7,   181,     0,     1,     0,     8,     0,     9,     2,
       3,     4,    77,     0,   202,     0,     0,     0,    79,     0,
       0,     0,     0,     5,     0,     0,     0,     7,   169,     0,
       1,     0,     8,     0,     9,     2,     3,     4,    77,    40,
      41,    42,    43,    44,    79,    45,    46,    47,     0,     5,
       0,    48,     0,     7,   147,     0,     1,     0,     8,     0,
       9,     2,     3,     4,    77,     0,     1,     0,     0,     0,
      79,     2,     3,     4,     0,     5,     0,     0,     0,     7,
     159,     0,     0,     0,     8,     5,     9,     6,     0,     7,
       0,     0,     0,     0,     8,     0,     9,     0,    40,    41,
      42,    43,    44,     0,    45,    46,    47,     0,     0,     0,
      48,     0,     0,     0,    40,    41,    42,    43,    44,    64,
      45,    46,    47,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,    74
};

static const yytype_int16 yycheck[] =
{
       0,    35,    69,     0,    19,     4,    30,     6,    52,     3,
      46,    11,    27,    52,     8,     9,    15,    53,    55,    55,
      87,    58,    58,    55,    58,    49,    58,    58,    22,    46,
      29,    30,    26,    53,    52,    44,    35,    31,    62,    33,
       4,    82,     3,     7,    52,    86,    35,     8,     9,    53,
      49,    50,     3,    58,    53,    53,    80,    52,    15,    53,
      59,    22,    61,    62,    58,    26,    52,   108,    92,    52,
      31,    95,    33,   114,    73,    99,    52,    58,    58,     3,
      52,    80,    82,    51,     8,     9,    86,     3,     4,   130,
       6,     7,    52,    92,    55,    63,    95,    96,    22,    52,
      99,   125,    26,    71,    52,    31,    56,    31,   108,    33,
      52,    58,    52,   112,   114,    52,   115,   141,   117,    52,
      58,    89,    58,   147,    52,    52,   125,    52,   152,    53,
     130,    52,    52,   133,    52,   159,   135,    11,    52,    52,
      52,    58,   141,    52,    52,   169,   146,    52,   147,    52,
     150,    52,    82,   152,    52,   154,    86,   181,    52,    31,
     159,    57,     4,   163,    35,   164,    11,    82,    70,    -1,
     169,    86,   186,    -1,    -1,   174,    -1,   176,   108,    -1,
      -1,    -1,   181,    -1,   114,    -1,   186,    -1,   187,    -1,
      -1,    -1,    -1,   108,    -1,   194,    -1,    -1,   198,   114,
     130,    -1,    -1,   133,    -1,    -1,     3,    -1,    -1,    -1,
      -1,     8,     9,    -1,    -1,   130,   146,    -1,   133,    -1,
     150,   151,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,
      -1,   146,     3,   163,    31,   150,    33,     8,     9,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,     3,   163,     8,
       9,    22,     8,     9,    -1,    26,   186,    54,    55,    -1,
      31,    -1,    33,    22,    -1,    -1,    22,    26,   198,    -1,
      26,   186,    31,    -1,    33,    31,    -1,    33,    34,    35,
      36,    37,    38,   198,    40,    41,    42,     3,    -1,    -1,
      46,    -1,     8,     9,    53,    54,    -1,    53,    54,     3,
      -1,    -1,     3,    -1,     8,     9,    22,     8,     9,    -1,
      26,    -1,    -1,    -1,    -1,    31,    -1,    33,    22,    -1,
      -1,    22,    26,    -1,    -1,    26,    -1,    31,     3,    33,
      31,    -1,    33,     8,     9,    -1,     3,    53,    54,    -1,
      -1,     8,     9,    -1,    -1,    -1,    -1,    22,    -1,    53,
      54,    26,    53,    54,    -1,    22,    31,    -1,    33,    26,
      -1,    -1,     3,    -1,    31,    -1,    33,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      -1,    22,    -1,     3,    -1,    26,    -1,    54,     8,     9,
      31,    -1,    33,    34,    35,    36,    37,    38,     3,    40,
      41,    42,    22,     8,     9,    46,    26,    -1,    -1,    -1,
      -1,    31,    53,    33,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    31,    -1,    33,    -1,
       3,    -1,    52,    53,    -1,     8,     9,    -1,     3,    -1,
      -1,    -1,    -1,     8,     9,    -1,     3,    52,    53,    22,
      -1,     8,     9,    26,    -1,    -1,    -1,    22,    31,    -1,
      33,    26,    -1,    -1,    -1,    22,    31,    -1,    33,    26,
      -1,    -1,    -1,    -1,    31,    -1,    33,    -1,     3,    52,
      53,    -1,    -1,     8,     9,    -1,     3,    52,    53,    -1,
      -1,     8,     9,    -1,     3,    52,    53,    22,    -1,     8,
       9,    26,    -1,    -1,    -1,    22,    31,    -1,    33,    26,
      -1,    -1,    -1,    22,    31,    -1,    33,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,    -1,     3,    52,    53,    -1,
      -1,     8,     9,    10,    11,    52,    53,    14,    -1,    -1,
      17,    -1,    -1,    52,    53,    22,    -1,    -1,    25,    26,
      27,    -1,     3,    -1,    31,    -1,    33,     8,     9,    10,
      11,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    25,    26,    27,    -1,     3,    -1,
      31,    -1,    33,     8,     9,    10,    11,    -1,    -1,    14,
      -1,    -1,    17,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      25,    26,    27,    -1,     3,    -1,    31,    -1,    33,     8,
       9,    10,    11,    -1,    -1,    14,    -1,    16,    17,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,
       3,    -1,    31,    -1,    33,     8,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    26,    27,    -1,     3,    -1,    31,    -1,
      33,     8,     9,    10,    11,    -1,    -1,    14,    -1,    -1,
      17,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,
      27,    -1,     3,    -1,    31,    -1,    33,     8,     9,    10,
      11,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    26,    27,    -1,     3,    -1,
      31,    -1,    33,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    27,    -1,     3,    -1,    31,    -1,    33,     8,
       9,    10,    11,    -1,    13,    -1,    -1,    -1,    17,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,
       3,    -1,    31,    -1,    33,     8,     9,    10,    11,    34,
      35,    36,    37,    38,    17,    40,    41,    42,    -1,    22,
      -1,    46,    -1,    26,    27,    -1,     3,    -1,    31,    -1,
      33,     8,     9,    10,    11,    -1,     3,    -1,    -1,    -1,
      17,     8,     9,    10,    -1,    22,    -1,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    22,    33,    24,    -1,    26,
      -1,    -1,    -1,    -1,    31,    -1,    33,    -1,    34,    35,
      36,    37,    38,    -1,    40,    41,    42,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    34,    35,    36,    37,    38,    55,
      40,    41,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     8,     9,    10,    22,    24,    26,    31,    33,
      65,    66,    67,    68,    69,    71,    72,    73,    84,    69,
      84,    84,     0,    67,    73,    52,    55,    84,    52,    46,
      53,    55,    58,    70,    70,    53,    52,    52,    55,    70,
      34,    35,    36,    37,    38,    40,    41,    42,    46,    53,
      83,    84,    85,    83,     3,     4,     6,     7,    54,    71,
      84,    83,    53,    84,    55,    85,    54,    35,    58,    74,
      54,    54,    54,    83,    55,    85,    44,    11,    14,    17,
      27,    67,    75,    76,    78,    80,    75,    74,    85,    54,
       4,     7,    53,     3,    81,    53,    83,    52,    25,    27,
      67,    76,    78,    80,    52,    52,    52,    25,    75,    85,
      58,    58,    83,    15,    58,    83,    52,    83,    52,    52,
      52,    52,    25,    54,    56,    27,    67,    76,    78,    80,
      82,    54,    52,    58,    31,    83,    52,    52,    52,    52,
      16,    27,    67,    76,    78,    80,    58,    27,    67,    76,
      77,    78,    58,    52,    83,    52,    52,    52,    52,    27,
      67,    76,    78,    79,    83,    52,    52,    12,    13,    27,
      67,    76,    78,    76,    83,    52,    83,    52,    52,    52,
      18,    27,    67,    76,    78,    52,    58,    83,    52,    52,
      52,    52,    58,    52,    83,    52,    52,    52,    77,    52,
      31,    52,    13,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    65,    66,    66,    66,    66,    67,    67,
      67,    67,    68,    69,    70,    70,    70,    70,    71,    71,
      71,    71,    71,    72,    73,    73,    73,    74,    74,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    76,
      76,    77,    77,    77,    77,    77,    77,    77,    77,    78,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    81,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    84,    84,    84,    84,    84,    84,    84,    85,
      85,    85,    85,    85,    85,    85,    85,    85
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     3,     2,     3,     1,     1,
       1,     1,     3,     3,     2,     2,     2,     2,     2,     2,
       3,     2,     3,     4,     7,     7,     8,     4,     4,     2,
       3,     2,     3,     2,     3,     2,     3,     3,     4,     7,
      10,     2,     3,     2,     3,     3,     3,     3,     4,     7,
       2,     3,     2,     3,     2,     3,     3,     4,     5,     9,
       2,     3,     2,     3,     2,     3,     2,     3,     3,     4,
       1,     1,     2,     2,     3,     4,     2,     3,     3,     5,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 1425 "parcer.tab.c"
    break;

  case 4: /* program_body: expression DEL_QUEST  */
#line 130 "parcer.y"
                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1431 "parcer.tab.c"
    break;

  case 5: /* program_body: program_body expression DEL_QUEST  */
#line 131 "parcer.y"
                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1437 "parcer.tab.c"
    break;

  case 6: /* program_body: make_fcn DEL_QUEST  */
#line 133 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str)); }
#line 1443 "parcer.tab.c"
    break;

  case 7: /* program_body: program_body make_fcn DEL_QUEST  */
#line 134 "parcer.y"
                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str)); printf("1111111111111111111111111111111111111111");}
#line 1449 "parcer.tab.c"
    break;

  case 12: /* constant: KW_const assignment var_type  */
#line 145 "parcer.y"
                                         {(yyval.str) = template("const %s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 1455 "parcer.tab.c"
    break;

  case 13: /* assignment: attribute OP_EQUAL right_part  */
#line 148 "parcer.y"
                                {(yyval.str) = template("%s = %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1461 "parcer.tab.c"
    break;

  case 14: /* var_type: DEL_DOTS KW_str  */
#line 151 "parcer.y"
                        {(yyval.str) = template("char* ");}
#line 1467 "parcer.tab.c"
    break;

  case 15: /* var_type: DEL_DOTS KW_integer  */
#line 152 "parcer.y"
                        {(yyval.str) = template("int "); }
#line 1473 "parcer.tab.c"
    break;

  case 16: /* var_type: DEL_DOTS T_ID  */
#line 153 "parcer.y"
                                {(yyval.str) = template("%s ", (yyvsp[0].str));}
#line 1479 "parcer.tab.c"
    break;

  case 17: /* var_type: DEL_DOTS KW_boolean  */
#line 154 "parcer.y"
                        {(yyval.str) = template("int ");}
#line 1485 "parcer.tab.c"
    break;

  case 18: /* declaration: attribute var_type  */
#line 159 "parcer.y"
                                                        {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 1491 "parcer.tab.c"
    break;

  case 19: /* declaration: attribute DEL_COMMA  */
#line 160 "parcer.y"
                                                {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 1497 "parcer.tab.c"
    break;

  case 20: /* declaration: declaration attribute var_type  */
#line 161 "parcer.y"
                                        {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-1].str));}
#line 1503 "parcer.tab.c"
    break;

  case 21: /* declaration: declaration DEL_COMMA  */
#line 162 "parcer.y"
                                                {(yyval.str) = template("%s, ",  (yyvsp[-1].str));}
#line 1509 "parcer.tab.c"
    break;

  case 22: /* declaration: declaration attribute DEL_COMMA  */
#line 163 "parcer.y"
                                        {(yyval.str) = template("%s, ", (yyvsp[-2].str));}
#line 1515 "parcer.tab.c"
    break;

  case 23: /* fcn_call: attribute DEL_LPAR right_part DEL_RPAR  */
#line 168 "parcer.y"
                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1521 "parcer.tab.c"
    break;

  case 24: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR DEL_DOTS fcn_body KW_enddef  */
#line 172 "parcer.y"
                                                                                                        {(yyval.str) = template("\nvoid %s()\n{\n%s}", (yyvsp[-5].str), (yyvsp[-1].str));}
#line 1527 "parcer.tab.c"
    break;

  case 25: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR fcn_ret_type fcn_body KW_enddef  */
#line 173 "parcer.y"
                                                                                                        {(yyval.str) = template("\n%s%s()\n{\n%s}", (yyvsp[-2].str), (yyvsp[-5].str), (yyvsp[-1].str));}
#line 1533 "parcer.tab.c"
    break;

  case 26: /* make_fcn: KW_def attribute DEL_LPAR declaration DEL_RPAR fcn_ret_type fcn_body KW_enddef  */
#line 174 "parcer.y"
                                                                                        {(yyval.str) = template("\n%s%s(%s)\n{\n%s}", (yyvsp[-2].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1539 "parcer.tab.c"
    break;

  case 27: /* fcn_ret_type: OP_MINUS OP_GREATER KW_integer DEL_DOTS  */
#line 177 "parcer.y"
                                                {(yyval.str) = template("int "); }
#line 1545 "parcer.tab.c"
    break;

  case 28: /* fcn_ret_type: OP_MINUS OP_GREATER KW_boolean DEL_DOTS  */
#line 178 "parcer.y"
                                                {(yyval.str) = template("int "); }
#line 1551 "parcer.tab.c"
    break;

  case 29: /* fcn_body: expression DEL_QUEST  */
#line 181 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1557 "parcer.tab.c"
    break;

  case 30: /* fcn_body: fcn_body expression DEL_QUEST  */
#line 182 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1563 "parcer.tab.c"
    break;

  case 31: /* fcn_body: if_statement DEL_QUEST  */
#line 184 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1569 "parcer.tab.c"
    break;

  case 32: /* fcn_body: fcn_body if_statement DEL_QUEST  */
#line 185 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1575 "parcer.tab.c"
    break;

  case 33: /* fcn_body: while_statement DEL_QUEST  */
#line 187 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1581 "parcer.tab.c"
    break;

  case 34: /* fcn_body: fcn_body while_statement DEL_QUEST  */
#line 188 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1587 "parcer.tab.c"
    break;

  case 35: /* fcn_body: for_statement DEL_QUEST  */
#line 190 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1593 "parcer.tab.c"
    break;

  case 36: /* fcn_body: fcn_body for_statement DEL_QUEST  */
#line 191 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1599 "parcer.tab.c"
    break;

  case 37: /* fcn_body: KW_return right_part DEL_QUEST  */
#line 193 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 1605 "parcer.tab.c"
    break;

  case 38: /* fcn_body: fcn_body KW_return right_part DEL_QUEST  */
#line 194 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1611 "parcer.tab.c"
    break;

  case 39: /* if_statement: KW_if DEL_LPAR right_part DEL_RPAR DEL_DOTS if_body KW_endif  */
#line 198 "parcer.y"
                                                                     {(yyval.str) = template("if (%s){\n%s}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1617 "parcer.tab.c"
    break;

  case 40: /* if_statement: KW_if DEL_LPAR right_part DEL_RPAR DEL_DOTS if_body KW_else DEL_DOTS if_body KW_endif  */
#line 199 "parcer.y"
                                                                                          {(yyval.str) = template("if (%s){\n%s}else{\n%s}", (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1623 "parcer.tab.c"
    break;

  case 41: /* if_body: expression DEL_QUEST  */
#line 202 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1629 "parcer.tab.c"
    break;

  case 42: /* if_body: if_body expression DEL_QUEST  */
#line 203 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1635 "parcer.tab.c"
    break;

  case 43: /* if_body: if_statement DEL_QUEST  */
#line 205 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1641 "parcer.tab.c"
    break;

  case 44: /* if_body: if_body if_statement DEL_QUEST  */
#line 206 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1647 "parcer.tab.c"
    break;

  case 45: /* if_body: while_statement if_statement DEL_QUEST  */
#line 208 "parcer.y"
                                                {(yyval.str) = template("%s\n", (yyvsp[-2].str));}
#line 1653 "parcer.tab.c"
    break;

  case 46: /* if_body: if_body while_statement DEL_QUEST  */
#line 209 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1659 "parcer.tab.c"
    break;

  case 47: /* if_body: KW_return right_part DEL_QUEST  */
#line 211 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 1665 "parcer.tab.c"
    break;

  case 48: /* if_body: if_body KW_return right_part DEL_QUEST  */
#line 212 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1671 "parcer.tab.c"
    break;

  case 49: /* while_statement: KW_while DEL_LPAR right_part DEL_RPAR DEL_DOTS while_body KW_endwhile  */
#line 216 "parcer.y"
                                                                              {(yyval.str) = template("while (%s){\n%s}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1677 "parcer.tab.c"
    break;

  case 50: /* while_body: expression DEL_QUEST  */
#line 219 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1683 "parcer.tab.c"
    break;

  case 51: /* while_body: while_body expression DEL_QUEST  */
#line 220 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1689 "parcer.tab.c"
    break;

  case 52: /* while_body: if_statement DEL_QUEST  */
#line 222 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1695 "parcer.tab.c"
    break;

  case 53: /* while_body: while_body if_statement DEL_QUEST  */
#line 223 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1701 "parcer.tab.c"
    break;

  case 54: /* while_body: while_statement DEL_QUEST  */
#line 225 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1707 "parcer.tab.c"
    break;

  case 55: /* while_body: while_body while_statement DEL_QUEST  */
#line 226 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1713 "parcer.tab.c"
    break;

  case 56: /* while_body: KW_return right_part DEL_QUEST  */
#line 228 "parcer.y"
                                                                {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 1719 "parcer.tab.c"
    break;

  case 57: /* while_body: while_body KW_return right_part DEL_QUEST  */
#line 229 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1725 "parcer.tab.c"
    break;

  case 58: /* for_statement: KW_for for_arguments DEL_DOTS for_body KW_endfor  */
#line 233 "parcer.y"
                                                         {(yyval.str) = template("for (%s){\n%s}", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1731 "parcer.tab.c"
    break;

  case 59: /* for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS right_part DEL_DOTS T_INT DEL_RBRAC  */
#line 236 "parcer.y"
                                                                                {(yyval.str) = template("int %s = %s; %s < %s; %s += %s", (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-8].str), (yyvsp[-3].str), (yyvsp[-8].str), (yyvsp[-1].str));}
#line 1737 "parcer.tab.c"
    break;

  case 60: /* for_body: expression DEL_QUEST  */
#line 239 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1743 "parcer.tab.c"
    break;

  case 61: /* for_body: for_body expression DEL_QUEST  */
#line 240 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1749 "parcer.tab.c"
    break;

  case 62: /* for_body: if_statement DEL_QUEST  */
#line 242 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1755 "parcer.tab.c"
    break;

  case 63: /* for_body: for_body if_statement DEL_QUEST  */
#line 243 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1761 "parcer.tab.c"
    break;

  case 64: /* for_body: while_statement DEL_QUEST  */
#line 245 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1767 "parcer.tab.c"
    break;

  case 65: /* for_body: for_body while_statement DEL_QUEST  */
#line 246 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1773 "parcer.tab.c"
    break;

  case 66: /* for_body: for_statement DEL_QUEST  */
#line 248 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1779 "parcer.tab.c"
    break;

  case 67: /* for_body: for_body for_statement DEL_QUEST  */
#line 249 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1785 "parcer.tab.c"
    break;

  case 68: /* for_body: KW_return right_part DEL_QUEST  */
#line 251 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 1791 "parcer.tab.c"
    break;

  case 69: /* for_body: for_body KW_return right_part DEL_QUEST  */
#line 252 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1797 "parcer.tab.c"
    break;

  case 70: /* right_part: attribute  */
#line 257 "parcer.y"
                                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 1803 "parcer.tab.c"
    break;

  case 72: /* right_part: attribute operator  */
#line 259 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1809 "parcer.tab.c"
    break;

  case 73: /* right_part: attribute DEL_COMMA  */
#line 260 "parcer.y"
                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 1815 "parcer.tab.c"
    break;

  case 74: /* right_part: DEL_LPAR right_part DEL_RPAR  */
#line 261 "parcer.y"
                                                                                {(yyval.str) = template("(%s)", (yyvsp[-1].str));}
#line 1821 "parcer.tab.c"
    break;

  case 75: /* right_part: DEL_LPAR right_part DEL_RPAR operator  */
#line 262 "parcer.y"
                                                                        {(yyval.str) = template("(%s)%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1827 "parcer.tab.c"
    break;

  case 76: /* right_part: right_part attribute  */
#line 263 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1833 "parcer.tab.c"
    break;

  case 77: /* right_part: right_part attribute operator  */
#line 264 "parcer.y"
                                                                                {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str));}
#line 1839 "parcer.tab.c"
    break;

  case 78: /* right_part: right_part attribute DEL_COMMA  */
#line 265 "parcer.y"
                                                                                {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1845 "parcer.tab.c"
    break;

  case 79: /* right_part: right_part DEL_LPAR right_part DEL_RPAR operator  */
#line 266 "parcer.y"
                                                        {(yyval.str) = template("%s(%s)%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 1851 "parcer.tab.c"
    break;

  case 80: /* right_part: right_part DEL_LPAR right_part DEL_RPAR  */
#line 267 "parcer.y"
                                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1857 "parcer.tab.c"
    break;

  case 81: /* right_part: right_part DEL_LPAR DEL_RPAR  */
#line 268 "parcer.y"
                                                                                {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 1863 "parcer.tab.c"
    break;

  case 85: /* attribute: KW_main  */
#line 274 "parcer.y"
                {(yyval.str) = template("main");}
#line 1869 "parcer.tab.c"
    break;

  case 86: /* attribute: KW_True  */
#line 275 "parcer.y"
                {(yyval.str) = template("True");}
#line 1875 "parcer.tab.c"
    break;

  case 87: /* attribute: KW_False  */
#line 276 "parcer.y"
                {(yyval.str) = template("False");}
#line 1881 "parcer.tab.c"
    break;

  case 88: /* attribute: KW_and  */
#line 277 "parcer.y"
                {(yyval.str) = template(" and ");}
#line 1887 "parcer.tab.c"
    break;

  case 89: /* operator: OP_MINUS  */
#line 281 "parcer.y"
                        {(yyval.str) = template(" - ");}
#line 1893 "parcer.tab.c"
    break;

  case 90: /* operator: OP_PLUS  */
#line 282 "parcer.y"
                        {(yyval.str) = template(" + ");}
#line 1899 "parcer.tab.c"
    break;

  case 91: /* operator: OP_MUL  */
#line 283 "parcer.y"
                        {(yyval.str) = template("*");}
#line 1905 "parcer.tab.c"
    break;

  case 92: /* operator: OP_DIV  */
#line 284 "parcer.y"
                        {(yyval.str) = template(" %s ", "/");}
#line 1911 "parcer.tab.c"
    break;

  case 93: /* operator: OP_EQUAL  */
#line 285 "parcer.y"
                {(yyval.str) = template(" = ");}
#line 1917 "parcer.tab.c"
    break;

  case 94: /* operator: OP_LESS  */
#line 286 "parcer.y"
                        {(yyval.str) = template(" < ");}
#line 1923 "parcer.tab.c"
    break;

  case 95: /* operator: OP_EQ  */
#line 287 "parcer.y"
                        {(yyval.str) = template(" == ");}
#line 1929 "parcer.tab.c"
    break;

  case 96: /* operator: OP_MOD  */
#line 288 "parcer.y"
                        {(yyval.str) = template(" %s ", "%");}
#line 1935 "parcer.tab.c"
    break;

  case 97: /* operator: OP_NOTEQ  */
#line 289 "parcer.y"
                {(yyval.str) = template(" != ");}
#line 1941 "parcer.tab.c"
    break;


#line 1945 "parcer.tab.c"

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

#line 292 "parcer.y"

int main(){
	if (yyparse() == 0)
		printf("Accepted\n");
	else
		printf("Rejected\n");
}
