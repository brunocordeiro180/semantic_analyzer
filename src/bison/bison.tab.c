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

void verifyIfIsList(int tipo, char *operator, int line, int column);

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
  YYSYMBOL_params = 40,                    /* params  */
  YYSYMBOL_param_decl = 41,                /* param_decl  */
  YYSYMBOL_statement = 42,                 /* statement  */
  YYSYMBOL_for_stmt = 43,                  /* for_stmt  */
  YYSYMBOL_exp_stmt = 44,                  /* exp_stmt  */
  YYSYMBOL_exp = 45,                       /* exp  */
  YYSYMBOL_assing_exp = 46,                /* assing_exp  */
  YYSYMBOL_block_stmt = 47,                /* block_stmt  */
  YYSYMBOL_stmt_list = 48,                 /* stmt_list  */
  YYSYMBOL_if_stmt = 49,                   /* if_stmt  */
  YYSYMBOL_return_stmt = 50,               /* return_stmt  */
  YYSYMBOL_write_stmt = 51,                /* write_stmt  */
  YYSYMBOL_writeln_stmt = 52,              /* writeln_stmt  */
  YYSYMBOL_read_stmt = 53,                 /* read_stmt  */
  YYSYMBOL_simple_exp = 54,                /* simple_exp  */
  YYSYMBOL_list_exp = 55,                  /* list_exp  */
  YYSYMBOL_bin_exp = 56,                   /* bin_exp  */
  YYSYMBOL_unary_log_exp = 57,             /* unary_log_exp  */
  YYSYMBOL_rel_exp = 58,                   /* rel_exp  */
  YYSYMBOL_sum_exp = 59,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 60,                   /* mul_exp  */
  YYSYMBOL_factor = 61,                    /* factor  */
  YYSYMBOL_immutable = 62,                 /* immutable  */
  YYSYMBOL_call = 63,                      /* call  */
  YYSYMBOL_args = 64,                      /* args  */
  YYSYMBOL_constant = 65                   /* constant  */
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
#define YYLAST   3472

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  388

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
       0,    97,    97,   103,   108,   114,   117,   124,   139,   156,
     172,   178,   184,   187,   193,   208,   211,   214,   217,   220,
     223,   226,   229,   232,   238,   248,   255,   258,   264,   267,
     273,   286,   292,   299,   304,   307,   313,   321,   337,   342,
     351,   361,   370,   384,   387,   393,   401,   411,   420,   427,
     437,   445,   451,   458,   464,   471,   477,   484,   490,   498,
     501,   509,   512,   521,   524,   527,   533,   544,   557,   563,
     570,   574,   578,   582
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
  "var_decl", "fun_decl", "params", "param_decl", "statement", "for_stmt",
  "exp_stmt", "exp", "assing_exp", "block_stmt", "stmt_list", "if_stmt",
  "return_stmt", "write_stmt", "writeln_stmt", "read_stmt", "simple_exp",
  "list_exp", "bin_exp", "unary_log_exp", "rel_exp", "sum_exp", "mul_exp",
  "factor", "immutable", "call", "args", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-198)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-74)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     298,    61,    39,    15,    90,   106,   226,   327,    86,  -198,
     453,   615,     9,   189,    42,   -10,   222,   225,   262,   476,
     661,    51,   -10,  1432,  2221,   272,   727,   129,  3301,  3314,
    3327,    29,    45,    82,   117,   105,   121,   138,    47,   507,
      52,    52,  3340,  2252,   681,   761,  2283,  2314,  2345,  2376,
     155,   176,  2407,  2438,  2469,  2500,  2531,  2562,   196,   227,
      19,    56,    26,   326,   505,  3353,  3366,  3379,  3392,   256,
     719,   183,   681,   118,  2593,   290,   295,   681,   681,   174,
     568,   950,   116,  1006,   325,   333,   164,  2624,   507,   167,
     167,    47,    52,    52,    52,   358,  3405,   316,   320,   186,
     363,   147,   386,  2655,   266,   351,   352,  3418,   132,   717,
    1261,  1270,   387,   391,   395,  1092,  3431,  1298,   719,   719,
     399,   404,   405,   389,  1501,   413,   431,  2686,  2717,  2748,
    2996,   323,   323,  2779,   359,   432,   435,   435,  2810,  2841,
     476,  3023,  3039,  3055,  3071,   681,  3087,  3103,  3119,   168,
     447,   456,   464,   468,   681,   469,   473,   479,  1161,   511,
     858,  1322,   128,   771,   354,   354,  1460,   681,   520,   349,
     430,    80,   219,   614,  3141,  3153,  3165,  3177,   191,   739,
    1215,  1362,  1401,   362,   882,   598,   598,  3013,   681,   437,
     252,   343,   291,    12,   108,  3029,  3045,  3061,  3077,  2872,
     302,   530,   542,   394,   556,   551,   559,   567,  1539,   476,
    1570,  1601,  1632,   585,  1663,  1694,  1725,  1756,  1787,  1818,
     173,  2903,   583,   560,   605,   647,   149,   640,   689,   788,
     850,   681,  1123,  1144,  1225,  1243,   474,  1479,   300,   618,
     624,   632,   637,   681,   641,   644,   645,   652,   658,   665,
     771,   425,   425,   128,   354,   354,   354,   829,     7,   269,
     440,   933,   998,   681,  1188,  1193,  1338,  1372,   356,  1378,
     218,   471,   523,   563,   564,   681,   595,   604,   651,   659,
     666,   668,   882,   544,   544,   362,   598,   598,   598,  3135,
     722,   681,   572,  1849,   601,   674,   681,   681,   718,  2934,
    1880,   695,   681,  2965,  3295,   702,   760,   703,  3189,   768,
     900,   709,   977,   712,  3201,   525,   526,  3261,  3271,   713,
     740,   741,  3093,   789,  1054,   769,  1125,   772,  3109,   381,
      63,  3223,  3229,   792,   798,   807,  3444,   778,   730,   774,
    1911,  1942,   779,   791,   795,  1973,   799,   803,  3213,  3277,
     816,  3283,   806,   834,   809,  3125,  3239,   879,  3245,   885,
     889,   908,  1298,   719,   719,   822,   826,   862,  3289,   813,
    3255,   916,  2004,   866,   869,  2035,  2066,  2097,  1298,   323,
     323,  2128,   831,   880,   883,   883,  2159,  2190
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
       0,     0,     0,     0,     0,     0,     0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -198,  -198,  -198,   853,     0,  -198,  -198,   903,  -110,  -105,
    -104,   -28,   -67,   -14,  -131,  -103,   -86,   -84,   -83,   -82,
    1177,   973,  1050,   825,   902,   754,   677,   -22,   152,   355,
    -197,   529
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,    46,     7,    16,    17,    47,    48,
      49,    50,    51,    52,    24,    53,    54,    55,    56,    57,
      58,   168,   169,   170,   171,   172,   173,   174,   175,   176,
      98,   177
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    20,    65,   290,     6,    75,   102,   124,    26,   221,
      13,    65,   211,   212,   215,     9,    81,    83,    84,    85,
     133,    14,    19,   -62,   -62,   -62,   306,   -62,   309,   284,
     -55,   216,   -55,   217,   218,   219,   -62,   324,   -62,    88,
      15,   -55,     8,   -55,    89,    18,   -53,   -43,    65,   195,
      80,   141,   142,   143,   -53,   149,   150,   151,   152,    72,
     323,   -10,   -10,    14,   134,   135,    83,    83,    83,   111,
     112,   113,   114,   -10,   144,    73,   -51,   145,   299,   153,
     284,   -54,   154,   -54,   -51,    27,    28,    29,    30,   213,
      -2,     1,   -54,   195,   -54,    65,    65,    65,   251,    38,
     -53,    39,     2,   214,    40,    41,    -4,    -4,    65,    42,
      74,   -53,    44,   350,    11,   353,    12,   210,    -4,   100,
      76,   101,   138,   139,   285,   -57,   -57,   357,   -57,   360,
      69,   226,   227,   228,   229,    77,   -52,   -57,    70,   -57,
     232,   237,   244,   248,   -52,   -62,   -62,   -62,    69,   -62,
     -62,    78,   -50,   -62,   -62,   230,    70,   -62,   231,    71,
     -50,   264,   269,   276,   280,   -62,   -62,   -62,    79,   -62,
      80,   141,   142,   143,   301,   294,    66,   106,   195,   310,
     -62,    65,   302,    87,    38,    66,   179,   180,   181,   182,
     146,   146,   155,   155,   144,   107,   -62,   145,   223,    65,
     183,   195,   184,   195,   -28,   185,   186,   -62,   -62,   -62,
     187,   -62,   -62,   188,    96,   -62,   -62,   117,   -13,   -62,
     -13,    71,    66,   196,   -29,   339,    -5,    -5,   237,   237,
     237,   318,   319,   320,   321,   195,   252,   -55,    -5,   -55,
     146,   146,   146,   146,   155,   155,   155,   -62,   326,   -62,
     -55,    21,   372,    22,   -12,   -44,   -12,   211,   212,   215,
     269,   269,   269,   332,   333,   334,   335,   196,   381,    66,
      66,    66,   282,   211,   212,   215,   216,    65,   217,   218,
     219,   -43,    66,   -43,   -31,   -71,   -71,   -71,   195,   -71,
     195,   -14,   216,   -14,   217,   218,   219,   120,   -71,     1,
     -71,   -11,   195,   -11,   195,   179,   180,   181,   182,   283,
       2,   -53,   382,   383,   233,   233,   245,   245,   103,   183,
     -53,   184,   -53,   199,   185,   186,   220,    -6,    -6,   187,
     312,   -62,   188,   289,   213,   265,   265,   277,   277,    -6,
      65,    65,    65,    90,   -55,   -69,   -55,   -69,   214,   115,
     213,   116,   196,   -46,   -55,    66,    65,   238,   239,   240,
     241,   -47,   210,   -51,   214,   258,   259,   260,   261,   250,
     386,   387,   -51,    66,   -51,   196,   -52,   196,   210,    67,
     -43,   242,   121,   122,   243,   -52,   -30,   -52,    67,   262,
     136,   118,   263,   147,   147,   156,   156,    27,    28,    29,
      30,   -50,   233,   233,   233,   233,   245,   245,   245,   196,
     -50,    38,   -50,    39,   119,   -45,    40,    41,   -68,   -48,
     -68,    42,   293,   -49,    44,    67,   197,   127,   226,   227,
     228,   229,   128,   129,   265,   265,   265,   265,   277,   277,
     277,   131,   162,   147,   147,   147,   147,   156,   156,   156,
     -51,    66,   230,    -3,    -3,   231,   -72,   -72,   -72,   132,
     -72,   -51,   196,   137,   196,    -3,   -44,   140,   -44,   -72,
     197,   -72,    67,    67,    67,   -71,   196,    23,   196,   -34,
     -34,   -34,   -34,   -34,   -72,    67,   -34,   -34,   -34,   -34,
     -34,   -34,   -70,   -34,   -52,   -34,   -73,   -61,   -34,   -34,
     -71,   -64,   -71,   -34,   -34,   -52,   -34,   -65,   -34,   -34,
      80,   141,   142,   143,    66,    66,    66,   234,   234,   246,
     246,    91,   -57,   -57,    38,   -57,    39,   -71,   -71,   -71,
      66,   -71,   -71,   -57,   144,   -71,   -71,   145,   266,   266,
     278,   278,   -71,   252,   -54,   -50,   -54,   258,   259,   260,
     261,   -44,   -72,    68,   -72,   197,   -50,   -54,    67,   295,
     291,   183,    68,   179,   180,   181,   182,   148,   148,   157,
     157,   262,   292,   338,   263,   101,    67,   183,   197,   184,
     197,   296,   185,   186,   -62,   -62,   -62,   187,   -62,   297,
     188,   305,   -70,   -73,   -70,   -73,   -62,   298,   200,    68,
     198,   270,   271,   272,   273,   234,   234,   234,   234,   246,
     246,   246,   197,   300,   304,    -7,    -7,   148,   148,   148,
     148,   157,   157,   157,   -46,   274,   -46,    -7,   275,   340,
     253,   -57,   -57,   -61,   -57,   -61,   307,   266,   266,   266,
     266,   278,   278,   278,   198,   -57,    68,    68,    68,   -71,
     179,   180,   181,   182,    67,   -72,   -71,   -71,   -71,    68,
     -71,    -9,    -9,   -70,   183,   197,   184,   197,   -73,   185,
     186,   -71,   -46,    -9,   187,   -61,   -64,   188,   308,   197,
     -64,   197,   -64,   -65,   158,   159,   160,   161,   -65,   -47,
     -65,   235,   235,   247,   247,   -47,   314,   -47,   162,   328,
     163,    64,   341,   164,   165,   -72,   -72,   -72,   166,   -72,
      64,   167,   267,   267,   279,   279,    64,    67,    67,    67,
     -72,   344,   178,    28,    29,    30,   -31,    -8,    -8,   198,
     -67,   -63,    68,    67,    90,   -54,    38,   -54,    39,    -8,
     351,    40,    41,   354,   -45,   -54,    42,    64,   194,    44,
      68,   115,   198,   336,   198,   -62,   -62,   -62,   363,   -62,
     -62,   -32,   -32,   -62,   -62,    64,    64,   110,   -62,   257,
     -62,   -48,   -49,   -32,   226,   227,   228,   229,    63,   235,
     235,   235,   235,   247,   247,   247,   198,    63,   162,   115,
     163,   347,   194,    63,    64,    64,    64,   115,   230,   348,
     358,   231,   364,   361,   -70,   -70,   -70,    64,   -70,   362,
     365,   267,   267,   267,   267,   279,   279,   279,   115,   -70,
     355,   -45,   366,   -45,    63,   193,   367,   -48,    68,   -48,
     -30,   -66,   179,   180,   181,   182,   -49,   -67,   -49,   198,
     -63,   198,    63,   109,   -66,   115,   183,   368,   184,    61,
     375,   185,   186,   198,   376,   198,   187,    10,    61,   188,
     322,   194,   384,   115,    82,   369,   -73,   -73,   -73,   193,
     -73,    63,    63,    63,   -72,   -72,   -72,   194,   -72,   -72,
      64,   -73,   -72,   -72,    63,   258,   259,   260,   261,   -72,
     377,    68,    68,    68,   379,    61,   191,   380,    64,   183,
     194,   184,   194,   179,   180,   181,   182,    68,   115,   262,
     370,   385,   263,   108,   -67,   209,   -67,   183,   115,   184,
     371,     0,   185,   186,    25,     0,    62,   187,     0,   317,
     188,   349,     0,     0,   194,    62,     0,   -63,   193,   -63,
     191,    62,    61,    61,    61,   -66,     0,   -66,     0,   -70,
     -70,   -70,     0,   -70,   193,    61,     0,    63,     0,   194,
     194,   331,   -70,     0,   -70,     0,   -60,   -60,   -60,     0,
     -60,     0,    62,   192,     0,    63,    64,   193,   -60,   193,
     179,   180,   181,   182,     0,     0,     0,   194,   236,   194,
      62,     0,     0,     0,   183,     0,   184,    59,     0,   185,
     186,   194,     0,   194,   187,   316,    59,   188,   352,   268,
       0,   193,     0,     0,   -73,   -73,   -73,   192,   -73,    62,
      62,    62,   -59,   -59,   -59,   191,   -59,   -73,    61,   -73,
       0,     0,    62,     0,   -59,     0,   193,   330,     0,    64,
      64,    64,     0,    59,   189,     0,    61,     0,   191,     0,
     191,     0,     0,    63,     0,    64,     0,   179,   180,   181,
     182,     0,     0,     0,   193,     0,   193,     0,     0,     0,
       0,   183,     0,   184,    60,   315,   185,   186,   193,     0,
     193,   187,   191,    60,   188,   356,   192,     0,   189,     0,
      59,    59,    59,     0,     0,   179,   180,   181,   182,     0,
       0,     0,   192,    59,     0,    62,     0,   329,     0,   183,
       0,   184,     0,     0,   185,   186,    63,    63,    63,   187,
      60,   190,   188,    62,    61,   192,     0,   192,   179,   180,
     181,   182,    63,     0,     0,   191,     0,   191,     0,   -60,
     -60,   -60,   183,   -60,   184,     0,     0,   185,   186,   191,
       0,   191,   187,     0,   -60,   188,   359,     0,     0,   192,
     -61,   -61,   -61,     0,   -61,   190,     0,    60,    60,    60,
       0,     0,     0,   189,     0,   -61,    59,   -62,   -62,   -62,
      60,   -62,   -62,     0,   192,   -62,   -62,    61,    61,    61,
       0,   225,   -62,     0,    59,     0,   189,     0,   189,     0,
       0,    62,     0,    61,   -60,   -60,   -60,     0,   -60,   -61,
     -61,   -61,   192,   -61,   192,     0,     0,   -60,     0,   -60,
       0,    86,   -61,     0,   -61,     0,   192,     0,   192,     0,
     189,   -71,   -71,   -71,     0,   -71,   -71,     0,     0,   -71,
     -71,   -64,   -64,   -64,   -71,   -64,   -71,    95,    97,    99,
     190,     0,     0,    60,   104,   105,   -64,     0,     0,   -65,
     -65,   -65,     0,   -65,    62,    62,    62,     0,     0,     0,
       0,    60,    59,   190,   -65,   190,     0,    91,   -56,   -56,
      62,   -56,     0,   189,     0,   189,   -58,   -58,   -58,   -56,
     -58,     0,   123,     0,     0,   125,   126,   189,   -58,   189,
       0,    27,    28,    29,    30,   201,     0,   190,   202,   203,
     204,   205,   206,   207,     0,    38,     0,    39,     0,     0,
      40,    41,   222,     0,     0,    42,   208,     0,    44,     0,
     209,   224,     0,     0,     0,    59,    59,    59,   -70,   -70,
     -70,     0,   -70,   -70,   249,     0,   -70,   -70,     0,    60,
       0,    59,     0,   -70,   -64,   -64,   -64,     0,   -64,     0,
     190,     0,   190,     0,     0,   281,     0,   -64,     0,   -64,
       0,     0,     0,     0,   190,     0,   190,    97,   -72,   -72,
     -72,     0,   -72,   -72,     0,     0,   -72,   -72,   -65,   -65,
     -65,   -72,   -65,   -72,   -59,   -59,   -59,     0,   -59,     0,
      97,   -65,    97,   -65,     0,     0,     0,   -59,   311,   -59,
       0,     0,    60,    60,    60,     0,     0,   -70,   -70,   -70,
     313,   -70,   -70,     0,     0,   -70,   -70,     0,    60,     0,
     -70,     0,   -70,     0,    97,   -35,   -35,   -35,   -35,   -35,
     325,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,
       0,   -35,   327,     0,   -35,   -35,     0,     0,     0,   -35,
     -35,     0,   -35,     0,   -35,   -35,     0,     0,   337,     0,
       0,     0,     0,   342,   343,     0,   -73,   -73,   -73,   346,
     -73,   -73,     0,     0,   -73,   -73,     0,    97,     0,    97,
       0,   -73,     0,     0,     0,   -59,   -59,   -59,     0,   -59,
       0,    97,     0,    97,   -36,   -36,   -36,   -36,   -36,   130,
     -59,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,     0,
     -36,     0,     0,   -36,   -36,     0,     0,     0,   -36,   -36,
       0,   -36,     0,   -36,   -36,     0,     0,     0,     0,     0,
     373,   374,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,   -27,     0,   -27,     0,
       0,   -27,   -27,     0,     0,     0,   -27,   -27,     0,   -27,
       0,   -27,   -27,   -22,   -22,   -22,   -22,   -22,   -22,     0,
     -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,     0,   -22,
       0,     0,   -22,   -22,     0,     0,     0,   -22,   -22,     0,
     -22,     0,   -22,   -22,   -23,   -23,   -23,   -23,   -23,   -23,
       0,   -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,     0,
     -23,     0,     0,   -23,   -23,     0,     0,     0,   -23,   -23,
       0,   -23,     0,   -23,   -23,   -15,   -15,   -15,   -15,   -15,
     -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,   -15,
       0,   -15,     0,     0,   -15,   -15,     0,     0,     0,   -15,
     -15,     0,   -15,     0,   -15,   -15,   -16,   -16,   -16,   -16,
     -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,   -16,     0,
     -16,     0,   -16,     0,     0,   -16,   -16,     0,     0,     0,
     -16,   -16,     0,   -16,     0,   -16,   -16,   -17,   -17,   -17,
     -17,   -17,   -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,
       0,   -17,     0,   -17,     0,     0,   -17,   -17,     0,     0,
       0,   -17,   -17,     0,   -17,     0,   -17,   -17,   -18,   -18,
     -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,
     -18,     0,   -18,     0,   -18,     0,     0,   -18,   -18,     0,
       0,     0,   -18,   -18,     0,   -18,     0,   -18,   -18,   -19,
     -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,
     -19,   -19,     0,   -19,     0,   -19,     0,     0,   -19,   -19,
       0,     0,     0,   -19,   -19,     0,   -19,     0,   -19,   -19,
     -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,
     -20,   -20,   -20,     0,   -20,     0,   -20,     0,     0,   -20,
     -20,     0,     0,     0,   -20,   -20,     0,   -20,     0,   -20,
     -20,   -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,
     -21,   -21,   -21,   -21,     0,   -21,     0,   -21,     0,     0,
     -21,   -21,     0,     0,     0,   -21,   -21,     0,   -21,     0,
     -21,   -21,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,
     -38,   -38,   -38,   -38,   -38,     0,   -38,     0,   -38,     0,
       0,   -38,   -38,     0,     0,     0,   -38,   -38,     0,   -38,
       0,   -38,   -38,   -26,   -26,   -26,   -26,   -26,   -26,     0,
     -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,     0,   -26,
       0,     0,   -26,   -26,     0,     0,     0,   -26,   -26,     0,
     -26,     0,   -26,   -26,   -39,   -39,   -39,   -39,   -39,   -39,
       0,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,     0,
     -39,     0,     0,   -39,   -39,     0,     0,     0,   -39,   -39,
       0,   -39,     0,   -39,   -39,    -7,    -7,    -7,    -7,    -7,
      -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,
       0,    -7,     0,     0,    -7,    -7,     0,     0,     0,    -7,
      -7,     0,    -7,     0,    -7,    -7,   -32,   -32,   -32,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,
     -32,     0,   -32,     0,     0,   -32,   -32,     0,     0,     0,
     -32,   -32,     0,   -32,     0,   -32,   -32,   -36,   -36,   -36,
     -36,   -36,   378,     0,   -36,   -36,   -36,   -36,   -36,   -36,
       0,   -36,     0,   -36,     0,     0,   -36,   -36,     0,     0,
       0,   -36,   -36,     0,   -36,     0,   -36,   -36,   -40,   -40,
     -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,
     -40,     0,   -40,     0,   -40,     0,     0,   -40,   -40,     0,
       0,     0,   -40,   -40,     0,   -40,     0,   -40,   -40,   -41,
     -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,
     -41,   -41,     0,   -41,     0,   -41,     0,     0,   -41,   -41,
       0,     0,     0,   -41,   -41,     0,   -41,     0,   -41,   -41,
     -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -42,   -42,     0,   -42,     0,   -42,     0,     0,   -42,
     -42,     0,     0,     0,   -42,   -42,     0,   -42,     0,   -42,
     -42,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,     0,   -37,     0,   -37,     0,     0,
     -37,   -37,     0,     0,     0,   -37,   -37,     0,   -37,     0,
     -37,   -37,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -25,     0,   -25,     0,   -25,     0,
       0,   -25,   -25,     0,     0,     0,   -25,   -25,     0,   -25,
       0,   -25,   -25,   -24,   -24,   -24,   -24,   -24,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,     0,   -24,
       0,     0,   -24,   -24,     0,     0,     0,   -24,   -24,     0,
     -24,     0,   -24,   -24,    27,    28,    29,    30,    31,     0,
       0,    32,    33,    34,    35,    36,    37,     0,    38,     0,
      39,     0,     0,    40,    41,     0,     0,     0,    42,    43,
       0,    44,     0,   140,    45,   -27,   -27,   -27,   -27,   -27,
       0,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,
       0,   -27,     0,     0,   -27,   -27,     0,     0,     0,   -27,
     -27,     0,   -27,     0,   -27,   -27,   -22,   -22,   -22,   -22,
     -22,     0,     0,   -22,   -22,   -22,   -22,   -22,   -22,     0,
     -22,     0,   -22,     0,     0,   -22,   -22,     0,     0,     0,
     -22,   -22,     0,   -22,     0,   -22,   -22,   -33,   -33,   -33,
     -33,   -33,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,
       0,   -33,     0,   -33,     0,     0,   -33,   -33,     0,     0,
       0,   -33,   -33,     0,   -33,     0,   -33,   -33,   -23,   -23,
     -23,   -23,   -23,     0,     0,   -23,   -23,   -23,   -23,   -23,
     -23,     0,   -23,     0,   -23,     0,     0,   -23,   -23,     0,
       0,     0,   -23,   -23,     0,   -23,     0,   -23,   -23,   -15,
     -15,   -15,   -15,   -15,     0,     0,   -15,   -15,   -15,   -15,
     -15,   -15,     0,   -15,     0,   -15,     0,     0,   -15,   -15,
       0,     0,     0,   -15,   -15,     0,   -15,     0,   -15,   -15,
     -16,   -16,   -16,   -16,   -16,     0,     0,   -16,   -16,   -16,
     -16,   -16,   -16,     0,   -16,     0,   -16,     0,     0,   -16,
     -16,     0,     0,     0,   -16,   -16,     0,   -16,     0,   -16,
     -16,   -17,   -17,   -17,   -17,   -17,     0,     0,   -17,   -17,
     -17,   -17,   -17,   -17,     0,   -17,     0,   -17,     0,     0,
     -17,   -17,     0,     0,     0,   -17,   -17,     0,   -17,     0,
     -17,   -17,   -18,   -18,   -18,   -18,   -18,     0,     0,   -18,
     -18,   -18,   -18,   -18,   -18,     0,   -18,     0,   -18,     0,
       0,   -18,   -18,     0,     0,     0,   -18,   -18,     0,   -18,
       0,   -18,   -18,   -19,   -19,   -19,   -19,   -19,     0,     0,
     -19,   -19,   -19,   -19,   -19,   -19,     0,   -19,     0,   -19,
       0,     0,   -19,   -19,     0,     0,     0,   -19,   -19,     0,
     -19,     0,   -19,   -19,   -20,   -20,   -20,   -20,   -20,     0,
       0,   -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,     0,
     -20,     0,     0,   -20,   -20,     0,     0,     0,   -20,   -20,
       0,   -20,     0,   -20,   -20,   -21,   -21,   -21,   -21,   -21,
       0,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,
       0,   -21,     0,     0,   -21,   -21,     0,     0,     0,   -21,
     -21,     0,   -21,     0,   -21,   -21,   -38,   -38,   -38,   -38,
     -38,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,     0,
     -38,     0,   -38,     0,     0,   -38,   -38,     0,     0,     0,
     -38,   -38,     0,   -38,     0,   -38,   -38,   -26,   -26,   -26,
     -26,   -26,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,
       0,   -26,     0,   -26,     0,     0,   -26,   -26,     0,     0,
       0,   -26,   -26,     0,   -26,     0,   -26,   -26,   -39,   -39,
     -39,   -39,   -39,     0,     0,   -39,   -39,   -39,   -39,   -39,
     -39,     0,   -39,     0,   -39,     0,     0,   -39,   -39,     0,
       0,     0,   -39,   -39,     0,   -39,     0,   -39,   -39,   -40,
     -40,   -40,   -40,   -40,     0,     0,   -40,   -40,   -40,   -40,
     -40,   -40,     0,   -40,     0,   -40,     0,     0,   -40,   -40,
       0,     0,     0,   -40,   -40,     0,   -40,     0,   -40,   -40,
     -41,   -41,   -41,   -41,   -41,     0,     0,   -41,   -41,   -41,
     -41,   -41,   -41,     0,   -41,     0,   -41,     0,     0,   -41,
     -41,     0,     0,     0,   -41,   -41,     0,   -41,     0,   -41,
     -41,   -42,   -42,   -42,   -42,   -42,     0,     0,   -42,   -42,
     -42,   -42,   -42,   -42,     0,   -42,     0,   -42,     0,     0,
     -42,   -42,     0,     0,     0,   -42,   -42,     0,   -42,     0,
     -42,   -42,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,     0,   -37,     0,
       0,   -37,   -37,     0,     0,     0,   -37,   -37,     0,   -37,
       0,   -37,   -37,   -25,   -25,   -25,   -25,   -25,     0,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,     0,   -25,
       0,     0,   -25,   -25,     0,     0,     0,   -25,   -25,     0,
     -25,     0,   -25,   -25,   -24,   -24,   -24,   -24,   -24,     0,
       0,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,     0,
     -24,     0,     0,   -24,   -24,     0,     0,     0,   -24,   -24,
       0,   -24,     0,   -24,   -24,    -7,    -7,    -7,    -7,    -7,
       0,     0,    -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,
       0,    -7,     0,     0,    -7,    -7,     0,     0,     0,    -7,
      -7,     0,    -7,     0,    -7,    -7,    27,    28,    29,    30,
      31,     0,     0,    32,    33,    34,    35,    36,    37,     0,
      38,     0,    39,     0,     0,    40,    41,     0,     0,     0,
      42,    43,     0,    44,     0,   140,   303,    27,    28,    29,
      30,    31,     0,     0,    32,    33,    34,    35,    36,    37,
       0,    38,     0,    39,     0,     0,    40,    41,     0,     0,
       0,    42,    43,     0,    44,     0,   140,   345,   -32,   -32,
     -32,   -32,   -32,     0,     0,   -32,   -32,   -32,   -32,   -32,
     -32,     0,   -32,     0,   -32,     0,     0,   -32,   -32,     0,
       0,     0,   -32,   -32,     0,   -32,     0,   -32,   -32,    27,
      28,    29,    30,    31,     0,     0,    32,    33,    34,    35,
      36,    37,     0,    38,     0,    39,     0,     0,    40,    41,
       0,     0,     0,    42,    43,     0,    44,     0,   140,   -73,
     -73,   -73,     0,   -73,   -73,     0,     0,   -73,   -73,   -71,
     -71,   -71,   -73,   -71,   -73,   -59,   -59,   -59,     0,   -59,
     286,   -71,     0,   287,   288,   -72,   -72,   -72,   -59,   -72,
     -59,   -61,   -61,   -61,     0,   -61,   -61,   -72,     0,   -61,
     -61,   -70,   -70,   -70,   -61,   -70,   -61,   -64,   -64,   -64,
       0,   -64,   -64,   -70,     0,   -64,   -64,   -73,   -73,   -73,
     -64,   -73,   -64,   -65,   -65,   -65,     0,   -65,   -65,   -73,
       0,   -65,   -65,   -61,   -61,   -61,   -65,   -61,   -65,   -67,
     -67,   -67,     0,   -67,   -67,   -61,     0,   -67,   -67,   -64,
     -64,   -64,   -67,   -64,   -67,   -63,   -63,   -63,     0,   -63,
     -63,   -64,     0,   -63,   -63,   -65,   -65,   -65,   -63,   -65,
     -63,   -66,   -66,   -66,     0,   -66,   -66,   -65,     0,   -66,
     -66,   -67,   -67,   -67,   -66,   -67,   -66,   -59,   -59,   -59,
       0,   -59,   254,   -67,     0,   255,   256,     0,     0,   -61,
     -61,   -61,   -59,   -61,   -61,     0,     0,   -61,   -61,     0,
       0,   -64,   -64,   -64,   -61,   -64,   -64,     0,     0,   -64,
     -64,     0,     0,   -65,   -65,   -65,   -64,   -65,   -65,     0,
       0,   -65,   -65,     0,     0,   -67,   -67,   -67,   -65,   -67,
     -67,     0,     0,   -67,   -67,     0,     0,   -63,   -63,   -63,
     -67,   -63,   -63,     0,     0,   -63,   -63,     0,     0,   -66,
     -66,   -66,   -63,   -66,   -66,     0,     0,   -66,   -66,   285,
     -56,   -56,     0,   -56,   -66,   -58,   -58,   -58,     0,   -58,
       0,     0,   -56,     0,   -56,   -67,   -67,   -67,   -58,   -67,
     -58,   -63,   -63,   -63,     0,   -63,     0,     0,   -67,     0,
     -67,   -66,   -66,   -66,   -63,   -66,   -63,   253,   -56,   -56,
       0,   -56,     0,     0,   -66,     0,   -66,   -58,   -58,   -58,
       0,   -58,   -56,   -67,   -67,   -67,     0,   -67,     0,   -63,
     -63,   -63,   -58,   -63,     0,   -66,   -66,   -66,   -67,   -66,
       0,   -63,   -63,   -63,   -63,   -63,     0,   -71,   -71,   -71,
     -66,   -71,   -71,   -63,     0,   -71,   -71,     0,     0,   -71,
     -72,   -72,   -72,     0,   -72,   -72,     0,     0,   -72,   -72,
       0,     0,   -72,   -70,   -70,   -70,     0,   -70,   -70,     0,
       0,   -70,   -70,     0,     0,   -70,   -73,   -73,   -73,     0,
     -73,   -73,     0,     0,   -73,   -73,     0,     0,   -73,   -59,
     -59,   -59,     0,   -59,    92,     0,     0,    93,    94,     0,
       0,   -59,   -61,   -61,   -61,     0,   -61,   -61,     0,     0,
     -61,   -61,     0,     0,   -61,   -64,   -64,   -64,     0,   -64,
     -64,     0,     0,   -64,   -64,     0,     0,   -64,   -65,   -65,
     -65,     0,   -65,   -65,     0,     0,   -65,   -65,     0,     0,
     -65,   -67,   -67,   -67,     0,   -67,   -67,     0,     0,   -67,
     -67,     0,     0,   -67,   -63,   -63,   -63,     0,   -63,   -63,
       0,     0,   -63,   -63,     0,     0,   -63,   -66,   -66,   -66,
       0,   -66,   -66,     0,     0,   -66,   -66,     0,     0,   -66,
     -66,   -66,   -66,     0,   -66,     0,     0,     0,     0,     0,
       0,     0,   -66
};

static const yytype_int16 yycheck[] =
{
       0,    15,    24,   200,     4,    33,    73,   117,    22,   140,
       1,    33,   117,   117,   117,     0,    38,    39,    40,    41,
     130,    12,    32,    16,    17,    18,   223,    20,   225,    17,
      18,   117,    20,   117,   117,   117,    29,    30,    31,    20,
      31,    29,     3,    31,    18,     3,    20,    28,    70,    71,
       3,     4,     5,     6,    28,     3,     4,     5,     6,    30,
     257,     0,     1,    12,   131,   132,    88,    89,    90,    91,
      92,    93,    94,    12,    27,    30,    20,    30,   209,    27,
      17,    18,    30,    20,    28,     3,     4,     5,     6,   117,
       0,     1,    29,   115,    31,   117,   118,   119,    18,    17,
      20,    19,    12,   117,    22,    23,     0,     1,   130,    27,
      28,    31,    30,   310,    28,   312,    30,   117,    12,     1,
       3,     3,   136,   137,    16,    17,    18,   324,    20,   326,
       1,     3,     4,     5,     6,    30,    20,    29,     9,    31,
     162,   163,   164,   165,    28,    16,    17,    18,     1,    20,
      21,    30,    20,    24,    25,    27,     9,    28,    30,    30,
      28,   183,   184,   185,   186,    16,    17,    18,    30,    20,
       3,     4,     5,     6,     1,   203,    24,     3,   200,    30,
      31,   203,     9,    28,    17,    33,     3,     4,     5,     6,
      38,    39,    40,    41,    27,    31,    28,    30,    30,   221,
      17,   223,    19,   225,    28,    22,    23,    16,    17,    18,
      27,    20,    21,    30,    31,    24,    25,    31,    29,    28,
      31,    30,    70,    71,    28,   292,     0,     1,   250,   251,
     252,   253,   254,   255,   256,   257,    17,    18,    12,    20,
      88,    89,    90,    91,    92,    93,    94,    29,    30,    31,
      31,    29,   362,    31,    29,    28,    31,   362,   362,   362,
     282,   283,   284,   285,   286,   287,   288,   115,   378,   117,
     118,   119,    20,   378,   378,   378,   362,   299,   362,   362,
     362,    29,   130,    31,    28,    16,    17,    18,   310,    20,
     312,    29,   378,    31,   378,   378,   378,    31,    29,     1,
      31,    29,   324,    31,   326,     3,     4,     5,     6,    18,
      12,    20,   379,   380,   162,   163,   164,   165,    28,    17,
      29,    19,    31,    28,    22,    23,     3,     0,     1,    27,
      30,    31,    30,    31,   362,   183,   184,   185,   186,    12,
     362,   363,   364,    17,    18,    29,    20,    31,   362,    29,
     378,    31,   200,    28,    28,   203,   378,     3,     4,     5,
       6,    28,   362,    20,   378,     3,     4,     5,     6,    20,
     384,   385,    29,   221,    31,   223,    20,   225,   378,    24,
      31,    27,    31,    31,    30,    29,    28,    31,    33,    27,
      31,    28,    30,    38,    39,    40,    41,     3,     4,     5,
       6,    20,   250,   251,   252,   253,   254,   255,   256,   257,
      29,    17,    31,    19,    28,    28,    22,    23,    29,    28,
      31,    27,    28,    28,    30,    70,    71,    28,     3,     4,
       5,     6,    28,    28,   282,   283,   284,   285,   286,   287,
     288,    28,    17,    88,    89,    90,    91,    92,    93,    94,
      20,   299,    27,     0,     1,    30,    16,    17,    18,    28,
      20,    31,   310,    31,   312,    12,    29,    32,    31,    29,
     115,    31,   117,   118,   119,    28,   324,     1,   326,     3,
       4,     5,     6,     7,    28,   130,    10,    11,    12,    13,
      14,    15,    28,    17,    20,    19,    28,    28,    22,    23,
      29,    28,    31,    27,    28,    31,    30,    28,    32,    33,
       3,     4,     5,     6,   362,   363,   364,   162,   163,   164,
     165,    16,    17,    18,    17,    20,    19,    16,    17,    18,
     378,    20,    21,    28,    27,    24,    25,    30,   183,   184,
     185,   186,    31,    17,    18,    20,    20,     3,     4,     5,
       6,    31,    29,    24,    31,   200,    31,    31,   203,     3,
      30,    17,    33,     3,     4,     5,     6,    38,    39,    40,
      41,    27,    30,     1,    30,     3,   221,    17,   223,    19,
     225,    30,    22,    23,    16,    17,    18,    27,    20,    30,
      30,    31,    29,    29,    31,    31,    28,    30,    30,    70,
      71,     3,     4,     5,     6,   250,   251,   252,   253,   254,
     255,   256,   257,    28,    31,     0,     1,    88,    89,    90,
      91,    92,    93,    94,    29,    27,    31,    12,    30,    28,
      16,    17,    18,    29,    20,    31,    31,   282,   283,   284,
     285,   286,   287,   288,   115,    31,   117,   118,   119,    31,
       3,     4,     5,     6,   299,    31,    16,    17,    18,   130,
      20,     0,     1,    31,    17,   310,    19,   312,    31,    22,
      23,    31,    31,    12,    27,    31,    31,    30,    31,   324,
      29,   326,    31,    31,     3,     4,     5,     6,    29,    31,
      31,   162,   163,   164,   165,    29,    31,    31,    17,    31,
      19,    24,    28,    22,    23,    16,    17,    18,    27,    20,
      33,    30,   183,   184,   185,   186,    39,   362,   363,   364,
      31,     3,     3,     4,     5,     6,    31,     0,     1,   200,
      28,    28,   203,   378,    17,    18,    17,    20,    19,    12,
      31,    22,    23,    31,    31,    28,    27,    70,    71,    30,
     221,    29,   223,    31,   225,    16,    17,    18,    28,    20,
      21,     0,     1,    24,    25,    88,    89,    90,    29,    30,
      31,    31,    31,    12,     3,     4,     5,     6,    24,   250,
     251,   252,   253,   254,   255,   256,   257,    33,    17,    29,
      19,    31,   115,    39,   117,   118,   119,    29,    27,    31,
      31,    30,    28,    31,    16,    17,    18,   130,    20,    31,
      31,   282,   283,   284,   285,   286,   287,   288,    29,    31,
      31,    29,    31,    31,    70,    71,    31,    29,   299,    31,
      31,    28,     3,     4,     5,     6,    29,    31,    31,   310,
      31,   312,    88,    89,    31,    29,    17,    31,    19,    24,
      28,    22,    23,   324,    28,   326,    27,     4,    33,    30,
      31,   184,    31,    29,    39,    31,    16,    17,    18,   115,
      20,   117,   118,   119,    16,    17,    18,   200,    20,    21,
     203,    31,    24,    25,   130,     3,     4,     5,     6,    31,
      28,   362,   363,   364,    28,    70,    71,    28,   221,    17,
     223,    19,   225,     3,     4,     5,     6,   378,    29,    27,
      31,    31,    30,    88,    29,    32,    31,    17,    29,    19,
      31,    -1,    22,    23,    21,    -1,    24,    27,    -1,   252,
      30,    31,    -1,    -1,   257,    33,    -1,    29,   184,    31,
     115,    39,   117,   118,   119,    29,    -1,    31,    -1,    16,
      17,    18,    -1,    20,   200,   130,    -1,   203,    -1,   282,
     283,   284,    29,    -1,    31,    -1,    16,    17,    18,    -1,
      20,    -1,    70,    71,    -1,   221,   299,   223,    28,   225,
       3,     4,     5,     6,    -1,    -1,    -1,   310,   163,   312,
      88,    -1,    -1,    -1,    17,    -1,    19,    24,    -1,    22,
      23,   324,    -1,   326,    27,   251,    33,    30,    31,   184,
      -1,   257,    -1,    -1,    16,    17,    18,   115,    20,   117,
     118,   119,    16,    17,    18,   200,    20,    29,   203,    31,
      -1,    -1,   130,    -1,    28,    -1,   282,   283,    -1,   362,
     363,   364,    -1,    70,    71,    -1,   221,    -1,   223,    -1,
     225,    -1,    -1,   299,    -1,   378,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,   310,    -1,   312,    -1,    -1,    -1,
      -1,    17,    -1,    19,    24,   250,    22,    23,   324,    -1,
     326,    27,   257,    33,    30,    31,   184,    -1,   115,    -1,
     117,   118,   119,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,   200,   130,    -1,   203,    -1,   282,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,   362,   363,   364,    27,
      70,    71,    30,   221,   299,   223,    -1,   225,     3,     4,
       5,     6,   378,    -1,    -1,   310,    -1,   312,    -1,    16,
      17,    18,    17,    20,    19,    -1,    -1,    22,    23,   324,
      -1,   326,    27,    -1,    31,    30,    31,    -1,    -1,   257,
      16,    17,    18,    -1,    20,   115,    -1,   117,   118,   119,
      -1,    -1,    -1,   200,    -1,    31,   203,    16,    17,    18,
     130,    20,    21,    -1,   282,    24,    25,   362,   363,   364,
      -1,    30,    31,    -1,   221,    -1,   223,    -1,   225,    -1,
      -1,   299,    -1,   378,    16,    17,    18,    -1,    20,    16,
      17,    18,   310,    20,   312,    -1,    -1,    29,    -1,    31,
      -1,    44,    29,    -1,    31,    -1,   324,    -1,   326,    -1,
     257,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      25,    16,    17,    18,    29,    20,    31,    70,    71,    72,
     200,    -1,    -1,   203,    77,    78,    31,    -1,    -1,    16,
      17,    18,    -1,    20,   362,   363,   364,    -1,    -1,    -1,
      -1,   221,   299,   223,    31,   225,    -1,    16,    17,    18,
     378,    20,    -1,   310,    -1,   312,    16,    17,    18,    28,
      20,    -1,   115,    -1,    -1,   118,   119,   324,    28,   326,
      -1,     3,     4,     5,     6,     7,    -1,   257,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,   145,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,   154,    -1,    -1,    -1,   362,   363,   364,    16,    17,
      18,    -1,    20,    21,   167,    -1,    24,    25,    -1,   299,
      -1,   378,    -1,    31,    16,    17,    18,    -1,    20,    -1,
     310,    -1,   312,    -1,    -1,   188,    -1,    29,    -1,    31,
      -1,    -1,    -1,    -1,   324,    -1,   326,   200,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,    16,    17,
      18,    29,    20,    31,    16,    17,    18,    -1,    20,    -1,
     223,    29,   225,    31,    -1,    -1,    -1,    29,   231,    31,
      -1,    -1,   362,   363,   364,    -1,    -1,    16,    17,    18,
     243,    20,    21,    -1,    -1,    24,    25,    -1,   378,    -1,
      29,    -1,    31,    -1,   257,     3,     4,     5,     6,     7,
     263,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,   275,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,    -1,    -1,   291,    -1,
      -1,    -1,    -1,   296,   297,    -1,    16,    17,    18,   302,
      20,    21,    -1,    -1,    24,    25,    -1,   310,    -1,   312,
      -1,    31,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,   324,    -1,   326,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
     363,   364,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    16,
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
      -1,    20,    21,    28,    -1,    24,    25,    -1,    -1,    16,
      17,    18,    31,    20,    21,    -1,    -1,    24,    25,    -1,
      -1,    16,    17,    18,    31,    20,    21,    -1,    -1,    24,
      25,    -1,    -1,    16,    17,    18,    31,    20,    21,    -1,
      -1,    24,    25,    -1,    -1,    16,    17,    18,    31,    20,
      21,    -1,    -1,    24,    25,    -1,    -1,    16,    17,    18,
      31,    20,    21,    -1,    -1,    24,    25,    -1,    -1,    16,
      17,    18,    31,    20,    21,    -1,    -1,    24,    25,    16,
      17,    18,    -1,    20,    31,    16,    17,    18,    -1,    20,
      -1,    -1,    29,    -1,    31,    16,    17,    18,    29,    20,
      31,    16,    17,    18,    -1,    20,    -1,    -1,    29,    -1,
      31,    16,    17,    18,    29,    20,    31,    16,    17,    18,
      -1,    20,    -1,    -1,    29,    -1,    31,    16,    17,    18,
      -1,    20,    31,    16,    17,    18,    -1,    20,    -1,    16,
      17,    18,    31,    20,    -1,    16,    17,    18,    31,    20,
      -1,    16,    17,    18,    31,    20,    -1,    16,    17,    18,
      31,    20,    21,    28,    -1,    24,    25,    -1,    -1,    28,
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
      25,    -1,    -1,    28,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    12,    35,    36,    37,    38,    39,     3,     0,
      37,    28,    30,     1,    12,    31,    40,    41,     3,    32,
      47,    29,    31,     1,    48,    41,    47,     3,     4,     5,
       6,     7,    10,    11,    12,    13,    14,    15,    17,    19,
      22,    23,    27,    28,    30,    33,    38,    42,    43,    44,
      45,    46,    47,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    65,     1,
       9,    30,    30,    30,    28,    45,     3,    30,    30,    30,
       3,    61,    57,    61,    61,    61,    54,    28,    20,    18,
      17,    16,    21,    24,    25,    54,    31,    54,    64,    54,
       1,     3,    46,    28,    54,    54,     3,    31,    57,    59,
      60,    61,    61,    61,    61,    29,    31,    31,    28,    28,
      31,    31,    31,    54,    42,    54,    54,    28,    28,    28,
       8,    28,    28,    42,    46,    46,    31,    31,    47,    47,
      32,     4,     5,     6,    27,    30,    62,    63,    65,     3,
       4,     5,     6,    27,    30,    62,    63,    65,     3,     4,
       5,     6,    17,    19,    22,    23,    27,    30,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    65,     3,     3,
       4,     5,     6,    17,    19,    22,    23,    27,    30,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    65,    28,
      30,     7,    10,    11,    12,    13,    14,    15,    28,    32,
      38,    43,    44,    45,    47,    49,    50,    51,    52,    53,
       3,    48,    54,    30,    54,    30,     3,     4,     5,     6,
      27,    30,    61,    62,    63,    65,    57,    61,     3,     4,
       5,     6,    27,    30,    61,    62,    63,    65,    61,    54,
      20,    18,    17,    16,    21,    24,    25,    30,     3,     4,
       5,     6,    27,    30,    61,    62,    63,    65,    57,    61,
       3,     4,     5,     6,    27,    30,    61,    62,    63,    65,
      61,    54,    20,    18,    17,    16,    21,    24,    25,    31,
      64,    30,    30,    28,    45,     3,    30,    30,    30,    48,
      28,     1,     9,    33,    31,    31,    64,    31,    31,    64,
      30,    54,    30,    54,    31,    57,    59,    60,    61,    61,
      61,    61,    31,    64,    30,    54,    30,    54,    31,    57,
      59,    60,    61,    61,    61,    61,    31,    54,     1,    46,
      28,    28,    54,    54,     3,    33,    54,    31,    31,    31,
      64,    31,    31,    64,    31,    31,    31,    64,    31,    31,
      64,    31,    31,    28,    28,    31,    31,    31,    31,    31,
      31,    31,    42,    54,    54,    28,    28,    28,     8,    28,
      28,    42,    46,    46,    31,    31,    47,    47
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    38,    39,    39,
      39,    40,    40,    40,    41,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    43,    43,    44,    44,    45,    45,
      46,    46,    47,    48,    48,    48,    49,    49,    50,    50,
      51,    52,    53,    54,    54,    55,    55,    55,    55,    55,
      56,    56,    57,    57,    58,    58,    59,    59,    60,    60,
      60,    61,    61,    62,    62,    62,    63,    63,    64,    64,
      65,    65,    65,    65
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     5,
       1,     3,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     9,     9,     2,     1,     1,     1,
       3,     2,     3,     2,     0,     1,     5,     7,     2,     3,
       5,     5,     5,     1,     1,     3,     2,     2,     3,     3,
       3,     1,     2,     1,     3,     1,     3,     1,     3,     1,
       2,     1,     1,     3,     1,     1,     4,     3,     3,     1,
       1,     1,     1,     1
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
#line 97 "src/bison/bison.y"
            {
	  tree = (yyval.node);
  }
#line 2259 "src/bison/bison.tab.c"
    break;

  case 3: /* decl_list: decl_list decl  */
#line 103 "src/bison/bison.y"
                       {
		(yyval.node) = createNode("decl_list");
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2269 "src/bison/bison.tab.c"
    break;

  case 4: /* decl_list: decl  */
#line 108 "src/bison/bison.y"
               {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2277 "src/bison/bison.tab.c"
    break;

  case 5: /* decl: var_decl  */
#line 114 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2285 "src/bison/bison.tab.c"
    break;

  case 6: /* decl: fun_decl  */
#line 117 "src/bison/bison.y"
                   {
		(yyval.node) =  (yyvsp[0].node);
	}
#line 2293 "src/bison/bison.tab.c"
    break;

  case 7: /* var_decl: TYPE ID ';'  */
#line 124 "src/bison/bison.y"
                    {
		(yyval.node) = createNode("var_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		checkRedeclaration((yyvsp[-1].token).lexeme, (yyvsp[-1].token).scope, &errosSemanticos, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		insertSymbol((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column, (yyvsp[-2].token).lexeme, "var", (yyvsp[-1].token).scope);
	}
#line 2310 "src/bison/bison.tab.c"
    break;

  case 8: /* fun_decl: TYPE ID '(' params ')' block_stmt  */
#line 139 "src/bison/bison.y"
                                          {
		(yyval.node) = createNode("fun_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-5].token).lexeme, (yyvsp[-5].token).line, (yyvsp[-5].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		
		(yyval.node)->leaf3 = (yyvsp[-2].node);
		(yyval.node)->leaf4 = (yyvsp[0].node);

		checkRedeclaration((yyvsp[-4].token).lexeme, (yyvsp[-4].token).scope, &errosSemanticos, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		Symbol* createdSymbol = insertSymbol((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column, (yyvsp[-5].token).lexeme, "fun",(yyvsp[-4].token).scope);
		createdSymbol->numberOfParams = numberOfParams + 1;
		numberOfParams = 0;
	}
#line 2332 "src/bison/bison.tab.c"
    break;

  case 9: /* fun_decl: TYPE ID '(' ')' block_stmt  */
#line 156 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("fun_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column);
		
		(yyval.node)->leaf3 = (yyvsp[0].node);

		checkRedeclaration((yyvsp[-3].token).lexeme, (yyvsp[-3].token).scope, &errosSemanticos, (yyvsp[-3].token).line, (yyvsp[-3].token).column);
		Symbol* createdSymbol = insertSymbol((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-4].token).lexeme, "fun", (yyvsp[-3].token).scope);
		numberOfParams = 0;
		createdSymbol->numberOfParams = numberOfParams;
	}
#line 2353 "src/bison/bison.tab.c"
    break;

  case 10: /* fun_decl: error  */
#line 172 "src/bison/bison.y"
                {
		yyerrok;
	}
#line 2361 "src/bison/bison.tab.c"
    break;

  case 11: /* params: params ',' param_decl  */
#line 178 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("\0");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
		numberOfParams = numberOfParams + 1;
	}
#line 2372 "src/bison/bison.tab.c"
    break;

  case 12: /* params: param_decl  */
#line 184 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2380 "src/bison/bison.tab.c"
    break;

  case 13: /* params: error  */
#line 187 "src/bison/bison.y"
               {
		yyerrok;
	}
#line 2388 "src/bison/bison.tab.c"
    break;

  case 14: /* param_decl: TYPE ID  */
#line 193 "src/bison/bison.y"
                {
		
		(yyval.node) = createNode("param_decl");
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);

		checkRedeclaration((yyvsp[0].token).lexeme, (yyvsp[0].token).scope, &errosSemanticos, (yyvsp[0].token).line, (yyvsp[0].token).column);
		insertSymbol((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[-1].token).lexeme, "param", (scopeId + 1));
	}
#line 2405 "src/bison/bison.tab.c"
    break;

  case 15: /* statement: exp_stmt  */
#line 208 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2413 "src/bison/bison.tab.c"
    break;

  case 16: /* statement: block_stmt  */
#line 211 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2421 "src/bison/bison.tab.c"
    break;

  case 17: /* statement: if_stmt  */
#line 214 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2429 "src/bison/bison.tab.c"
    break;

  case 18: /* statement: return_stmt  */
#line 217 "src/bison/bison.y"
                      {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2437 "src/bison/bison.tab.c"
    break;

  case 19: /* statement: write_stmt  */
#line 220 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2445 "src/bison/bison.tab.c"
    break;

  case 20: /* statement: writeln_stmt  */
#line 223 "src/bison/bison.y"
                       {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2453 "src/bison/bison.tab.c"
    break;

  case 21: /* statement: read_stmt  */
#line 226 "src/bison/bison.y"
                    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2461 "src/bison/bison.tab.c"
    break;

  case 22: /* statement: var_decl  */
#line 229 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2469 "src/bison/bison.tab.c"
    break;

  case 23: /* statement: for_stmt  */
#line 232 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2477 "src/bison/bison.tab.c"
    break;

  case 24: /* for_stmt: FOR '(' assing_exp ';' simple_exp ';' assing_exp ')' block_stmt  */
#line 238 "src/bison/bison.y"
                                                                        {
		(yyval.node) = createNode("for_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-8].token).lexeme, (yyvsp[-8].token).line, (yyvsp[-8].token).column);
		(yyval.node)->leaf2 = (yyvsp[-6].node);
		(yyval.node)->leaf3 = (yyvsp[-4].node);
		(yyval.node)->leaf4 = (yyvsp[-2].node);
		(yyval.node)->leaf5 = (yyvsp[0].node);
	}
#line 2492 "src/bison/bison.tab.c"
    break;

  case 25: /* for_stmt: FOR '(' error ';' simple_exp ';' assing_exp ')' block_stmt  */
#line 248 "src/bison/bison.y"
                                                                           {

	}
#line 2500 "src/bison/bison.tab.c"
    break;

  case 26: /* exp_stmt: exp ';'  */
#line 255 "src/bison/bison.y"
                {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2508 "src/bison/bison.tab.c"
    break;

  case 27: /* exp_stmt: ';'  */
#line 258 "src/bison/bison.y"
              {
		(yyval.node) = createNode("\0");
	}
#line 2516 "src/bison/bison.tab.c"
    break;

  case 28: /* exp: assing_exp  */
#line 264 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2524 "src/bison/bison.tab.c"
    break;

  case 29: /* exp: simple_exp  */
#line 267 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2532 "src/bison/bison.tab.c"
    break;

  case 30: /* assing_exp: ID ASSIGN simple_exp  */
#line 273 "src/bison/bison.y"
                             {
		(yyval.node) = createNode("assing_exp");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		(yyval.node)->leaf3 = (yyvsp[0].node);

		verifyDefinedId((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos);
	}
#line 2550 "src/bison/bison.tab.c"
    break;

  case 31: /* assing_exp: ID error  */
#line 286 "src/bison/bison.y"
                   {
		yyerrok;
	}
#line 2558 "src/bison/bison.tab.c"
    break;

  case 32: /* block_stmt: '{' stmt_list '}'  */
#line 292 "src/bison/bison.y"
                          {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2566 "src/bison/bison.tab.c"
    break;

  case 33: /* stmt_list: stmt_list statement  */
#line 299 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("stmt_list");
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2576 "src/bison/bison.tab.c"
    break;

  case 34: /* stmt_list: %empty  */
#line 304 "src/bison/bison.y"
                {
		(yyval.node) = createNode("\0");
	}
#line 2584 "src/bison/bison.tab.c"
    break;

  case 35: /* stmt_list: error  */
#line 307 "src/bison/bison.y"
                {
		yyerrok;
	}
#line 2592 "src/bison/bison.tab.c"
    break;

  case 36: /* if_stmt: IF '(' simple_exp ')' statement  */
#line 313 "src/bison/bison.y"
                                                   {
		(yyval.node) = createNode("if_stmt");

		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2605 "src/bison/bison.tab.c"
    break;

  case 37: /* if_stmt: IF '(' simple_exp ')' statement ELSE statement  */
#line 321 "src/bison/bison.y"
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
#line 2623 "src/bison/bison.tab.c"
    break;

  case 38: /* return_stmt: RETURN ';'  */
#line 337 "src/bison/bison.y"
                   {
		(yyval.node) = createNode("return_stmt");
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
	}
#line 2633 "src/bison/bison.tab.c"
    break;

  case 39: /* return_stmt: RETURN exp ';'  */
#line 342 "src/bison/bison.y"
                         {
		(yyval.node) = createNode("return_stmt");
		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
		(yyval.node)->leaf2 = (yyvsp[-1].node);
	}
#line 2644 "src/bison/bison.tab.c"
    break;

  case 40: /* write_stmt: WRITE '(' simple_exp ')' ';'  */
#line 351 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("write_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
	}
#line 2656 "src/bison/bison.tab.c"
    break;

  case 41: /* writeln_stmt: WRITELN '(' simple_exp ')' ';'  */
#line 361 "src/bison/bison.y"
                                       {
		(yyval.node) = createNode("writeln_stmt");
		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
	}
#line 2667 "src/bison/bison.tab.c"
    break;

  case 42: /* read_stmt: READ '(' ID ')' ';'  */
#line 370 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("read_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);

		(yyval.node)->leaf2  = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		verifyDefinedId((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos);
	}
#line 2683 "src/bison/bison.tab.c"
    break;

  case 43: /* simple_exp: bin_exp  */
#line 384 "src/bison/bison.y"
                {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2691 "src/bison/bison.tab.c"
    break;

  case 44: /* simple_exp: list_exp  */
#line 387 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2699 "src/bison/bison.tab.c"
    break;

  case 45: /* list_exp: factor ':' factor  */
#line 393 "src/bison/bison.y"
                          {
		(yyval.node) = createNode("list_exp");

		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2712 "src/bison/bison.tab.c"
    break;

  case 46: /* list_exp: '?' factor  */
#line 401 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("list_exp"); 

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);

		int tipo = checkTypeListExp((yyvsp[0].node), scopeStack);
		verifyIfIsList(tipo, "?", (yyvsp[-1].token).line, (yyvsp[-1].token).column);
	}
#line 2727 "src/bison/bison.tab.c"
    break;

  case 47: /* list_exp: '%' factor  */
#line 411 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("list_exp"); 
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);

		int tipo = checkTypeListExp((yyvsp[0].node), scopeStack);
		verifyIfIsList(tipo, "%", (yyvsp[-1].token).line, (yyvsp[-1].token).column);
	}
#line 2741 "src/bison/bison.tab.c"
    break;

  case 48: /* list_exp: factor MAP factor  */
#line 420 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("list_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2753 "src/bison/bison.tab.c"
    break;

  case 49: /* list_exp: factor FILTER factor  */
#line 427 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("list_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2765 "src/bison/bison.tab.c"
    break;

  case 50: /* bin_exp: bin_exp LOG_OP unary_log_exp  */
#line 437 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("bin_exp");

		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2778 "src/bison/bison.tab.c"
    break;

  case 51: /* bin_exp: unary_log_exp  */
#line 445 "src/bison/bison.y"
                        {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2786 "src/bison/bison.tab.c"
    break;

  case 52: /* unary_log_exp: EXCLAMATION unary_log_exp  */
#line 451 "src/bison/bison.y"
                                  {
		(yyval.node) = createNode("unary_log_exp");
	
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2798 "src/bison/bison.tab.c"
    break;

  case 53: /* unary_log_exp: rel_exp  */
#line 458 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2806 "src/bison/bison.tab.c"
    break;

  case 54: /* rel_exp: rel_exp REL_OP sum_exp  */
#line 464 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("rel_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2818 "src/bison/bison.tab.c"
    break;

  case 55: /* rel_exp: sum_exp  */
#line 471 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2826 "src/bison/bison.tab.c"
    break;

  case 56: /* sum_exp: sum_exp SUM_OP mul_exp  */
#line 477 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("sum_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2838 "src/bison/bison.tab.c"
    break;

  case 57: /* sum_exp: mul_exp  */
#line 484 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2846 "src/bison/bison.tab.c"
    break;

  case 58: /* mul_exp: mul_exp MUL_OP factor  */
#line 490 "src/bison/bison.y"
                              {
		(yyval.node) = createNode("mul_exp");

		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2859 "src/bison/bison.tab.c"
    break;

  case 59: /* mul_exp: factor  */
#line 498 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2867 "src/bison/bison.tab.c"
    break;

  case 60: /* mul_exp: SUM_OP factor  */
#line 501 "src/bison/bison.y"
                        {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf1 = (yyvsp[0].node);
	}
#line 2877 "src/bison/bison.tab.c"
    break;

  case 61: /* factor: immutable  */
#line 509 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2885 "src/bison/bison.tab.c"
    break;

  case 62: /* factor: ID  */
#line 512 "src/bison/bison.y"
             {
		(yyval.node) = createNode("identifier");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);

		verifyDefinedId((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column ,scopeStack , &errosSemanticos);
	}
#line 2896 "src/bison/bison.tab.c"
    break;

  case 63: /* immutable: '(' simple_exp ')'  */
#line 521 "src/bison/bison.y"
                           {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2904 "src/bison/bison.tab.c"
    break;

  case 64: /* immutable: call  */
#line 524 "src/bison/bison.y"
               {
		(yyval.node) =  (yyvsp[0].node);
	}
#line 2912 "src/bison/bison.tab.c"
    break;

  case 65: /* immutable: constant  */
#line 527 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2920 "src/bison/bison.tab.c"
    break;

  case 66: /* call: ID '(' args ')'  */
#line 533 "src/bison/bison.y"
                        {
		(yyval.node) = createNode("call");
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column);
		(yyval.node)->leaf2 = (yyvsp[-1].node);
		
		verifyDefinedId((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, scopeStack, &errosSemanticos);
		verifyCall((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, scopeStack, &errosSemanticos, numberOfArguments);
		numberOfArguments = 0;

	}
#line 2936 "src/bison/bison.tab.c"
    break;

  case 67: /* call: ID '(' ')'  */
#line 544 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("call");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		verifyDefinedId((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos);
		verifyCall((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos, numberOfArguments);
		numberOfArguments = 0;
	}
#line 2951 "src/bison/bison.tab.c"
    break;

  case 68: /* args: args ',' simple_exp  */
#line 557 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("args");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
		numberOfArguments = numberOfArguments + 1;
	}
#line 2962 "src/bison/bison.tab.c"
    break;

  case 69: /* args: simple_exp  */
#line 563 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
		numberOfArguments = numberOfArguments + 1;
	}
#line 2971 "src/bison/bison.tab.c"
    break;

  case 70: /* constant: NIL  */
#line 570 "src/bison/bison.y"
            {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 2980 "src/bison/bison.tab.c"
    break;

  case 71: /* constant: INT  */
#line 574 "src/bison/bison.y"
              {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 2989 "src/bison/bison.tab.c"
    break;

  case 72: /* constant: FLOAT  */
#line 578 "src/bison/bison.y"
                {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 2998 "src/bison/bison.tab.c"
    break;

  case 73: /* constant: STRING  */
#line 582 "src/bison/bison.y"
                 {		
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 3007 "src/bison/bison.tab.c"
    break;


#line 3011 "src/bison/bison.tab.c"

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

#line 588 "src/bison/bison.y"


void verifyIfIsList(int tipo, char *operator, int line, int column){

	char tipoString[30];

	switch(tipo){
		case 0:
			strcpy(tipoString, "int");
			break;
		case 1:
			strcpy(tipoString, "float");
			break;
		case 2:
			strcpy(tipoString, "int list");
			break;
		case 3:
			strcpy(tipoString, "float list");
			break;
		default:
			strcpy(tipoString, "undefined");
			break;
	}


	if(tipo != 2 && tipo != 3){
		errosSemanticos = errosSemanticos + 1;
		printf(BHRED"SEMANTIC ERROR -> Operator \'%s\' cannot be applied to type %s. Line %d Column %d\n"RESET, operator, tipoString, line, column);
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
	if(!errors && !errosSemanticos){
		printf("\n\n--------------------------------------------------------------- TREE ---------------------------------------------------------------- \n\n");
		printTree(tree, 1);
		printSymbolTable(symbolTable);
	}
	freeTree(tree);
	freeTable();
    yylex_destroy();
    return 0;
}
