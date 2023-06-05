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
  YYSYMBOL_COMM_STR = 61,                  /* COMM_STR  */
  YYSYMBOL_NEW_LINE = 62,                  /* NEW_LINE  */
  YYSYMBOL_63_ = 63,                       /* '*'  */
  YYSYMBOL_64_ = 64,                       /* '/'  */
  YYSYMBOL_YYACCEPT = 65,                  /* $accept  */
  YYSYMBOL_program_start = 66,             /* program_start  */
  YYSYMBOL_program_body = 67,              /* program_body  */
  YYSYMBOL_expression = 68,                /* expression  */
  YYSYMBOL_constant = 69,                  /* constant  */
  YYSYMBOL_assignment = 70,                /* assignment  */
  YYSYMBOL_var_type = 71,                  /* var_type  */
  YYSYMBOL_declaration = 72,               /* declaration  */
  YYSYMBOL_fcn_call = 73,                  /* fcn_call  */
  YYSYMBOL_make_fcn = 74,                  /* make_fcn  */
  YYSYMBOL_fcn_arguments = 75,             /* fcn_arguments  */
  YYSYMBOL_fcn_ret_type = 76,              /* fcn_ret_type  */
  YYSYMBOL_fcn_body = 77,                  /* fcn_body  */
  YYSYMBOL_if_statement = 78,              /* if_statement  */
  YYSYMBOL_if_body = 79,                   /* if_body  */
  YYSYMBOL_while_statement = 80,           /* while_statement  */
  YYSYMBOL_while_body = 81,                /* while_body  */
  YYSYMBOL_for_statement = 82,             /* for_statement  */
  YYSYMBOL_for_arguments = 83,             /* for_arguments  */
  YYSYMBOL_for_body = 84,                  /* for_body  */
  YYSYMBOL_comp_statement = 85,            /* comp_statement  */
  YYSYMBOL_comp_declarations = 86,         /* comp_declarations  */
  YYSYMBOL_comp_declaration_init = 87,     /* comp_declaration_init  */
  YYSYMBOL_comp_declaration = 88,          /* comp_declaration  */
  YYSYMBOL_comp_functions = 89,            /* comp_functions  */
  YYSYMBOL_comp_function = 90,             /* comp_function  */
  YYSYMBOL_comp_fcn_arguments = 91,        /* comp_fcn_arguments  */
  YYSYMBOL_comp_function_body = 92,        /* comp_function_body  */
  YYSYMBOL_comp_assignment = 93,           /* comp_assignment  */
  YYSYMBOL_comp_fcn_call = 94,             /* comp_fcn_call  */
  YYSYMBOL_right_part = 95,                /* right_part  */
  YYSYMBOL_attribute = 96,                 /* attribute  */
  YYSYMBOL_operator = 97                   /* operator  */
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
#define YYLAST   1724

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  170
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  370

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   317


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
       2,     2,    63,     2,     2,     2,     2,    64,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   138,   138,   139,   148,   149,   150,   151,   152,   153,
     158,   159,   160,   161,   162,   167,   170,   171,   174,   175,
     176,   177,   178,   183,   184,   185,   186,   187,   188,   193,
     198,   199,   200,   201,   202,   205,   206,   207,   208,   209,
     210,   211,   214,   215,   216,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   233,   234,   237,   238,   239,
     240,   241,   242,   243,   244,   248,   251,   252,   253,   254,
     255,   256,   257,   258,   263,   264,   265,   268,   269,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   286,
     293,   294,   297,   298,   299,   300,   301,   302,   306,   307,
     308,   309,   310,   311,   315,   316,   320,   321,   322,   323,
     324,   325,   329,   330,   331,   332,   333,   336,   337,   338,
     339,   340,   341,   342,   343,   347,   348,   349,   350,   353,
     354,   355,   356,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402
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
  "DEL_DOTS", "DEL_DOT", "DEL_HASHTAG", "COMM_STR", "NEW_LINE", "'*'",
  "'/'", "$accept", "program_start", "program_body", "expression",
  "constant", "assignment", "var_type", "declaration", "fcn_call",
  "make_fcn", "fcn_arguments", "fcn_ret_type", "fcn_body", "if_statement",
  "if_body", "while_statement", "while_body", "for_statement",
  "for_arguments", "for_body", "comp_statement", "comp_declarations",
  "comp_declaration_init", "comp_declaration", "comp_functions",
  "comp_function", "comp_fcn_arguments", "comp_function_body",
  "comp_assignment", "comp_fcn_call", "right_part", "attribute",
  "operator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-232)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-151)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     882,   -20,  -232,  -232,   411,  -232,  -232,  1634,  -232,    17,
    -232,  -232,  -232,  -232,    40,   882,     5,  -232,  -232,    34,
    -232,    19,    60,    98,  1634,    58,    64,    78,  -232,    79,
      75,  -232,    91,    93,    95,  -232,  -232,   -37,  -232,  -232,
     465,   465,  -232,   166,  -232,    80,  1634,  -232,  1515,    86,
    -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,
    -232,  -232,  -232,  -232,  -232,  -232,  -232,   465,   465,  1320,
    1645,  -232,   921,  -232,  -232,  -232,  -232,  -232,    15,   100,
     -29,    94,   128,   155,   -21,   109,   103,   929,   962,   423,
     465,  1661,  -232,  -232,  -232,   465,  -232,   120,   123,   519,
     719,   -13,  -232,    73,  -232,  1548,  -232,   141,   171,   125,
      53,   133,  -232,   201,  1677,  1677,  1677,   994,  1002,  -232,
    -232,  1320,   106,   154,   207,   158,  -232,   465,   142,   545,
     165,   177,   178,   145,   577,   719,   719,  -232,  -232,    64,
     162,   173,  1634,   174,   183,  -232,  -232,   179,  -232,   167,
    -232,  -232,  -232,  1677,  1677,   181,   182,   184,   465,   228,
     187,   465,  1034,  -232,  -232,   465,   194,   200,   208,   209,
    -232,  -232,  -232,    28,  -232,   603,   635,  -232,    64,   210,
    1556,  -232,   204,   212,   205,  -232,  -232,  -232,  -232,  -232,
    1066,   214,   751,  1074,  -232,  1107,  -232,  -232,  -232,  -232,
     215,  -232,  -232,  -232,    64,    12,  1346,    64,   216,   241,
     465,   221,   223,   224,   225,   661,   220,  -232,   465,   227,
    1382,  1587,    43,   231,   835,   230,  1139,  -232,  -232,  -232,
    -232,  -232,   465,   233,   243,   246,   247,   867,  1171,    85,
    -232,   297,   249,   251,  1394,    24,   252,  1425,  1437,  1587,
     465,   253,   256,   693,   300,   465,  -232,  1197,  -232,  -232,
    -232,  -232,   465,   260,   261,   262,   777,   312,  1603,   -45,
    -232,  -232,  -232,   264,   265,    59,   267,  -232,   319,  -232,
    -232,  -232,  1468,  1480,  1212,  -232,  -232,   266,  -232,   465,
     271,   273,   274,   275,   156,  -232,  1251,  -232,  -232,  -232,
    -232,   465,   276,   278,   279,   277,  -232,  1500,  -232,  1634,
    1618,     2,  -232,  -232,  -232,  -232,   -36,  -232,  -232,  -232,
     835,  1266,  -232,  -232,  -232,  -232,  -232,   301,  -232,  1305,
    -232,  -232,  -232,   913,   321,  -232,  -232,  1634,   283,  -232,
    -232,  1512,   281,   336,  -232,  1634,     2,   809,  -232,   285,
    -232,   291,   293,  1634,  1677,  -232,  -232,   287,  -232,  -232,
    -232,  -232,    64,   324,  -232,  -232,  1634,   294,    64,  -232
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,   150,   155,   156,     0,    14,   157,     0,   154,     0,
     151,   153,   152,   158,     0,     3,     0,    10,    12,    11,
      13,     0,     0,     0,     0,   150,     0,     0,   150,     0,
       0,     1,     0,     0,     0,     4,    27,     0,     6,     8,
       0,     0,    24,     0,    23,     0,     0,    15,     0,     0,
       5,     7,     9,    28,    26,   160,   159,   161,   162,   168,
     167,   169,   165,   166,   163,   164,   170,     0,     0,    16,
     133,   134,     0,    20,    19,    22,    18,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   141,   136,   135,    29,     0,    25,     0,     0,     0,
       0,     0,    40,     0,    38,     0,    35,     0,     0,     0,
       0,     0,    90,     0,   137,   139,   144,     0,     0,   143,
     142,    17,     0,     0,     0,     0,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    39,     0,
       0,    93,     0,    92,     0,    91,    89,     0,   104,     0,
     138,   140,   145,   146,   148,     0,     0,     0,     0,     0,
       0,     0,     0,    45,    31,     0,     0,     0,     0,     0,
      47,    49,    51,     0,    33,     0,     0,    36,     0,     0,
       0,   105,    96,     0,    95,   147,   149,    44,    42,    43,
       0,     0,     0,     0,    53,     0,    46,    48,    50,    52,
       0,    32,    34,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     0,    94,
       0,     0,     0,    97,     0,     0,     0,    79,    81,    83,
      85,    74,     0,     0,     0,     0,     0,     0,     0,   150,
     106,   158,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,    80,    82,
      84,    86,     0,     0,     0,     0,     0,     0,     0,     0,
     123,   121,   108,     0,     0,     0,     0,   117,     0,   119,
     109,   107,     0,     0,     0,    57,    59,     0,    55,     0,
       0,     0,     0,     0,     0,    88,     0,    66,    68,    70,
      65,     0,     0,     0,     0,     0,   129,     0,   112,     0,
       0,     0,   124,   122,   118,   120,     0,   110,   111,    63,
       0,     0,    58,    60,    62,    61,    78,     0,    72,     0,
      67,    69,    71,     0,     0,   131,   115,   158,     0,   125,
     130,     0,     0,     0,   127,     0,     0,     0,    64,     0,
      73,    20,     0,     0,   113,   116,   132,     0,   126,   128,
      56,    77,     0,     0,   114,    75,     0,     0,     0,    76
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -232,  -232,  -232,    26,  -232,     7,     1,  -232,  -232,   340,
     185,   -99,   -50,   168,    37,   -85,  -232,  -117,  -232,  -232,
     343,  -232,   280,  -232,  -232,   257,    49,  -153,  -219,  -231,
     191,     0,   -61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    14,    15,   128,    17,    18,    44,    19,    20,    21,
      81,   100,   129,   130,   253,   131,   266,   132,   160,   215,
      22,    84,    85,    86,   110,   111,   307,   244,   245,   246,
      69,    70,    71
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   309,   136,   108,    27,   342,    98,    29,   310,    93,
     345,    26,   169,   276,   311,    23,   276,   169,    53,    37,
      30,    43,    98,   346,    45,   275,    16,    47,   275,    99,
     120,    73,    74,    75,    76,    77,    24,    28,    54,    83,
      31,    32,     2,     3,   168,   135,    79,    98,    82,   168,
     134,   276,   276,   150,   151,   152,     6,    35,   169,   169,
       8,    95,   343,   275,   275,    10,    11,    12,   247,    91,
     220,    38,    91,    43,   200,   214,   277,   108,    98,    96,
     344,   103,   146,   106,   278,   175,   176,    91,    91,    36,
     168,   168,   185,   186,    13,   282,   283,    28,   236,   133,
     133,   248,     2,     3,   138,   140,   221,   213,   143,   155,
     156,   314,    39,   157,    46,   359,     6,    91,    91,   278,
       8,    91,    43,   249,    40,    10,    11,    12,   137,   133,
     235,    43,    48,    49,   133,   133,   133,    78,   268,   254,
     177,    46,   179,    50,    40,    51,    83,    52,   101,   102,
     184,    41,   265,    42,    13,   166,    43,    97,   107,    28,
     166,   112,    91,   113,     2,     3,    95,   122,   292,    73,
      74,    75,    76,    77,   144,   133,   133,   145,     6,   203,
      82,   304,     8,   104,   105,   148,    43,    10,    11,    12,
      91,    40,   133,    91,   163,    91,   141,   142,    41,    43,
      42,   166,   166,   173,   149,   219,   103,   158,   223,    89,
     159,   161,    90,   326,   327,   133,    13,   170,   211,   178,
      27,    27,   182,   183,    23,    43,    91,   242,   242,   171,
     172,   181,    72,   -99,   -98,   254,   180,    23,    91,   187,
     188,   233,   189,   191,    27,   192,   196,    27,    27,    27,
     251,   273,   197,    23,   273,   242,   242,    91,    87,    88,
     198,   199,   292,   263,  -102,  -101,    23,   204,   308,   207,
     209,   218,   225,   227,   224,   228,   229,   230,   237,   290,
     117,   118,    27,    27,    91,   258,   121,  -100,   255,   273,
     273,  -103,   302,   364,    91,   259,    91,   167,   260,   261,
     269,   270,   167,   271,   279,   285,   334,   338,   286,   339,
     308,   123,   297,   298,   299,   305,   312,   313,   162,   315,
      23,    91,   316,   322,   320,   323,   324,   325,   330,    91,
     331,   332,   349,   352,   268,   333,   353,   354,   355,   357,
     310,   338,   361,   167,   167,   358,   251,    23,  -150,   190,
     362,   368,   193,   363,   366,    33,   195,   347,    34,   341,
     212,     0,     0,   365,   109,   206,   367,   147,     0,   369,
       0,     0,     0,   290,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   234,     0,     0,     0,     0,   243,   243,
       0,     0,   252,     0,     0,     0,     0,     0,     0,     0,
       0,   226,     0,     0,     0,   264,     0,     0,     0,   238,
       0,     0,   274,     0,    25,   274,   243,   243,     0,     2,
       3,   291,   293,   257,     0,     0,    28,     0,     0,     0,
       0,     2,     3,     6,   303,     0,     0,     8,     0,     0,
       0,   284,    10,    11,    12,     6,   294,     0,     0,     8,
     274,   274,     0,   296,    10,    11,    12,    55,    56,    57,
      58,    59,     0,    60,    61,    62,    63,    64,    28,    65,
      66,    13,     0,     2,     3,     0,    67,   116,     0,    68,
     321,     0,     0,    13,     0,     0,     0,     6,   252,     0,
       0,     8,   329,     0,     0,     0,    10,    11,    12,    55,
      56,    57,    58,    59,     0,    60,    61,    62,    63,    64,
       0,    65,    66,     0,     0,   291,     0,     0,    67,     0,
       0,    68,     1,     0,     0,    13,     0,     2,     3,     4,
     123,     0,     0,   124,     0,     0,   125,     0,     0,     5,
       0,     6,     0,     0,   126,     8,   127,     0,     1,     0,
      10,    11,    12,     2,     3,     4,   123,     0,     0,   124,
       0,     0,   125,     0,     0,     5,     0,     6,     0,     0,
     164,     8,   165,     0,     0,     0,    10,    11,    12,    13,
       1,     0,     0,     0,     0,     2,     3,     4,   123,     0,
       0,   124,     0,     0,   125,     0,     0,     5,     0,     6,
       0,     0,   174,     8,   165,    13,     1,     0,    10,    11,
      12,     2,     3,     4,   123,     0,     0,   124,     0,     0,
     125,     0,     0,     5,     0,     6,     0,     0,   201,     8,
     165,     0,     0,     0,    10,    11,    12,    13,     1,     0,
       0,     0,     0,     2,     3,     4,   123,     0,     0,   124,
       0,     0,   125,     0,     0,     5,     0,     6,     0,     0,
     202,     8,   165,    13,     1,     0,    10,    11,    12,     2,
       3,     4,   123,     0,     0,   124,     0,   231,   125,     0,
       0,     5,     0,     6,     0,     0,     0,     8,   232,     0,
       0,     0,    10,    11,    12,    13,     1,     0,     0,     0,
       0,     2,     3,     4,   123,   287,   288,     0,     0,     0,
     125,     0,     0,     5,     0,     6,     0,     0,     0,     8,
     289,    13,     1,     0,    10,    11,    12,     2,     3,     4,
     123,     0,     0,   124,     0,     0,   125,     0,     0,     5,
       0,     6,     0,     0,     0,     8,   127,     0,     0,     0,
      10,    11,    12,    13,     1,     0,     0,     0,     0,     2,
       3,     4,   123,     0,     0,   124,     0,     0,   125,     0,
       0,     5,     0,     6,     0,     0,     0,     8,   210,    13,
       1,     0,    10,    11,    12,     2,     3,     4,   123,     0,
       0,     0,     0,     0,   125,   300,     0,     5,     0,     6,
       0,     0,     0,     8,   301,     0,     0,     0,    10,    11,
      12,    13,     1,     0,     0,     0,     0,     2,     3,     4,
     123,     0,   360,     0,     0,     0,   125,     0,     0,     5,
       0,     6,     0,     0,     0,     8,   289,    13,     1,     0,
      10,    11,    12,     2,     3,     4,   123,     0,     0,     0,
       0,     0,   125,     0,     0,     5,     0,     6,     0,     0,
       0,     8,   250,     0,     0,     0,    10,    11,    12,    13,
       1,     0,     0,     0,     0,     2,     3,     4,   123,     0,
       0,     0,     0,     0,   125,     1,     0,     5,     0,     6,
       2,     3,     4,     8,   262,    13,     0,     0,    10,    11,
      12,     0,     5,     0,     6,     0,     7,     0,     8,     0,
       9,     0,     0,    10,    11,    12,   351,    74,    75,    76,
      77,     2,     3,     0,    28,     0,     0,    13,     0,     2,
       3,     0,    28,     0,     0,     6,     0,     2,     3,     8,
       0,     0,    13,     6,    10,    11,    12,     8,     0,     0,
       0,     6,    10,    11,    12,     8,     0,     0,     0,     0,
      10,    11,    12,     0,     0,    28,     0,     0,     0,     0,
       2,     3,     0,    13,    89,    94,     0,    90,     0,     0,
       0,    13,    89,   114,     6,    90,     0,     0,     8,    13,
       0,     0,     0,    10,    11,    12,     0,    28,     0,     0,
       0,     0,     2,     3,     0,    28,     0,     0,     0,     0,
       2,     3,     0,     0,     0,    89,     6,     0,    90,   115,
       8,     0,    13,     0,     6,    10,    11,    12,     8,     0,
       0,     0,     0,    10,    11,    12,     0,    28,     0,     0,
       0,     0,     2,     3,     0,     0,     0,    89,   153,     0,
      90,     0,     0,     0,    13,    89,     6,     0,    90,   154,
       8,     0,    13,     0,     0,    10,    11,    12,     0,    28,
       0,     0,     0,     0,     2,     3,     0,    28,     0,     0,
       0,     0,     2,     3,     0,     0,   194,    89,     6,     0,
      90,     0,     8,     0,    13,     0,     6,    10,    11,    12,
       8,     0,     0,     0,     0,    10,    11,    12,     0,     0,
      28,     0,     0,     0,     0,     2,     3,     0,     0,    89,
     208,     0,    90,     0,     0,     0,    13,    89,   216,     6,
      90,     0,     0,     8,    13,     0,     0,     0,    10,    11,
      12,     0,    28,     0,     0,     0,     0,     2,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   217,
      89,     6,     0,    90,     0,     8,     0,    13,     0,     0,
      10,    11,    12,     0,    28,     0,     0,     0,     0,     2,
       3,     0,     0,     0,     0,   267,     0,     0,     0,     0,
       0,   256,    89,     6,     0,    90,     0,     8,     0,    13,
      28,     0,    10,    11,    12,     2,     3,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     6,
       2,     3,     0,     8,    89,     0,     0,    90,    10,    11,
      12,    13,     0,     0,     6,     0,     0,     0,     8,     0,
       0,     0,     0,    10,    11,    12,     0,     0,     0,   295,
      89,     0,     0,    90,    28,     0,     0,    13,     0,     2,
       3,     0,     0,     0,   319,    89,     0,     0,    90,    28,
       0,     0,    13,     6,     2,     3,     0,     8,     0,     0,
       0,     0,    10,    11,    12,     0,     0,     0,     6,     0,
       0,     0,     8,     0,     0,     0,     0,    10,    11,    12,
       0,     0,     0,   328,    89,     0,     0,    90,    28,     0,
       0,    13,     0,     2,     3,     0,     0,     0,   348,    89,
       0,     0,    90,    28,     0,     0,    13,     6,     2,     3,
       0,     8,     0,     0,     0,     0,    10,    11,    12,     0,
       0,     0,     6,     0,     0,     0,     8,     0,     0,    28,
       0,    10,    11,    12,     2,     3,     0,   350,    89,     0,
       0,    90,     0,     0,     0,    13,     0,     0,     6,     0,
       0,     0,     8,    89,     0,     0,    90,    10,    11,    12,
      13,     0,     0,     0,     0,   239,     0,     0,     0,     0,
       2,     3,     0,   123,     0,     0,     0,   239,     0,     0,
     222,   102,     2,     3,     6,   123,    13,   240,     8,     0,
       0,     0,     0,    10,    11,    12,     6,     0,     0,   272,
       8,     0,     0,     0,     0,    10,    11,    12,   239,     0,
       0,     0,     0,     2,     3,     0,   123,     0,     0,     0,
     239,     0,   241,     0,     0,     2,     3,     6,   123,     0,
     280,     8,     0,     0,   241,     0,    10,    11,    12,     6,
       0,     0,   281,     8,     0,     0,     0,     0,    10,    11,
      12,   239,     0,     0,     0,     0,     2,     3,     0,   123,
       0,     0,     0,   239,     0,   241,     0,     0,     2,     3,
       6,   123,     0,   317,     8,     0,     0,   241,     0,    10,
      11,    12,     6,    28,     0,   318,     8,     0,     2,     3,
       0,    10,    11,    12,     0,    28,     0,     0,    28,     0,
       2,     3,     6,     2,     3,     0,     8,     0,   241,     0,
       0,    10,    11,    12,     6,     0,     0,     6,     8,     0,
     241,     8,     0,    10,    11,    12,    10,    11,    12,     0,
       0,    28,     0,     0,   335,   336,     2,     3,     0,    28,
     337,     0,     0,     0,     2,     3,   356,   336,     0,    80,
       6,     0,   337,     0,     8,    13,     0,     0,     6,    10,
      11,    12,     8,     0,     0,     0,     0,    10,    11,    12,
     239,     0,     0,     0,     0,     2,     3,     0,   123,     0,
       0,     0,     0,     0,     0,   139,    28,     0,    13,     6,
     205,     2,     3,     8,     0,     0,    13,     0,    10,    11,
      12,    28,     0,     0,     0,     6,     2,     3,     0,     8,
       0,     0,     0,     0,    10,    11,    12,    28,     0,     0,
       6,     0,     2,     3,     8,     0,     0,   241,     0,    10,
      11,    12,     0,     0,     0,     0,     6,   306,     0,     0,
       8,     0,     0,    13,     0,    10,    11,    12,     0,     0,
       0,     0,   340,     0,     0,     0,     0,     0,    13,    55,
      56,    57,    58,    59,     0,    60,    61,    62,    63,    64,
       0,    65,    66,     0,    13,    55,    56,    57,    58,    59,
      92,    60,    61,    62,    63,    64,     0,    65,    66,     0,
       0,    55,    56,    57,    58,    59,   119,    60,    61,    62,
      63,    64,     0,    65,    66
};

static const yytype_int16 yycheck[] =
{
       0,    46,   101,    24,     4,     3,    35,     7,    53,    70,
      46,     4,   129,   244,    59,    15,   247,   134,    55,    19,
       3,    58,    35,    59,    24,   244,     0,    26,   247,    58,
      91,     3,     4,     5,     6,     7,    56,     3,    37,    60,
       0,    15,     8,     9,   129,    58,    46,    35,    48,   134,
     100,   282,   283,   114,   115,   116,    22,    52,   175,   176,
      26,    46,    60,   282,   283,    31,    32,    33,   221,    69,
      58,    52,    72,    58,    46,   192,    52,    24,    35,    78,
     311,    81,    29,    82,    60,   135,   136,    87,    88,    55,
     175,   176,   153,   154,    60,   248,   249,     3,   215,    99,
     100,    58,     8,     9,   103,   105,   205,   192,   107,     3,
       4,    52,    52,     7,    56,   346,    22,   117,   118,    60,
      26,   121,    58,   222,    46,    31,    32,    33,    55,   129,
     215,    58,    53,    58,   134,   135,   136,    57,    53,   224,
     139,    56,   142,    52,    46,    52,    60,    52,    54,    55,
     149,    53,   237,    55,    60,   129,    58,    57,     3,     3,
     134,    52,   162,    60,     8,     9,    46,    44,   253,     3,
       4,     5,     6,     7,     3,   175,   176,    52,    22,   178,
     180,   266,    26,    55,    56,    52,    58,    31,    32,    33,
     190,    46,   192,   193,    52,   195,    55,    56,    53,    58,
      55,   175,   176,    58,     3,   204,   206,    53,   207,    53,
       3,    53,    56,    57,    58,   215,    60,    52,   192,    57,
     220,   221,    55,    56,   224,    58,   226,   220,   221,    52,
      52,    52,    41,    60,    60,   320,    53,   237,   238,    58,
      58,   215,    58,    15,   244,    58,    52,   247,   248,   249,
     224,   244,    52,   253,   247,   248,   249,   257,    67,    68,
      52,    52,   347,   237,    60,    60,   266,    57,   268,    57,
      56,    56,    31,    52,    58,    52,    52,    52,    58,   253,
      89,    90,   282,   283,   284,    52,    95,    60,    58,   282,
     283,    60,   266,   354,   294,    52,   296,   129,    52,    52,
       3,    52,   134,    52,    52,    52,   305,   307,    52,   309,
     310,    11,    52,    52,    52,     3,    52,    52,   127,    52,
     320,   321,     3,    52,    58,    52,    52,    52,    52,   329,
      52,    52,    31,   333,    53,    58,    15,   337,    55,     3,
      53,   341,    57,   175,   176,   345,   320,   347,    57,   158,
      57,    57,   161,   353,    30,    15,   165,   320,    15,   310,
     192,    -1,    -1,   362,    84,   180,   366,   110,    -1,   368,
      -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,   220,   221,
      -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   210,    -1,    -1,    -1,   237,    -1,    -1,    -1,   218,
      -1,    -1,   244,    -1,     3,   247,   248,   249,    -1,     8,
       9,   253,   254,   232,    -1,    -1,     3,    -1,    -1,    -1,
      -1,     8,     9,    22,   266,    -1,    -1,    26,    -1,    -1,
      -1,   250,    31,    32,    33,    22,   255,    -1,    -1,    26,
     282,   283,    -1,   262,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    40,    41,    42,    43,    44,     3,    46,
      47,    60,    -1,     8,     9,    -1,    53,    54,    -1,    56,
     289,    -1,    -1,    60,    -1,    -1,    -1,    22,   320,    -1,
      -1,    26,   301,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    40,    41,    42,    43,    44,
      -1,    46,    47,    -1,    -1,   347,    -1,    -1,    53,    -1,
      -1,    56,     3,    -1,    -1,    60,    -1,     8,     9,    10,
      11,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    20,
      -1,    22,    -1,    -1,    25,    26,    27,    -1,     3,    -1,
      31,    32,    33,     8,     9,    10,    11,    -1,    -1,    14,
      -1,    -1,    17,    -1,    -1,    20,    -1,    22,    -1,    -1,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    33,    60,
       3,    -1,    -1,    -1,    -1,     8,     9,    10,    11,    -1,
      -1,    14,    -1,    -1,    17,    -1,    -1,    20,    -1,    22,
      -1,    -1,    25,    26,    27,    60,     3,    -1,    31,    32,
      33,     8,     9,    10,    11,    -1,    -1,    14,    -1,    -1,
      17,    -1,    -1,    20,    -1,    22,    -1,    -1,    25,    26,
      27,    -1,    -1,    -1,    31,    32,    33,    60,     3,    -1,
      -1,    -1,    -1,     8,     9,    10,    11,    -1,    -1,    14,
      -1,    -1,    17,    -1,    -1,    20,    -1,    22,    -1,    -1,
      25,    26,    27,    60,     3,    -1,    31,    32,    33,     8,
       9,    10,    11,    -1,    -1,    14,    -1,    16,    17,    -1,
      -1,    20,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    32,    33,    60,     3,    -1,    -1,    -1,
      -1,     8,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      17,    -1,    -1,    20,    -1,    22,    -1,    -1,    -1,    26,
      27,    60,     3,    -1,    31,    32,    33,     8,     9,    10,
      11,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    20,
      -1,    22,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    32,    33,    60,     3,    -1,    -1,    -1,    -1,     8,
       9,    10,    11,    -1,    -1,    14,    -1,    -1,    17,    -1,
      -1,    20,    -1,    22,    -1,    -1,    -1,    26,    27,    60,
       3,    -1,    31,    32,    33,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,    32,
      33,    60,     3,    -1,    -1,    -1,    -1,     8,     9,    10,
      11,    -1,    13,    -1,    -1,    -1,    17,    -1,    -1,    20,
      -1,    22,    -1,    -1,    -1,    26,    27,    60,     3,    -1,
      31,    32,    33,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    20,    -1,    22,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    32,    33,    60,
       3,    -1,    -1,    -1,    -1,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    17,     3,    -1,    20,    -1,    22,
       8,     9,    10,    26,    27,    60,    -1,    -1,    31,    32,
      33,    -1,    20,    -1,    22,    -1,    24,    -1,    26,    -1,
      28,    -1,    -1,    31,    32,    33,     3,     4,     5,     6,
       7,     8,     9,    -1,     3,    -1,    -1,    60,    -1,     8,
       9,    -1,     3,    -1,    -1,    22,    -1,     8,     9,    26,
      -1,    -1,    60,    22,    31,    32,    33,    26,    -1,    -1,
      -1,    22,    31,    32,    33,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    -1,     3,    -1,    -1,    -1,    -1,
       8,     9,    -1,    60,    53,    54,    -1,    56,    -1,    -1,
      -1,    60,    53,    54,    22,    56,    -1,    -1,    26,    60,
      -1,    -1,    -1,    31,    32,    33,    -1,     3,    -1,    -1,
      -1,    -1,     8,     9,    -1,     3,    -1,    -1,    -1,    -1,
       8,     9,    -1,    -1,    -1,    53,    22,    -1,    56,    57,
      26,    -1,    60,    -1,    22,    31,    32,    33,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,     3,    -1,    -1,
      -1,    -1,     8,     9,    -1,    -1,    -1,    53,    54,    -1,
      56,    -1,    -1,    -1,    60,    53,    22,    -1,    56,    57,
      26,    -1,    60,    -1,    -1,    31,    32,    33,    -1,     3,
      -1,    -1,    -1,    -1,     8,     9,    -1,     3,    -1,    -1,
      -1,    -1,     8,     9,    -1,    -1,    52,    53,    22,    -1,
      56,    -1,    26,    -1,    60,    -1,    22,    31,    32,    33,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    -1,
       3,    -1,    -1,    -1,    -1,     8,     9,    -1,    -1,    53,
      54,    -1,    56,    -1,    -1,    -1,    60,    53,    54,    22,
      56,    -1,    -1,    26,    60,    -1,    -1,    -1,    31,    32,
      33,    -1,     3,    -1,    -1,    -1,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    22,    -1,    56,    -1,    26,    -1,    60,    -1,    -1,
      31,    32,    33,    -1,     3,    -1,    -1,    -1,    -1,     8,
       9,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    52,    53,    22,    -1,    56,    -1,    26,    -1,    60,
       3,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    22,
       8,     9,    -1,    26,    53,    -1,    -1,    56,    31,    32,
      33,    60,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,    -1,    -1,    52,
      53,    -1,    -1,    56,     3,    -1,    -1,    60,    -1,     8,
       9,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,     3,
      -1,    -1,    60,    22,     8,     9,    -1,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    -1,    -1,    52,    53,    -1,    -1,    56,     3,    -1,
      -1,    60,    -1,     8,     9,    -1,    -1,    -1,    52,    53,
      -1,    -1,    56,     3,    -1,    -1,    60,    22,     8,     9,
      -1,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    26,    -1,    -1,     3,
      -1,    31,    32,    33,     8,     9,    -1,    52,    53,    -1,
      -1,    56,    -1,    -1,    -1,    60,    -1,    -1,    22,    -1,
      -1,    -1,    26,    53,    -1,    -1,    56,    31,    32,    33,
      60,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
       8,     9,    -1,    11,    -1,    -1,    -1,     3,    -1,    -1,
      54,    55,     8,     9,    22,    11,    60,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    22,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,     3,    -1,
      -1,    -1,    -1,     8,     9,    -1,    11,    -1,    -1,    -1,
       3,    -1,    60,    -1,    -1,     8,     9,    22,    11,    -1,
      25,    26,    -1,    -1,    60,    -1,    31,    32,    33,    22,
      -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,     3,    -1,    -1,    -1,    -1,     8,     9,    -1,    11,
      -1,    -1,    -1,     3,    -1,    60,    -1,    -1,     8,     9,
      22,    11,    -1,    25,    26,    -1,    -1,    60,    -1,    31,
      32,    33,    22,     3,    -1,    25,    26,    -1,     8,     9,
      -1,    31,    32,    33,    -1,     3,    -1,    -1,     3,    -1,
       8,     9,    22,     8,     9,    -1,    26,    -1,    60,    -1,
      -1,    31,    32,    33,    22,    -1,    -1,    22,    26,    -1,
      60,    26,    -1,    31,    32,    33,    31,    32,    33,    -1,
      -1,     3,    -1,    -1,    54,    55,     8,     9,    -1,     3,
      60,    -1,    -1,    -1,     8,     9,    54,    55,    -1,    54,
      22,    -1,    60,    -1,    26,    60,    -1,    -1,    22,    31,
      32,    33,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
       3,    -1,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    57,     3,    -1,    60,    22,
      54,     8,     9,    26,    -1,    -1,    60,    -1,    31,    32,
      33,     3,    -1,    -1,    -1,    22,     8,     9,    -1,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,     3,    -1,    -1,
      22,    -1,     8,     9,    26,    -1,    -1,    60,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    22,    54,    -1,    -1,
      26,    -1,    -1,    60,    -1,    31,    32,    33,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    34,
      35,    36,    37,    38,    -1,    40,    41,    42,    43,    44,
      -1,    46,    47,    -1,    60,    34,    35,    36,    37,    38,
      55,    40,    41,    42,    43,    44,    -1,    46,    47,    -1,
      -1,    34,    35,    36,    37,    38,    55,    40,    41,    42,
      43,    44,    -1,    46,    47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     8,     9,    10,    20,    22,    24,    26,    28,
      31,    32,    33,    60,    66,    67,    68,    69,    70,    72,
      73,    74,    85,    96,    56,     3,    70,    96,     3,    96,
       3,     0,    68,    74,    85,    52,    55,    96,    52,    52,
      46,    53,    55,    58,    71,    96,    56,    71,    53,    58,
      52,    52,    52,    55,    71,    34,    35,    36,    37,    38,
      40,    41,    42,    43,    44,    46,    47,    53,    56,    95,
      96,    97,    95,     3,     4,     5,     6,     7,    57,    96,
      54,    75,    96,    60,    86,    87,    88,    95,    95,    53,
      56,    96,    55,    97,    54,    46,    71,    57,    35,    58,
      76,    54,    55,    96,    55,    56,    71,     3,    24,    87,
      89,    90,    52,    60,    54,    57,    54,    95,    95,    55,
      97,    95,    44,    11,    14,    17,    25,    27,    68,    77,
      78,    80,    82,    96,    77,    58,    76,    55,    71,    57,
      96,    55,    56,    71,     3,    52,    29,    90,    52,     3,
      97,    97,    97,    54,    57,     3,     4,     7,    53,     3,
      83,    53,    95,    52,    25,    27,    68,    78,    80,    82,
      52,    52,    52,    58,    25,    77,    77,    71,    57,    96,
      53,    52,    55,    56,    71,    97,    97,    58,    58,    58,
      95,    15,    58,    95,    52,    95,    52,    52,    52,    52,
      46,    25,    25,    71,    57,    54,    75,    57,    54,    56,
      27,    68,    78,    80,    82,    84,    54,    52,    56,    71,
      58,    76,    54,    71,    58,    31,    95,    52,    52,    52,
      52,    16,    27,    68,    78,    80,    82,    58,    95,     3,
      25,    60,    70,    78,    92,    93,    94,    92,    58,    76,
      27,    68,    78,    79,    80,    58,    52,    95,    52,    52,
      52,    52,    27,    68,    78,    80,    81,    14,    53,     3,
      52,    52,    25,    70,    78,    93,    94,    52,    60,    52,
      25,    25,    92,    92,    95,    52,    52,    12,    13,    27,
      68,    78,    80,    78,    95,    52,    95,    52,    52,    52,
      18,    27,    68,    78,    80,     3,    54,    91,    96,    46,
      53,    59,    52,    52,    52,    52,     3,    25,    25,    52,
      58,    95,    52,    52,    52,    52,    57,    58,    52,    95,
      52,    52,    52,    58,    71,    54,    55,    60,    96,    96,
      54,    91,     3,    60,    94,    46,    59,    79,    52,    31,
      52,     3,    96,    15,    96,    55,    54,     3,    96,    94,
      13,    57,    57,    96,    97,    71,    30,    96,    57,    71
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    66,    66,    67,    67,    67,    67,    67,    67,
      68,    68,    68,    68,    68,    69,    70,    70,    71,    71,
      71,    71,    71,    72,    72,    72,    72,    72,    72,    73,
      74,    74,    74,    74,    74,    75,    75,    75,    75,    75,
      75,    75,    76,    76,    76,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    78,    78,    79,    79,    79,
      79,    79,    79,    79,    79,    80,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    82,    82,    83,    83,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    85,
      86,    86,    87,    87,    87,    87,    87,    87,    88,    88,
      88,    88,    88,    88,    89,    89,    90,    90,    90,    90,
      90,    90,    91,    91,    91,    91,    91,    92,    92,    92,
      92,    92,    92,    92,    92,    93,    93,    93,    93,    94,
      94,    94,    94,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     3,     2,     3,     2,     3,
       1,     1,     1,     1,     1,     3,     3,     6,     2,     2,
       2,     2,     2,     2,     2,     5,     3,     2,     3,     4,
       6,     7,     8,     7,     8,     2,     4,     5,     2,     3,
       2,     3,     4,     4,     4,     2,     3,     2,     3,     2,
       3,     2,     3,     3,     4,     7,    10,     2,     3,     2,
       3,     3,     3,     3,     4,     7,     2,     3,     2,     3,
       2,     3,     3,     4,     5,    11,    14,     9,     7,     2,
       3,     2,     3,     2,     3,     2,     3,     3,     4,     6,
       2,     3,     3,     3,     6,     4,     4,     6,     3,     3,
       6,     4,     4,     6,     2,     3,     6,     7,     7,     7,
       8,     8,     1,     3,     4,     2,     3,     2,     3,     2,
       3,     2,     3,     2,     3,     4,     5,     4,     5,     3,
       4,     4,     5,     1,     1,     2,     2,     3,     4,     3,
       4,     2,     3,     3,     3,     4,     4,     5,     4,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
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
#line 140 "parcer.y"
  {
	if (yyerror_count == 0) {
		puts(c_prologue);
		printf("%s\n", (yyvsp[0].str));
	}
  }
#line 1687 "parcer.tab.c"
    break;

  case 4: /* program_body: expression DEL_QUEST  */
#line 148 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1693 "parcer.tab.c"
    break;

  case 5: /* program_body: program_body expression DEL_QUEST  */
#line 149 "parcer.y"
                                                {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1699 "parcer.tab.c"
    break;

  case 6: /* program_body: make_fcn DEL_QUEST  */
#line 150 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str)); }
#line 1705 "parcer.tab.c"
    break;

  case 7: /* program_body: program_body make_fcn DEL_QUEST  */
#line 151 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1711 "parcer.tab.c"
    break;

  case 8: /* program_body: comp_statement DEL_QUEST  */
#line 152 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1717 "parcer.tab.c"
    break;

  case 9: /* program_body: program_body comp_statement DEL_QUEST  */
#line 153 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str));}
#line 1723 "parcer.tab.c"
    break;

  case 14: /* expression: KW_continue  */
#line 162 "parcer.y"
                {(yyval.str) = template(" continue");}
#line 1729 "parcer.tab.c"
    break;

  case 15: /* constant: KW_const assignment var_type  */
#line 167 "parcer.y"
                                         {(yyval.str) = template("const %s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 1735 "parcer.tab.c"
    break;

  case 16: /* assignment: attribute OP_EQUAL right_part  */
#line 170 "parcer.y"
                                                                                        {(yyval.str) = template("%s = %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1741 "parcer.tab.c"
    break;

  case 17: /* assignment: T_ID DEL_LBRAC attribute DEL_RBRAC OP_EQUAL right_part  */
#line 171 "parcer.y"
                                                                {(yyval.str) = template("%s[%s] = %s", (yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[0].str));}
#line 1747 "parcer.tab.c"
    break;

  case 18: /* var_type: DEL_DOTS KW_str  */
#line 174 "parcer.y"
                        {(yyval.str) = template("char* ");}
#line 1753 "parcer.tab.c"
    break;

  case 19: /* var_type: DEL_DOTS KW_integer  */
#line 175 "parcer.y"
                        {(yyval.str) = template("int "); }
#line 1759 "parcer.tab.c"
    break;

  case 20: /* var_type: DEL_DOTS T_ID  */
#line 176 "parcer.y"
                                {(yyval.str) = template("%s ", (yyvsp[0].str));}
#line 1765 "parcer.tab.c"
    break;

  case 21: /* var_type: DEL_DOTS KW_boolean  */
#line 177 "parcer.y"
                        {(yyval.str) = template("int ");}
#line 1771 "parcer.tab.c"
    break;

  case 22: /* var_type: DEL_DOTS KW_scalar  */
#line 178 "parcer.y"
                        {(yyval.str) = template("double ");}
#line 1777 "parcer.tab.c"
    break;

  case 23: /* declaration: attribute var_type  */
#line 183 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 1783 "parcer.tab.c"
    break;

  case 24: /* declaration: attribute DEL_COMMA  */
#line 184 "parcer.y"
                                                                                {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 1789 "parcer.tab.c"
    break;

  case 25: /* declaration: T_ID DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 185 "parcer.y"
                                                        {(yyval.str) = template("%s%s[%s]", (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-2].str));}
#line 1795 "parcer.tab.c"
    break;

  case 26: /* declaration: declaration attribute var_type  */
#line 186 "parcer.y"
                                                                        {(yyval.str) = template("%s%s%s", (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1801 "parcer.tab.c"
    break;

  case 27: /* declaration: declaration DEL_COMMA  */
#line 187 "parcer.y"
                                                                                {(yyval.str) = template("%s, ",  (yyvsp[-1].str));}
#line 1807 "parcer.tab.c"
    break;

  case 28: /* declaration: declaration attribute DEL_COMMA  */
#line 188 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1813 "parcer.tab.c"
    break;

  case 29: /* fcn_call: attribute DEL_LPAR right_part DEL_RPAR  */
#line 193 "parcer.y"
                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1819 "parcer.tab.c"
    break;

  case 30: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR DEL_DOTS KW_enddef  */
#line 198 "parcer.y"
                                                                                                                        {(yyval.str) = template("\nvoid %s()\n{\n}", (yyvsp[-4].str));}
#line 1825 "parcer.tab.c"
    break;

  case 31: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR DEL_DOTS fcn_body KW_enddef  */
#line 199 "parcer.y"
                                                                                                                {(yyval.str) = template("\nvoid %s()\n{\n%s}", (yyvsp[-5].str), (yyvsp[-1].str));}
#line 1831 "parcer.tab.c"
    break;

  case 32: /* make_fcn: KW_def attribute DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS fcn_body KW_enddef  */
#line 200 "parcer.y"
                                                                                                {(yyval.str) = template("\nvoid %s(%s)\n{\n%s}",(yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1837 "parcer.tab.c"
    break;

  case 33: /* make_fcn: KW_def attribute DEL_LPAR DEL_RPAR fcn_ret_type fcn_body KW_enddef  */
#line 201 "parcer.y"
                                                                                                                {(yyval.str) = template("\n%s%s()\n{\n%s}", (yyvsp[-2].str), (yyvsp[-5].str), (yyvsp[-1].str));}
#line 1843 "parcer.tab.c"
    break;

  case 34: /* make_fcn: KW_def attribute DEL_LPAR fcn_arguments DEL_RPAR fcn_ret_type fcn_body KW_enddef  */
#line 202 "parcer.y"
                                                                                                {(yyval.str) = template("\n%s%s(%s)\n{\n%s}", (yyvsp[-2].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1849 "parcer.tab.c"
    break;

  case 35: /* fcn_arguments: attribute var_type  */
#line 205 "parcer.y"
                                                                                                {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 1855 "parcer.tab.c"
    break;

  case 36: /* fcn_arguments: attribute DEL_LBRAC DEL_RBRAC var_type  */
#line 206 "parcer.y"
                                                                        {(yyval.str) = template("%s*%s", (yyvsp[0].str), (yyvsp[-3].str));}
#line 1861 "parcer.tab.c"
    break;

  case 37: /* fcn_arguments: attribute DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 207 "parcer.y"
                                                        {(yyval.str) = template("%s*%s", (yyvsp[0].str), (yyvsp[-4].str));}
#line 1867 "parcer.tab.c"
    break;

  case 38: /* fcn_arguments: attribute DEL_COMMA  */
#line 208 "parcer.y"
                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 1873 "parcer.tab.c"
    break;

  case 39: /* fcn_arguments: fcn_arguments attribute var_type  */
#line 209 "parcer.y"
                                                                        {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-1].str));}
#line 1879 "parcer.tab.c"
    break;

  case 40: /* fcn_arguments: fcn_arguments DEL_COMMA  */
#line 210 "parcer.y"
                                                                                {(yyval.str) = template("%s, ",  (yyvsp[-1].str));}
#line 1885 "parcer.tab.c"
    break;

  case 41: /* fcn_arguments: fcn_arguments attribute DEL_COMMA  */
#line 211 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1891 "parcer.tab.c"
    break;

  case 42: /* fcn_ret_type: OP_MINUS OP_GREATER KW_integer DEL_DOTS  */
#line 214 "parcer.y"
                                                {(yyval.str) = template("int "); }
#line 1897 "parcer.tab.c"
    break;

  case 43: /* fcn_ret_type: OP_MINUS OP_GREATER KW_boolean DEL_DOTS  */
#line 215 "parcer.y"
                                                {(yyval.str) = template("int "); }
#line 1903 "parcer.tab.c"
    break;

  case 44: /* fcn_ret_type: OP_MINUS OP_GREATER T_ID DEL_DOTS  */
#line 216 "parcer.y"
                                                {(yyval.str) = template("%s ", (yyvsp[-1].str));}
#line 1909 "parcer.tab.c"
    break;

  case 45: /* fcn_body: expression DEL_QUEST  */
#line 219 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1915 "parcer.tab.c"
    break;

  case 46: /* fcn_body: fcn_body expression DEL_QUEST  */
#line 220 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1921 "parcer.tab.c"
    break;

  case 47: /* fcn_body: if_statement DEL_QUEST  */
#line 221 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1927 "parcer.tab.c"
    break;

  case 48: /* fcn_body: fcn_body if_statement DEL_QUEST  */
#line 222 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1933 "parcer.tab.c"
    break;

  case 49: /* fcn_body: while_statement DEL_QUEST  */
#line 223 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1939 "parcer.tab.c"
    break;

  case 50: /* fcn_body: fcn_body while_statement DEL_QUEST  */
#line 224 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1945 "parcer.tab.c"
    break;

  case 51: /* fcn_body: for_statement DEL_QUEST  */
#line 225 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1951 "parcer.tab.c"
    break;

  case 52: /* fcn_body: fcn_body for_statement DEL_QUEST  */
#line 226 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1957 "parcer.tab.c"
    break;

  case 53: /* fcn_body: KW_return right_part DEL_QUEST  */
#line 227 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 1963 "parcer.tab.c"
    break;

  case 54: /* fcn_body: fcn_body KW_return right_part DEL_QUEST  */
#line 228 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1969 "parcer.tab.c"
    break;

  case 55: /* if_statement: KW_if DEL_LPAR right_part DEL_RPAR DEL_DOTS if_body KW_endif  */
#line 233 "parcer.y"
                                                                                                                        {(yyval.str) = template("if (%s){\n%s}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1975 "parcer.tab.c"
    break;

  case 56: /* if_statement: KW_if DEL_LPAR right_part DEL_RPAR DEL_DOTS if_body KW_else DEL_DOTS if_body KW_endif  */
#line 234 "parcer.y"
                                                                                                {(yyval.str) = template("if (%s){\n%s}else{\n%s}", (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1981 "parcer.tab.c"
    break;

  case 57: /* if_body: expression DEL_QUEST  */
#line 237 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1987 "parcer.tab.c"
    break;

  case 58: /* if_body: if_body expression DEL_QUEST  */
#line 238 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 1993 "parcer.tab.c"
    break;

  case 59: /* if_body: if_statement DEL_QUEST  */
#line 239 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 1999 "parcer.tab.c"
    break;

  case 60: /* if_body: if_body if_statement DEL_QUEST  */
#line 240 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2005 "parcer.tab.c"
    break;

  case 61: /* if_body: while_statement if_statement DEL_QUEST  */
#line 241 "parcer.y"
                                                {(yyval.str) = template("%s\n", (yyvsp[-2].str));}
#line 2011 "parcer.tab.c"
    break;

  case 62: /* if_body: if_body while_statement DEL_QUEST  */
#line 242 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2017 "parcer.tab.c"
    break;

  case 63: /* if_body: KW_return right_part DEL_QUEST  */
#line 243 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2023 "parcer.tab.c"
    break;

  case 64: /* if_body: if_body KW_return right_part DEL_QUEST  */
#line 244 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2029 "parcer.tab.c"
    break;

  case 65: /* while_statement: KW_while DEL_LPAR right_part DEL_RPAR DEL_DOTS while_body KW_endwhile  */
#line 248 "parcer.y"
                                                                              {(yyval.str) = template("while (%s){\n%s}", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2035 "parcer.tab.c"
    break;

  case 66: /* while_body: expression DEL_QUEST  */
#line 251 "parcer.y"
                                                                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2041 "parcer.tab.c"
    break;

  case 67: /* while_body: while_body expression DEL_QUEST  */
#line 252 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2047 "parcer.tab.c"
    break;

  case 68: /* while_body: if_statement DEL_QUEST  */
#line 253 "parcer.y"
                                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2053 "parcer.tab.c"
    break;

  case 69: /* while_body: while_body if_statement DEL_QUEST  */
#line 254 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2059 "parcer.tab.c"
    break;

  case 70: /* while_body: while_statement DEL_QUEST  */
#line 255 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2065 "parcer.tab.c"
    break;

  case 71: /* while_body: while_body while_statement DEL_QUEST  */
#line 256 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2071 "parcer.tab.c"
    break;

  case 72: /* while_body: KW_return right_part DEL_QUEST  */
#line 257 "parcer.y"
                                                                {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2077 "parcer.tab.c"
    break;

  case 73: /* while_body: while_body KW_return right_part DEL_QUEST  */
#line 258 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2083 "parcer.tab.c"
    break;

  case 74: /* for_statement: KW_for for_arguments DEL_DOTS for_body KW_endfor  */
#line 263 "parcer.y"
                                                                                                                                                                {(yyval.str) = template("for (%s){\n%s}", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2089 "parcer.tab.c"
    break;

  case 75: /* for_statement: attribute DEL_DOTS OP_EQUAL DEL_LBRAC right_part KW_for T_ID DEL_DOTS attribute DEL_RBRAC var_type  */
#line 264 "parcer.y"
                                                                                                                {(yyval.str) = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s_i = 0; %s_i < %s; %s_i++){\n%s[%s_i] = %s;\n}", (yyvsp[0].str), (yyvsp[-10].str), (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[-10].str), (yyvsp[-4].str), (yyvsp[-6].str));}
#line 2095 "parcer.tab.c"
    break;

  case 76: /* for_statement: attribute DEL_DOTS OP_EQUAL DEL_LBRAC right_part KW_for T_ID var_type KW_in attribute KW_of attribute DEL_RBRAC var_type  */
#line 265 "parcer.y"
                                                                                                                                 {(yyval.str) = template("%s* %s = ( %s*)malloc(%s*sizeof( %s));\nfor(int %s_i = 0; %s_i < %s; %s_i++){\n%s%s = %s[%s_i];\n%s[%s_i] = %s;\n}", (yyvsp[0].str), (yyvsp[-13].str), (yyvsp[0].str), (yyvsp[-2].str), (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[0].str), (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-13].str), (yyvsp[-4].str), (yyvsp[-9].str));}
#line 2101 "parcer.tab.c"
    break;

  case 77: /* for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS right_part DEL_DOTS T_INT DEL_RBRAC  */
#line 268 "parcer.y"
                                                                                {(yyval.str) = template("int %s = %s; %s < %s; %s += %s", (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-8].str), (yyvsp[-3].str), (yyvsp[-8].str), (yyvsp[-1].str));}
#line 2107 "parcer.tab.c"
    break;

  case 78: /* for_arguments: T_ID KW_in DEL_LBRAC T_INT DEL_DOTS right_part DEL_RBRAC  */
#line 269 "parcer.y"
                                                                                        {(yyval.str) = template("int %s = %s; %s < %s; %s += 1", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-6].str), (yyvsp[-1].str), (yyvsp[-6].str));}
#line 2113 "parcer.tab.c"
    break;

  case 79: /* for_body: expression DEL_QUEST  */
#line 272 "parcer.y"
                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2119 "parcer.tab.c"
    break;

  case 80: /* for_body: for_body expression DEL_QUEST  */
#line 273 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2125 "parcer.tab.c"
    break;

  case 81: /* for_body: if_statement DEL_QUEST  */
#line 274 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2131 "parcer.tab.c"
    break;

  case 82: /* for_body: for_body if_statement DEL_QUEST  */
#line 275 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2137 "parcer.tab.c"
    break;

  case 83: /* for_body: while_statement DEL_QUEST  */
#line 276 "parcer.y"
                                                        {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2143 "parcer.tab.c"
    break;

  case 84: /* for_body: for_body while_statement DEL_QUEST  */
#line 277 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2149 "parcer.tab.c"
    break;

  case 85: /* for_body: for_statement DEL_QUEST  */
#line 278 "parcer.y"
                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2155 "parcer.tab.c"
    break;

  case 86: /* for_body: for_body for_statement DEL_QUEST  */
#line 279 "parcer.y"
                                                {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2161 "parcer.tab.c"
    break;

  case 87: /* for_body: KW_return right_part DEL_QUEST  */
#line 280 "parcer.y"
                                                        {(yyval.str) = template("return %s;\n", (yyvsp[-1].str));}
#line 2167 "parcer.tab.c"
    break;

  case 88: /* for_body: for_body KW_return right_part DEL_QUEST  */
#line 281 "parcer.y"
                                                {(yyval.str) = template("%sreturn %s;\n", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2173 "parcer.tab.c"
    break;

  case 89: /* comp_statement: KW_comp T_ID DEL_DOTS comp_declarations comp_functions KW_endcomp  */
#line 286 "parcer.y"
                                                                          {(yyval.str) = template("#define SELF struct %s self\ntypedef struct %s {\n%s%s} %s;\n\n%s\nconst %s ctor_%s = {%s};\n", (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-1].comp_func).func_name, (yyvsp[-4].str), (yyvsp[-1].comp_func).func_all, (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-1].comp_func).func_const);}
#line 2179 "parcer.tab.c"
    break;

  case 90: /* comp_declarations: comp_declaration_init DEL_QUEST  */
#line 293 "parcer.y"
                                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2185 "parcer.tab.c"
    break;

  case 91: /* comp_declarations: comp_declarations comp_declaration_init DEL_QUEST  */
#line 294 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2191 "parcer.tab.c"
    break;

  case 92: /* comp_declaration_init: DEL_HASHTAG T_ID var_type  */
#line 297 "parcer.y"
                                                                                                                {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 2197 "parcer.tab.c"
    break;

  case 93: /* comp_declaration_init: DEL_HASHTAG T_ID DEL_COMMA  */
#line 298 "parcer.y"
                                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 2203 "parcer.tab.c"
    break;

  case 94: /* comp_declaration_init: DEL_HASHTAG T_ID DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 299 "parcer.y"
                                                                                {(yyval.str) = template("%s%s[%s]", (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-2].str));}
#line 2209 "parcer.tab.c"
    break;

  case 95: /* comp_declaration_init: comp_declaration DEL_HASHTAG T_ID var_type  */
#line 300 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s%s",(yyvsp[0].str), (yyvsp[-3].str) ,(yyvsp[-1].str));}
#line 2215 "parcer.tab.c"
    break;

  case 96: /* comp_declaration_init: comp_declaration DEL_HASHTAG T_ID DEL_COMMA  */
#line 301 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2221 "parcer.tab.c"
    break;

  case 97: /* comp_declaration_init: comp_declaration DEL_HASHTAG T_ID DEL_LBRAC DEL_RBRAC var_type  */
#line 302 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-5].str), (yyvsp[-3].str));}
#line 2227 "parcer.tab.c"
    break;

  case 98: /* comp_declaration: DEL_HASHTAG T_ID var_type  */
#line 306 "parcer.y"
                                                                                                                {(yyval.str) = template("%s%s", (yyvsp[0].str), (yyvsp[-1].str));}
#line 2233 "parcer.tab.c"
    break;

  case 99: /* comp_declaration: DEL_HASHTAG T_ID DEL_COMMA  */
#line 307 "parcer.y"
                                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 2239 "parcer.tab.c"
    break;

  case 100: /* comp_declaration: DEL_HASHTAG T_ID DEL_LBRAC attribute DEL_RBRAC var_type  */
#line 308 "parcer.y"
                                                                                {(yyval.str) = template("%s%s[%s]", (yyvsp[0].str), (yyvsp[-4].str), (yyvsp[-2].str));}
#line 2245 "parcer.tab.c"
    break;

  case 101: /* comp_declaration: comp_declaration DEL_HASHTAG T_ID var_type  */
#line 309 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s%s",(yyvsp[0].str), (yyvsp[-3].str) ,(yyvsp[-1].str));}
#line 2251 "parcer.tab.c"
    break;

  case 102: /* comp_declaration: comp_declaration DEL_HASHTAG T_ID DEL_COMMA  */
#line 310 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2257 "parcer.tab.c"
    break;

  case 103: /* comp_declaration: comp_declaration DEL_HASHTAG T_ID DEL_LBRAC DEL_RBRAC var_type  */
#line 311 "parcer.y"
                                                                        {(yyval.str) = template("%s%s, ", (yyvsp[-5].str), (yyvsp[-3].str));}
#line 2263 "parcer.tab.c"
    break;

  case 104: /* comp_functions: comp_function DEL_QUEST  */
#line 315 "parcer.y"
                                                                {(yyval.comp_func).func_name = template("%s(*%s) (%s);", (yyvsp[-1].comp_func).func_ret_type, (yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_args); (yyval.comp_func).func_const = template(" .%s=%s",(yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_name); (yyval.comp_func).func_all = template("%s\n", (yyvsp[-1].comp_func).func_all);}
#line 2269 "parcer.tab.c"
    break;

  case 105: /* comp_functions: comp_functions comp_function DEL_QUEST  */
#line 316 "parcer.y"
                                                {(yyval.comp_func).func_name = template("%s\n%s(*%s) (%s);\n",(yyvsp[-2].comp_func).func_name, (yyvsp[-1].comp_func).func_ret_type, (yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_args); (yyval.comp_func).func_const = template("%s, .%s=%s",(yyvsp[-2].comp_func).func_const, (yyvsp[-1].comp_func).func_name, (yyvsp[-1].comp_func).func_name); (yyval.comp_func).func_all = template("%s\n%s\n", (yyvsp[-2].comp_func).func_all, (yyvsp[-1].comp_func).func_all);}
#line 2275 "parcer.tab.c"
    break;

  case 106: /* comp_function: KW_def T_ID DEL_LPAR DEL_RPAR DEL_DOTS KW_enddef  */
#line 320 "parcer.y"
                                                                                                                                        {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-4].str); (yyval.comp_func).func_args = template("SELF"); (yyval.comp_func).func_all = template("void %s (SELF){\n}", (yyvsp[-4].str));}
#line 2281 "parcer.tab.c"
    break;

  case 107: /* comp_function: KW_def T_ID DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS KW_enddef  */
#line 321 "parcer.y"
                                                                                                                        {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-5].str); (yyval.comp_func).func_args = template("SELF, %s", (yyvsp[-3].str)); (yyval.comp_func).func_all = template("void %s (SELF){\n}", (yyvsp[-5].str));}
#line 2287 "parcer.tab.c"
    break;

  case 108: /* comp_function: KW_def T_ID DEL_LPAR DEL_RPAR DEL_DOTS comp_function_body KW_enddef  */
#line 322 "parcer.y"
                                                                                                                        {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-5].str); (yyval.comp_func).func_args = template("SELF"); (yyval.comp_func).func_all = template("void %s (SELF){\n%s}", (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2293 "parcer.tab.c"
    break;

  case 109: /* comp_function: KW_def T_ID DEL_LPAR DEL_RPAR fcn_ret_type comp_function_body KW_enddef  */
#line 323 "parcer.y"
                                                                                                                {(yyval.comp_func).func_ret_type = template("%s ", (yyvsp[-2].str)); (yyval.comp_func).func_name = (yyvsp[-5].str); (yyval.comp_func).func_args = template("SELF"); (yyval.comp_func).func_all = template("%s %s (SELF){\n%s}", (yyvsp[-2].str), (yyvsp[-5].str), (yyvsp[-1].str));}
#line 2299 "parcer.tab.c"
    break;

  case 110: /* comp_function: KW_def T_ID DEL_LPAR fcn_arguments DEL_RPAR DEL_DOTS comp_function_body KW_enddef  */
#line 324 "parcer.y"
                                                                                                {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-6].str); (yyval.comp_func).func_args = template("SELF, %s", (yyvsp[-4].str)); (yyval.comp_func).func_all = template("void %s (SELF, %s){\n%s}", (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2305 "parcer.tab.c"
    break;

  case 111: /* comp_function: KW_def T_ID DEL_LPAR fcn_arguments DEL_RPAR fcn_ret_type comp_function_body KW_enddef  */
#line 325 "parcer.y"
                                                                                                {(yyval.comp_func).func_ret_type = template("void "); (yyval.comp_func).func_name = (yyvsp[-6].str); (yyval.comp_func).func_args = template("SELF, %s", (yyvsp[-4].str)); (yyval.comp_func).func_all = template("void %s (SELF, %s){\n%s}", (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 2311 "parcer.tab.c"
    break;

  case 113: /* comp_fcn_arguments: comp_fcn_arguments DEL_HASHTAG attribute  */
#line 330 "parcer.y"
                                                {(yyval.str) = template("%sSELF->%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2317 "parcer.tab.c"
    break;

  case 114: /* comp_fcn_arguments: comp_fcn_arguments DEL_HASHTAG attribute operator  */
#line 331 "parcer.y"
                                                        {(yyval.str) = template("%sSELF->%s", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2323 "parcer.tab.c"
    break;

  case 115: /* comp_fcn_arguments: comp_fcn_arguments DEL_COMMA  */
#line 332 "parcer.y"
                                                                {(yyval.str) = template("%s, ",  (yyvsp[-1].str));}
#line 2329 "parcer.tab.c"
    break;

  case 116: /* comp_fcn_arguments: comp_fcn_arguments attribute DEL_COMMA  */
#line 333 "parcer.y"
                                                        {(yyval.str) = template("%sSELF->%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2335 "parcer.tab.c"
    break;

  case 117: /* comp_function_body: comp_assignment DEL_QUEST  */
#line 336 "parcer.y"
                                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2341 "parcer.tab.c"
    break;

  case 118: /* comp_function_body: comp_function_body comp_assignment DEL_QUEST  */
#line 337 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2347 "parcer.tab.c"
    break;

  case 119: /* comp_function_body: comp_fcn_call DEL_QUEST  */
#line 338 "parcer.y"
                                                                                {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2353 "parcer.tab.c"
    break;

  case 120: /* comp_function_body: comp_function_body comp_fcn_call DEL_QUEST  */
#line 339 "parcer.y"
                                                        {(yyval.str) = template("%s%s;\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2359 "parcer.tab.c"
    break;

  case 121: /* comp_function_body: if_statement DEL_QUEST  */
#line 340 "parcer.y"
                                                                                {(yyval.str) = template("%s\n", (yyvsp[-1].str));}
#line 2365 "parcer.tab.c"
    break;

  case 122: /* comp_function_body: comp_function_body if_statement DEL_QUEST  */
#line 341 "parcer.y"
                                                        {(yyval.str) = template("%s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2371 "parcer.tab.c"
    break;

  case 125: /* comp_assignment: DEL_HASHTAG T_ID OP_EQUAL attribute  */
#line 347 "parcer.y"
                                                                                        {(yyval.str) = template("self->%s = %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2377 "parcer.tab.c"
    break;

  case 126: /* comp_assignment: comp_assignment DEL_HASHTAG T_ID OP_EQUAL attribute  */
#line 348 "parcer.y"
                                                                {(yyval.str) = template("%sself->%s = %s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2383 "parcer.tab.c"
    break;

  case 127: /* comp_assignment: DEL_HASHTAG T_ID DEL_DOT comp_fcn_call  */
#line 349 "parcer.y"
                                                                                {(yyval.str) = template("%s.%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2389 "parcer.tab.c"
    break;

  case 128: /* comp_assignment: comp_assignment DEL_HASHTAG T_ID DEL_DOT comp_fcn_call  */
#line 350 "parcer.y"
                                                                {(yyval.str) = template("%s%s.%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2395 "parcer.tab.c"
    break;

  case 129: /* comp_fcn_call: T_ID DEL_LPAR DEL_RPAR  */
#line 353 "parcer.y"
                                                                                                {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 2401 "parcer.tab.c"
    break;

  case 130: /* comp_fcn_call: DEL_HASHTAG T_ID DEL_LPAR DEL_RPAR  */
#line 354 "parcer.y"
                                                                                {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 2407 "parcer.tab.c"
    break;

  case 131: /* comp_fcn_call: T_ID DEL_LPAR comp_fcn_arguments DEL_RPAR  */
#line 355 "parcer.y"
                                                                        {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2413 "parcer.tab.c"
    break;

  case 132: /* comp_fcn_call: DEL_HASHTAG T_ID DEL_LPAR comp_fcn_arguments DEL_RPAR  */
#line 356 "parcer.y"
                                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2419 "parcer.tab.c"
    break;

  case 135: /* right_part: attribute operator  */
#line 363 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 2425 "parcer.tab.c"
    break;

  case 136: /* right_part: attribute DEL_COMMA  */
#line 364 "parcer.y"
                                                                                        {(yyval.str) = template("%s, ", (yyvsp[-1].str));}
#line 2431 "parcer.tab.c"
    break;

  case 137: /* right_part: DEL_LPAR right_part DEL_RPAR  */
#line 365 "parcer.y"
                                                                                {(yyval.str) = template("(%s)", (yyvsp[-1].str));}
#line 2437 "parcer.tab.c"
    break;

  case 138: /* right_part: DEL_LPAR right_part DEL_RPAR operator  */
#line 366 "parcer.y"
                                                                        {(yyval.str) = template("(%s)%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2443 "parcer.tab.c"
    break;

  case 139: /* right_part: DEL_LBRAC right_part DEL_RBRAC  */
#line 367 "parcer.y"
                                                                                {(yyval.str) = template("[%s]", (yyvsp[-1].str));}
#line 2449 "parcer.tab.c"
    break;

  case 140: /* right_part: DEL_LBRAC right_part DEL_RBRAC operator  */
#line 368 "parcer.y"
                                                                {(yyval.str) = template("[%s]%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2455 "parcer.tab.c"
    break;

  case 141: /* right_part: right_part attribute  */
#line 369 "parcer.y"
                                                                                        {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 2461 "parcer.tab.c"
    break;

  case 142: /* right_part: right_part attribute operator  */
#line 370 "parcer.y"
                                                                                {(yyval.str) = template("%s%s%s", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str));}
#line 2467 "parcer.tab.c"
    break;

  case 143: /* right_part: right_part attribute DEL_COMMA  */
#line 371 "parcer.y"
                                                                                {(yyval.str) = template("%s%s, ", (yyvsp[-2].str), (yyvsp[-1].str));}
#line 2473 "parcer.tab.c"
    break;

  case 144: /* right_part: right_part DEL_LPAR DEL_RPAR  */
#line 372 "parcer.y"
                                                                                {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 2479 "parcer.tab.c"
    break;

  case 145: /* right_part: right_part DEL_LPAR DEL_RPAR operator  */
#line 373 "parcer.y"
                                                                        {(yyval.str) = template("%s()%s", (yyvsp[-3].str), (yyvsp[0].str));}
#line 2485 "parcer.tab.c"
    break;

  case 146: /* right_part: right_part DEL_LPAR right_part DEL_RPAR  */
#line 374 "parcer.y"
                                                                {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2491 "parcer.tab.c"
    break;

  case 147: /* right_part: right_part DEL_LPAR right_part DEL_RPAR operator  */
#line 375 "parcer.y"
                                                        {(yyval.str) = template("%s(%s)%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2497 "parcer.tab.c"
    break;

  case 148: /* right_part: right_part DEL_LBRAC right_part DEL_RBRAC  */
#line 376 "parcer.y"
                                                                {(yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 2503 "parcer.tab.c"
    break;

  case 149: /* right_part: right_part DEL_LBRAC right_part DEL_RBRAC operator  */
#line 377 "parcer.y"
                                                        {(yyval.str) = template("%s[%s]%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2509 "parcer.tab.c"
    break;

  case 154: /* attribute: KW_main  */
#line 384 "parcer.y"
                {(yyval.str) = template("main");}
#line 2515 "parcer.tab.c"
    break;

  case 155: /* attribute: KW_True  */
#line 385 "parcer.y"
                {(yyval.str) = template("1");}
#line 2521 "parcer.tab.c"
    break;

  case 156: /* attribute: KW_False  */
#line 386 "parcer.y"
                {(yyval.str) = template("0");}
#line 2527 "parcer.tab.c"
    break;

  case 157: /* attribute: KW_and  */
#line 387 "parcer.y"
                {(yyval.str) = template(" && ");}
#line 2533 "parcer.tab.c"
    break;

  case 158: /* attribute: DEL_HASHTAG  */
#line 388 "parcer.y"
                {(yyval.str) = template(" #");}
#line 2539 "parcer.tab.c"
    break;

  case 159: /* operator: OP_MINUS  */
#line 391 "parcer.y"
                        {(yyval.str) = template(" - ");}
#line 2545 "parcer.tab.c"
    break;

  case 160: /* operator: OP_PLUS  */
#line 392 "parcer.y"
                        {(yyval.str) = template(" + ");}
#line 2551 "parcer.tab.c"
    break;

  case 161: /* operator: OP_MUL  */
#line 393 "parcer.y"
                        {(yyval.str) = template("*");}
#line 2557 "parcer.tab.c"
    break;

  case 162: /* operator: OP_DIV  */
#line 394 "parcer.y"
                        {(yyval.str) = template(" %s ", "/");}
#line 2563 "parcer.tab.c"
    break;

  case 163: /* operator: OP_GREATER  */
#line 395 "parcer.y"
                {(yyval.str) = template(" > ");}
#line 2569 "parcer.tab.c"
    break;

  case 164: /* operator: OP_EQUAL  */
#line 396 "parcer.y"
                {(yyval.str) = template(" = ");}
#line 2575 "parcer.tab.c"
    break;

  case 165: /* operator: OP_LESS  */
#line 397 "parcer.y"
                        {(yyval.str) = template(" < ");}
#line 2581 "parcer.tab.c"
    break;

  case 166: /* operator: OP_LEQ  */
#line 398 "parcer.y"
                        {(yyval.str) = template(" <= ");}
#line 2587 "parcer.tab.c"
    break;

  case 167: /* operator: OP_EQ  */
#line 399 "parcer.y"
                        {(yyval.str) = template(" == ");}
#line 2593 "parcer.tab.c"
    break;

  case 168: /* operator: OP_MOD  */
#line 400 "parcer.y"
                        {(yyval.str) = template(" %s ", "%"); }
#line 2599 "parcer.tab.c"
    break;

  case 169: /* operator: OP_NOTEQ  */
#line 401 "parcer.y"
                {(yyval.str) = template(" != ");}
#line 2605 "parcer.tab.c"
    break;

  case 170: /* operator: OP_INCREM  */
#line 402 "parcer.y"
                {(yyval.str) = template(" += ");}
#line 2611 "parcer.tab.c"
    break;


#line 2615 "parcer.tab.c"

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

#line 406 "parcer.y"

int main(){
	if (yyparse() == 0)
		printf("\n");
	else
		printf("\n");
}
