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
  YYSYMBOL_fcn_arguments = 74,             /* fcn_arguments  */
  YYSYMBOL_fcn_ret_type = 75,              /* fcn_ret_type  */
  YYSYMBOL_fcn_body = 76,                  /* fcn_body  */
  YYSYMBOL_if_statement = 77,              /* if_statement  */
  YYSYMBOL_if_body = 78,                   /* if_body  */
  YYSYMBOL_while_statement = 79,           /* while_statement  */
  YYSYMBOL_while_body = 80,                /* while_body  */
  YYSYMBOL_for_statement = 81,             /* for_statement  */
  YYSYMBOL_for_arguments = 82,             /* for_arguments  */
  YYSYMBOL_for_body = 83,                  /* for_body  */
  YYSYMBOL_right_part = 84,                /* right_part  */
  YYSYMBOL_attribute = 85,                 /* attribute  */
  YYSYMBOL_operator = 86                   /* operator  */
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
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1190

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  266

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
       0,   118,   118,   119,   128,   129,   130,   131,   136,   137,
     138,   139,   140,   145,   148,   149,   152,   153,   154,   155,
     156,   161,   162,   163,   164,   165,   166,   171,   176,   177,
     178,   179,   182,   183,   184,   185,   186,   187,   188,   191,
     192,   193,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   210,   211,   214,   215,   216,   217,   218,   219,
     220,   221,   225,   228,   229,   230,   231,   232,   233,   234,
     235,   240,   241,   242,   245,   246,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   282,   283,   284,   285,   286,   287,   288,
     289,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302
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
  "var_type", "declaration", "fcn_call", "make_fcn", "fcn_arguments",
  "fcn_ret_type", "fcn_body", "if_statement", "if_body", "while_statement",
  "while_body", "for_statement", "for_arguments", "for_body", "right_part",
  "attribute", "operator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-103)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-104)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     698,   -42,  -103,  -103,   749,  -103,  -103,  1111,  -103,  -103,
    -103,  -103,    18,   698,   -18,  -103,  -103,   647,  -103,   -13,
      97,  1111,   -15,    -5,    -1,  -103,     9,  -103,    15,    26,
    -103,  -103,   -46,  -103,   396,   396,  -103,    19,  -103,    13,
    1111,  -103,   339,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,   396,   396,
     746,  1112,  -103,   438,  -103,  -103,  -103,  -103,  -103,   -38,
      14,   -30,   323,     3,   450,    85,   354,   396,  1128,  -103,
    -103,  -103,   396,  -103,    30,    35,   942,   942,   -20,  -103,
      11,  -103,   283,  -103,  1144,  1144,  1144,   476,   174,  -103,
    -103,   746,    45,    31,    80,    32,   396,    37,   786,    38,
      39,    43,   105,   812,   942,   942,  -103,  -103,    -5,    42,
    -103,  -103,  -103,  1144,  1144,    44,    46,    47,   396,    88,
      48,   396,   492,  -103,  -103,   396,    57,    58,    60,    67,
    -103,  -103,  -103,   130,  -103,   838,   864,  -103,    -5,  -103,
    -103,  -103,  -103,  -103,   525,    64,   968,   533,  -103,   566,
    -103,  -103,  -103,  -103,    65,  -103,  -103,  -103,    69,    91,
     396,    71,    73,    76,    78,   890,    81,  -103,   396,  1046,
      82,   574,  -103,  -103,  -103,  -103,  -103,   396,    79,    92,
      96,   101,  1072,   606,   396,   113,   114,   916,    89,   396,
    -103,   632,  -103,  -103,  -103,  -103,   396,   115,   116,   117,
     994,   146,   644,  -103,  -103,   106,  -103,   396,   121,   122,
     126,   128,    24,  -103,   683,  -103,  -103,  -103,  -103,   396,
     132,   134,   135,   127,  -103,  1046,   695,  -103,  -103,  -103,
    -103,  -103,   159,  -103,   734,  -103,  -103,  -103,  1103,   183,
    1020,  -103,   142,  -103,   145,   147,  1111,  -103,  -103,    -5,
     173,  -103,  1111,   152,    -5,  -103
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,   103,   108,   109,     0,    12,   110,     0,   107,   104,
     106,   105,     0,     3,     0,     8,    10,     9,    11,     0,
       0,     0,   103,     0,     0,   103,     0,     1,     0,     0,
       4,    25,     0,     6,     0,     0,    22,     0,    21,     0,
       0,    13,     0,     5,     7,    26,    24,   112,   111,   113,
     114,   120,   119,   121,   117,   118,   115,   116,     0,     0,
      14,    86,    87,     0,    18,    17,    20,    16,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    89,
      88,    27,     0,    23,     0,     0,     0,     0,     0,    37,
       0,    35,     0,    32,    90,    92,    97,     0,     0,    96,
      95,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,    36,     0,     0,
      91,    93,    98,    99,   101,     0,     0,     0,     0,     0,
       0,     0,     0,    42,    28,     0,     0,     0,     0,     0,
      44,    46,    48,     0,    30,     0,     0,    33,     0,   100,
     102,    41,    39,    40,     0,     0,     0,     0,    50,     0,
      43,    45,    47,    49,     0,    29,    31,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,    76,    78,    80,    82,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     0,    77,    79,    81,    83,     0,     0,     0,     0,
       0,     0,     0,    54,    56,     0,    52,     0,     0,     0,
       0,     0,     0,    85,     0,    63,    65,    67,    62,     0,
       0,     0,     0,     0,    60,     0,     0,    55,    57,    59,
      58,    75,     0,    69,     0,    64,    66,    68,     0,     0,
       0,    61,     0,    70,    18,     0,     0,    53,    74,     0,
       0,    72,     0,     0,     0,    73
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -103,  -103,  -103,    16,  -103,   210,   -22,  -103,  -103,   202,
    -103,   129,   -84,   125,   -19,   133,  -103,  -102,  -103,  -103,
     112,     0,   -59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    12,    13,   107,    15,    16,    38,    17,    18,    19,
      72,    87,   108,   109,   197,   110,   210,   111,   130,   175,
      60,    61,    62
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    41,    80,   113,    24,    85,   139,    26,    82,    45,
      46,   139,    37,    20,    21,    85,    14,    32,    27,   100,
      37,    39,    64,    65,    66,    67,    68,    25,    86,    28,
     145,   146,     2,     3,    30,   120,   121,   122,   114,    33,
      70,    40,    73,   139,   139,    34,     6,    83,   125,   126,
       8,    93,   127,    37,   174,     9,    10,    11,    91,    92,
      78,    37,    42,    78,   149,   150,   116,    43,   117,    37,
      69,    84,    90,   191,    78,    78,    82,    76,    44,   102,
      77,   241,   242,   129,   128,   131,   112,   112,    25,   133,
     140,   141,   119,     2,     3,   142,   147,    78,    78,   148,
     103,    78,   151,   155,   152,   153,   156,     6,   112,   160,
     161,     8,   162,   112,   112,   112,     9,    10,    11,   163,
     169,   178,   180,   182,   136,   183,   167,   179,   184,   136,
     185,   202,    78,    64,    65,    66,    67,    68,    76,   192,
     199,    77,    95,    34,   203,   112,   112,    63,   204,   233,
      35,    34,    36,   205,    78,    37,   112,    78,    35,    78,
      36,   136,   136,   143,   235,   213,   214,   225,   226,   227,
      74,    75,   171,   237,   238,   112,   164,    25,   239,    20,
     240,    78,     2,     3,   245,   248,   246,   247,    97,    98,
     252,   188,    20,    78,   101,   195,     6,    20,   256,   258,
       8,    78,  -103,   262,   259,     9,    10,    11,   207,   264,
      20,   249,    78,   218,    23,    29,   250,   115,   132,     0,
       0,     0,    78,     0,    78,     0,   230,    76,     0,     0,
      77,   124,     0,   137,     0,    20,    78,   261,   137,     0,
     154,   138,   265,   157,    78,     0,   138,   159,   255,     0,
      20,   195,     0,     0,     0,     0,   260,     0,     0,     0,
       0,     0,   263,     0,     0,     0,   218,     0,     0,     0,
     137,   137,     0,     0,     0,     0,     0,     0,   138,   138,
       0,   172,   181,     0,     0,     0,    25,     0,     0,   173,
     193,     2,     3,     0,     0,     0,     0,     0,     0,   201,
     189,     0,     0,     0,   196,     6,   212,     0,   190,     8,
       0,   222,   198,     0,     9,    10,    11,   208,   224,     0,
       0,     0,   219,   221,     0,   209,    25,     0,     0,   236,
     220,     2,     3,     0,     0,   231,     0,     0,     0,     0,
     118,   244,    25,   232,     0,     6,     0,     2,     3,     8,
       0,     0,     0,     0,     9,    10,    11,    25,     0,     0,
     196,     6,     2,     3,     0,     8,     0,     0,   198,     0,
       9,    10,    11,     0,     0,   219,     6,    88,    89,     0,
       8,     0,     0,   220,     0,     9,    10,    11,    47,    48,
      49,    50,    51,    71,    52,    53,    54,    55,    56,    25,
      57,     0,     0,     0,     2,     3,     0,    58,    96,     0,
      59,     0,     0,     0,     0,     0,     0,     0,     6,     0,
       0,     0,     8,     0,     0,     0,     0,     9,    10,    11,
      47,    48,    49,    50,    51,     0,    52,    53,    54,    55,
      56,    25,    57,     0,     0,     0,     2,     3,     0,    58,
       0,     0,    59,    25,     0,     0,     0,     0,     2,     3,
       6,     0,     0,     0,     8,     0,     0,     0,     0,     9,
      10,    11,     6,     0,     0,     0,     8,     0,     0,    25,
       0,     9,    10,    11,     2,     3,     0,     0,     0,     0,
       0,    76,    81,     0,    77,    25,     0,     0,     6,     0,
       2,     3,     8,    76,    94,     0,    77,     9,    10,    11,
       0,     0,     0,     0,     6,     0,     0,     0,     8,     0,
       0,     0,     0,     9,    10,    11,     0,     0,    25,    76,
     123,     0,    77,     2,     3,     0,    25,     0,     0,     0,
       0,     2,     3,     0,   158,    76,     0,     6,    77,     0,
       0,     8,     0,     0,     0,     6,     9,    10,    11,     8,
       0,     0,     0,     0,     9,    10,    11,     0,     0,    25,
       0,     0,     0,     0,     2,     3,     0,    25,    76,   168,
       0,    77,     2,     3,     0,     0,    76,   176,     6,    77,
       0,     0,     8,     0,     0,     0,     6,     9,    10,    11,
       8,     0,     0,     0,     0,     9,    10,    11,     0,    25,
       0,     0,     0,     0,     2,     3,     0,     0,   177,    76,
     211,     0,    77,     0,     0,     0,   200,    76,     6,     0,
      77,     0,     8,     0,     0,    25,     0,     9,    10,    11,
       2,     3,     0,     0,     0,     0,     0,    25,     0,     0,
      25,     0,     2,     3,     6,     2,     3,     0,     8,    76,
       0,     0,    77,     9,    10,    11,     6,     0,     0,     6,
       8,     0,     0,     8,     0,     9,    10,    11,     9,    10,
      11,     0,     0,     0,   223,    76,    25,     0,    77,     0,
       0,     2,     3,     0,     0,     0,   234,    76,    25,     0,
      77,     1,    31,     2,     3,     6,     2,     3,     4,     8,
       0,     0,     0,     0,     9,    10,    11,     6,     5,     0,
       6,     8,     7,     0,     8,     0,     9,    10,    11,     9,
      10,    11,     0,     0,     0,   243,    76,    25,     0,    77,
       0,     0,     2,     3,     0,     0,     0,   251,    76,    25,
       0,    77,    22,     0,     2,     3,     6,     2,     3,     0,
       8,     0,     0,     0,     0,     9,    10,    11,     6,     0,
       0,     6,     8,     0,     0,     8,     0,     9,    10,    11,
       9,    10,    11,     0,     0,     0,   253,    76,     0,     1,
      77,     0,     0,     0,     2,     3,     4,   103,     0,    76,
     104,     0,    77,   105,     0,     0,     5,     0,     6,     0,
       0,   134,     8,   135,     0,     1,     0,     9,    10,    11,
       2,     3,     4,   103,     0,     0,   104,     0,     0,   105,
       0,     0,     5,     0,     6,     0,     0,   144,     8,   135,
       0,     1,     0,     9,    10,    11,     2,     3,     4,   103,
       0,     0,   104,     0,     0,   105,     0,     0,     5,     0,
       6,     0,     0,   165,     8,   135,     0,     1,     0,     9,
      10,    11,     2,     3,     4,   103,     0,     0,   104,     0,
       0,   105,     0,     0,     5,     0,     6,     0,     0,   166,
       8,   135,     0,     1,     0,     9,    10,    11,     2,     3,
       4,   103,     0,     0,   104,     0,   186,   105,     0,     0,
       5,     0,     6,     0,     0,     0,     8,   187,     0,     1,
       0,     9,    10,    11,     2,     3,     4,   103,   215,   216,
       0,     0,     0,   105,     0,     0,     5,     0,     6,     0,
       0,     0,     8,   217,     0,     1,     0,     9,    10,    11,
       2,     3,     4,   103,     0,     0,   104,     0,     0,   105,
       0,     0,     5,     0,     6,     0,     0,     0,     8,   106,
       0,     1,     0,     9,    10,    11,     2,     3,     4,   103,
       0,     0,   104,     0,     0,   105,     0,     0,     5,     0,
       6,     0,     0,     0,     8,   170,     0,     1,     0,     9,
      10,    11,     2,     3,     4,   103,     0,     0,     0,     0,
       0,   105,   228,     0,     5,     0,     6,     0,     0,     0,
       8,   229,     0,     1,     0,     9,    10,    11,     2,     3,
       4,   103,     0,   257,     0,     0,     0,   105,     0,     0,
       5,     0,     6,     0,     0,     0,     8,   217,     0,     1,
       0,     9,    10,    11,     2,     3,     4,   103,     0,     0,
       0,     0,     0,   105,     0,     0,     5,     0,     6,     0,
       0,     0,     8,   194,     0,     1,     0,     9,    10,    11,
       2,     3,     4,   103,     0,     0,     0,     0,     0,   105,
       0,     0,     5,     0,     6,     0,     0,     0,     8,   206,
       0,     0,     0,     9,    10,    11,   254,    65,    66,    67,
      68,     2,     3,     0,    25,     0,     0,     0,     0,     2,
       3,     0,     0,     0,     0,     6,     0,     0,     0,     8,
       0,     0,     0,     6,     9,    10,    11,     8,     0,     0,
       0,     0,     9,    10,    11,     0,    47,    48,    49,    50,
      51,     0,    52,    53,    54,    55,    56,     0,    57,     0,
       0,     0,    47,    48,    49,    50,    51,    79,    52,    53,
      54,    55,    56,     0,    57,     0,     0,     0,    47,    48,
      49,    50,    51,    99,    52,    53,    54,    55,    56,     0,
      57
};

static const yytype_int16 yycheck[] =
{
       0,    23,    61,    87,     4,    35,   108,     7,    46,    55,
      32,   113,    58,    13,    56,    35,     0,    17,     0,    78,
      58,    21,     3,     4,     5,     6,     7,     3,    58,    13,
     114,   115,     8,     9,    52,    94,    95,    96,    58,    52,
      40,    56,    42,   145,   146,    46,    22,    69,     3,     4,
      26,    73,     7,    58,   156,    31,    32,    33,    55,    56,
      60,    58,    53,    63,   123,   124,    55,    52,    90,    58,
      57,    57,    72,   175,    74,    75,    46,    53,    52,    44,
      56,    57,    58,     3,    53,    53,    86,    87,     3,    52,
      52,    52,    92,     8,     9,    52,   118,    97,    98,    57,
      11,   101,    58,    15,    58,    58,    58,    22,   108,    52,
      52,    26,    52,   113,   114,   115,    31,    32,    33,    52,
      56,    56,    31,    52,   108,    52,   148,    58,    52,   113,
      52,    52,   132,     3,     4,     5,     6,     7,    53,    58,
      58,    56,    57,    46,    52,   145,   146,    35,    52,     3,
      53,    46,    55,    52,   154,    58,   156,   157,    53,   159,
      55,   145,   146,    58,    58,    52,    52,    52,    52,    52,
      58,    59,   156,    52,    52,   175,    46,     3,    52,   179,
      52,   181,     8,     9,    52,    58,    52,    52,    76,    77,
      31,   175,   192,   193,    82,   179,    22,   197,    15,    57,
      26,   201,    57,    30,    57,    31,    32,    33,   192,    57,
     210,   233,   212,   197,     4,    13,   235,    88,   106,    -1,
      -1,    -1,   222,    -1,   224,    -1,   210,    53,    -1,    -1,
      56,    57,    -1,   108,    -1,   235,   236,   259,   113,    -1,
     128,   108,   264,   131,   244,    -1,   113,   135,   248,    -1,
     250,   235,    -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,    -1,   250,    -1,    -1,    -1,
     145,   146,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
      -1,   156,   170,    -1,    -1,    -1,     3,    -1,    -1,   156,
     178,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,   187,
     175,    -1,    -1,    -1,   179,    22,   194,    -1,   175,    26,
      -1,   199,   179,    -1,    31,    32,    33,   192,   206,    -1,
      -1,    -1,   197,   198,    -1,   192,     3,    -1,    -1,   217,
     197,     8,     9,    -1,    -1,   210,    -1,    -1,    -1,    -1,
      57,   229,     3,   210,    -1,    22,    -1,     8,     9,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,     3,    -1,    -1,
     235,    22,     8,     9,    -1,    26,    -1,    -1,   235,    -1,
      31,    32,    33,    -1,    -1,   250,    22,    54,    55,    -1,
      26,    -1,    -1,   250,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    54,    40,    41,    42,    43,    44,     3,
      46,    -1,    -1,    -1,     8,     9,    -1,    53,    54,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    40,    41,    42,    43,
      44,     3,    46,    -1,    -1,    -1,     8,     9,    -1,    53,
      -1,    -1,    56,     3,    -1,    -1,    -1,    -1,     8,     9,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,    22,    -1,    -1,    -1,    26,    -1,    -1,     3,
      -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    56,     3,    -1,    -1,    22,    -1,
       8,     9,    26,    53,    54,    -1,    56,    31,    32,    33,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,    -1,     3,    53,
      54,    -1,    56,     8,     9,    -1,     3,    -1,    -1,    -1,
      -1,     8,     9,    -1,    52,    53,    -1,    22,    56,    -1,
      -1,    26,    -1,    -1,    -1,    22,    31,    32,    33,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    -1,     3,
      -1,    -1,    -1,    -1,     8,     9,    -1,     3,    53,    54,
      -1,    56,     8,     9,    -1,    -1,    53,    54,    22,    56,
      -1,    -1,    26,    -1,    -1,    -1,    22,    31,    32,    33,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,     3,
      -1,    -1,    -1,    -1,     8,     9,    -1,    -1,    52,    53,
      14,    -1,    56,    -1,    -1,    -1,    52,    53,    22,    -1,
      56,    -1,    26,    -1,    -1,     3,    -1,    31,    32,    33,
       8,     9,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
       3,    -1,     8,     9,    22,     8,     9,    -1,    26,    53,
      -1,    -1,    56,    31,    32,    33,    22,    -1,    -1,    22,
      26,    -1,    -1,    26,    -1,    31,    32,    33,    31,    32,
      33,    -1,    -1,    -1,    52,    53,     3,    -1,    56,    -1,
      -1,     8,     9,    -1,    -1,    -1,    52,    53,     3,    -1,
      56,     3,    55,     8,     9,    22,     8,     9,    10,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    22,    20,    -1,
      22,    26,    24,    -1,    26,    -1,    31,    32,    33,    31,
      32,    33,    -1,    -1,    -1,    52,    53,     3,    -1,    56,
      -1,    -1,     8,     9,    -1,    -1,    -1,    52,    53,     3,
      -1,    56,     3,    -1,     8,     9,    22,     8,     9,    -1,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    22,    -1,
      -1,    22,    26,    -1,    -1,    26,    -1,    31,    32,    33,
      31,    32,    33,    -1,    -1,    -1,    52,    53,    -1,     3,
      56,    -1,    -1,    -1,     8,     9,    10,    11,    -1,    53,
      14,    -1,    56,    17,    -1,    -1,    20,    -1,    22,    -1,
      -1,    25,    26,    27,    -1,     3,    -1,    31,    32,    33,
       8,     9,    10,    11,    -1,    -1,    14,    -1,    -1,    17,
      -1,    -1,    20,    -1,    22,    -1,    -1,    25,    26,    27,
      -1,     3,    -1,    31,    32,    33,     8,     9,    10,    11,
      -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    20,    -1,
      22,    -1,    -1,    25,    26,    27,    -1,     3,    -1,    31,
      32,    33,     8,     9,    10,    11,    -1,    -1,    14,    -1,
      -1,    17,    -1,    -1,    20,    -1,    22,    -1,    -1,    25,
      26,    27,    -1,     3,    -1,    31,    32,    33,     8,     9,
      10,    11,    -1,    -1,    14,    -1,    16,    17,    -1,    -1,
      20,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,     3,
      -1,    31,    32,    33,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    17,    -1,    -1,    20,    -1,    22,    -1,
      -1,    -1,    26,    27,    -1,     3,    -1,    31,    32,    33,
       8,     9,    10,    11,    -1,    -1,    14,    -1,    -1,    17,
      -1,    -1,    20,    -1,    22,    -1,    -1,    -1,    26,    27,
      -1,     3,    -1,    31,    32,    33,     8,     9,    10,    11,
      -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    20,    -1,
      22,    -1,    -1,    -1,    26,    27,    -1,     3,    -1,    31,
      32,    33,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    -1,
      26,    27,    -1,     3,    -1,    31,    32,    33,     8,     9,
      10,    11,    -1,    13,    -1,    -1,    -1,    17,    -1,    -1,
      20,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,     3,
      -1,    31,    32,    33,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    20,    -1,    22,    -1,
      -1,    -1,    26,    27,    -1,     3,    -1,    31,    32,    33,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    20,    -1,    22,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    32,    33,     3,     4,     5,     6,
       7,     8,     9,    -1,     3,    -1,    -1,    -1,    -1,     8,
       9,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    22,    31,    32,    33,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    34,    35,    36,    37,
      38,    -1,    40,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    55,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    55,    40,    41,    42,    43,    44,    -1,
      46
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     8,     9,    10,    20,    22,    24,    26,    31,
      32,    33,    65,    66,    67,    68,    69,    71,    72,    73,
      85,    56,     3,    69,    85,     3,    85,     0,    67,    73,
      52,    55,    85,    52,    46,    53,    55,    58,    70,    85,
      56,    70,    53,    52,    52,    55,    70,    34,    35,    36,
      37,    38,    40,    41,    42,    43,    44,    46,    53,    56,
      84,    85,    86,    84,     3,     4,     5,     6,     7,    57,
      85,    54,    74,    85,    84,    84,    53,    56,    85,    55,
      86,    54,    46,    70,    57,    35,    58,    75,    54,    55,
      85,    55,    56,    70,    54,    57,    54,    84,    84,    55,
      86,    84,    44,    11,    14,    17,    27,    67,    76,    77,
      79,    81,    85,    76,    58,    75,    55,    70,    57,    85,
      86,    86,    86,    54,    57,     3,     4,     7,    53,     3,
      82,    53,    84,    52,    25,    27,    67,    77,    79,    81,
      52,    52,    52,    58,    25,    76,    76,    70,    57,    86,
      86,    58,    58,    58,    84,    15,    58,    84,    52,    84,
      52,    52,    52,    52,    46,    25,    25,    70,    54,    56,
      27,    67,    77,    79,    81,    83,    54,    52,    56,    58,
      31,    84,    52,    52,    52,    52,    16,    27,    67,    77,
      79,    81,    58,    84,    27,    67,    77,    78,    79,    58,
      52,    84,    52,    52,    52,    52,    27,    67,    77,    79,
      80,    14,    84,    52,    52,    12,    13,    27,    67,    77,
      79,    77,    84,    52,    84,    52,    52,    52,    18,    27,
      67,    77,    79,     3,    52,    58,    84,    52,    52,    52,
      52,    57,    58,    52,    84,    52,    52,    52,    58,    70,
      78,    52,    31,    52,     3,    85,    15,    13,    57,    57,
      85,    70,    30,    85,    57,    70
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    65,    66,    66,    66,    66,    67,    67,
      67,    67,    67,    68,    69,    69,    70,    70,    70,    70,
      70,    71,    71,    71,    71,    71,    71,    72,    73,    73,
      73,    73,    74,    74,    74,    74,    74,    74,    74,    75,
      75,    75,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    77,    77,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    80,    80,    80,    80,    80,    80,    80,
      80,    81,    81,    81,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    85,    85,    85,    85,    85,    85,    85,
      85,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     3,     2,     3,     1,     1,
       1,     1,     1,     3,     3,     6,     2,     2,     2,     2,
       2,     2,     2,     5,     3,     2,     3,     4,     7,     8,
       7,     8,     2,     4,     5,     2,     3,     2,     3,     4,
       4,     4,     2,     3,     2,     3,     2,     3,     2,     3,
       3,     4,     7,    10,     2,     3,     2,     3,     3,     3,
       3,     4,     7,     2,     3,     2,     3,     2,     3,     3,
       4,     5,    11,    14,     9,     7,     2,     3,     2,     3,
       2,     3,     2,     3,     3,     4,     1,     1,     2,     2,
       3,     4,     3,     4,     2,     3,     3,     3,     4,     4,
       5,     4,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
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
#line 120 "parcer.y"
  {
	if (yyerror_count == 0) {
		puts(c_prologue);
		printf("%s\n", (yyvsp[0].str));
	}
  }
#line 1519 "parcer.tab.c"
    break;

  case 4: /* program_body: expression DEL_QUEST  */
#line 128 "parcer.y"
                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1525 "parcer.tab.c"
    break;

  case 5: /* program_body: program_body expression DEL_QUEST  */
#line 129 "parcer.y"
                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1531 "parcer.tab.c"
    break;

  case 6: /* program_body: make_fcn DEL_QUEST  */
#line 130 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str)); }
#line 1537 "parcer.tab.c"
    break;

  case 7: /* program_body: program_body make_fcn DEL_QUEST  */
#line 131 "parcer.y"
                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1543 "parcer.tab.c"
    break;

  case 12: /* expression: KW_continue  */
#line 140 "parcer.y"
                {(yyval.str) = template(" continue");}
#line 1549 "parcer.tab.c"
    break;

  case 13: /* constant: KW_const assignment var_type  */
#line 145 "parcer.y"
                                         {(yyval.str) = template("const %s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 1555 "parcer.tab.c"
    break;

  case 14: /* assignment: attribute OP_EQUAL right_part  */
#line 148 "parcer.y"
                                                                                        {(yyval.str) = template("%s = %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1561 "parcer.tab.c"
    break;

  case 15: /* assignment: T_ID DEL_LBRAC attribute DEL_RBRAC OP_EQUAL right_part  */
#line 149 "parcer.y"
                                                                {(yyval.str) = template("%s[%s] = %s", (yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[0].str));}
#line 1567 "parcer.tab.c"
    break;

  case 16: /* var_type: DEL_DOTS KW_str  */
#line 152 "parcer.y"
                        {(yyval.str) = template("char* ");}
#line 1573 "parcer.tab.c"
    break;

  case 17: /* var_type: DEL_DOTS KW_integer  */
#line 153 "parcer.y"
                        {(yyval.str) = template("int "); }
#line 1579 "parcer.tab.c"
    break;

  case 18: /* var_type: DEL_DOTS T_ID  */
#line 154 "parcer.y"
                                {(yyval.str) = template("%s ", (yyvsp[0].str));}
#line 1585 "parcer.tab.c"
    break;

  case 19: /* var_type: DEL_DOTS KW_boolean  */
#line 155 "parcer.y"
                        {(yyval.str) = template("int ");}
#line 1591 "parcer.tab.c"
    break;

  case 20: /* var_type: DEL_DOTS KW_scalar  */
#line 156 "parcer.y"
                        {(yyval.str) = template("double");}
#line 1597 "parcer.tab.c"
    break;

  case 21: /* declaration: attribute var_type  */
#line 161 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 1603 "parcer.tab.c"
    break;

  case 22: /* declaration: attribute DEL_COMMA  */
#line 162 "parcer.y"
                                                                                {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 1609 "parcer.tab.c"
    break;

  case 23: /* declaration: T_ID DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 163 "parcer.y"
                                                        {(yyval.str) = template("%s%s[%s]", (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-2].str));}
#line 1615 "parcer.tab.c"
    break;

  case 24: /* declaration: declaration attribute var_type  */
#line 164 "parcer.y"
                                                                        {(yyval.str) = template("%s%s%s", (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1621 "parcer.tab.c"
    break;

  case 25: /* declaration: declaration DEL_COMMA  */
#line 165 "parcer.y"
                                                                                {(yyval.str) = template("%s, ",  (yyvsp[-1].str));}
#line 1627 "parcer.tab.c"
    break;

  case 26: /* declaration: declaration attribute DEL_COMMA  */
#line 166 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1633 "parcer.tab.c"
    break;

  case 27: /* fcn_call: attribute DEL_LPAR right_part DEL_RPAR  */
#line 171 "parcer.y"
                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1639 "parcer.tab.c"
    break;

  case 28: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR DEL_DOTS fcn_body KW_enddef  */
#line 176 "parcer.y"
                                                                                                                {(yyval.str) = template("\nvoid %s()\n{\n%s}", (yyvsp[-5].str), (yyvsp[-1].str));}
#line 1645 "parcer.tab.c"
    break;

  case 29: /* make_fcn: KW_def attribute DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS fcn_body KW_enddef  */
#line 177 "parcer.y"
                                                                                                {(yyval.str) = template("\nvoid %s(%s)\n{\n%s}",(yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1651 "parcer.tab.c"
    break;

  case 30: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR fcn_ret_type fcn_body KW_enddef  */
#line 178 "parcer.y"
                                                                                                                {(yyval.str) = template("\n%s%s()\n{\n%s}", (yyvsp[-2].str), (yyvsp[-5].str), (yyvsp[-1].str));}
#line 1657 "parcer.tab.c"
    break;

  case 31: /* make_fcn: KW_def attribute DEL_LPAR fcn_arguments DEL_RPAR fcn_ret_type fcn_body KW_enddef  */
#line 179 "parcer.y"
                                                                                                {(yyval.str) = template("\n%s%s(%s)\n{\n%s}", (yyvsp[-2].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1663 "parcer.tab.c"
    break;

  case 32: /* fcn_arguments: attribute var_type  */
#line 182 "parcer.y"
                                                                                                {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 1669 "parcer.tab.c"
    break;

  case 33: /* fcn_arguments: attribute DEL_LBRAC DEL_RBRAC var_type  */
#line 183 "parcer.y"
                                                                        {(yyval.str) = template("%s*%s", (yyvsp[0].str), (yyvsp[-3].str));}
#line 1675 "parcer.tab.c"
    break;

  case 34: /* fcn_arguments: attribute DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 184 "parcer.y"
                                                        {(yyval.str) = template("%s*%s", (yyvsp[0].str), (yyvsp[-4].str));}
#line 1681 "parcer.tab.c"
    break;

  case 35: /* fcn_arguments: attribute DEL_COMMA  */
#line 185 "parcer.y"
                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 1687 "parcer.tab.c"
    break;

  case 36: /* fcn_arguments: fcn_arguments attribute var_type  */
#line 186 "parcer.y"
                                                                        {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-1].str));}
#line 1693 "parcer.tab.c"
    break;

  case 37: /* fcn_arguments: fcn_arguments DEL_COMMA  */
#line 187 "parcer.y"
                                                                                {(yyval.str) = template("%s, ",  (yyvsp[-1].str));}
#line 1699 "parcer.tab.c"
    break;

  case 38: /* fcn_arguments: fcn_arguments attribute DEL_COMMA  */
#line 188 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1705 "parcer.tab.c"
    break;

  case 39: /* fcn_ret_type: OP_MINUS OP_GREATER KW_integer DEL_DOTS  */
#line 191 "parcer.y"
                                                {(yyval.str) = template("int "); }
#line 1711 "parcer.tab.c"
    break;

  case 40: /* fcn_ret_type: OP_MINUS OP_GREATER KW_boolean DEL_DOTS  */
#line 192 "parcer.y"
                                                {(yyval.str) = template("int "); }
#line 1717 "parcer.tab.c"
    break;

  case 41: /* fcn_ret_type: OP_MINUS OP_GREATER T_ID DEL_DOTS  */
#line 193 "parcer.y"
                                                {(yyval.str) = template("%s ", (yyvsp[-1].str));}
#line 1723 "parcer.tab.c"
    break;

  case 42: /* fcn_body: expression DEL_QUEST  */
#line 196 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1729 "parcer.tab.c"
    break;

  case 43: /* fcn_body: fcn_body expression DEL_QUEST  */
#line 197 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1735 "parcer.tab.c"
    break;

  case 44: /* fcn_body: if_statement DEL_QUEST  */
#line 198 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1741 "parcer.tab.c"
    break;

  case 45: /* fcn_body: fcn_body if_statement DEL_QUEST  */
#line 199 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1747 "parcer.tab.c"
    break;

  case 46: /* fcn_body: while_statement DEL_QUEST  */
#line 200 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1753 "parcer.tab.c"
    break;

  case 47: /* fcn_body: fcn_body while_statement DEL_QUEST  */
#line 201 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1759 "parcer.tab.c"
    break;

  case 48: /* fcn_body: for_statement DEL_QUEST  */
#line 202 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1765 "parcer.tab.c"
    break;

  case 49: /* fcn_body: fcn_body for_statement DEL_QUEST  */
#line 203 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1771 "parcer.tab.c"
    break;

  case 50: /* fcn_body: KW_return right_part DEL_QUEST  */
#line 204 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 1777 "parcer.tab.c"
    break;

  case 51: /* fcn_body: fcn_body KW_return right_part DEL_QUEST  */
#line 205 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1783 "parcer.tab.c"
    break;

  case 52: /* if_statement: KW_if DEL_LPAR right_part DEL_RPAR DEL_DOTS if_body KW_endif  */
#line 210 "parcer.y"
                                                                                                                        {(yyval.str) = template("if (%s){\n%s}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1789 "parcer.tab.c"
    break;

  case 53: /* if_statement: KW_if DEL_LPAR right_part DEL_RPAR DEL_DOTS if_body KW_else DEL_DOTS if_body KW_endif  */
#line 211 "parcer.y"
                                                                                                {(yyval.str) = template("if (%s){\n%s}else{\n%s}", (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1795 "parcer.tab.c"
    break;

  case 54: /* if_body: expression DEL_QUEST  */
#line 214 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1801 "parcer.tab.c"
    break;

  case 55: /* if_body: if_body expression DEL_QUEST  */
#line 215 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1807 "parcer.tab.c"
    break;

  case 56: /* if_body: if_statement DEL_QUEST  */
#line 216 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1813 "parcer.tab.c"
    break;

  case 57: /* if_body: if_body if_statement DEL_QUEST  */
#line 217 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1819 "parcer.tab.c"
    break;

  case 58: /* if_body: while_statement if_statement DEL_QUEST  */
#line 218 "parcer.y"
                                                {(yyval.str) = template("%s\n", (yyvsp[-2].str));}
#line 1825 "parcer.tab.c"
    break;

  case 59: /* if_body: if_body while_statement DEL_QUEST  */
#line 219 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1831 "parcer.tab.c"
    break;

  case 60: /* if_body: KW_return right_part DEL_QUEST  */
#line 220 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 1837 "parcer.tab.c"
    break;

  case 61: /* if_body: if_body KW_return right_part DEL_QUEST  */
#line 221 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1843 "parcer.tab.c"
    break;

  case 62: /* while_statement: KW_while DEL_LPAR right_part DEL_RPAR DEL_DOTS while_body KW_endwhile  */
#line 225 "parcer.y"
                                                                              {(yyval.str) = template("while (%s){\n%s}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1849 "parcer.tab.c"
    break;

  case 63: /* while_body: expression DEL_QUEST  */
#line 228 "parcer.y"
                                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1855 "parcer.tab.c"
    break;

  case 64: /* while_body: while_body expression DEL_QUEST  */
#line 229 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1861 "parcer.tab.c"
    break;

  case 65: /* while_body: if_statement DEL_QUEST  */
#line 230 "parcer.y"
                                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1867 "parcer.tab.c"
    break;

  case 66: /* while_body: while_body if_statement DEL_QUEST  */
#line 231 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1873 "parcer.tab.c"
    break;

  case 67: /* while_body: while_statement DEL_QUEST  */
#line 232 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1879 "parcer.tab.c"
    break;

  case 68: /* while_body: while_body while_statement DEL_QUEST  */
#line 233 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1885 "parcer.tab.c"
    break;

  case 69: /* while_body: KW_return right_part DEL_QUEST  */
#line 234 "parcer.y"
                                                                {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 1891 "parcer.tab.c"
    break;

  case 70: /* while_body: while_body KW_return right_part DEL_QUEST  */
#line 235 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1897 "parcer.tab.c"
    break;

  case 71: /* for_statement: KW_for for_arguments DEL_DOTS for_body KW_endfor  */
#line 240 "parcer.y"
                                                                                                                                                                {(yyval.str) = template("for (%s){\n%s}", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1903 "parcer.tab.c"
    break;

  case 72: /* for_statement: attribute DEL_DOTS OP_EQUAL DEL_LBRAC right_part KW_for T_ID DEL_DOTS attribute DEL_RBRAC var_type  */
#line 241 "parcer.y"
                                                                                                                {(yyval.str) = template("%s %s = ( %s)malloc(%s*sizeof( %s));\nfor(int %s = 0; %s < %s; %s++){\n%s[%s] = %s;\n}", (yyvsp[0].str), (yyvsp[-10].str), (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[-10].str), (yyvsp[-4].str), (yyvsp[-6].str));}
#line 1909 "parcer.tab.c"
    break;

  case 73: /* for_statement: attribute DEL_DOTS OP_EQUAL DEL_LBRAC right_part KW_for T_ID var_type KW_in attribute KW_of attribute DEL_RBRAC var_type  */
#line 242 "parcer.y"
                                                                                                                                 {(yyval.str) = template("%s* %s = ( %s)malloc(%s*sizeof( %s));\nfor(int %s_i = 0; %s_i < %s; %s++){\n%s[%s] = %s[%s_i];\n%s[%s_i] = %s\n}", (yyvsp[0].str), (yyvsp[-13].str), (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[0].str), (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-13].str), (yyvsp[-4].str), (yyvsp[-9].str));}
#line 1915 "parcer.tab.c"
    break;

  case 74: /* for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS right_part DEL_DOTS T_INT DEL_RBRAC  */
#line 245 "parcer.y"
                                                                                {(yyval.str) = template("int %s = %s; %s < %s; %s += %s", (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-8].str), (yyvsp[-3].str), (yyvsp[-8].str), (yyvsp[-1].str));}
#line 1921 "parcer.tab.c"
    break;

  case 75: /* for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS right_part DEL_RBRAC  */
#line 246 "parcer.y"
                                                                                        {(yyval.str) = template("int %s = %s; %s < %s; %s += 1", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-6].str), (yyvsp[-1].str), (yyvsp[-6].str));}
#line 1927 "parcer.tab.c"
    break;

  case 76: /* for_body: expression DEL_QUEST  */
#line 249 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1933 "parcer.tab.c"
    break;

  case 77: /* for_body: for_body expression DEL_QUEST  */
#line 250 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1939 "parcer.tab.c"
    break;

  case 78: /* for_body: if_statement DEL_QUEST  */
#line 251 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1945 "parcer.tab.c"
    break;

  case 79: /* for_body: for_body if_statement DEL_QUEST  */
#line 252 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1951 "parcer.tab.c"
    break;

  case 80: /* for_body: while_statement DEL_QUEST  */
#line 253 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1957 "parcer.tab.c"
    break;

  case 81: /* for_body: for_body while_statement DEL_QUEST  */
#line 254 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1963 "parcer.tab.c"
    break;

  case 82: /* for_body: for_statement DEL_QUEST  */
#line 255 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1969 "parcer.tab.c"
    break;

  case 83: /* for_body: for_body for_statement DEL_QUEST  */
#line 256 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1975 "parcer.tab.c"
    break;

  case 84: /* for_body: KW_return right_part DEL_QUEST  */
#line 257 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 1981 "parcer.tab.c"
    break;

  case 85: /* for_body: for_body KW_return right_part DEL_QUEST  */
#line 258 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1987 "parcer.tab.c"
    break;

  case 88: /* right_part: attribute operator  */
#line 265 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1993 "parcer.tab.c"
    break;

  case 89: /* right_part: attribute DEL_COMMA  */
#line 266 "parcer.y"
                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 1999 "parcer.tab.c"
    break;

  case 90: /* right_part: DEL_LPAR right_part DEL_RPAR  */
#line 267 "parcer.y"
                                                                                {(yyval.str) = template("(%s)", (yyvsp[-1].str));}
#line 2005 "parcer.tab.c"
    break;

  case 91: /* right_part: DEL_LPAR right_part DEL_RPAR operator  */
#line 268 "parcer.y"
                                                                        {(yyval.str) = template("(%s)%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2011 "parcer.tab.c"
    break;

  case 92: /* right_part: DEL_LBRAC right_part DEL_RBRAC  */
#line 269 "parcer.y"
                                                                                {(yyval.str) = template("[%s]", (yyvsp[-1].str));}
#line 2017 "parcer.tab.c"
    break;

  case 93: /* right_part: DEL_LBRAC right_part DEL_RBRAC operator  */
#line 270 "parcer.y"
                                                                {(yyval.str) = template("[%s]%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2023 "parcer.tab.c"
    break;

  case 94: /* right_part: right_part attribute  */
#line 271 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 2029 "parcer.tab.c"
    break;

  case 95: /* right_part: right_part attribute operator  */
#line 272 "parcer.y"
                                                                                {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str));}
#line 2035 "parcer.tab.c"
    break;

  case 96: /* right_part: right_part attribute DEL_COMMA  */
#line 273 "parcer.y"
                                                                                {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2041 "parcer.tab.c"
    break;

  case 97: /* right_part: right_part DEL_LPAR DEL_RPAR  */
#line 274 "parcer.y"
                                                                                {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 2047 "parcer.tab.c"
    break;

  case 98: /* right_part: right_part DEL_LPAR DEL_RPAR operator  */
#line 275 "parcer.y"
                                                                        {(yyval.str) = template("%s()%s", (yyvsp[-3].str), (yyvsp[0].str));}
#line 2053 "parcer.tab.c"
    break;

  case 99: /* right_part: right_part DEL_LPAR right_part DEL_RPAR  */
#line 276 "parcer.y"
                                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2059 "parcer.tab.c"
    break;

  case 100: /* right_part: right_part DEL_LPAR right_part DEL_RPAR operator  */
#line 277 "parcer.y"
                                                        {(yyval.str) = template("%s(%s)%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2065 "parcer.tab.c"
    break;

  case 101: /* right_part: right_part DEL_LBRAC right_part DEL_RBRAC  */
#line 278 "parcer.y"
                                                                {(yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2071 "parcer.tab.c"
    break;

  case 102: /* right_part: right_part DEL_LBRAC right_part DEL_RBRAC operator  */
#line 279 "parcer.y"
                                                        {(yyval.str) = template("%s[%s]%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2077 "parcer.tab.c"
    break;

  case 107: /* attribute: KW_main  */
#line 286 "parcer.y"
                {(yyval.str) = template("main");}
#line 2083 "parcer.tab.c"
    break;

  case 108: /* attribute: KW_True  */
#line 287 "parcer.y"
                {(yyval.str) = template("True");}
#line 2089 "parcer.tab.c"
    break;

  case 109: /* attribute: KW_False  */
#line 288 "parcer.y"
                {(yyval.str) = template("False");}
#line 2095 "parcer.tab.c"
    break;

  case 110: /* attribute: KW_and  */
#line 289 "parcer.y"
                {(yyval.str) = template(" and ");}
#line 2101 "parcer.tab.c"
    break;

  case 111: /* operator: OP_MINUS  */
#line 292 "parcer.y"
                        {(yyval.str) = template(" - ");}
#line 2107 "parcer.tab.c"
    break;

  case 112: /* operator: OP_PLUS  */
#line 293 "parcer.y"
                        {(yyval.str) = template(" + ");}
#line 2113 "parcer.tab.c"
    break;

  case 113: /* operator: OP_MUL  */
#line 294 "parcer.y"
                        {(yyval.str) = template("*");}
#line 2119 "parcer.tab.c"
    break;

  case 114: /* operator: OP_DIV  */
#line 295 "parcer.y"
                        {(yyval.str) = template(" %s ", "/");}
#line 2125 "parcer.tab.c"
    break;

  case 115: /* operator: OP_GREATER  */
#line 296 "parcer.y"
                {(yyval.str) = template(" > ");}
#line 2131 "parcer.tab.c"
    break;

  case 116: /* operator: OP_EQUAL  */
#line 297 "parcer.y"
                {(yyval.str) = template(" = ");}
#line 2137 "parcer.tab.c"
    break;

  case 117: /* operator: OP_LESS  */
#line 298 "parcer.y"
                        {(yyval.str) = template(" < ");}
#line 2143 "parcer.tab.c"
    break;

  case 118: /* operator: OP_LEQ  */
#line 299 "parcer.y"
                        {(yyval.str) = template(" <= ");}
#line 2149 "parcer.tab.c"
    break;

  case 119: /* operator: OP_EQ  */
#line 300 "parcer.y"
                        {(yyval.str) = template(" == ");}
#line 2155 "parcer.tab.c"
    break;

  case 120: /* operator: OP_MOD  */
#line 301 "parcer.y"
                        {(yyval.str) = template(" %s ", "%"); }
#line 2161 "parcer.tab.c"
    break;

  case 121: /* operator: OP_NOTEQ  */
#line 302 "parcer.y"
                {(yyval.str) = template(" != ");}
#line 2167 "parcer.tab.c"
    break;


#line 2171 "parcer.tab.c"

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

#line 306 "parcer.y"

int main(){
	if (yyparse() == 0)
		printf("Accepted\n");
	else
		printf("Rejected\n");
}
