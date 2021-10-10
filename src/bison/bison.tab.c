/* A Bison parser, made by GNU Bison 3.8.  */

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
#define YYBISON 30800

/* Bison version string.  */
#define YYBISON_VERSION "3.8"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 3 "src/bison/bison.y"

#include "scope.stack.h"
#include "symbol.table.h"
#include "token.h"
#include "node.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yylex_destroy();
extern void yyerror(const char* s);
extern int scopeStack[100];
extern int scopeId;
SymbolList *symbolTable;
extern Node *tree;
extern int linhas;
extern int colunas;
int errors = 0;
int errosSemanticos;
int numberOfParams = 0;
int numberOfArguments = 0;

// functions

void verifyIfIsList(int tipo, char *operator, int line, int column, int typeError);

// end functions

#define BHRED "\e[1;91m"
#define RESET "\e[0m"

#line 104 "src/bison/bison.tab.c"

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

#include "bison.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_NIL = 6,                        /* NIL  */
  YYSYMBOL_IF = 7,                         /* IF  */
  YYSYMBOL_ELSE = 8,                       /* ELSE  */
  YYSYMBOL_ASSIGN = 9,                     /* ASSIGN  */
  YYSYMBOL_FOR = 10,                       /* FOR  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_TYPE = 12,                      /* TYPE  */
  YYSYMBOL_WRITE = 13,                     /* WRITE  */
  YYSYMBOL_WRITELN = 14,                   /* WRITELN  */
  YYSYMBOL_READ = 15,                      /* READ  */
  YYSYMBOL_MUL_OP = 16,                    /* MUL_OP  */
  YYSYMBOL_SUM_OP = 17,                    /* SUM_OP  */
  YYSYMBOL_REL_OP = 18,                    /* REL_OP  */
  YYSYMBOL_EXCLAMATION = 19,               /* EXCLAMATION  */
  YYSYMBOL_LOG_OP = 20,                    /* LOG_OP  */
  YYSYMBOL_21_ = 21,                       /* ':'  */
  YYSYMBOL_22_ = 22,                       /* '?'  */
  YYSYMBOL_23_ = 23,                       /* '%'  */
  YYSYMBOL_MAP = 24,                       /* MAP  */
  YYSYMBOL_FILTER = 25,                    /* FILTER  */
  YYSYMBOL_THEN = 26,                      /* THEN  */
  YYSYMBOL_STRING = 27,                    /* STRING  */
  YYSYMBOL_28_ = 28,                       /* ';'  */
  YYSYMBOL_29_ = 29,                       /* ','  */
  YYSYMBOL_30_ = 30,                       /* '('  */
  YYSYMBOL_31_ = 31,                       /* ')'  */
  YYSYMBOL_32_ = 32,                       /* '{'  */
  YYSYMBOL_33_ = 33,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_S = 35,                         /* S  */
  YYSYMBOL_decl_list = 36,                 /* decl_list  */
  YYSYMBOL_decl = 37,                      /* decl  */
  YYSYMBOL_var_decl = 38,                  /* var_decl  */
  YYSYMBOL_fun_decl = 39,                  /* fun_decl  */
  YYSYMBOL_40_1 = 40,                      /* $@1  */
  YYSYMBOL_41_2 = 41,                      /* $@2  */
  YYSYMBOL_params = 42,                    /* params  */
  YYSYMBOL_param_decl = 43,                /* param_decl  */
  YYSYMBOL_statement = 44,                 /* statement  */
  YYSYMBOL_for_stmt = 45,                  /* for_stmt  */
  YYSYMBOL_exp_stmt = 46,                  /* exp_stmt  */
  YYSYMBOL_exp = 47,                       /* exp  */
  YYSYMBOL_assign_exp = 48,                /* assign_exp  */
  YYSYMBOL_block_stmt = 49,                /* block_stmt  */
  YYSYMBOL_stmt_list = 50,                 /* stmt_list  */
  YYSYMBOL_if_stmt = 51,                   /* if_stmt  */
  YYSYMBOL_return_stmt = 52,               /* return_stmt  */
  YYSYMBOL_write_stmt = 53,                /* write_stmt  */
  YYSYMBOL_writeln_stmt = 54,              /* writeln_stmt  */
  YYSYMBOL_read_stmt = 55,                 /* read_stmt  */
  YYSYMBOL_simple_exp = 56,                /* simple_exp  */
  YYSYMBOL_unary_list_exp = 57,            /* unary_list_exp  */
  YYSYMBOL_list_exp = 58,                  /* list_exp  */
  YYSYMBOL_bin_exp = 59,                   /* bin_exp  */
  YYSYMBOL_unary_log_exp = 60,             /* unary_log_exp  */
  YYSYMBOL_rel_exp = 61,                   /* rel_exp  */
  YYSYMBOL_sum_exp = 62,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 63,                   /* mul_exp  */
  YYSYMBOL_factor = 64,                    /* factor  */
  YYSYMBOL_immutable = 65,                 /* immutable  */
  YYSYMBOL_call = 66,                      /* call  */
  YYSYMBOL_args = 67,                      /* args  */
  YYSYMBOL_constant = 68                   /* constant  */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3990

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  408

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   279


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
       2,     2,     2,     2,     2,     2,     2,    23,     2,     2,
      30,    31,     2,     2,    29,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    21,    28,
       2,     2,     2,    22,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    32,     2,    33,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    24,    25,    26,    27
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    98,    98,   104,   109,   115,   118,   125,   140,   140,
     162,   162,   180,   186,   192,   195,   201,   216,   219,   222,
     225,   228,   231,   234,   237,   240,   246,   256,   263,   266,
     272,   275,   281,   299,   305,   311,   316,   319,   325,   333,
     349,   353,   359,   365,   375,   384,   398,   401,   407,   417,
     429,   437,   449,   464,   471,   478,   485,   492,   499,   506,
     513,   520,   527,   531,   537,   540,   546,   554,   558,   562,
     569,   580,   593,   599,   606,   611,   616,   621
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INT", "FLOAT",
  "NIL", "IF", "ELSE", "ASSIGN", "FOR", "RETURN", "TYPE", "WRITE",
  "WRITELN", "READ", "MUL_OP", "SUM_OP", "REL_OP", "EXCLAMATION", "LOG_OP",
  "':'", "'?'", "'%'", "MAP", "FILTER", "THEN", "STRING", "';'", "','",
  "'('", "')'", "'{'", "'}'", "$accept", "S", "decl_list", "decl",
  "var_decl", "fun_decl", "$@1", "$@2", "params", "param_decl",
  "statement", "for_stmt", "exp_stmt", "exp", "assign_exp", "block_stmt",
  "stmt_list", "if_stmt", "return_stmt", "write_stmt", "writeln_stmt",
  "read_stmt", "simple_exp", "unary_list_exp", "list_exp", "bin_exp",
  "unary_log_exp", "rel_exp", "sum_exp", "mul_exp", "factor", "immutable",
  "call", "args", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-201)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-78)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      24,    82,    23,    17,   100,   167,   222,   261,    -1,  -201,
     297,   332,     4,    88,    41,    27,   175,   258,   262,    30,
      67,    52,  3314,   378,   360,    30,    90,   622,  1334,  3818,
      72,   104,   147,   130,   109,   114,   124,    34,   466,   194,
     194,  3831,  2392,  1570,  2425,  2458,  2491,  2524,    60,   158,
    2557,  2590,  2623,  2656,  2689,  2722,  2755,   187,   785,   191,
      38,    65,   103,   337,   921,  3844,  3857,  3870,  3883,   402,
     208,  1608,   389,  1570,   412,  2788,  2821,   209,   214,  1570,
    1570,   243,  3803,  3896,   135,  1020,  1427,  3428,   229,  2854,
    2887,   409,  2920,   466,  1513,  1513,   194,   600,   600,   600,
     235,  3909,   399,   417,   233,   256,   201,   266,  2953,   276,
     277,   281,  3922,   213,   379,  3473,  3489,   290,   293,   302,
    3374,  3935,  3344,  1608,  1608,   306,   307,   317,   423,   715,
     328,   341,  2986,  3019,  3052,  3314,   369,   369,  3085,   342,
     350,  3314,  3314,  3118,  3151,  3314,   446,  3505,  3521,  3537,
     194,  3553,  1570,  3569,  3585,  3601,  1181,   346,   748,   936,
     648,  3383,   652,   652,  1217,  1570,   129,   391,    22,    78,
      -9,    32,   227,  1585,  3607,  3619,  3631,   678,  1046,  1471,
    3443,   757,  3411,   826,   826,  3463,  1570,   172,   444,   -10,
      36,   252,    14,   523,  3479,  3495,  3511,  3527,  3184,   451,
     372,   395,   407,   600,   408,  1570,   421,   429,   432,   397,
     426,   190,   464,   438,   448,   460,  1363,  3314,  1659,  1699,
    1732,   463,  1765,  1798,  1831,  1864,  1897,  1930,   279,  3217,
     428,  3797,   467,   515,  3643,   321,   484,  1076,  1552,   652,
    1601,  1570,    85,  1677,  3727,  3737,  3743,  3749,  3755,   472,
    3383,  3420,  3420,   652,   883,   883,   883,   560,  3543,   112,
     540,   863,   961,   826,   985,  1570,   142,  1012,  1110,  1197,
    1448,  1495,  1627,   478,  3411,  3448,  3448,   826,   913,   913,
     913,   787,   488,   486,  1570,   481,  1963,  1996,   496,   502,
    1570,  1570,   491,  3250,  2029,   513,  1570,  3283,  3948,   504,
    3953,  3655,   518,  1083,  3761,   524,  3667,    93,    58,  3767,
    3773,   152,   528,   531,   536,   883,   545,  1570,   549,   550,
     554,   557,   558,   562,  3559,   522,  1131,  3391,   584,  3575,
     156,   494,  3689,  3695,   296,   541,   563,   578,   913,   582,
    1570,   583,   587,   630,   639,   655,   675,   603,   682,   616,
     597,   617,   621,  2062,  2095,   632,   633,   641,  2128,   645,
    3962,  3679,  3779,   702,  3785,  1248,   646,   649,  3591,  3705,
     710,  3711,  1278,   720,   650,   669,  3344,  1608,  1608,   672,
     673,   677,  3791,   681,   721,   684,  3721,   765,   769,   790,
    2161,   696,   707,  2194,  2227,  2260,   705,   797,  3344,   369,
     369,  2293,   709,   722,  3344,  3344,  2326,  2359
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -201,  -201,  -201,   754,     0,  -201,  -201,  -201,  -201,   747,
     -45,  -119,  -102,   -30,   -50,   -18,  -137,   -99,   -94,   -81,
     -76,   -62,   196,  1039,  1268,  1358,   890,  1264,  1167,   892,
     -25,   345,   594,  -200,   743
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    44,     7,    25,    19,    16,    17,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,   103,    68
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    23,    77,   219,     6,    13,    92,    69,   229,   251,
     274,   -56,    83,    85,    86,    87,    14,     9,   173,   -46,
     220,   -46,   -56,   223,   107,     1,     8,    11,   224,    12,
     299,   276,   -58,   302,   -58,    15,     2,    82,    27,    28,
      29,   225,   250,   -58,    18,   -58,   226,   194,   173,   252,
     -58,    37,   -58,   -46,   173,   173,   -54,   325,    93,   -10,
     227,    41,    22,   -58,    43,   -54,   -46,   -54,    85,    85,
      85,   116,   117,   118,   119,   252,   -57,   129,   -57,    14,
     293,   348,   -12,   -12,    -8,   -54,   139,   140,    89,   -57,
     138,    70,   221,   -54,   -12,   194,   143,   144,   -54,    71,
      -2,     1,    73,   363,   222,   -55,   -65,   -65,   -65,   -54,
     -65,   -65,     2,   -53,   -65,   -65,   -55,   -15,   -65,   -15,
      72,    94,   218,   -56,   -53,   231,   370,   173,   -65,   -65,
     -65,   -56,   -65,    78,    74,   234,   243,   247,   248,    79,
     173,   -65,   326,   -65,    80,   -63,   -63,   -63,    75,   -63,
      26,    27,    28,    29,    81,   -55,   258,   267,   271,   272,
     -63,   173,   -55,   -55,    37,   384,    38,    -4,    -4,    39,
      40,   -55,   388,   -55,    41,    76,   -53,    43,   282,    -4,
     173,   288,   365,   -65,    92,   -53,   -30,   -53,   -63,   -63,
     -63,   286,   -63,    26,    27,    28,    29,   146,   147,   148,
     149,   -63,    70,   -63,    20,   194,    21,    37,   194,    38,
      71,   150,    39,    40,   304,   -31,   173,    41,   287,   -47,
      43,   151,    -5,    -5,   152,   243,   243,   243,   310,   318,
     322,   323,   194,   -53,    -5,   352,   -33,   108,   327,    88,
     173,   -53,   198,   253,   -60,   -60,   111,   -60,    92,   267,
     267,   267,   333,   341,   345,   346,   194,   219,   -60,   173,
     112,    -6,    -6,   -32,   122,   173,   173,   100,   102,   104,
     275,   173,   -56,    -6,   220,   109,   110,   223,   194,   219,
     295,   -56,   224,   -56,   123,   219,   219,   -14,   296,   -14,
     366,   -16,   173,   -16,   124,   225,   220,    -3,    -3,   223,
     226,   194,   220,   220,   224,   223,   223,   125,   126,    -3,
     224,   224,   127,   373,   227,   173,   128,   225,   -50,   130,
     131,   -51,   226,   225,   225,   -65,   372,   -65,   226,   226,
     -52,   390,    -7,    -7,   132,   133,   227,   -65,   -65,   -65,
     194,   -65,   227,   227,    -7,   134,   221,   194,   232,   402,
     403,   303,   -65,   401,    95,   -58,   136,   -58,   222,   406,
     407,   249,   -75,   -75,   -75,   -58,   -75,   -75,   221,   137,
     -75,   -75,   228,   141,   221,   221,   218,   -75,   -11,   -11,
     222,   142,   273,   153,   153,   153,   222,   222,   174,   -13,
     -11,   -13,   177,   178,   179,   180,    95,   -57,   218,   -57,
     -75,   283,    -9,    -9,   218,   218,   181,   -57,   182,   -34,
     -34,   183,   184,   105,    -9,   106,   185,   195,   174,   186,
     101,   -34,   -47,   -76,   174,   174,   102,   284,   -73,   102,
     -73,   177,   178,   179,   180,   -74,   -77,   305,   153,   153,
     153,   153,   206,   206,   206,   181,   120,   182,   121,   -64,
     183,   184,   -72,   102,   -72,   185,   285,   -68,   186,   298,
     -69,   328,   -65,   -65,   -65,   195,   -65,   289,   290,   146,
     147,   148,   149,   -47,   -65,   -47,   230,   102,   291,   -65,
     350,   281,   351,   150,   106,    38,   355,   356,    39,    40,
     292,   294,   359,   151,   357,   153,   152,   174,   300,   102,
     -75,   -75,   -75,   306,   -75,   174,   244,   244,   244,   329,
     174,   276,   -57,   367,   -57,   -75,   -66,   349,   177,   178,
     179,   180,   102,   -57,   353,   -57,   195,   268,   268,   268,
     354,   174,   181,   120,   182,   360,   374,   183,   184,   277,
     -60,   -60,   185,   -60,   -33,   186,   301,   120,   206,   361,
     174,   120,   -60,   368,   -60,   364,   -75,   -75,   -75,   -75,
     -75,   102,   -76,   177,   178,   179,   180,   -74,   102,   -75,
     -75,   -75,   -75,   391,   392,   195,   -77,   181,   195,   182,
     -50,   -64,   183,   184,   244,   -68,   174,   185,   -69,   -51,
     186,   324,   -76,   -52,   -76,   244,   244,   244,   244,   319,
     319,   319,   195,   199,   200,   201,   202,   -74,   268,   -74,
     174,   -77,   -50,   -77,   -50,   371,   -64,   203,   -64,   268,
     268,   268,   268,   342,   342,   342,   195,   204,   376,   174,
     205,   -71,   154,   154,   154,   174,   174,   175,   -75,   -75,
     -75,   174,   -75,   -75,   -67,   377,   -75,   -75,   195,   378,
     -75,   156,   157,   158,   159,   235,   236,   237,   238,   -68,
     319,   -68,   174,   379,   380,   160,   196,   175,   -69,   239,
     -69,   195,   381,   175,   175,   164,   -32,   -66,   165,   240,
     385,   389,   241,   342,   -51,   174,   -51,   154,   154,   154,
     154,   207,   207,   207,   -65,   -65,   -65,   -70,   -65,   -65,
     393,   394,   -65,   -65,   -52,   395,   -52,   -65,   257,   -65,
     195,   120,   -71,   375,   196,   -67,   -38,   195,   -38,   -38,
     -38,   -38,   -38,   135,   399,   -38,   -38,   -38,   -38,   -38,
     -38,   120,   -38,   382,   -38,   400,   -70,   -38,   -38,   120,
     404,   386,   -38,   -38,   154,   -38,   175,   -38,   -38,   -66,
     120,   -66,   396,   405,   175,   245,   245,   245,    10,   175,
     177,   178,   179,   180,   -76,   -76,   -76,    24,   -76,   -76,
       0,     0,   -76,   -76,   181,   196,   269,   269,   269,   -76,
     175,   155,   155,   155,   185,     0,   176,   186,     0,     0,
     177,   178,   179,   180,   -71,     0,   -71,   207,   120,   175,
     397,   -63,   -63,   -63,   181,   -63,   182,     0,     0,   183,
     184,     0,     0,   -63,   185,   197,   176,   186,   347,   -67,
       0,   -67,   176,   176,   196,     0,   -70,   196,   -70,   259,
     260,   261,   262,   245,     0,   175,   155,   155,   155,   155,
     208,   208,   208,   263,   245,   245,   245,   245,   320,   320,
     320,   196,     0,   264,     0,     0,   265,   269,     0,   175,
       0,     0,     0,   197,     0,     0,     0,     0,   269,   269,
     269,   269,   343,   343,   343,   196,     0,     0,   175,   -76,
     -76,   -76,     0,   -76,   175,   175,   311,   312,   313,   314,
     175,     0,   -76,   155,   -76,   176,     0,   196,     0,     0,
     315,     0,     0,   176,   246,   246,   246,     0,   176,   320,
     316,   175,     0,   317,     0,     0,   334,   335,   336,   337,
     196,     0,     0,     0,   197,   270,   270,   270,    84,   176,
     338,     0,   343,   169,   175,   172,     0,    96,   -60,   -60,
     339,   -60,     0,   340,     0,     0,   208,     0,   176,   -60,
       0,     0,   -74,   -74,   -74,     0,   -74,   -74,     0,   196,
     -74,   -74,   190,   169,   193,   172,   196,   -74,     0,   169,
     169,   172,   172,   197,     0,     0,   197,   -74,   -74,   -74,
       0,   -74,   246,   113,   176,     0,     0,   115,     0,     0,
     -74,     0,   -74,   246,   246,   246,   246,   321,   321,   321,
     197,   -77,   -77,   -77,     0,   -77,   270,     0,   176,     0,
     190,     0,   193,     0,   -77,     0,   -77,   270,   270,   270,
     270,   344,   344,   344,   197,     0,     0,   176,   -62,   -62,
     -62,     0,   -62,   176,   176,     0,   -62,   -62,   -62,   176,
     -62,   -62,   169,   -62,   172,     0,   197,     0,   -62,     0,
       0,   242,     0,   172,     0,   169,     0,   172,   321,     0,
     176,     0,   -75,   -75,   -75,     0,   -75,   -75,     0,   197,
     -75,   -75,   266,     0,   193,   -75,   169,   -75,   172,     0,
       0,   344,   166,   176,     0,     0,   177,   178,   179,   180,
       0,     0,   -76,   -76,   -76,   169,   -76,   172,     0,     0,
     181,     0,   182,     0,     0,   183,   184,   -76,   197,     0,
     185,   187,   166,   186,   362,   197,     0,     0,   166,   166,
     190,     0,   193,   190,     0,   193,   -64,   -64,   -64,     0,
     -64,   169,     0,   172,   177,   178,   179,   180,     0,   -64,
     307,   -64,   172,   172,   309,     0,     0,   190,   181,   193,
     182,     0,     0,   183,   184,   169,     0,   172,   185,   187,
       0,   186,   369,     0,   330,     0,   193,   193,   332,     0,
       0,   190,     0,   193,   169,     0,   172,     0,     0,     0,
     169,   169,   172,   172,     0,     0,   169,     0,   172,     0,
       0,   166,     0,   190,     0,   193,     0,   -65,   -65,   -65,
     166,   -65,   -65,     0,   166,   -65,   -65,   169,     0,   172,
     171,   233,   -65,   -68,   -68,   -68,   190,   -68,   193,     0,
       0,   187,     0,     0,     0,   166,   -68,     0,   -68,     0,
     169,     0,   172,   -77,   -77,   -77,     0,   -77,   -77,   192,
     171,   -77,   -77,     0,   166,     0,   171,   171,   -77,     0,
       0,   177,   178,   179,   180,   190,     0,   193,     0,     0,
       0,   114,   190,     0,   193,   181,     0,   182,     0,   187,
     183,   184,   187,     0,     0,   185,     0,     0,   186,   383,
     166,   177,   178,   179,   180,     0,     0,   192,     0,   166,
     166,   166,     0,     0,     0,   181,   187,   182,     0,     0,
     183,   184,     0,     0,   166,   185,     0,   170,   186,   387,
       0,   167,     0,   187,   187,   187,     0,     0,     0,   171,
     187,     0,     0,   166,     0,     0,     0,     0,   171,   166,
     166,     0,   171,     0,     0,   166,   191,   170,     0,     0,
     188,   167,   187,   170,   170,     0,     0,   167,   167,   192,
     -76,   -76,   -76,   171,   -76,   -76,   166,     0,   -76,   -76,
       0,     0,   -76,     0,   -29,   187,   -29,   -29,   -29,   -29,
     -29,   -29,   171,   -29,   -29,   -29,   -29,   -29,   -29,   166,
     -29,     0,   -29,     0,   191,   -29,   -29,     0,   188,     0,
     -29,   -29,     0,   -29,     0,   -29,   -29,   192,     0,     0,
     192,   168,     0,     0,   187,     0,     0,     0,   171,     0,
       0,   187,     0,     0,     0,     0,   170,   171,   308,     0,
     167,     0,     0,     0,   192,   170,     0,     0,     0,   170,
     189,   168,   171,   167,     0,     0,     0,   168,   168,     0,
       0,   192,   331,   -48,   -48,   -48,   191,   -48,   192,     0,
     170,   171,     0,     0,   167,   -48,     0,   171,   171,     0,
       0,     0,     0,   171,   -69,   -69,   -69,     0,   -69,   170,
     192,     0,     0,   167,     0,     0,     0,   -69,   189,   -69,
       0,     0,     0,     0,   171,     0,     0,   -76,   -76,   -76,
       0,   -76,   -76,   192,   191,   -76,   -76,   191,   188,     0,
     -76,   188,   -76,     0,     0,   170,     0,   171,     0,   167,
     168,   -48,   -48,   -48,   170,   -48,   146,   147,   148,   149,
       0,   191,     0,   168,   -48,   188,   -48,     0,     0,   170,
     150,     0,   192,   167,     0,    39,    40,     0,   191,   192,
     151,     0,     0,   152,   168,   191,     0,     0,   170,   188,
       0,     0,   167,     0,   170,   170,     0,     0,   167,   167,
     170,     0,     0,   168,   167,     0,     0,   191,   -74,   -74,
     -74,   188,   -74,   156,   157,   158,   159,     0,     0,     0,
       0,   170,     0,   -74,     0,   167,     0,   160,   189,   161,
     191,   189,   162,   163,   188,     0,     0,   164,     0,   168,
     165,   -62,   -62,   -62,   170,   -62,   254,     0,   167,   255,
     256,    82,    27,    28,    29,   189,   -62,   -77,   -77,   -77,
       0,   -77,     0,   168,     0,    37,     0,    38,     0,   191,
      39,    40,   -77,   188,     0,    41,   191,     0,    43,   189,
     188,     0,   168,   -49,   -49,   -49,     0,   -49,   168,   168,
       0,     0,     0,     0,   168,     0,   -49,     0,   -49,     0,
     -24,   189,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -24,   -24,   168,   -24,     0,   -24,     0,
       0,   -24,   -24,     0,   189,     0,   -24,   -24,     0,   -24,
       0,   -24,   -24,   -62,   -62,   -62,     0,   -62,   168,     0,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -62,   -25,
     -25,   -25,   -25,   -25,   -25,     0,   -25,     0,   -25,     0,
       0,   -25,   -25,   189,     0,     0,   -25,   -25,     0,   -25,
     189,   -25,   -25,   -17,     0,   -17,   -17,   -17,   -17,   -17,
     -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,     0,   -17,
       0,   -17,     0,     0,   -17,   -17,     0,     0,     0,   -17,
     -17,     0,   -17,     0,   -17,   -17,   -18,     0,   -18,   -18,
     -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,
     -18,     0,   -18,     0,   -18,     0,     0,   -18,   -18,     0,
       0,     0,   -18,   -18,     0,   -18,     0,   -18,   -18,   -19,
       0,   -19,   -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,
     -19,   -19,   -19,   -19,     0,   -19,     0,   -19,     0,     0,
     -19,   -19,     0,     0,     0,   -19,   -19,     0,   -19,     0,
     -19,   -19,   -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,
       0,   -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,     0,
     -20,     0,     0,   -20,   -20,     0,     0,     0,   -20,   -20,
       0,   -20,     0,   -20,   -20,   -21,     0,   -21,   -21,   -21,
     -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,
       0,   -21,     0,   -21,     0,     0,   -21,   -21,     0,     0,
       0,   -21,   -21,     0,   -21,     0,   -21,   -21,   -22,     0,
     -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,
     -22,   -22,   -22,     0,   -22,     0,   -22,     0,     0,   -22,
     -22,     0,     0,     0,   -22,   -22,     0,   -22,     0,   -22,
     -22,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,     0,   -23,
       0,     0,   -23,   -23,     0,     0,     0,   -23,   -23,     0,
     -23,     0,   -23,   -23,   -42,     0,   -42,   -42,   -42,   -42,
     -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,     0,
     -42,     0,   -42,     0,     0,   -42,   -42,     0,     0,     0,
     -42,   -42,     0,   -42,     0,   -42,   -42,   -40,     0,   -40,
     -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,
     -40,   -40,     0,   -40,     0,   -40,     0,     0,   -40,   -40,
       0,     0,     0,   -40,   -40,     0,   -40,     0,   -40,   -40,
     -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   -28,     0,   -28,     0,   -28,     0,
       0,   -28,   -28,     0,     0,     0,   -28,   -28,     0,   -28,
       0,   -28,   -28,   -41,     0,   -41,   -41,   -41,   -41,   -41,
     -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,
       0,   -41,     0,     0,   -41,   -41,     0,     0,     0,   -41,
     -41,     0,   -41,     0,   -41,   -41,    -7,     0,    -7,    -7,
      -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,
      -7,     0,    -7,     0,    -7,     0,     0,    -7,    -7,     0,
       0,     0,    -7,    -7,     0,    -7,     0,    -7,    -7,   -34,
       0,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,   -34,     0,   -34,     0,     0,
     -34,   -34,     0,     0,     0,   -34,   -34,     0,   -34,     0,
     -34,   -34,   -38,     0,   -38,   -38,   -38,   -38,   -38,   398,
       0,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,     0,
     -38,     0,     0,   -38,   -38,     0,     0,     0,   -38,   -38,
       0,   -38,     0,   -38,   -38,   -43,     0,   -43,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,
       0,   -43,     0,   -43,     0,     0,   -43,   -43,     0,     0,
       0,   -43,   -43,     0,   -43,     0,   -43,   -43,   -44,     0,
     -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,   -44,     0,   -44,     0,   -44,     0,     0,   -44,
     -44,     0,     0,     0,   -44,   -44,     0,   -44,     0,   -44,
     -44,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,     0,
     -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,     0,   -45,
       0,     0,   -45,   -45,     0,     0,     0,   -45,   -45,     0,
     -45,     0,   -45,   -45,   -39,     0,   -39,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,     0,
     -39,     0,   -39,     0,     0,   -39,   -39,     0,     0,     0,
     -39,   -39,     0,   -39,     0,   -39,   -39,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,     0,   -27,     0,     0,   -27,   -27,
       0,     0,     0,   -27,   -27,     0,   -27,     0,   -27,   -27,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,
     -26,   -26,   -26,   -26,   -26,     0,   -26,     0,   -26,     0,
       0,   -26,   -26,     0,     0,     0,   -26,   -26,     0,   -26,
       0,   -26,   -26,   -29,     0,   -29,   -29,   -29,   -29,   -29,
       0,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,
       0,   -29,     0,     0,   -29,   -29,     0,     0,     0,   -29,
     -29,     0,   -29,     0,   -29,   -29,   -24,     0,   -24,   -24,
     -24,   -24,   -24,     0,     0,   -24,   -24,   -24,   -24,   -24,
     -24,     0,   -24,     0,   -24,     0,     0,   -24,   -24,     0,
       0,     0,   -24,   -24,     0,   -24,     0,   -24,   -24,   -37,
       0,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,   -37,
     -37,   -37,   -37,   -37,     0,   -37,     0,   -37,     0,     0,
     -37,   -37,     0,     0,     0,   -37,   -37,     0,   -37,     0,
     -37,   -37,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,
       0,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,     0,
     -25,     0,     0,   -25,   -25,     0,     0,     0,   -25,   -25,
       0,   -25,     0,   -25,   -25,   -17,     0,   -17,   -17,   -17,
     -17,   -17,     0,     0,   -17,   -17,   -17,   -17,   -17,   -17,
       0,   -17,     0,   -17,     0,     0,   -17,   -17,     0,     0,
       0,   -17,   -17,     0,   -17,     0,   -17,   -17,   -18,     0,
     -18,   -18,   -18,   -18,   -18,     0,     0,   -18,   -18,   -18,
     -18,   -18,   -18,     0,   -18,     0,   -18,     0,     0,   -18,
     -18,     0,     0,     0,   -18,   -18,     0,   -18,     0,   -18,
     -18,    90,     0,    26,    27,    28,    29,    30,     0,     0,
      31,    32,    33,    34,    35,    36,     0,    37,     0,    38,
       0,     0,    39,    40,     0,     0,     0,    41,    42,     0,
      43,     0,   145,    91,   -19,     0,   -19,   -19,   -19,   -19,
     -19,     0,     0,   -19,   -19,   -19,   -19,   -19,   -19,     0,
     -19,     0,   -19,     0,     0,   -19,   -19,     0,     0,     0,
     -19,   -19,     0,   -19,     0,   -19,   -19,   -20,     0,   -20,
     -20,   -20,   -20,   -20,     0,     0,   -20,   -20,   -20,   -20,
     -20,   -20,     0,   -20,     0,   -20,     0,     0,   -20,   -20,
       0,     0,     0,   -20,   -20,     0,   -20,     0,   -20,   -20,
     -21,     0,   -21,   -21,   -21,   -21,   -21,     0,     0,   -21,
     -21,   -21,   -21,   -21,   -21,     0,   -21,     0,   -21,     0,
       0,   -21,   -21,     0,     0,     0,   -21,   -21,     0,   -21,
       0,   -21,   -21,   -22,     0,   -22,   -22,   -22,   -22,   -22,
       0,     0,   -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,
       0,   -22,     0,     0,   -22,   -22,     0,     0,     0,   -22,
     -22,     0,   -22,     0,   -22,   -22,   -23,     0,   -23,   -23,
     -23,   -23,   -23,     0,     0,   -23,   -23,   -23,   -23,   -23,
     -23,     0,   -23,     0,   -23,     0,     0,   -23,   -23,     0,
       0,     0,   -23,   -23,     0,   -23,     0,   -23,   -23,   -42,
       0,   -42,   -42,   -42,   -42,   -42,     0,     0,   -42,   -42,
     -42,   -42,   -42,   -42,     0,   -42,     0,   -42,     0,     0,
     -42,   -42,     0,     0,     0,   -42,   -42,     0,   -42,     0,
     -42,   -42,   -40,     0,   -40,   -40,   -40,   -40,   -40,     0,
       0,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,     0,
     -40,     0,     0,   -40,   -40,     0,     0,     0,   -40,   -40,
       0,   -40,     0,   -40,   -40,   -28,     0,   -28,   -28,   -28,
     -28,   -28,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,
       0,   -28,     0,   -28,     0,     0,   -28,   -28,     0,     0,
       0,   -28,   -28,     0,   -28,     0,   -28,   -28,   -36,     0,
     -36,   -36,   -36,   -36,   -36,     0,     0,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,     0,   -36,     0,     0,   -36,
     -36,     0,     0,     0,   -36,   -36,     0,   -36,     0,   -36,
     -36,   -35,     0,   -35,   -35,   -35,   -35,   -35,     0,     0,
     -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,     0,   -35,
       0,     0,   -35,   -35,     0,     0,     0,   -35,   -35,     0,
     -35,     0,   -35,   -35,   -41,     0,   -41,   -41,   -41,   -41,
     -41,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,
     -41,     0,   -41,     0,     0,   -41,   -41,     0,     0,     0,
     -41,   -41,     0,   -41,     0,   -41,   -41,   -43,     0,   -43,
     -43,   -43,   -43,   -43,     0,     0,   -43,   -43,   -43,   -43,
     -43,   -43,     0,   -43,     0,   -43,     0,     0,   -43,   -43,
       0,     0,     0,   -43,   -43,     0,   -43,     0,   -43,   -43,
     -44,     0,   -44,   -44,   -44,   -44,   -44,     0,     0,   -44,
     -44,   -44,   -44,   -44,   -44,     0,   -44,     0,   -44,     0,
       0,   -44,   -44,     0,     0,     0,   -44,   -44,     0,   -44,
       0,   -44,   -44,   -45,     0,   -45,   -45,   -45,   -45,   -45,
       0,     0,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,
       0,   -45,     0,     0,   -45,   -45,     0,     0,     0,   -45,
     -45,     0,   -45,     0,   -45,   -45,   -39,     0,   -39,   -39,
     -39,   -39,   -39,     0,     0,   -39,   -39,   -39,   -39,   -39,
     -39,     0,   -39,     0,   -39,     0,     0,   -39,   -39,     0,
       0,     0,   -39,   -39,     0,   -39,     0,   -39,   -39,   -27,
       0,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,   -27,
     -27,   -27,   -27,   -27,     0,   -27,     0,   -27,     0,     0,
     -27,   -27,     0,     0,     0,   -27,   -27,     0,   -27,     0,
     -27,   -27,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,
       0,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,     0,
     -26,     0,     0,   -26,   -26,     0,     0,     0,   -26,   -26,
       0,   -26,     0,   -26,   -26,    -7,     0,    -7,    -7,    -7,
      -7,    -7,     0,     0,    -7,    -7,    -7,    -7,    -7,    -7,
       0,    -7,     0,    -7,     0,     0,    -7,    -7,     0,     0,
       0,    -7,    -7,     0,    -7,     0,    -7,    -7,    90,     0,
      26,    27,    28,    29,    30,     0,     0,    31,    32,    33,
      34,    35,    36,     0,    37,     0,    38,     0,     0,    39,
      40,     0,     0,     0,    41,    42,     0,    43,     0,   145,
     297,    90,     0,    26,    27,    28,    29,    30,     0,     0,
      31,    32,    33,    34,    35,    36,     0,    37,     0,    38,
       0,     0,    39,    40,     0,     0,     0,    41,    42,     0,
      43,     0,   145,   358,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,     0,   -34,     0,     0,   -34,   -34,     0,     0,     0,
     -34,   -34,     0,   -34,     0,   -34,   -34,    26,    27,    28,
      29,    30,     0,     0,    31,    32,    33,    34,    35,    36,
       0,    37,     0,    38,     0,     0,    39,    40,     0,     0,
       0,    41,    42,     0,    43,     0,   145,    26,    27,    28,
      29,   209,     0,     0,   210,   211,   212,   213,   214,   215,
       0,    37,     0,    38,     0,     0,    39,    40,     0,     0,
       0,    41,   216,     0,    43,     0,   217,   177,   178,   179,
     180,     0,     0,     0,     0,     0,   235,   236,   237,   238,
       0,   181,     0,   182,     0,     0,   183,   184,     0,     0,
     239,   185,   161,     0,   186,   162,   163,   -66,   -66,   -66,
     240,   -66,     0,   241,   259,   260,   261,   262,     0,     0,
     -66,     0,   -66,   235,   236,   237,   238,     0,   263,     0,
     182,     0,     0,   183,   184,     0,     0,   239,   264,     0,
       0,   265,   162,   163,   -49,   -49,   -49,   240,   -49,     0,
     241,   259,   260,   261,   262,     0,   -49,     0,     0,   -74,
     -74,   -74,     0,   -74,   -74,   263,     0,   -74,   -74,     0,
     183,   184,   -74,     0,   -74,   264,     0,     0,   265,   -77,
     -77,   -77,     0,   -77,   -77,     0,     0,   -77,   -77,    96,
     -59,   -59,   -77,   -59,   -77,   -62,   -62,   -62,     0,   -62,
     278,   -59,     0,   279,   280,   -61,   -61,   -61,   -62,   -61,
     -62,   -64,   -64,   -64,     0,   -64,   -64,   -61,     0,   -64,
     -64,   -75,   -75,   -75,   -64,   -75,   -64,   -68,   -68,   -68,
       0,   -68,   -68,   -75,     0,   -68,   -68,   -76,   -76,   -76,
     -68,   -76,   -68,   -69,   -69,   -69,     0,   -69,   -69,   -76,
       0,   -69,   -69,   -74,   -74,   -74,   -69,   -74,   -69,   -66,
     -66,   -66,     0,   -66,   -66,   -74,     0,   -66,   -66,   -77,
     -77,   -77,   -66,   -77,   -66,   -71,   -71,   -71,     0,   -71,
     -71,   -77,     0,   -71,   -71,   -64,   -64,   -64,   -71,   -64,
     -71,   -67,   -67,   -67,     0,   -67,   -67,   -64,     0,   -67,
     -67,   -68,   -68,   -68,   -67,   -68,   -67,   -70,   -70,   -70,
       0,   -70,   -70,   -68,     0,   -70,   -70,   -69,   -69,   -69,
     -70,   -69,   -70,   -64,   -64,   -64,     0,   -64,   -64,   -69,
       0,   -64,   -64,     0,     0,   -68,   -68,   -68,   -64,   -68,
     -68,     0,     0,   -68,   -68,     0,     0,   -69,   -69,   -69,
     -68,   -69,   -69,     0,     0,   -69,   -69,     0,     0,   -66,
     -66,   -66,   -69,   -66,   -66,     0,     0,   -66,   -66,     0,
       0,   -71,   -71,   -71,   -66,   -71,   -71,     0,     0,   -71,
     -71,     0,     0,   -67,   -67,   -67,   -71,   -67,   -67,     0,
       0,   -67,   -67,     0,     0,   -70,   -70,   -70,   -67,   -70,
     -70,     0,     0,   -70,   -70,   277,   -59,   -59,     0,   -59,
     -70,   -61,   -61,   -61,     0,   -61,     0,     0,   -59,     0,
     -59,   -71,   -71,   -71,   -61,   -71,   -61,   -67,   -67,   -67,
       0,   -67,     0,     0,   -71,     0,   -71,   -70,   -70,   -70,
     -67,   -70,   -67,   -64,   -64,   -64,     0,   -64,     0,     0,
     -70,     0,   -70,   -68,   -68,   -68,     0,   -68,   -64,   -69,
     -69,   -69,     0,   -69,     0,   -48,   -48,   -48,   -68,   -48,
       0,   -49,   -49,   -49,   -69,   -49,     0,   -66,   -66,   -66,
     -48,   -66,     0,   253,   -59,   -59,   -49,   -59,     0,   -61,
     -61,   -61,   -66,   -61,     0,   -71,   -71,   -71,   -59,   -71,
       0,   -67,   -67,   -67,   -61,   -67,     0,   -70,   -70,   -70,
     -71,   -70,     0,   -66,   -66,   -66,   -67,   -66,     0,   -65,
     -65,   -65,   -70,   -65,   -65,   -66,     0,   -65,   -65,     0,
       0,   -65,     0,    72,   -74,   -74,   -74,     0,   -74,   -74,
       0,     0,   -74,   -74,     0,     0,   -74,   -77,   -77,   -77,
       0,   -77,   -77,     0,     0,   -77,   -77,     0,     0,   -77,
     -62,   -62,   -62,     0,   -62,    97,     0,     0,    98,    99,
       0,     0,   -62,   -64,   -64,   -64,     0,   -64,   -64,     0,
       0,   -64,   -64,     0,     0,   -64,   -68,   -68,   -68,     0,
     -68,   -68,     0,     0,   -68,   -68,     0,     0,   -68,   -69,
     -69,   -69,     0,   -69,   -69,     0,     0,   -69,   -69,     0,
       0,   -69,   -66,   -66,   -66,     0,   -66,   -66,     0,     0,
     -66,   -66,     0,     0,   -66,   -71,   -71,   -71,     0,   -71,
     -71,     0,     0,   -71,   -71,     0,     0,   -71,   -67,   -67,
     -67,     0,   -67,   -67,     0,     0,   -67,   -67,     0,     0,
     -67,   -70,   -70,   -70,     0,   -70,   -70,     0,     0,   -70,
     -70,     0,     0,   -70,   -71,   -71,   -71,     0,   -71,   -67,
     -67,   -67,     0,   -67,     0,     0,   -71,     0,   -70,   -70,
     -70,   -67,   -70,     0,     0,     0,     0,     0,     0,     0,
     -70
};

static const yytype_int16 yycheck[] =
{
       0,    19,    32,   122,     4,     1,    51,    25,   145,    18,
      20,    20,    37,    38,    39,    40,    12,     0,    43,    29,
     122,    31,    31,   122,    74,     1,     3,    28,   122,    30,
     230,    17,    18,   233,    20,    31,    12,     3,     4,     5,
       6,   122,    20,    29,     3,    31,   122,    72,    73,    17,
      18,    17,    20,    31,    79,    80,    20,   257,    20,    32,
     122,    27,    32,    31,    30,    29,    28,    31,    93,    94,
      95,    96,    97,    98,    99,    17,    18,   122,    20,    12,
     217,   281,     0,     1,    32,    20,   136,   137,    28,    31,
     135,     1,   122,    28,    12,   120,   141,   142,    20,     9,
       0,     1,    30,   303,   122,    20,    16,    17,    18,    31,
      20,    21,    12,    20,    24,    25,    31,    29,    28,    31,
      30,    18,   122,    20,    31,   150,   326,   152,    16,    17,
      18,    28,    20,     3,    30,   160,   161,   162,   163,    30,
     165,    29,    30,    31,    30,    16,    17,    18,     1,    20,
       3,     4,     5,     6,    30,    20,   181,   182,   183,   184,
      31,   186,    20,    28,    17,   365,    19,     0,     1,    22,
      23,    29,   372,    31,    27,    28,    20,    30,   203,    12,
     205,   211,    30,    31,   229,    29,    28,    31,    16,    17,
      18,     1,    20,     3,     4,     5,     6,     3,     4,     5,
       6,    29,     1,    31,    29,   230,    31,    17,   233,    19,
       9,    17,    22,    23,   239,    28,   241,    27,    28,    28,
      30,    27,     0,     1,    30,   250,   251,   252,   253,   254,
     255,   256,   257,    20,    12,   285,    28,    28,   263,    43,
     265,    28,    28,    16,    17,    18,     3,    20,   293,   274,
     275,   276,   277,   278,   279,   280,   281,   376,    31,   284,
      31,     0,     1,    28,    31,   290,   291,    71,    72,    73,
      18,   296,    20,    12,   376,    79,    80,   376,   303,   398,
       1,    29,   376,    31,    28,   404,   405,    29,     9,    31,
     315,    29,   317,    31,    28,   376,   398,     0,     1,   398,
     376,   326,   404,   405,   398,   404,   405,    31,    31,    12,
     404,   405,    31,   338,   376,   340,   120,   398,    28,   123,
     124,    28,   398,   404,   405,    29,    30,    31,   404,   405,
      28,   376,     0,     1,    28,    28,   398,    16,    17,    18,
     365,    20,   404,   405,    12,    28,   376,   372,   152,   399,
     400,    30,    31,   398,    17,    18,    28,    20,   376,   404,
     405,   165,    16,    17,    18,    28,    20,    21,   398,    28,
      24,    25,     3,    31,   404,   405,   376,    31,     0,     1,
     398,    31,   186,    38,    39,    40,   404,   405,    43,    29,
      12,    31,     3,     4,     5,     6,    17,    18,   398,    20,
      28,   205,     0,     1,   404,   405,    17,    28,    19,     0,
       1,    22,    23,     1,    12,     3,    27,    72,    73,    30,
      31,    12,    31,    28,    79,    80,   230,    30,    29,   233,
      31,     3,     4,     5,     6,    28,    28,   241,    93,    94,
      95,    96,    97,    98,    99,    17,    29,    19,    31,    28,
      22,    23,    29,   257,    31,    27,    30,    28,    30,    31,
      28,   265,    16,    17,    18,   120,    20,     3,    30,     3,
       4,     5,     6,    29,    28,    31,    30,   281,    30,    28,
     284,    30,     1,    17,     3,    19,   290,   291,    22,    23,
      30,    28,   296,    27,     3,   150,    30,   152,    31,   303,
      16,    17,    18,    31,    20,   160,   161,   162,   163,    31,
     165,    17,    18,   317,    20,    31,    28,    31,     3,     4,
       5,     6,   326,    29,    28,    31,   181,   182,   183,   184,
      28,   186,    17,    29,    19,    31,   340,    22,    23,    16,
      17,    18,    27,    20,    31,    30,    31,    29,   203,    31,
     205,    29,    29,    31,    31,    31,    16,    17,    18,    31,
      20,   365,    31,     3,     4,     5,     6,    31,   372,    29,
      29,    31,    31,   377,   378,   230,    31,    17,   233,    19,
      31,    31,    22,    23,   239,    31,   241,    27,    31,    31,
      30,    31,    29,    31,    31,   250,   251,   252,   253,   254,
     255,   256,   257,     3,     4,     5,     6,    29,   263,    31,
     265,    29,    29,    31,    31,    31,    29,    17,    31,   274,
     275,   276,   277,   278,   279,   280,   281,    27,    31,   284,
      30,    28,    38,    39,    40,   290,   291,    43,    16,    17,
      18,   296,    20,    21,    28,    28,    24,    25,   303,    28,
      28,     3,     4,     5,     6,     3,     4,     5,     6,    29,
     315,    31,   317,    31,    31,    17,    72,    73,    29,    17,
      31,   326,    31,    79,    80,    27,    31,    31,    30,    27,
      31,    31,    30,   338,    29,   340,    31,    93,    94,    95,
      96,    97,    98,    99,    16,    17,    18,    28,    20,    21,
      28,    28,    24,    25,    29,    28,    31,    29,    30,    31,
     365,    29,    31,    31,   120,    31,     1,   372,     3,     4,
       5,     6,     7,     8,    28,    10,    11,    12,    13,    14,
      15,    29,    17,    31,    19,    28,    31,    22,    23,    29,
      31,    31,    27,    28,   150,    30,   152,    32,    33,    29,
      29,    31,    31,    31,   160,   161,   162,   163,     4,   165,
       3,     4,     5,     6,    16,    17,    18,    20,    20,    21,
      -1,    -1,    24,    25,    17,   181,   182,   183,   184,    31,
     186,    38,    39,    40,    27,    -1,    43,    30,    -1,    -1,
       3,     4,     5,     6,    29,    -1,    31,   203,    29,   205,
      31,    16,    17,    18,    17,    20,    19,    -1,    -1,    22,
      23,    -1,    -1,    28,    27,    72,    73,    30,    31,    29,
      -1,    31,    79,    80,   230,    -1,    29,   233,    31,     3,
       4,     5,     6,   239,    -1,   241,    93,    94,    95,    96,
      97,    98,    99,    17,   250,   251,   252,   253,   254,   255,
     256,   257,    -1,    27,    -1,    -1,    30,   263,    -1,   265,
      -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,   274,   275,
     276,   277,   278,   279,   280,   281,    -1,    -1,   284,    16,
      17,    18,    -1,    20,   290,   291,     3,     4,     5,     6,
     296,    -1,    29,   150,    31,   152,    -1,   303,    -1,    -1,
      17,    -1,    -1,   160,   161,   162,   163,    -1,   165,   315,
      27,   317,    -1,    30,    -1,    -1,     3,     4,     5,     6,
     326,    -1,    -1,    -1,   181,   182,   183,   184,    38,   186,
      17,    -1,   338,    43,   340,    43,    -1,    16,    17,    18,
      27,    20,    -1,    30,    -1,    -1,   203,    -1,   205,    28,
      -1,    -1,    16,    17,    18,    -1,    20,    21,    -1,   365,
      24,    25,    72,    73,    72,    73,   372,    31,    -1,    79,
      80,    79,    80,   230,    -1,    -1,   233,    16,    17,    18,
      -1,    20,   239,    93,   241,    -1,    -1,    95,    -1,    -1,
      29,    -1,    31,   250,   251,   252,   253,   254,   255,   256,
     257,    16,    17,    18,    -1,    20,   263,    -1,   265,    -1,
     120,    -1,   120,    -1,    29,    -1,    31,   274,   275,   276,
     277,   278,   279,   280,   281,    -1,    -1,   284,    16,    17,
      18,    -1,    20,   290,   291,    -1,    16,    17,    18,   296,
      20,    29,   152,    31,   152,    -1,   303,    -1,    28,    -1,
      -1,   161,    -1,   161,    -1,   165,    -1,   165,   315,    -1,
     317,    -1,    16,    17,    18,    -1,    20,    21,    -1,   326,
      24,    25,   182,    -1,   182,    29,   186,    31,   186,    -1,
      -1,   338,    43,   340,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    16,    17,    18,   205,    20,   205,    -1,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    31,   365,    -1,
      27,    72,    73,    30,    31,   372,    -1,    -1,    79,    80,
     230,    -1,   230,   233,    -1,   233,    16,    17,    18,    -1,
      20,   241,    -1,   241,     3,     4,     5,     6,    -1,    29,
     250,    31,   250,   251,   252,    -1,    -1,   257,    17,   257,
      19,    -1,    -1,    22,    23,   265,    -1,   265,    27,   120,
      -1,    30,    31,    -1,   274,    -1,   274,   275,   276,    -1,
      -1,   281,    -1,   281,   284,    -1,   284,    -1,    -1,    -1,
     290,   291,   290,   291,    -1,    -1,   296,    -1,   296,    -1,
      -1,   152,    -1,   303,    -1,   303,    -1,    16,    17,    18,
     161,    20,    21,    -1,   165,    24,    25,   317,    -1,   317,
      43,    30,    31,    16,    17,    18,   326,    20,   326,    -1,
      -1,   182,    -1,    -1,    -1,   186,    29,    -1,    31,    -1,
     340,    -1,   340,    16,    17,    18,    -1,    20,    21,    72,
      73,    24,    25,    -1,   205,    -1,    79,    80,    31,    -1,
      -1,     3,     4,     5,     6,   365,    -1,   365,    -1,    -1,
      -1,    94,   372,    -1,   372,    17,    -1,    19,    -1,   230,
      22,    23,   233,    -1,    -1,    27,    -1,    -1,    30,    31,
     241,     3,     4,     5,     6,    -1,    -1,   120,    -1,   250,
     251,   252,    -1,    -1,    -1,    17,   257,    19,    -1,    -1,
      22,    23,    -1,    -1,   265,    27,    -1,    43,    30,    31,
      -1,    43,    -1,   274,   275,   276,    -1,    -1,    -1,   152,
     281,    -1,    -1,   284,    -1,    -1,    -1,    -1,   161,   290,
     291,    -1,   165,    -1,    -1,   296,    72,    73,    -1,    -1,
      72,    73,   303,    79,    80,    -1,    -1,    79,    80,   182,
      16,    17,    18,   186,    20,    21,   317,    -1,    24,    25,
      -1,    -1,    28,    -1,     1,   326,     3,     4,     5,     6,
       7,     8,   205,    10,    11,    12,    13,    14,    15,   340,
      17,    -1,    19,    -1,   120,    22,    23,    -1,   120,    -1,
      27,    28,    -1,    30,    -1,    32,    33,   230,    -1,    -1,
     233,    43,    -1,    -1,   365,    -1,    -1,    -1,   241,    -1,
      -1,   372,    -1,    -1,    -1,    -1,   152,   250,   251,    -1,
     152,    -1,    -1,    -1,   257,   161,    -1,    -1,    -1,   165,
      72,    73,   265,   165,    -1,    -1,    -1,    79,    80,    -1,
      -1,   274,   275,    16,    17,    18,   182,    20,   281,    -1,
     186,   284,    -1,    -1,   186,    28,    -1,   290,   291,    -1,
      -1,    -1,    -1,   296,    16,    17,    18,    -1,    20,   205,
     303,    -1,    -1,   205,    -1,    -1,    -1,    29,   120,    31,
      -1,    -1,    -1,    -1,   317,    -1,    -1,    16,    17,    18,
      -1,    20,    21,   326,   230,    24,    25,   233,   230,    -1,
      29,   233,    31,    -1,    -1,   241,    -1,   340,    -1,   241,
     152,    16,    17,    18,   250,    20,     3,     4,     5,     6,
      -1,   257,    -1,   165,    29,   257,    31,    -1,    -1,   265,
      17,    -1,   365,   265,    -1,    22,    23,    -1,   274,   372,
      27,    -1,    -1,    30,   186,   281,    -1,    -1,   284,   281,
      -1,    -1,   284,    -1,   290,   291,    -1,    -1,   290,   291,
     296,    -1,    -1,   205,   296,    -1,    -1,   303,    16,    17,
      18,   303,    20,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,   317,    -1,    31,    -1,   317,    -1,    17,   230,    19,
     326,   233,    22,    23,   326,    -1,    -1,    27,    -1,   241,
      30,    16,    17,    18,   340,    20,    21,    -1,   340,    24,
      25,     3,     4,     5,     6,   257,    31,    16,    17,    18,
      -1,    20,    -1,   265,    -1,    17,    -1,    19,    -1,   365,
      22,    23,    31,   365,    -1,    27,   372,    -1,    30,   281,
     372,    -1,   284,    16,    17,    18,    -1,    20,   290,   291,
      -1,    -1,    -1,    -1,   296,    -1,    29,    -1,    31,    -1,
       1,   303,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,   317,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,   326,    -1,    27,    28,    -1,    30,
      -1,    32,    33,    16,    17,    18,    -1,    20,   340,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,   365,    -1,    -1,    27,    28,    -1,    30,
     372,    32,    33,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
       1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
       1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      17,    27,    19,    -1,    30,    22,    23,    16,    17,    18,
      27,    20,    -1,    30,     3,     4,     5,     6,    -1,    -1,
      29,    -1,    31,     3,     4,     5,     6,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    17,    27,    -1,
      -1,    30,    22,    23,    16,    17,    18,    27,    20,    -1,
      30,     3,     4,     5,     6,    -1,    28,    -1,    -1,    16,
      17,    18,    -1,    20,    21,    17,    -1,    24,    25,    -1,
      22,    23,    29,    -1,    31,    27,    -1,    -1,    30,    16,
      17,    18,    -1,    20,    21,    -1,    -1,    24,    25,    16,
      17,    18,    29,    20,    31,    16,    17,    18,    -1,    20,
      21,    28,    -1,    24,    25,    16,    17,    18,    29,    20,
      31,    16,    17,    18,    -1,    20,    21,    28,    -1,    24,
      25,    16,    17,    18,    29,    20,    31,    16,    17,    18,
      -1,    20,    21,    28,    -1,    24,    25,    16,    17,    18,
      29,    20,    31,    16,    17,    18,    -1,    20,    21,    28,
      -1,    24,    25,    16,    17,    18,    29,    20,    31,    16,
      17,    18,    -1,    20,    21,    28,    -1,    24,    25,    16,
      17,    18,    29,    20,    31,    16,    17,    18,    -1,    20,
      21,    28,    -1,    24,    25,    16,    17,    18,    29,    20,
      31,    16,    17,    18,    -1,    20,    21,    28,    -1,    24,
      25,    16,    17,    18,    29,    20,    31,    16,    17,    18,
      -1,    20,    21,    28,    -1,    24,    25,    16,    17,    18,
      29,    20,    31,    16,    17,    18,    -1,    20,    21,    28,
      -1,    24,    25,    -1,    -1,    16,    17,    18,    31,    20,
      21,    -1,    -1,    24,    25,    -1,    -1,    16,    17,    18,
      31,    20,    21,    -1,    -1,    24,    25,    -1,    -1,    16,
      17,    18,    31,    20,    21,    -1,    -1,    24,    25,    -1,
      -1,    16,    17,    18,    31,    20,    21,    -1,    -1,    24,
      25,    -1,    -1,    16,    17,    18,    31,    20,    21,    -1,
      -1,    24,    25,    -1,    -1,    16,    17,    18,    31,    20,
      21,    -1,    -1,    24,    25,    16,    17,    18,    -1,    20,
      31,    16,    17,    18,    -1,    20,    -1,    -1,    29,    -1,
      31,    16,    17,    18,    29,    20,    31,    16,    17,    18,
      -1,    20,    -1,    -1,    29,    -1,    31,    16,    17,    18,
      29,    20,    31,    16,    17,    18,    -1,    20,    -1,    -1,
      29,    -1,    31,    16,    17,    18,    -1,    20,    31,    16,
      17,    18,    -1,    20,    -1,    16,    17,    18,    31,    20,
      -1,    16,    17,    18,    31,    20,    -1,    16,    17,    18,
      31,    20,    -1,    16,    17,    18,    31,    20,    -1,    16,
      17,    18,    31,    20,    -1,    16,    17,    18,    31,    20,
      -1,    16,    17,    18,    31,    20,    -1,    16,    17,    18,
      31,    20,    -1,    16,    17,    18,    31,    20,    -1,    16,
      17,    18,    31,    20,    21,    28,    -1,    24,    25,    -1,
      -1,    28,    -1,    30,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    16,
      17,    18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    -1,    -1,    28,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    16,    17,    18,    -1,    20,    16,
      17,    18,    -1,    20,    -1,    -1,    28,    -1,    16,    17,
      18,    28,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    12,    35,    36,    37,    38,    39,     3,     0,
      37,    28,    30,     1,    12,    31,    42,    43,     3,    41,
      29,    31,    32,    49,    43,    40,     3,     4,     5,     6,
       7,    10,    11,    12,    13,    14,    15,    17,    19,    22,
      23,    27,    28,    30,    38,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    68,    49,
       1,     9,    30,    30,    30,     1,    28,    47,     3,    30,
      30,    30,     3,    64,    60,    64,    64,    64,    56,    28,
       1,    33,    44,    20,    18,    17,    16,    21,    24,    25,
      56,    31,    56,    67,    56,     1,     3,    48,    28,    56,
      56,     3,    31,    60,    62,    63,    64,    64,    64,    64,
      29,    31,    31,    28,    28,    31,    31,    31,    56,    44,
      56,    56,    28,    28,    28,     8,    28,    28,    44,    48,
      48,    31,    31,    44,    44,    32,     3,     4,     5,     6,
      17,    27,    30,    65,    66,    68,     3,     4,     5,     6,
      17,    19,    22,    23,    27,    30,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    68,     3,     4,     5,
       6,    17,    19,    22,    23,    27,    30,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    68,    28,     3,
       4,     5,     6,    17,    27,    30,    65,    66,    68,     7,
      10,    11,    12,    13,    14,    15,    28,    32,    38,    45,
      46,    47,    49,    51,    52,    53,    54,    55,     3,    50,
      30,    64,    56,    30,    64,     3,     4,     5,     6,    17,
      27,    30,    60,    64,    65,    66,    68,    64,    64,    56,
      20,    18,    17,    16,    21,    24,    25,    30,    64,     3,
       4,     5,     6,    17,    27,    30,    60,    64,    65,    66,
      68,    64,    64,    56,    20,    18,    17,    16,    21,    24,
      25,    30,    64,    56,    30,    30,     1,    28,    47,     3,
      30,    30,    30,    50,    28,     1,     9,    33,    31,    67,
      31,    31,    67,    30,    64,    56,    31,    60,    62,    63,
      64,     3,     4,     5,     6,    17,    27,    30,    64,    65,
      66,    68,    64,    64,    31,    67,    30,    64,    56,    31,
      60,    62,    63,    64,     3,     4,     5,     6,    17,    27,
      30,    64,    65,    66,    68,    64,    64,    31,    67,    31,
      56,     1,    48,    28,    28,    56,    56,     3,    33,    56,
      31,    31,    31,    67,    31,    30,    64,    56,    31,    31,
      67,    31,    30,    64,    56,    31,    31,    28,    28,    31,
      31,    31,    31,    31,    67,    31,    31,    31,    67,    31,
      44,    56,    56,    28,    28,    28,    31,    31,     8,    28,
      28,    44,    48,    48,    31,    31,    44,    44
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    38,    40,    39,
      41,    39,    39,    42,    42,    42,    43,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    45,    45,    46,    46,
      47,    47,    48,    48,    49,    50,    50,    50,    51,    51,
      52,    52,    52,    53,    54,    55,    56,    56,    57,    57,
      58,    58,    58,    59,    59,    60,    60,    61,    61,    62,
      62,    63,    63,    63,    64,    64,    64,    65,    65,    65,
      66,    66,    67,    67,    68,    68,    68,    68
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     0,     7,
       0,     6,     1,     3,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     9,     9,     2,     1,
       1,     1,     3,     2,     3,     2,     2,     1,     5,     7,
       2,     3,     2,     5,     5,     5,     1,     1,     2,     2,
       3,     3,     3,     3,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     2,     3,     1,     1,
       4,     3,     3,     1,     1,     1,     1,     1
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 2: /* S: decl_list  */
#line 98 "src/bison/bison.y"
            {
	  tree = (yyval.node);
  }
#line 2373 "src/bison/bison.tab.c"
    break;

  case 3: /* decl_list: decl_list decl  */
#line 104 "src/bison/bison.y"
                       {
		(yyval.node) = createNode("decl_list");
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2383 "src/bison/bison.tab.c"
    break;

  case 4: /* decl_list: decl  */
#line 109 "src/bison/bison.y"
               {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2391 "src/bison/bison.tab.c"
    break;

  case 5: /* decl: var_decl  */
#line 115 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2399 "src/bison/bison.tab.c"
    break;

  case 6: /* decl: fun_decl  */
#line 118 "src/bison/bison.y"
                   {
		(yyval.node) =  (yyvsp[0].node);
	}
#line 2407 "src/bison/bison.tab.c"
    break;

  case 7: /* var_decl: TYPE ID ';'  */
#line 125 "src/bison/bison.y"
                    {
		(yyval.node) = createNode("var_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		(yyval.node)->leaf2 = createNode("ID");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		checkRedeclaration((yyvsp[-1].token).lexeme, (yyvsp[-1].token).scope, &errosSemanticos, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		insertSymbol((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column, (yyvsp[-2].token).lexeme, "var", (yyvsp[-1].token).scope);
	}
#line 2424 "src/bison/bison.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 140 "src/bison/bison.y"
                               {

		checkRedeclaration((yyvsp[-3].token).lexeme, (yyvsp[-3].token).scope, &errosSemanticos, (yyvsp[-3].token).line, (yyvsp[-3].token).column);		
		Symbol* createdSymbol = insertSymbol((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-4].token).lexeme, "fun",(yyvsp[-3].token).scope);
		createdSymbol->numberOfParams = numberOfParams + 1;
		numberOfParams = 0;

	}
#line 2437 "src/bison/bison.tab.c"
    break;

  case 9: /* fun_decl: TYPE ID '(' params ')' $@1 block_stmt  */
#line 147 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("fun_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-6].token).lexeme, (yyvsp[-6].token).line, (yyvsp[-6].token).column);

		(yyval.node)->leaf2 = createNode("ID");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-5].token).lexeme, (yyvsp[-5].token).line, (yyvsp[-5].token).column);
		
		(yyval.node)->leaf3 = (yyvsp[-3].node);
		(yyval.node)->leaf4 = (yyvsp[0].node);

		checkTypeOfReturn((yyval.node));
		// printf("\n\n\n\n");
	}
#line 2457 "src/bison/bison.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 162 "src/bison/bison.y"
                         {

		checkRedeclaration((yyvsp[-2].token).lexeme, (yyvsp[-2].token).scope, &errosSemanticos, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
		Symbol* createdSymbol = insertSymbol((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-3].token).lexeme, "fun", (yyvsp[-2].token).scope);
		numberOfParams = 0;
		createdSymbol->numberOfParams = numberOfParams;

	}
#line 2470 "src/bison/bison.tab.c"
    break;

  case 11: /* fun_decl: TYPE ID '(' ')' $@2 block_stmt  */
#line 169 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("fun_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-5].token).lexeme, (yyvsp[-5].token).line, (yyvsp[-5].token).column);

		(yyval.node)->leaf2 = createNode("ID");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2486 "src/bison/bison.tab.c"
    break;

  case 12: /* fun_decl: error  */
#line 180 "src/bison/bison.y"
                {
		yyerrok;
	}
#line 2494 "src/bison/bison.tab.c"
    break;

  case 13: /* params: params ',' param_decl  */
#line 186 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("\0");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
		numberOfParams = numberOfParams + 1;
	}
#line 2505 "src/bison/bison.tab.c"
    break;

  case 14: /* params: param_decl  */
#line 192 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2513 "src/bison/bison.tab.c"
    break;

  case 15: /* params: error  */
#line 195 "src/bison/bison.y"
               {
		yyerrok;
	}
#line 2521 "src/bison/bison.tab.c"
    break;

  case 16: /* param_decl: TYPE ID  */
#line 201 "src/bison/bison.y"
                {
		
		(yyval.node) = createNode("param_decl");
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		(yyval.node)->leaf2 = createNode("ID");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);

		// checkRedeclaration($2.lexeme, $2.scope, &errosSemanticos, $2.line, $2.column);
		insertSymbol((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[-1].token).lexeme, "param", (scopeId + 1));
	}
#line 2538 "src/bison/bison.tab.c"
    break;

  case 17: /* statement: exp_stmt  */
#line 216 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2546 "src/bison/bison.tab.c"
    break;

  case 18: /* statement: block_stmt  */
#line 219 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2554 "src/bison/bison.tab.c"
    break;

  case 19: /* statement: if_stmt  */
#line 222 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2562 "src/bison/bison.tab.c"
    break;

  case 20: /* statement: return_stmt  */
#line 225 "src/bison/bison.y"
                      {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2570 "src/bison/bison.tab.c"
    break;

  case 21: /* statement: write_stmt  */
#line 228 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2578 "src/bison/bison.tab.c"
    break;

  case 22: /* statement: writeln_stmt  */
#line 231 "src/bison/bison.y"
                       {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2586 "src/bison/bison.tab.c"
    break;

  case 23: /* statement: read_stmt  */
#line 234 "src/bison/bison.y"
                    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2594 "src/bison/bison.tab.c"
    break;

  case 24: /* statement: var_decl  */
#line 237 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2602 "src/bison/bison.tab.c"
    break;

  case 25: /* statement: for_stmt  */
#line 240 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2610 "src/bison/bison.tab.c"
    break;

  case 26: /* for_stmt: FOR '(' assign_exp ';' simple_exp ';' assign_exp ')' statement  */
#line 246 "src/bison/bison.y"
                                                                       {
		(yyval.node) = createNode("for_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-8].token).lexeme, (yyvsp[-8].token).line, (yyvsp[-8].token).column);
		(yyval.node)->leaf2 = (yyvsp[-6].node);
		(yyval.node)->leaf3 = (yyvsp[-4].node);
		(yyval.node)->leaf4 = (yyvsp[-2].node);
		(yyval.node)->leaf5 = (yyvsp[0].node);
	}
#line 2625 "src/bison/bison.tab.c"
    break;

  case 27: /* for_stmt: FOR '(' error ';' simple_exp ';' assign_exp ')' statement  */
#line 256 "src/bison/bison.y"
                                                                          {

	}
#line 2633 "src/bison/bison.tab.c"
    break;

  case 28: /* exp_stmt: exp ';'  */
#line 263 "src/bison/bison.y"
                {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2641 "src/bison/bison.tab.c"
    break;

  case 29: /* exp_stmt: ';'  */
#line 266 "src/bison/bison.y"
              {
		(yyval.node) = createNode("\0");
	}
#line 2649 "src/bison/bison.tab.c"
    break;

  case 30: /* exp: assign_exp  */
#line 272 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2657 "src/bison/bison.tab.c"
    break;

  case 31: /* exp: simple_exp  */
#line 275 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2665 "src/bison/bison.tab.c"
    break;

  case 32: /* assign_exp: ID ASSIGN simple_exp  */
#line 281 "src/bison/bison.y"
                             {
		(yyval.node) = createNode("assign_exp");
		(yyval.node)->token = allocateToken("=", (yyvsp[-1].token).line, (yyvsp[-1].token).column);


		int typeOfLeftSide = searchTypeInSymbolTable((yyvsp[-2].token).lexeme, scopeStack);
		int typeOfRightSide = (yyvsp[0].node)->type;


		(yyval.node)->type = getAssignType(typeOfLeftSide, typeOfRightSide);

		(yyval.node)->leaf1 = createNode("ID");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		(yyval.node)->leaf2 = (yyvsp[0].node);

		verifyDefinedId((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos);
	}
#line 2688 "src/bison/bison.tab.c"
    break;

  case 33: /* assign_exp: ID error  */
#line 299 "src/bison/bison.y"
                   {
		yyerrok;
	}
#line 2696 "src/bison/bison.tab.c"
    break;

  case 34: /* block_stmt: '{' stmt_list '}'  */
#line 305 "src/bison/bison.y"
                          {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2704 "src/bison/bison.tab.c"
    break;

  case 35: /* stmt_list: stmt_list statement  */
#line 311 "src/bison/bison.y"
                        {
        (yyval.node) = createNode("stmt_list");
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
    }
#line 2714 "src/bison/bison.tab.c"
    break;

  case 36: /* stmt_list: stmt_list error  */
#line 316 "src/bison/bison.y"
                      {
        // printf("DEU PAU\n");
    }
#line 2722 "src/bison/bison.tab.c"
    break;

  case 37: /* stmt_list: statement  */
#line 319 "src/bison/bison.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2730 "src/bison/bison.tab.c"
    break;

  case 38: /* if_stmt: IF '(' simple_exp ')' statement  */
#line 325 "src/bison/bison.y"
                                                   {
		(yyval.node) = createNode("if_stmt");

		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2743 "src/bison/bison.tab.c"
    break;

  case 39: /* if_stmt: IF '(' simple_exp ')' statement ELSE statement  */
#line 333 "src/bison/bison.y"
                                                         {
		(yyval.node) = createNode("if_else_stmt");

		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-6].token).lexeme, (yyvsp[-6].token).line, (yyvsp[-6].token).column);
		
		(yyval.node)->leaf2 = (yyvsp[-4].node);
		(yyval.node)->leaf3 = (yyvsp[-2].node);

		(yyval.node)->leaf4 = createNode("\0");
		(yyval.node)->leaf4->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf5 = (yyvsp[0].node);
	}
#line 2761 "src/bison/bison.tab.c"
    break;

  case 40: /* return_stmt: RETURN ';'  */
#line 349 "src/bison/bison.y"
                   {
		(yyval.node) = createNode("return_stmt");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
	}
#line 2770 "src/bison/bison.tab.c"
    break;

  case 41: /* return_stmt: RETURN exp ';'  */
#line 353 "src/bison/bison.y"
                         {
		(yyval.node) = createNode("return_stmt");
		(yyval.node)->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
		(yyval.node)->leaf1 = (yyvsp[-1].node);

	}
#line 2781 "src/bison/bison.tab.c"
    break;

  case 42: /* return_stmt: RETURN error  */
#line 359 "src/bison/bison.y"
                       {

	}
#line 2789 "src/bison/bison.tab.c"
    break;

  case 43: /* write_stmt: WRITE '(' simple_exp ')' ';'  */
#line 365 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("write_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
	}
#line 2801 "src/bison/bison.tab.c"
    break;

  case 44: /* writeln_stmt: WRITELN '(' simple_exp ')' ';'  */
#line 375 "src/bison/bison.y"
                                       {
		(yyval.node) = createNode("writeln_stmt");
		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
	}
#line 2812 "src/bison/bison.tab.c"
    break;

  case 45: /* read_stmt: READ '(' ID ')' ';'  */
#line 384 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("read_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);

		(yyval.node)->leaf2  = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		verifyDefinedId((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos);
	}
#line 2828 "src/bison/bison.tab.c"
    break;

  case 46: /* simple_exp: bin_exp  */
#line 398 "src/bison/bison.y"
                {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2836 "src/bison/bison.tab.c"
    break;

  case 47: /* simple_exp: list_exp  */
#line 401 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2844 "src/bison/bison.tab.c"
    break;

  case 48: /* unary_list_exp: '?' factor  */
#line 407 "src/bison/bison.y"
                   {
		(yyval.node) = createNode("list_exp"); 

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);

		int tipo = checkTypeListExp((yyvsp[0].node), scopeStack);
		verifyIfIsList(tipo, "?", (yyvsp[-1].token).line, (yyvsp[-1].token).column, 0);
	}
#line 2859 "src/bison/bison.tab.c"
    break;

  case 49: /* unary_list_exp: '%' factor  */
#line 417 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("list_exp"); 
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);

		int tipo = checkTypeListExp((yyvsp[0].node), scopeStack);
		verifyIfIsList(tipo, "%", (yyvsp[-1].token).line, (yyvsp[-1].token).column, 0);
	}
#line 2873 "src/bison/bison.tab.c"
    break;

  case 50: /* list_exp: factor ':' factor  */
#line 429 "src/bison/bison.y"
                          {
		(yyval.node) = createNode("list_exp");

		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2886 "src/bison/bison.tab.c"
    break;

  case 51: /* list_exp: factor MAP factor  */
#line 437 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("list_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);

		checkIfIsFunctionUnary((yyvsp[-2].node), (yyvsp[-1].token).line, (yyvsp[-1].token).column, scopeStack, &errosSemanticos);

		int tipo = checkTypeListExp((yyvsp[0].node), scopeStack);
		verifyIfIsList(tipo, (yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column, 1);
	}
#line 2903 "src/bison/bison.tab.c"
    break;

  case 52: /* list_exp: factor FILTER factor  */
#line 449 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("list_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);

		checkIfIsFunctionUnary((yyvsp[-2].node), (yyvsp[-1].token).line, (yyvsp[-1].token).column, scopeStack, &errosSemanticos);

		int tipo = checkTypeListExp((yyvsp[0].node), scopeStack);
		verifyIfIsList(tipo, (yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column, 1);
	}
#line 2920 "src/bison/bison.tab.c"
    break;

  case 53: /* bin_exp: bin_exp LOG_OP unary_log_exp  */
#line 464 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->type = getExpressionType((yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].token), &errosSemanticos);
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2932 "src/bison/bison.tab.c"
    break;

  case 54: /* bin_exp: unary_log_exp  */
#line 471 "src/bison/bison.y"
                        {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 2941 "src/bison/bison.tab.c"
    break;

  case 55: /* unary_log_exp: EXCLAMATION unary_log_exp  */
#line 478 "src/bison/bison.y"
                                  {
		(yyval.node) = createNode("unary_log_exp");
	
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2953 "src/bison/bison.tab.c"
    break;

  case 56: /* unary_log_exp: rel_exp  */
#line 485 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 2962 "src/bison/bison.tab.c"
    break;

  case 57: /* rel_exp: rel_exp REL_OP sum_exp  */
#line 492 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->type = getExpressionType((yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].token), &errosSemanticos);
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2974 "src/bison/bison.tab.c"
    break;

  case 58: /* rel_exp: sum_exp  */
#line 499 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 2983 "src/bison/bison.tab.c"
    break;

  case 59: /* sum_exp: sum_exp SUM_OP mul_exp  */
#line 506 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->type = getExpressionType((yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].token), &errosSemanticos);
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2995 "src/bison/bison.tab.c"
    break;

  case 60: /* sum_exp: mul_exp  */
#line 513 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3004 "src/bison/bison.tab.c"
    break;

  case 61: /* mul_exp: mul_exp MUL_OP factor  */
#line 520 "src/bison/bison.y"
                              {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->type = getExpressionType((yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].token), &errosSemanticos);
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 3016 "src/bison/bison.tab.c"
    break;

  case 62: /* mul_exp: factor  */
#line 527 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3025 "src/bison/bison.tab.c"
    break;

  case 63: /* mul_exp: unary_list_exp  */
#line 531 "src/bison/bison.y"
                         {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3033 "src/bison/bison.tab.c"
    break;

  case 64: /* factor: immutable  */
#line 537 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3041 "src/bison/bison.tab.c"
    break;

  case 65: /* factor: ID  */
#line 540 "src/bison/bison.y"
             {
		(yyval.node) = createNode("ID");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
		(yyval.node)->type = searchTypeInSymbolTable((yyvsp[0].token).lexeme, scopeStack);
		verifyDefinedId((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column ,scopeStack , &errosSemanticos);
	}
#line 3052 "src/bison/bison.tab.c"
    break;

  case 66: /* factor: SUM_OP factor  */
#line 546 "src/bison/bison.y"
                        {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf1 = (yyvsp[0].node);
	}
#line 3062 "src/bison/bison.tab.c"
    break;

  case 67: /* immutable: '(' simple_exp ')'  */
#line 554 "src/bison/bison.y"
                           {
		(yyval.node) = (yyvsp[-1].node);
		(yyval.node)->type = (yyvsp[-1].node)->type;
	}
#line 3071 "src/bison/bison.tab.c"
    break;

  case 68: /* immutable: call  */
#line 558 "src/bison/bison.y"
               {
		(yyval.node) =  (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3080 "src/bison/bison.tab.c"
    break;

  case 69: /* immutable: constant  */
#line 562 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3089 "src/bison/bison.tab.c"
    break;

  case 70: /* call: ID '(' args ')'  */
#line 569 "src/bison/bison.y"
                        {
		(yyval.node) = createNode("call");
		(yyval.node)->leaf1 = createNode("ID");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column);
		(yyval.node)->leaf2 = (yyvsp[-1].node);
		
		verifyDefinedId((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, scopeStack, &errosSemanticos);
		verifyCall((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, scopeStack, &errosSemanticos, numberOfArguments);
		numberOfArguments = 0;

	}
#line 3105 "src/bison/bison.tab.c"
    break;

  case 71: /* call: ID '(' ')'  */
#line 580 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("call");

		(yyval.node)->leaf1 = createNode("ID");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		verifyDefinedId((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos);
		verifyCall((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos, numberOfArguments);
		numberOfArguments = 0;
	}
#line 3120 "src/bison/bison.tab.c"
    break;

  case 72: /* args: args ',' simple_exp  */
#line 593 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("args");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
		numberOfArguments = numberOfArguments + 1;
	}
#line 3131 "src/bison/bison.tab.c"
    break;

  case 73: /* args: simple_exp  */
#line 599 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
		numberOfArguments = numberOfArguments + 1;
	}
#line 3140 "src/bison/bison.tab.c"
    break;

  case 74: /* constant: NIL  */
#line 606 "src/bison/bison.y"
            {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
		(yyval.node)->type = 6;
	}
#line 3150 "src/bison/bison.tab.c"
    break;

  case 75: /* constant: INT  */
#line 611 "src/bison/bison.y"
              {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
		(yyval.node)->type = 0;
	}
#line 3160 "src/bison/bison.tab.c"
    break;

  case 76: /* constant: FLOAT  */
#line 616 "src/bison/bison.y"
                {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
		(yyval.node)->type = 1;
	}
#line 3170 "src/bison/bison.tab.c"
    break;

  case 77: /* constant: STRING  */
#line 621 "src/bison/bison.y"
                 {		
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
		(yyval.node)->type = 7;
	}
#line 3180 "src/bison/bison.tab.c"
    break;


#line 3184 "src/bison/bison.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 628 "src/bison/bison.y"


// type error: 0 -> operacao unaria de listas 1- > operacao binaria de listas
void verifyIfIsList(int tipo, char *operator, int line, int column, int typeError){

	char *tipoString = convertIntToType(tipo);

	if(tipo != 2 && tipo != 3){
		errosSemanticos = errosSemanticos + 1;
		
		if(typeError == 0){
			printf(BHRED"SEMANTIC ERROR -> Operator \'%s\' cannot be applied to type %s. Line %d Column %d\n"RESET, operator, tipoString, line, column);
		}

		if(typeError == 1){
			printf(BHRED"SEMANTIC ERROR -> Second argument of binary infix operator of lists \'%s\' cannot be applied to type %s. Line %d Column %d\n"RESET, operator, tipoString, line, column);
		}

	}
}

extern void yyerror(const char* s) {
    printf(BHRED"SYNTATIC ERROR -> ");
    printf("%s ", s);
	printf("[Line %d, Column %d]\n"RESET, linhas, colunas);
	errors++;
}

int main(int argc, char **argv){
	initializeTable(symbolTable);
	initializeScopeStack(scopeStack);
    yyparse();
	findMain(&errosSemanticos);
	if(!errors){
		printf("\n\n--------------------------------------------------------------- TREE ---------------------------------------------------------------- \n\n");
		printTree(tree, 1);
		printSymbolTable(symbolTable);
		freeTree(tree);
	}
	// printSymbolTable(symbolTable);
	freeTable();
    yylex_destroy();
    return 0;
}
