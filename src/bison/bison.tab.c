/* A Bison parser, made by GNU Bison 3.7.5.  */

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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

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

#define BHRED "\e[1;91m"
#define RESET "\e[0m"

#line 98 "src/bison/bison.tab.c"

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
  YYSYMBOL_var_decl_with_assing = 39,      /* var_decl_with_assing  */
  YYSYMBOL_fun_decl = 40,                  /* fun_decl  */
  YYSYMBOL_params = 41,                    /* params  */
  YYSYMBOL_param_decl = 42,                /* param_decl  */
  YYSYMBOL_statement = 43,                 /* statement  */
  YYSYMBOL_for_stmt = 44,                  /* for_stmt  */
  YYSYMBOL_exp_stmt = 45,                  /* exp_stmt  */
  YYSYMBOL_exp = 46,                       /* exp  */
  YYSYMBOL_assing_exp = 47,                /* assing_exp  */
  YYSYMBOL_block_stmt = 48,                /* block_stmt  */
  YYSYMBOL_stmt_list = 49,                 /* stmt_list  */
  YYSYMBOL_if_stmt = 50,                   /* if_stmt  */
  YYSYMBOL_return_stmt = 51,               /* return_stmt  */
  YYSYMBOL_write_stmt = 52,                /* write_stmt  */
  YYSYMBOL_writeln_stmt = 53,              /* writeln_stmt  */
  YYSYMBOL_read_stmt = 54,                 /* read_stmt  */
  YYSYMBOL_simple_exp = 55,                /* simple_exp  */
  YYSYMBOL_list_exp = 56,                  /* list_exp  */
  YYSYMBOL_bin_exp = 57,                   /* bin_exp  */
  YYSYMBOL_unary_log_exp = 58,             /* unary_log_exp  */
  YYSYMBOL_rel_exp = 59,                   /* rel_exp  */
  YYSYMBOL_sum_exp = 60,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 61,                   /* mul_exp  */
  YYSYMBOL_factor = 62,                    /* factor  */
  YYSYMBOL_immutable = 63,                 /* immutable  */
  YYSYMBOL_call = 64,                      /* call  */
  YYSYMBOL_args = 65,                      /* args  */
  YYSYMBOL_constant = 66                   /* constant  */
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3670

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  400

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
       0,    92,    92,    98,   103,   109,   112,   115,   122,   137,
     157,   174,   190,   196,   202,   205,   211,   226,   229,   232,
     235,   238,   241,   244,   247,   250,   253,   259,   269,   276,
     279,   285,   288,   294,   307,   313,   320,   325,   328,   334,
     342,   358,   363,   372,   382,   391,   405,   408,   414,   422,
     429,   435,   442,   452,   460,   466,   473,   479,   486,   492,
     499,   505,   513,   516,   524,   527,   536,   539,   542,   548,
     559,   572,   578,   585,   589,   593,   597
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
  "var_decl", "var_decl_with_assing", "fun_decl", "params", "param_decl",
  "statement", "for_stmt", "exp_stmt", "exp", "assing_exp", "block_stmt",
  "stmt_list", "if_stmt", "return_stmt", "write_stmt", "writeln_stmt",
  "read_stmt", "simple_exp", "list_exp", "bin_exp", "unary_log_exp",
  "rel_exp", "sum_exp", "mul_exp", "factor", "immutable", "call", "args",
  "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    58,    63,    37,   276,   277,   278,   279,    59,    44,
      40,    41,   123,   125
};
#endif

#define YYPACT_NINF (-200)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-77)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      78,    96,     7,    17,   121,   166,   190,   200,   328,    89,
    -200,   409,   331,   498,    15,  3510,  1720,  3525,  3538,    20,
     218,   247,   247,  3551,  3265,    -6,     3,    28,   137,    63,
     226,   459,  3564,  3577,  3590,  3603,   112,    31,     8,   130,
     320,   211,   683,   167,  1083,    29,    30,    43,   515,   218,
      82,    82,    20,   247,   247,   247,   354,   490,   593,    72,
       8,  3616,   425,   439,  3629,   191,   542,  1172,  1327,    61,
      65,    79,  2367,  2398,   452,   633,  3274,  3642,    52,    45,
      76,    32,   125,   150,   183,   196,  2429,   817,  2460,  2491,
    2522,  2553,  2584,   192,   235,  2615,  2646,  2677,  2708,  2739,
    2770,   241,   477,   250,   331,  3265,   246,  2801,   256,    11,
    3265,  3265,   286,  2832,   262,   272,   282,   231,   283,  2863,
     285,   295,   307,   141,   331,   331,   324,   332,   342,   569,
     349,   374,  2894,  2925,  2956,  3235,   353,   353,  2987,   388,
     391,   403,   403,  3018,  3049,   351,  1512,  1536,  1670,  1694,
    3265,  1714,  3292,  3308,   491,   395,   413,   414,   422,  3265,
     454,   457,   464,  1556,  3378,  3390,  3402,   527,   434,   531,
     531,  3414,  3265,   480,   107,   111,    47,  1042,   119,  3426,
    3438,  3450,  3462,  1601,   168,   892,   954,   751,   658,   755,
     755,  1360,  3265,   514,   252,   326,   152,   442,   284,  1642,
    3282,  3298,  3314,   490,   331,  3080,   484,   526,  1145,   561,
     555,   560,   565,   712,   490,   793,   936,  1019,  1747,   575,
    1778,  1809,  1840,  1871,  1902,  1933,   290,  1075,   573,  1180,
     583,  1288,   301,   508,   595,   732,   819,  3265,   990,  1122,
    1319,  1408,   198,  1418,    13,   589,   612,   615,   619,  3265,
     620,   628,   634,   635,   643,   675,   434,    99,    99,   527,
     531,   531,   531,  1391,   358,   377,   449,   524,   601,  3265,
     673,   748,   825,   870,   376,   973,   396,   521,   534,   578,
     600,  3265,   618,   649,   663,   676,   699,   678,   658,   303,
     303,   751,   755,   755,   755,  3111,   693,  3265,   597,  1964,
     704,    24,  3265,  3265,   730,  3142,  1995,   706,  3265,  3324,
     707,  3340,   713,   738,   715,  3474,   745,  1442,   716,  1493,
     720,  3486,   205,  1336,  1486,  1519,   749,   752,   753,  3330,
     757,  1538,   763,  1698,   771,  3346,   558,   666,  1188,  1218,
     758,   780,   802,  3173,  3204,   782,   718,   786,  2026,   331,
    2057,   788,   791,   796,  2088,   797,  3356,   810,  3498,  1576,
     824,  1617,   813,   838,   826,  3362,  1224,   842,  1240,   854,
     873,   895,   141,   331,   331,   830,   846,   847,   861,  1664,
     839,  1257,   896,  2119,   879,   886,  2150,  2181,  2212,  2243,
     141,   353,   353,  2274,   867,   884,   792,   792,  2305,  2336
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -200,  -200,  -200,   914,     0,     1,  -200,  -200,   860,  -117,
    -115,  -114,   -78,   -95,   -31,    53,  -111,  -110,  -108,  -104,
    -102,   -10,  1375,  1416,   964,  1282,  1174,  1071,   155,   379,
     603,  -199,   827
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    88,    89,     8,    39,    40,    90,
      91,    92,    93,    94,    95,    73,    96,    97,    98,    99,
     100,    62,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    63,    35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,     7,    25,   108,     6,     7,   129,    58,   217,   218,
       9,   118,   221,   222,    47,   223,    36,    10,   138,   224,
     204,   225,    48,   145,   146,   147,   148,    37,   310,    75,
     313,   -47,   316,   349,    56,    78,    16,    17,    18,   205,
      57,   139,   140,   319,   -65,   219,    38,   149,    49,    19,
     150,    20,   350,   103,    21,    22,   -46,   -49,   -50,    23,
     107,   104,    24,   101,   330,   257,   102,   -56,   -65,   -65,
     -65,   101,   -65,   -65,    64,   105,   -65,   -65,   -56,     1,
     -65,    50,    41,   -56,    37,   145,   146,   147,   148,   -48,
       2,   -56,   220,   -51,   114,   115,   -12,   -12,    12,    19,
     120,   121,   232,   233,   234,   235,   106,   -52,   -12,   149,
     143,   144,   150,   101,   130,   131,   167,    13,   360,    14,
     363,    -2,     1,   215,   216,   101,   236,   256,   109,   237,
     300,   -54,   367,     2,   370,   259,   -60,   -60,   -46,   -60,
     228,   -15,   -54,   -15,    78,    16,    17,    18,   206,   230,
     -60,   207,   208,   209,   210,   211,   212,   -54,    19,    59,
      20,    60,   255,    21,    22,   -54,    -4,    -4,    23,   213,
     289,    24,   -56,   214,    42,    44,    45,    46,    -4,   179,
     110,   -56,   287,   -56,   -74,   -74,   -74,   -55,   -74,   -74,
      -5,    -5,   -74,   -74,   296,   -55,   199,   -74,   101,   -74,
      -7,    -7,    -5,   347,    44,    44,    44,    68,    69,    70,
      71,   -53,    -7,   111,   183,   184,   185,   186,   -55,   -53,
     113,   145,   146,   147,   148,   -53,   112,   318,   187,   -55,
     188,   199,   103,   189,   190,    19,   -53,    20,   191,   320,
     104,   192,    61,    51,   -58,   149,   -58,   116,   150,   117,
     154,   155,   156,   157,   -58,   383,   295,   217,   218,   332,
     179,   221,   222,   -31,   223,   179,   179,   305,   224,   -32,
     225,   334,   288,   393,   158,   217,   218,   159,   -34,   221,
     222,   -46,   223,   -46,   119,   101,   224,   345,   225,   122,
     -33,   307,   351,   352,   219,   101,   394,   395,   355,   308,
     291,   -60,   -60,   123,   -60,   179,   264,   265,   266,   267,
     124,   125,   219,   -60,   179,   -60,   126,   -65,   -65,   -65,
     187,   -65,   238,   243,   250,   254,   127,   179,    -6,    -6,
     268,   317,   -65,   269,    15,    16,    17,    18,   128,   375,
      -6,   220,   270,   275,   282,   286,   -54,   179,    19,   -14,
      20,   -14,   132,    21,    22,   -54,   226,   -54,    23,   220,
     133,    24,   101,   384,   385,   398,   399,   -65,   -65,   -65,
     134,   -65,   215,   216,   -65,   -65,   -65,   136,   -65,   -65,
     101,   227,   199,   -16,   199,   -16,   199,   -65,   331,   -65,
     215,   216,   179,   -74,   -74,   -74,   -55,   -74,   151,   151,
     160,   160,   137,   180,   179,   -55,   -74,   -55,   -74,    -3,
      -3,   243,   243,   243,   325,   326,   327,   328,   199,   141,
     200,    -3,   142,   -74,   179,   -65,   333,   -65,   151,   151,
     151,   151,   160,   160,   160,   203,   179,   232,   233,   234,
     235,   -75,   -73,   275,   275,   275,   339,   340,   341,   342,
     -76,   167,   179,   168,   -72,   200,   -72,   179,   179,   290,
     -58,   236,   -58,   179,   237,   -75,   -75,   -75,    76,   -75,
      77,   -58,   199,   -58,   199,    52,   -60,   -60,   -75,   -60,
     -75,   -13,   -64,   -13,   180,   -67,   199,   -60,   199,   180,
     180,    72,   -68,   -37,   -37,   -37,   -37,   -37,    -8,    -8,
     -37,   -37,   -37,   -37,   -37,   -37,   -71,   -37,   -71,   -37,
      -8,   -47,   -37,   -37,   297,    -9,    -9,   -37,   -37,   -65,
     -37,   229,   -37,   -37,   -74,   -74,   -74,    -9,   -74,   180,
     232,   233,   234,   235,   244,   245,   246,   247,   180,   -74,
     -73,   -73,   -73,   -47,   -73,   -47,   239,   239,   251,   251,
     -74,   180,   -74,   -73,   236,   -73,   298,   237,   248,    51,
     -57,   249,   -57,   -75,   301,   -75,   271,   271,   283,   283,
     -57,   180,   -39,   -39,   -39,   -39,   -39,   135,   -53,   -39,
     -39,   -39,   -39,   -39,   -39,   302,   -39,   -53,   -39,   -53,
     303,   -39,   -39,   -11,   -11,   304,   -39,   -39,   346,   -39,
     117,   -39,   -39,   306,   311,   -11,   200,   -73,   200,   -73,
     200,   -75,   -75,   -75,   314,   -75,   180,   -76,   -76,   -76,
     -74,   -76,   152,   152,   161,   161,   -75,   181,   180,   -76,
     -76,   -76,   -76,   -10,   -10,   239,   239,   239,   239,   251,
     251,   251,   200,   -75,   201,   -10,   -73,   -49,   180,   -49,
     -76,   -49,   152,   152,   152,   152,   161,   161,   161,   -64,
     180,   264,   265,   266,   267,   -67,   -68,   271,   271,   271,
     271,   283,   283,   283,   -50,   187,   180,   188,   -64,   201,
     -64,   180,   180,   290,   -57,   268,   -57,   180,   269,   -63,
     -63,   -63,   -67,   -63,   -67,   -57,   200,   -57,   200,   -63,
     -63,   -63,   -63,   -63,   -63,   -68,   321,   -68,   181,   335,
     200,   -63,   200,   181,   181,   -30,   -30,   -30,   -30,   -30,
     -30,   344,   -30,   -30,   -30,   -30,   -30,   -30,   -50,   -30,
     -50,   -30,   348,   353,   -30,   -30,    76,   -34,   356,   -30,
     -30,   -70,   -30,   -66,   -30,   -30,   373,   361,   -73,   -73,
     -73,   364,   -73,   181,   264,   265,   266,   267,   276,   277,
     278,   279,   181,   -73,   -64,   -64,   -64,    76,   -64,   357,
     240,   240,   252,   252,    76,   181,   358,   -64,   268,   -64,
     -48,   269,   280,   -51,   -52,   281,    76,   -48,   365,   -48,
     272,   272,   284,   284,   368,   181,   -24,   -24,   -24,   -24,
     -24,   -24,   371,   -24,   -24,   -24,   -24,   -24,   -24,   -51,
     -24,   -51,   -24,   372,   374,   -24,   -24,   -35,   -35,   376,
     -24,   -24,   377,   -24,   214,   -24,   -24,   378,   -33,   -35,
     201,   -52,   201,   -52,   201,   -76,   -76,   -76,   -69,   -76,
     181,   -67,   -67,   -67,   -70,   -67,   153,   153,   162,   162,
     -76,   182,   181,    76,   -67,   379,   -67,   -66,   386,   240,
     240,   240,   240,   252,   252,   252,   201,    76,   202,   380,
     -69,    76,   181,   381,   387,   388,   153,   153,   153,   153,
     162,   162,   162,   -70,   181,   -70,   -68,   -68,   -68,   389,
     -68,   272,   272,   272,   272,   284,   284,   284,   396,   -68,
     181,   -68,    76,   202,   382,   181,   181,   391,   -75,   -75,
     -75,   181,   -75,   -75,   392,   397,   -75,   -75,    11,    74,
     201,   -75,   201,   -75,   -66,   -69,   -66,   -69,     0,     0,
       0,     0,   182,     0,   201,     0,   201,   182,   182,   -25,
     -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,
     -25,   -25,     0,   -25,     0,   -25,     0,     0,   -25,   -25,
       0,     0,     0,   -25,   -25,     0,   -25,     0,   -25,   -25,
     -73,   -73,   -73,     0,   -73,   -73,     0,   182,   -73,   -73,
       0,     0,     0,   -73,    43,   -73,   182,     0,   175,   -62,
     -62,   -62,     0,   -62,   241,   241,   253,   253,     0,   182,
       0,     0,   -62,     0,   -62,   195,   -63,   -63,   -63,     0,
     -63,     0,     0,    65,   273,   273,   285,   285,     0,   182,
       0,   -63,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,
     -26,   -26,   -26,   -26,   -26,     0,   -26,     0,   -26,     0,
     195,   -26,   -26,     0,     0,     0,   -26,   -26,     0,   -26,
       0,   -26,   -26,     0,   202,     0,   202,     0,   202,   258,
     -58,     0,   -58,     0,   182,     0,     0,     0,     0,   175,
       0,     0,     0,   -58,   175,   175,   182,     0,   183,   184,
     185,   186,     0,   241,   241,   241,   241,   253,   253,   253,
     202,     0,   187,     0,   188,   178,   182,   189,   190,   -62,
     -62,   -62,   191,   -62,     0,   192,   309,     0,   182,     0,
       0,   -62,   198,     0,   175,   273,   273,   273,   273,   285,
     285,   285,    67,   175,   182,     0,     0,     0,     0,   182,
     182,     0,   242,     0,     0,   182,   175,     0,   -64,   -64,
     -64,     0,   -64,     0,   202,     0,   202,   198,    78,    16,
      17,    18,   274,   -64,     0,     0,   175,     0,   202,     0,
     202,     0,    19,     0,    20,     0,     0,    21,    22,     0,
       0,     0,    23,   299,     0,    24,   178,     0,     0,     0,
       0,   178,   178,   183,   184,   185,   186,     0,    52,   -59,
     -59,   195,   -59,   195,     0,   195,     0,   187,   177,   188,
     -59,   175,   189,   190,   291,   -59,   -59,   191,   -59,     0,
     192,   312,     0,   175,     0,   197,     0,   -59,     0,   -59,
     322,   178,     0,     0,    66,     0,     0,   195,     0,     0,
     178,     0,     0,   175,   -61,   -61,   -61,     0,   -61,   178,
     -70,   -70,   -70,   178,   -70,   175,     0,   -61,     0,   -61,
     197,     0,   336,   -70,     0,   -70,   -66,   -66,   -66,   198,
     -66,   175,     0,   178,     0,     0,   175,   175,     0,   -66,
       0,   -66,   175,   -69,   -69,   -69,     0,   -69,     0,   177,
       0,   195,     0,   195,   177,   177,   -69,     0,   -69,     0,
       0,   183,   184,   185,   186,   195,     0,   195,   198,     0,
     198,     0,   198,     0,     0,   187,   176,   188,   178,     0,
     189,   190,     0,     0,     0,   191,     0,     0,   192,   315,
     178,     0,     0,   196,   177,     0,     0,   178,   178,   324,
       0,     0,     0,   177,   198,   -67,   -67,   -67,     0,   -67,
     178,     0,   177,   -61,   -61,   -61,   177,   -61,     0,     0,
     -67,     0,   178,   258,   -57,   -61,   -57,     0,   196,   198,
     198,   338,   197,     0,     0,     0,   177,   -57,   178,     0,
       0,     0,     0,   178,   178,     0,   -76,   -76,   -76,   178,
     -76,   -76,     0,     0,   -76,   -76,     0,   176,   198,   -76,
     198,   -76,   176,   176,   183,   184,   185,   186,     0,   173,
       0,   197,   198,   197,   198,   197,     0,     0,   187,     0,
     188,   177,     0,   189,   190,     0,   193,     0,   191,     0,
       0,   192,   329,   177,   -68,   -68,   -68,     0,   -68,     0,
     177,   323,   176,     0,   -62,   -62,   -62,   197,   -62,   -68,
     174,   176,     0,   177,     0,   183,   184,   185,   186,   -62,
     176,   193,     0,     0,   176,   177,     0,   194,     0,   187,
       0,   188,   197,   337,   189,   190,     0,     0,     0,   191,
     196,   177,   192,   359,   176,     0,   177,   177,     0,     0,
     173,     0,   177,     0,     0,   173,   173,     0,     0,     0,
       0,   197,   194,   197,     0,     0,   183,   184,   185,   186,
       0,     0,   259,   -59,   -59,   197,   -59,   197,     0,   196,
     187,   196,   188,   196,     0,   189,   190,   -59,     0,   176,
     191,   174,     0,   192,   362,   173,   174,   174,   -74,   -74,
     -74,   176,   -74,     0,   173,   -61,   -61,   -61,   176,   -61,
     -74,   183,   184,   185,   186,   196,     0,   173,     0,     0,
     -61,   176,   -75,   -75,   -75,   187,   -75,   188,     0,     0,
     189,   190,     0,   176,   -75,   191,   174,   173,   192,   366,
     196,     0,   -65,   -65,   -65,   174,   -65,   -65,     0,   176,
     -65,   -65,     0,     0,   176,   176,   231,   -65,   174,     0,
     176,     0,   -70,   -70,   -70,     0,   -70,     0,     0,   196,
       0,   196,   193,     0,   193,     0,   193,   -70,   174,     0,
       0,     0,   173,   196,     0,   196,     0,   -65,   -65,   -65,
       0,   -65,   -65,     0,   173,   -65,   -65,     0,     0,     0,
     -65,   263,   -65,   -66,   -66,   -66,     0,   -66,   193,     0,
       0,     0,     0,   194,   173,   194,     0,   194,   -66,     0,
       0,     0,     0,   174,     0,     0,   173,     0,   -62,   -62,
     -62,     0,   -62,   292,     0,   174,   293,   294,     0,     0,
       0,   -62,   173,   -62,     0,     0,     0,   173,   173,   194,
     -69,   -69,   -69,   173,   -69,   174,   -73,   -73,   -73,     0,
     -73,     0,   193,     0,   193,   -69,     0,   174,   -73,     0,
       0,   183,   184,   185,   186,     0,   193,     0,   193,     0,
     -76,   -76,   -76,   174,   -76,   187,     0,   188,   174,   174,
     189,   190,   -76,     0,   174,   191,     0,     0,   192,   369,
     -64,   -64,   -64,   194,   -64,   194,   -74,   -74,   -74,     0,
     -74,   -74,   -64,     0,   -74,   -74,     0,   194,   -74,   194,
     -17,   -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,   -17,
     -17,   -17,   -17,     0,   -17,     0,   -17,     0,     0,   -17,
     -17,     0,     0,     0,   -17,   -17,     0,   -17,     0,   -17,
     -17,   -18,   -18,   -18,   -18,   -18,   -18,     0,   -18,   -18,
     -18,   -18,   -18,   -18,     0,   -18,     0,   -18,     0,     0,
     -18,   -18,     0,     0,     0,   -18,   -18,     0,   -18,     0,
     -18,   -18,   -19,   -19,   -19,   -19,   -19,   -19,     0,   -19,
     -19,   -19,   -19,   -19,   -19,     0,   -19,     0,   -19,     0,
       0,   -19,   -19,     0,     0,     0,   -19,   -19,     0,   -19,
       0,   -19,   -19,   -20,   -20,   -20,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,     0,   -20,
       0,     0,   -20,   -20,     0,     0,     0,   -20,   -20,     0,
     -20,     0,   -20,   -20,   -21,   -21,   -21,   -21,   -21,   -21,
       0,   -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,     0,
     -21,     0,     0,   -21,   -21,     0,     0,     0,   -21,   -21,
       0,   -21,     0,   -21,   -21,   -22,   -22,   -22,   -22,   -22,
     -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,
       0,   -22,     0,     0,   -22,   -22,     0,     0,     0,   -22,
     -22,     0,   -22,     0,   -22,   -22,   -23,   -23,   -23,   -23,
     -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,
     -23,     0,   -23,     0,     0,   -23,   -23,     0,     0,     0,
     -23,   -23,     0,   -23,     0,   -23,   -23,   -41,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,
       0,   -41,     0,   -41,     0,     0,   -41,   -41,     0,     0,
       0,   -41,   -41,     0,   -41,     0,   -41,   -41,   -29,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,
     -29,     0,   -29,     0,   -29,     0,     0,   -29,   -29,     0,
       0,     0,   -29,   -29,     0,   -29,     0,   -29,   -29,   -42,
     -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -42,   -42,     0,   -42,     0,   -42,     0,     0,   -42,   -42,
       0,     0,     0,   -42,   -42,     0,   -42,     0,   -42,   -42,
      -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,    -8,
      -8,    -8,    -8,     0,    -8,     0,    -8,     0,     0,    -8,
      -8,     0,     0,     0,    -8,    -8,     0,    -8,     0,    -8,
      -8,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -35,   -35,   -35,     0,   -35,     0,   -35,     0,     0,
     -35,   -35,     0,     0,     0,   -35,   -35,     0,   -35,     0,
     -35,   -35,   -39,   -39,   -39,   -39,   -39,   390,     0,   -39,
     -39,   -39,   -39,   -39,   -39,     0,   -39,     0,   -39,     0,
       0,   -39,   -39,     0,     0,     0,   -39,   -39,     0,   -39,
       0,   -39,   -39,    -9,    -9,    -9,    -9,    -9,    -9,     0,
      -9,    -9,    -9,    -9,    -9,    -9,     0,    -9,     0,    -9,
       0,     0,    -9,    -9,     0,     0,     0,    -9,    -9,     0,
      -9,     0,    -9,    -9,   -43,   -43,   -43,   -43,   -43,   -43,
       0,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,     0,
     -43,     0,     0,   -43,   -43,     0,     0,     0,   -43,   -43,
       0,   -43,     0,   -43,   -43,   -44,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,
       0,   -44,     0,     0,   -44,   -44,     0,     0,     0,   -44,
     -44,     0,   -44,     0,   -44,   -44,   -45,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,     0,
     -45,     0,   -45,     0,     0,   -45,   -45,     0,     0,     0,
     -45,   -45,     0,   -45,     0,   -45,   -45,   -40,   -40,   -40,
     -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,
       0,   -40,     0,   -40,     0,     0,   -40,   -40,     0,     0,
       0,   -40,   -40,     0,   -40,     0,   -40,   -40,   -28,   -28,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -28,     0,   -28,     0,   -28,     0,     0,   -28,   -28,     0,
       0,     0,   -28,   -28,     0,   -28,     0,   -28,   -28,   -27,
     -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,     0,   -27,     0,     0,   -27,   -27,
       0,     0,     0,   -27,   -27,     0,   -27,     0,   -27,   -27,
     -38,   -38,   -38,   -38,   -38,     0,     0,   -38,   -38,   -38,
     -38,   -38,   -38,     0,   -38,     0,   -38,     0,     0,   -38,
     -38,     0,     0,     0,   -38,   -38,     0,   -38,     0,   -38,
     -38,    78,    16,    17,    18,    79,     0,     0,    80,    81,
      82,    83,    84,    85,     0,    19,     0,    20,     0,     0,
      21,    22,     0,     0,     0,    23,    86,     0,    24,     0,
     203,    87,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,
     -30,   -30,   -30,   -30,   -30,     0,   -30,     0,   -30,     0,
       0,   -30,   -30,     0,     0,     0,   -30,   -30,     0,   -30,
       0,   -30,   -30,   -24,   -24,   -24,   -24,   -24,     0,     0,
     -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,     0,   -24,
       0,     0,   -24,   -24,     0,     0,     0,   -24,   -24,     0,
     -24,     0,   -24,   -24,   -25,   -25,   -25,   -25,   -25,     0,
       0,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,     0,
     -25,     0,     0,   -25,   -25,     0,     0,     0,   -25,   -25,
       0,   -25,     0,   -25,   -25,   -36,   -36,   -36,   -36,   -36,
       0,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,
       0,   -36,     0,     0,   -36,   -36,     0,     0,     0,   -36,
     -36,     0,   -36,     0,   -36,   -36,   -26,   -26,   -26,   -26,
     -26,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,
     -26,     0,   -26,     0,     0,   -26,   -26,     0,     0,     0,
     -26,   -26,     0,   -26,     0,   -26,   -26,   -17,   -17,   -17,
     -17,   -17,     0,     0,   -17,   -17,   -17,   -17,   -17,   -17,
       0,   -17,     0,   -17,     0,     0,   -17,   -17,     0,     0,
       0,   -17,   -17,     0,   -17,     0,   -17,   -17,   -18,   -18,
     -18,   -18,   -18,     0,     0,   -18,   -18,   -18,   -18,   -18,
     -18,     0,   -18,     0,   -18,     0,     0,   -18,   -18,     0,
       0,     0,   -18,   -18,     0,   -18,     0,   -18,   -18,   -19,
     -19,   -19,   -19,   -19,     0,     0,   -19,   -19,   -19,   -19,
     -19,   -19,     0,   -19,     0,   -19,     0,     0,   -19,   -19,
       0,     0,     0,   -19,   -19,     0,   -19,     0,   -19,   -19,
     -20,   -20,   -20,   -20,   -20,     0,     0,   -20,   -20,   -20,
     -20,   -20,   -20,     0,   -20,     0,   -20,     0,     0,   -20,
     -20,     0,     0,     0,   -20,   -20,     0,   -20,     0,   -20,
     -20,   -21,   -21,   -21,   -21,   -21,     0,     0,   -21,   -21,
     -21,   -21,   -21,   -21,     0,   -21,     0,   -21,     0,     0,
     -21,   -21,     0,     0,     0,   -21,   -21,     0,   -21,     0,
     -21,   -21,   -22,   -22,   -22,   -22,   -22,     0,     0,   -22,
     -22,   -22,   -22,   -22,   -22,     0,   -22,     0,   -22,     0,
       0,   -22,   -22,     0,     0,     0,   -22,   -22,     0,   -22,
       0,   -22,   -22,   -23,   -23,   -23,   -23,   -23,     0,     0,
     -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,     0,   -23,
       0,     0,   -23,   -23,     0,     0,     0,   -23,   -23,     0,
     -23,     0,   -23,   -23,   -41,   -41,   -41,   -41,   -41,     0,
       0,   -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,     0,
     -41,     0,     0,   -41,   -41,     0,     0,     0,   -41,   -41,
       0,   -41,     0,   -41,   -41,   -29,   -29,   -29,   -29,   -29,
       0,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,
       0,   -29,     0,     0,   -29,   -29,     0,     0,     0,   -29,
     -29,     0,   -29,     0,   -29,   -29,   -42,   -42,   -42,   -42,
     -42,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,     0,
     -42,     0,   -42,     0,     0,   -42,   -42,     0,     0,     0,
     -42,   -42,     0,   -42,     0,   -42,   -42,   -43,   -43,   -43,
     -43,   -43,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,
       0,   -43,     0,   -43,     0,     0,   -43,   -43,     0,     0,
       0,   -43,   -43,     0,   -43,     0,   -43,   -43,   -44,   -44,
     -44,   -44,   -44,     0,     0,   -44,   -44,   -44,   -44,   -44,
     -44,     0,   -44,     0,   -44,     0,     0,   -44,   -44,     0,
       0,     0,   -44,   -44,     0,   -44,     0,   -44,   -44,   -45,
     -45,   -45,   -45,   -45,     0,     0,   -45,   -45,   -45,   -45,
     -45,   -45,     0,   -45,     0,   -45,     0,     0,   -45,   -45,
       0,     0,     0,   -45,   -45,     0,   -45,     0,   -45,   -45,
     -40,   -40,   -40,   -40,   -40,     0,     0,   -40,   -40,   -40,
     -40,   -40,   -40,     0,   -40,     0,   -40,     0,     0,   -40,
     -40,     0,     0,     0,   -40,   -40,     0,   -40,     0,   -40,
     -40,   -28,   -28,   -28,   -28,   -28,     0,     0,   -28,   -28,
     -28,   -28,   -28,   -28,     0,   -28,     0,   -28,     0,     0,
     -28,   -28,     0,     0,     0,   -28,   -28,     0,   -28,     0,
     -28,   -28,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,   -27,     0,   -27,     0,
       0,   -27,   -27,     0,     0,     0,   -27,   -27,     0,   -27,
       0,   -27,   -27,    -8,    -8,    -8,    -8,    -8,     0,     0,
      -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,     0,    -8,
       0,     0,    -8,    -8,     0,     0,     0,    -8,    -8,     0,
      -8,     0,    -8,    -8,    78,    16,    17,    18,    79,     0,
       0,    80,    81,    82,    83,    84,    85,     0,    19,     0,
      20,     0,     0,    21,    22,     0,     0,     0,    23,    86,
       0,    24,     0,   203,   343,    78,    16,    17,    18,    79,
       0,     0,    80,    81,    82,    83,    84,    85,     0,    19,
       0,    20,     0,     0,    21,    22,     0,     0,     0,    23,
      86,     0,    24,     0,   203,   354,   -35,   -35,   -35,   -35,
     -35,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     -35,     0,   -35,     0,     0,   -35,   -35,     0,     0,     0,
     -35,   -35,     0,   -35,     0,   -35,   -35,    -9,    -9,    -9,
      -9,    -9,     0,     0,    -9,    -9,    -9,    -9,    -9,    -9,
       0,    -9,     0,    -9,     0,     0,    -9,    -9,     0,     0,
       0,    -9,    -9,     0,    -9,     0,    -9,    -9,    78,    16,
      17,    18,    79,     0,     0,    80,    81,    82,    83,    84,
      85,     0,    19,     0,    20,     0,     0,    21,    22,     0,
       0,     0,    23,    86,     0,    24,     0,   203,   163,   164,
     165,   166,     0,     0,     0,     0,     0,   183,   184,   185,
     186,     0,   167,     0,   168,     0,     0,   169,   170,     0,
       0,   187,   171,   188,     0,   172,   189,   190,   -64,   -64,
     -64,   191,   -64,   -64,   192,     0,   -64,   -64,   -67,   -67,
     -67,   -64,   -67,   -64,   -67,   -67,   -67,     0,   -67,   -67,
     -67,     0,   -67,   -67,   -68,   -68,   -68,   -67,   -68,   -67,
     -68,   -68,   -68,     0,   -68,   -68,   -68,     0,   -68,   -68,
     -70,   -70,   -70,   -68,   -70,   -68,   -70,   -70,   -70,     0,
     -70,   -70,   -70,     0,   -70,   -70,   -66,   -66,   -66,   -70,
     -66,   -70,   -66,   -66,   -66,     0,   -66,   -66,   -66,     0,
     -66,   -66,   -69,   -69,   -69,   -66,   -69,   -66,   -69,   -69,
     -69,     0,   -69,   -69,   -69,     0,   -69,   -69,     0,     0,
       0,   -69,     0,   -69,   -74,   -74,   -74,     0,   -74,   -74,
       0,     0,   -74,   -74,     0,     0,   -75,   -75,   -75,   -74,
     -75,   -75,     0,     0,   -75,   -75,     0,     0,   -73,   -73,
     -73,   -75,   -73,   -73,     0,     0,   -73,   -73,     0,     0,
     -76,   -76,   -76,   -73,   -76,   -76,     0,     0,   -76,   -76,
       0,     0,   -62,   -62,   -62,   -76,   -62,   260,     0,     0,
     261,   262,     0,     0,   -64,   -64,   -64,   -62,   -64,   -64,
       0,     0,   -64,   -64,     0,     0,   -67,   -67,   -67,   -64,
     -67,   -67,     0,     0,   -67,   -67,     0,     0,   -68,   -68,
     -68,   -67,   -68,   -68,     0,     0,   -68,   -68,     0,     0,
     -70,   -70,   -70,   -68,   -70,   -70,     0,     0,   -70,   -70,
       0,     0,   -66,   -66,   -66,   -70,   -66,   -66,     0,     0,
     -66,   -66,     0,     0,   -69,   -69,   -69,   -66,   -69,   -69,
       0,     0,   -69,   -69,     0,     0,   -65,   -65,   -65,   -69,
     -65,   -65,     0,     0,   -65,   -65,     0,     0,   -65,     0,
      41,   -75,   -75,   -75,     0,   -75,   -75,     0,     0,   -75,
     -75,     0,     0,   -75,   -73,   -73,   -73,     0,   -73,   -73,
       0,     0,   -73,   -73,     0,     0,   -73,   -76,   -76,   -76,
       0,   -76,   -76,     0,     0,   -76,   -76,     0,     0,   -76,
     -62,   -62,   -62,     0,   -62,    53,     0,     0,    54,    55,
       0,     0,   -62,   -64,   -64,   -64,     0,   -64,   -64,     0,
       0,   -64,   -64,     0,     0,   -64,   -67,   -67,   -67,     0,
     -67,   -67,     0,     0,   -67,   -67,     0,     0,   -67,   -68,
     -68,   -68,     0,   -68,   -68,     0,     0,   -68,   -68,     0,
       0,   -68,   -70,   -70,   -70,     0,   -70,   -70,     0,     0,
     -70,   -70,     0,     0,   -70,   -66,   -66,   -66,     0,   -66,
     -66,     0,     0,   -66,   -66,     0,     0,   -66,   -69,   -69,
     -69,     0,   -69,   -69,     0,     0,   -69,   -69,     0,     0,
     -69
};

static const yytype_int16 yycheck[] =
{
       0,     0,    12,    81,     4,     4,   123,    38,   123,   123,
       3,   106,   123,   123,    24,   123,     1,     0,   135,   123,
       9,   123,    28,     3,     4,     5,     6,    12,   227,    60,
     229,    28,   231,     9,     3,     3,     4,     5,     6,    28,
      32,   136,   137,    30,    31,   123,    31,    27,    20,    17,
      30,    19,    28,     1,    22,    23,    28,    28,    28,    27,
      28,     9,    30,    73,   263,    18,    76,    20,    16,    17,
      18,    81,    20,    21,    31,    30,    24,    25,    31,     1,
      28,    18,    30,    20,    12,     3,     4,     5,     6,    28,
      12,    28,   123,    28,   104,   105,     0,     1,     9,    17,
     110,   111,     3,     4,     5,     6,    30,    28,    12,    27,
     141,   142,    30,   123,   124,   125,    17,    28,   317,    30,
     319,     0,     1,   123,   123,   135,    27,    20,     3,    30,
     208,    20,   331,    12,   333,    16,    17,    18,    31,    20,
     150,    29,    31,    31,     3,     4,     5,     6,     7,   159,
      31,    10,    11,    12,    13,    14,    15,    20,    17,    29,
      19,    31,   172,    22,    23,    28,     0,     1,    27,    28,
      18,    30,    20,    32,    19,    20,    21,    22,    12,    24,
      30,    29,   192,    31,    16,    17,    18,    20,    20,    21,
       0,     1,    24,    25,   204,    28,    41,    29,   208,    31,
       0,     1,    12,   298,    49,    50,    51,    52,    53,    54,
      55,    20,    12,    30,     3,     4,     5,     6,    20,    28,
      28,     3,     4,     5,     6,    20,    30,   237,    17,    31,
      19,    76,     1,    22,    23,    17,    31,    19,    27,   249,
       9,    30,    31,    17,    18,    27,    20,     1,    30,     3,
       3,     4,     5,     6,    28,   372,   203,   372,   372,   269,
     105,   372,   372,    28,   372,   110,   111,   214,   372,    28,
     372,   281,    20,   390,    27,   390,   390,    30,    28,   390,
     390,    29,   390,    31,    28,   295,   390,   297,   390,     3,
      28,     1,   302,   303,   372,   305,   391,   392,   308,     9,
      16,    17,    18,    31,    20,   150,     3,     4,     5,     6,
      28,    28,   390,    29,   159,    31,    31,    16,    17,    18,
      17,    20,   167,   168,   169,   170,    31,   172,     0,     1,
      27,    30,    31,    30,     3,     4,     5,     6,    31,   349,
      12,   372,   187,   188,   189,   190,    20,   192,    17,    29,
      19,    31,    28,    22,    23,    29,     3,    31,    27,   390,
      28,    30,   372,   373,   374,   396,   397,    16,    17,    18,
      28,    20,   372,   372,    16,    17,    18,    28,    20,    28,
     390,    30,   227,    29,   229,    31,   231,    29,    30,    31,
     390,   390,   237,    16,    17,    18,    20,    20,    19,    20,
      21,    22,    28,    24,   249,    29,    29,    31,    31,     0,
       1,   256,   257,   258,   259,   260,   261,   262,   263,    31,
      41,    12,    31,    28,   269,    29,    30,    31,    49,    50,
      51,    52,    53,    54,    55,    32,   281,     3,     4,     5,
       6,    28,    28,   288,   289,   290,   291,   292,   293,   294,
      28,    17,   297,    19,    29,    76,    31,   302,   303,    17,
      18,    27,    20,   308,    30,    16,    17,    18,    29,    20,
      31,    29,   317,    31,   319,    16,    17,    18,    29,    20,
      31,    29,    28,    31,   105,    28,   331,    28,   333,   110,
     111,     1,    28,     3,     4,     5,     6,     7,     0,     1,
      10,    11,    12,    13,    14,    15,    29,    17,    31,    19,
      12,    31,    22,    23,    30,     0,     1,    27,    28,    28,
      30,    30,    32,    33,    16,    17,    18,    12,    20,   150,
       3,     4,     5,     6,     3,     4,     5,     6,   159,    31,
      16,    17,    18,    29,    20,    31,   167,   168,   169,   170,
      29,   172,    31,    29,    27,    31,    30,    30,    27,    17,
      18,    30,    20,    29,     3,    31,   187,   188,   189,   190,
      28,   192,     3,     4,     5,     6,     7,     8,    20,    10,
      11,    12,    13,    14,    15,    30,    17,    29,    19,    31,
      30,    22,    23,     0,     1,    30,    27,    28,     1,    30,
       3,    32,    33,    28,    31,    12,   227,    29,   229,    31,
     231,    16,    17,    18,    31,    20,   237,    16,    17,    18,
      31,    20,    19,    20,    21,    22,    31,    24,   249,    29,
      29,    31,    31,     0,     1,   256,   257,   258,   259,   260,
     261,   262,   263,    31,    41,    12,    31,    29,   269,    31,
      31,    31,    49,    50,    51,    52,    53,    54,    55,    31,
     281,     3,     4,     5,     6,    31,    31,   288,   289,   290,
     291,   292,   293,   294,    31,    17,   297,    19,    29,    76,
      31,   302,   303,    17,    18,    27,    20,   308,    30,    16,
      17,    18,    29,    20,    31,    29,   317,    31,   319,    16,
      17,    18,    29,    20,    31,    29,    31,    31,   105,    31,
     331,    28,   333,   110,   111,     3,     4,     5,     6,     7,
       8,    28,    10,    11,    12,    13,    14,    15,    29,    17,
      31,    19,    28,     3,    22,    23,    29,    31,    31,    27,
      28,    28,    30,    28,    32,    33,    28,    31,    16,    17,
      18,    31,    20,   150,     3,     4,     5,     6,     3,     4,
       5,     6,   159,    31,    16,    17,    18,    29,    20,    31,
     167,   168,   169,   170,    29,   172,    31,    29,    27,    31,
      31,    30,    27,    31,    31,    30,    29,    29,    31,    31,
     187,   188,   189,   190,    31,   192,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    12,    13,    14,    15,    29,
      17,    31,    19,    31,    28,    22,    23,     0,     1,    31,
      27,    28,    31,    30,    32,    32,    33,    31,    31,    12,
     227,    29,   229,    31,   231,    16,    17,    18,    28,    20,
     237,    16,    17,    18,    31,    20,    19,    20,    21,    22,
      31,    24,   249,    29,    29,    31,    31,    31,    28,   256,
     257,   258,   259,   260,   261,   262,   263,    29,    41,    31,
      31,    29,   269,    31,    28,    28,    49,    50,    51,    52,
      53,    54,    55,    29,   281,    31,    16,    17,    18,    28,
      20,   288,   289,   290,   291,   292,   293,   294,    31,    29,
     297,    31,    29,    76,    31,   302,   303,    28,    16,    17,
      18,   308,    20,    21,    28,    31,    24,    25,     4,    59,
     317,    29,   319,    31,    29,    29,    31,    31,    -1,    -1,
      -1,    -1,   105,    -1,   331,    -1,   333,   110,   111,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
      16,    17,    18,    -1,    20,    21,    -1,   150,    24,    25,
      -1,    -1,    -1,    29,    20,    31,   159,    -1,    24,    16,
      17,    18,    -1,    20,   167,   168,   169,   170,    -1,   172,
      -1,    -1,    29,    -1,    31,    41,    16,    17,    18,    -1,
      20,    -1,    -1,    49,   187,   188,   189,   190,    -1,   192,
      -1,    31,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      76,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,    -1,   227,    -1,   229,    -1,   231,    17,
      18,    -1,    20,    -1,   237,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    31,   110,   111,   249,    -1,     3,     4,
       5,     6,    -1,   256,   257,   258,   259,   260,   261,   262,
     263,    -1,    17,    -1,    19,    24,   269,    22,    23,    16,
      17,    18,    27,    20,    -1,    30,    31,    -1,   281,    -1,
      -1,    28,    41,    -1,   150,   288,   289,   290,   291,   292,
     293,   294,    51,   159,   297,    -1,    -1,    -1,    -1,   302,
     303,    -1,   168,    -1,    -1,   308,   172,    -1,    16,    17,
      18,    -1,    20,    -1,   317,    -1,   319,    76,     3,     4,
       5,     6,   188,    31,    -1,    -1,   192,    -1,   331,    -1,
     333,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,   105,    -1,    -1,    -1,
      -1,   110,   111,     3,     4,     5,     6,    -1,    16,    17,
      18,   227,    20,   229,    -1,   231,    -1,    17,    24,    19,
      28,   237,    22,    23,    16,    17,    18,    27,    20,    -1,
      30,    31,    -1,   249,    -1,    41,    -1,    29,    -1,    31,
     256,   150,    -1,    -1,    50,    -1,    -1,   263,    -1,    -1,
     159,    -1,    -1,   269,    16,    17,    18,    -1,    20,   168,
      16,    17,    18,   172,    20,   281,    -1,    29,    -1,    31,
      76,    -1,   288,    29,    -1,    31,    16,    17,    18,   188,
      20,   297,    -1,   192,    -1,    -1,   302,   303,    -1,    29,
      -1,    31,   308,    16,    17,    18,    -1,    20,    -1,   105,
      -1,   317,    -1,   319,   110,   111,    29,    -1,    31,    -1,
      -1,     3,     4,     5,     6,   331,    -1,   333,   227,    -1,
     229,    -1,   231,    -1,    -1,    17,    24,    19,   237,    -1,
      22,    23,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,
     249,    -1,    -1,    41,   150,    -1,    -1,   256,   257,   258,
      -1,    -1,    -1,   159,   263,    16,    17,    18,    -1,    20,
     269,    -1,   168,    16,    17,    18,   172,    20,    -1,    -1,
      31,    -1,   281,    17,    18,    28,    20,    -1,    76,   288,
     289,   290,   188,    -1,    -1,    -1,   192,    31,   297,    -1,
      -1,    -1,    -1,   302,   303,    -1,    16,    17,    18,   308,
      20,    21,    -1,    -1,    24,    25,    -1,   105,   317,    29,
     319,    31,   110,   111,     3,     4,     5,     6,    -1,    24,
      -1,   227,   331,   229,   333,   231,    -1,    -1,    17,    -1,
      19,   237,    -1,    22,    23,    -1,    41,    -1,    27,    -1,
      -1,    30,    31,   249,    16,    17,    18,    -1,    20,    -1,
     256,   257,   150,    -1,    16,    17,    18,   263,    20,    31,
      24,   159,    -1,   269,    -1,     3,     4,     5,     6,    31,
     168,    76,    -1,    -1,   172,   281,    -1,    41,    -1,    17,
      -1,    19,   288,   289,    22,    23,    -1,    -1,    -1,    27,
     188,   297,    30,    31,   192,    -1,   302,   303,    -1,    -1,
     105,    -1,   308,    -1,    -1,   110,   111,    -1,    -1,    -1,
      -1,   317,    76,   319,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    16,    17,    18,   331,    20,   333,    -1,   227,
      17,   229,    19,   231,    -1,    22,    23,    31,    -1,   237,
      27,   105,    -1,    30,    31,   150,   110,   111,    16,    17,
      18,   249,    20,    -1,   159,    16,    17,    18,   256,    20,
      28,     3,     4,     5,     6,   263,    -1,   172,    -1,    -1,
      31,   269,    16,    17,    18,    17,    20,    19,    -1,    -1,
      22,    23,    -1,   281,    28,    27,   150,   192,    30,    31,
     288,    -1,    16,    17,    18,   159,    20,    21,    -1,   297,
      24,    25,    -1,    -1,   302,   303,    30,    31,   172,    -1,
     308,    -1,    16,    17,    18,    -1,    20,    -1,    -1,   317,
      -1,   319,   227,    -1,   229,    -1,   231,    31,   192,    -1,
      -1,    -1,   237,   331,    -1,   333,    -1,    16,    17,    18,
      -1,    20,    21,    -1,   249,    24,    25,    -1,    -1,    -1,
      29,    30,    31,    16,    17,    18,    -1,    20,   263,    -1,
      -1,    -1,    -1,   227,   269,   229,    -1,   231,    31,    -1,
      -1,    -1,    -1,   237,    -1,    -1,   281,    -1,    16,    17,
      18,    -1,    20,    21,    -1,   249,    24,    25,    -1,    -1,
      -1,    29,   297,    31,    -1,    -1,    -1,   302,   303,   263,
      16,    17,    18,   308,    20,   269,    16,    17,    18,    -1,
      20,    -1,   317,    -1,   319,    31,    -1,   281,    28,    -1,
      -1,     3,     4,     5,     6,    -1,   331,    -1,   333,    -1,
      16,    17,    18,   297,    20,    17,    -1,    19,   302,   303,
      22,    23,    28,    -1,   308,    27,    -1,    -1,    30,    31,
      16,    17,    18,   317,    20,   319,    16,    17,    18,    -1,
      20,    21,    28,    -1,    24,    25,    -1,   331,    28,   333,
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
      -1,    -1,    27,    28,    -1,    30,    -1,    32,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    17,    27,    19,    -1,    30,    22,    23,    16,    17,
      18,    27,    20,    21,    30,    -1,    24,    25,    16,    17,
      18,    29,    20,    31,    16,    17,    18,    -1,    20,    21,
      28,    -1,    24,    25,    16,    17,    18,    29,    20,    31,
      16,    17,    18,    -1,    20,    21,    28,    -1,    24,    25,
      16,    17,    18,    29,    20,    31,    16,    17,    18,    -1,
      20,    21,    28,    -1,    24,    25,    16,    17,    18,    29,
      20,    31,    16,    17,    18,    -1,    20,    21,    28,    -1,
      24,    25,    16,    17,    18,    29,    20,    31,    16,    17,
      18,    -1,    20,    21,    28,    -1,    24,    25,    -1,    -1,
      -1,    29,    -1,    31,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    24,    25,    -1,    -1,    16,    17,    18,    31,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,    16,    17,
      18,    31,    20,    21,    -1,    -1,    24,    25,    -1,    -1,
      16,    17,    18,    31,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    16,    17,    18,    31,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    16,    17,    18,    31,    20,    21,
      -1,    -1,    24,    25,    -1,    -1,    16,    17,    18,    31,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,    16,    17,
      18,    31,    20,    21,    -1,    -1,    24,    25,    -1,    -1,
      16,    17,    18,    31,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    16,    17,    18,    31,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    16,    17,    18,    31,    20,    21,
      -1,    -1,    24,    25,    -1,    -1,    16,    17,    18,    31,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    -1,
      30,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    16,    17,    18,    -1,    20,    21,
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
      28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    12,    35,    36,    37,    38,    39,    40,     3,
       0,    37,     9,    28,    30,     3,     4,     5,     6,    17,
      19,    22,    23,    27,    30,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    66,     1,    12,    31,    41,
      42,    30,    62,    58,    62,    62,    62,    55,    28,    20,
      18,    17,    16,    21,    24,    25,     3,    32,    48,    29,
      31,    31,    55,    65,    31,    58,    60,    61,    62,    62,
      62,    62,     1,    49,    42,    48,    29,    31,     3,     7,
      10,    11,    12,    13,    14,    15,    28,    33,    38,    39,
      43,    44,    45,    46,    47,    48,    50,    51,    52,    53,
      54,    55,    55,     1,     9,    30,    30,    28,    46,     3,
      30,    30,    30,    28,    55,    55,     1,     3,    47,    28,
      55,    55,     3,    31,    28,    28,    31,    31,    31,    43,
      55,    55,    28,    28,    28,     8,    28,    28,    43,    47,
      47,    31,    31,    48,    48,     3,     4,     5,     6,    27,
      30,    63,    64,    66,     3,     4,     5,     6,    27,    30,
      63,    64,    66,     3,     4,     5,     6,    17,    19,    22,
      23,    27,    30,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    66,     3,     4,     5,     6,    17,    19,    22,
      23,    27,    30,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    66,    32,     9,    28,     7,    10,    11,    12,
      13,    14,    15,    28,    32,    38,    39,    44,    45,    46,
      48,    50,    51,    52,    53,    54,     3,    30,    55,    30,
      55,    30,     3,     4,     5,     6,    27,    30,    62,    63,
      64,    66,    58,    62,     3,     4,     5,     6,    27,    30,
      62,    63,    64,    66,    62,    55,    20,    18,    17,    16,
      21,    24,    25,    30,     3,     4,     5,     6,    27,    30,
      62,    63,    64,    66,    58,    62,     3,     4,     5,     6,
      27,    30,    62,    63,    64,    66,    62,    55,    20,    18,
      17,    16,    21,    24,    25,    49,    55,    30,    30,    28,
      46,     3,    30,    30,    30,    49,    28,     1,     9,    31,
      65,    31,    31,    65,    31,    31,    65,    30,    55,    30,
      55,    31,    58,    60,    61,    62,    62,    62,    62,    31,
      65,    30,    55,    30,    55,    31,    58,    60,    61,    62,
      62,    62,    62,    33,    28,    55,     1,    47,    28,     9,
      28,    55,    55,     3,    33,    55,    31,    31,    31,    31,
      65,    31,    31,    65,    31,    31,    31,    65,    31,    31,
      65,    31,    31,    28,    28,    55,    31,    31,    31,    31,
      31,    31,    31,    43,    55,    55,    28,    28,    28,    28,
       8,    28,    28,    43,    47,    47,    31,    31,    48,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    37,    38,    39,
      40,    40,    40,    41,    41,    41,    42,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    44,    44,    45,
      45,    46,    46,    47,    47,    48,    49,    49,    49,    50,
      50,    51,    51,    52,    53,    54,    55,    55,    56,    56,
      56,    56,    56,    57,    57,    58,    58,    59,    59,    60,
      60,    61,    61,    61,    62,    62,    63,    63,    63,    64,
      64,    65,    65,    66,    66,    66,    66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     5,
       6,     5,     1,     3,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     9,     9,     2,
       1,     1,     1,     3,     2,     3,     2,     0,     1,     5,
       7,     2,     3,     5,     5,     5,     1,     1,     3,     2,
       2,     3,     3,     3,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     2,     1,     1,     3,     1,     1,     4,
       3,     3,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
#line 92 "src/bison/bison.y"
            {
	  tree = (yyval.node);
  }
#line 2308 "src/bison/bison.tab.c"
    break;

  case 3: /* decl_list: decl_list decl  */
#line 98 "src/bison/bison.y"
                       {
		(yyval.node) = createNode("decl_list");
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2318 "src/bison/bison.tab.c"
    break;

  case 4: /* decl_list: decl  */
#line 103 "src/bison/bison.y"
               {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2326 "src/bison/bison.tab.c"
    break;

  case 5: /* decl: var_decl  */
#line 109 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2334 "src/bison/bison.tab.c"
    break;

  case 6: /* decl: fun_decl  */
#line 112 "src/bison/bison.y"
                   {
		(yyval.node) =  (yyvsp[0].node);
	}
#line 2342 "src/bison/bison.tab.c"
    break;

  case 7: /* decl: var_decl_with_assing  */
#line 115 "src/bison/bison.y"
                              {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2350 "src/bison/bison.tab.c"
    break;

  case 8: /* var_decl: TYPE ID ';'  */
#line 122 "src/bison/bison.y"
                    {
		(yyval.node) = createNode("var_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		checkRedeclaration((yyvsp[-1].token).lexeme, (yyvsp[-1].token).scope, &errosSemanticos, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		insertSymbol((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column, (yyvsp[-2].token).lexeme, "var", (yyvsp[-1].token).scope);
	}
#line 2367 "src/bison/bison.tab.c"
    break;

  case 9: /* var_decl_with_assing: TYPE ID ASSIGN simple_exp ';'  */
#line 137 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("var_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column);

		(yyval.node)->leaf3 = createNode("\0");
		(yyval.node)->leaf3->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		(yyval.node)->leaf4 = (yyvsp[-1].node);

		checkRedeclaration((yyvsp[-3].token).lexeme, (yyvsp[-3].token).scope, &errosSemanticos, (yyvsp[-3].token).line, (yyvsp[-3].token).column);
		insertSymbol((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-4].token).lexeme, "var", (yyvsp[-3].token).scope);
	}
#line 2389 "src/bison/bison.tab.c"
    break;

  case 10: /* fun_decl: TYPE ID '(' params ')' block_stmt  */
#line 157 "src/bison/bison.y"
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
#line 2411 "src/bison/bison.tab.c"
    break;

  case 11: /* fun_decl: TYPE ID '(' ')' block_stmt  */
#line 174 "src/bison/bison.y"
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
#line 2432 "src/bison/bison.tab.c"
    break;

  case 12: /* fun_decl: error  */
#line 190 "src/bison/bison.y"
                {
		yyerrok;
	}
#line 2440 "src/bison/bison.tab.c"
    break;

  case 13: /* params: params ',' param_decl  */
#line 196 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("\0");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
		numberOfParams = numberOfParams + 1;
	}
#line 2451 "src/bison/bison.tab.c"
    break;

  case 14: /* params: param_decl  */
#line 202 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2459 "src/bison/bison.tab.c"
    break;

  case 15: /* params: error  */
#line 205 "src/bison/bison.y"
               {
		yyerrok;
	}
#line 2467 "src/bison/bison.tab.c"
    break;

  case 16: /* param_decl: TYPE ID  */
#line 211 "src/bison/bison.y"
                {
		
		(yyval.node) = createNode("param_decl");
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);

		checkRedeclaration((yyvsp[0].token).lexeme, (yyvsp[0].token).scope, &errosSemanticos, (yyvsp[0].token).line, (yyvsp[0].token).column);
		insertSymbol((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[-1].token).lexeme, "param", (scopeId + 1));
	}
#line 2484 "src/bison/bison.tab.c"
    break;

  case 17: /* statement: exp_stmt  */
#line 226 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2492 "src/bison/bison.tab.c"
    break;

  case 18: /* statement: block_stmt  */
#line 229 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2500 "src/bison/bison.tab.c"
    break;

  case 19: /* statement: if_stmt  */
#line 232 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2508 "src/bison/bison.tab.c"
    break;

  case 20: /* statement: return_stmt  */
#line 235 "src/bison/bison.y"
                      {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2516 "src/bison/bison.tab.c"
    break;

  case 21: /* statement: write_stmt  */
#line 238 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2524 "src/bison/bison.tab.c"
    break;

  case 22: /* statement: writeln_stmt  */
#line 241 "src/bison/bison.y"
                       {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2532 "src/bison/bison.tab.c"
    break;

  case 23: /* statement: read_stmt  */
#line 244 "src/bison/bison.y"
                    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2540 "src/bison/bison.tab.c"
    break;

  case 24: /* statement: var_decl  */
#line 247 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2548 "src/bison/bison.tab.c"
    break;

  case 25: /* statement: var_decl_with_assing  */
#line 250 "src/bison/bison.y"
                               {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2556 "src/bison/bison.tab.c"
    break;

  case 26: /* statement: for_stmt  */
#line 253 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2564 "src/bison/bison.tab.c"
    break;

  case 27: /* for_stmt: FOR '(' assing_exp ';' simple_exp ';' assing_exp ')' block_stmt  */
#line 259 "src/bison/bison.y"
                                                                        {
		(yyval.node) = createNode("for_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-8].token).lexeme, (yyvsp[-8].token).line, (yyvsp[-8].token).column);
		(yyval.node)->leaf2 = (yyvsp[-6].node);
		(yyval.node)->leaf3 = (yyvsp[-4].node);
		(yyval.node)->leaf4 = (yyvsp[-2].node);
		(yyval.node)->leaf5 = (yyvsp[0].node);
	}
#line 2579 "src/bison/bison.tab.c"
    break;

  case 28: /* for_stmt: FOR '(' error ';' simple_exp ';' assing_exp ')' block_stmt  */
#line 269 "src/bison/bison.y"
                                                                           {

	}
#line 2587 "src/bison/bison.tab.c"
    break;

  case 29: /* exp_stmt: exp ';'  */
#line 276 "src/bison/bison.y"
                {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2595 "src/bison/bison.tab.c"
    break;

  case 30: /* exp_stmt: ';'  */
#line 279 "src/bison/bison.y"
              {
		(yyval.node) = createNode("\0");
	}
#line 2603 "src/bison/bison.tab.c"
    break;

  case 31: /* exp: assing_exp  */
#line 285 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2611 "src/bison/bison.tab.c"
    break;

  case 32: /* exp: simple_exp  */
#line 288 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2619 "src/bison/bison.tab.c"
    break;

  case 33: /* assing_exp: ID ASSIGN simple_exp  */
#line 294 "src/bison/bison.y"
                             {
		(yyval.node) = createNode("assing_exp");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		(yyval.node)->leaf3 = (yyvsp[0].node);

		verifyDefinedId((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos);
	}
#line 2637 "src/bison/bison.tab.c"
    break;

  case 34: /* assing_exp: ID error  */
#line 307 "src/bison/bison.y"
                   {
		yyerrok;
	}
#line 2645 "src/bison/bison.tab.c"
    break;

  case 35: /* block_stmt: '{' stmt_list '}'  */
#line 313 "src/bison/bison.y"
                          {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2653 "src/bison/bison.tab.c"
    break;

  case 36: /* stmt_list: stmt_list statement  */
#line 320 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("stmt_list");
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2663 "src/bison/bison.tab.c"
    break;

  case 37: /* stmt_list: %empty  */
#line 325 "src/bison/bison.y"
                {
		(yyval.node) = createNode("\0");
	}
#line 2671 "src/bison/bison.tab.c"
    break;

  case 38: /* stmt_list: error  */
#line 328 "src/bison/bison.y"
                {
		yyerrok;
	}
#line 2679 "src/bison/bison.tab.c"
    break;

  case 39: /* if_stmt: IF '(' simple_exp ')' statement  */
#line 334 "src/bison/bison.y"
                                                   {
		(yyval.node) = createNode("if_stmt");

		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2692 "src/bison/bison.tab.c"
    break;

  case 40: /* if_stmt: IF '(' simple_exp ')' statement ELSE statement  */
#line 342 "src/bison/bison.y"
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
#line 2710 "src/bison/bison.tab.c"
    break;

  case 41: /* return_stmt: RETURN ';'  */
#line 358 "src/bison/bison.y"
                   {
		(yyval.node) = createNode("return_stmt");
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
	}
#line 2720 "src/bison/bison.tab.c"
    break;

  case 42: /* return_stmt: RETURN exp ';'  */
#line 363 "src/bison/bison.y"
                         {
		(yyval.node) = createNode("return_stmt");
		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
		(yyval.node)->leaf2 = (yyvsp[-1].node);
	}
#line 2731 "src/bison/bison.tab.c"
    break;

  case 43: /* write_stmt: WRITE '(' simple_exp ')' ';'  */
#line 372 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("write_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
	}
#line 2743 "src/bison/bison.tab.c"
    break;

  case 44: /* writeln_stmt: WRITELN '(' simple_exp ')' ';'  */
#line 382 "src/bison/bison.y"
                                       {
		(yyval.node) = createNode("writeln_stmt");
		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
	}
#line 2754 "src/bison/bison.tab.c"
    break;

  case 45: /* read_stmt: READ '(' ID ')' ';'  */
#line 391 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("read_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);

		(yyval.node)->leaf2  = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		verifyDefinedId((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos);
	}
#line 2770 "src/bison/bison.tab.c"
    break;

  case 46: /* simple_exp: bin_exp  */
#line 405 "src/bison/bison.y"
                {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2778 "src/bison/bison.tab.c"
    break;

  case 47: /* simple_exp: list_exp  */
#line 408 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2786 "src/bison/bison.tab.c"
    break;

  case 48: /* list_exp: factor ':' factor  */
#line 414 "src/bison/bison.y"
                          {
		(yyval.node) = createNode("list_exp");

		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2799 "src/bison/bison.tab.c"
    break;

  case 49: /* list_exp: '?' factor  */
#line 422 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("list_exp"); 

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2811 "src/bison/bison.tab.c"
    break;

  case 50: /* list_exp: '%' factor  */
#line 429 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("list_exp"); 
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2822 "src/bison/bison.tab.c"
    break;

  case 51: /* list_exp: factor MAP factor  */
#line 435 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("list_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2834 "src/bison/bison.tab.c"
    break;

  case 52: /* list_exp: factor FILTER factor  */
#line 442 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("list_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2846 "src/bison/bison.tab.c"
    break;

  case 53: /* bin_exp: bin_exp LOG_OP unary_log_exp  */
#line 452 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("bin_exp");

		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2859 "src/bison/bison.tab.c"
    break;

  case 54: /* bin_exp: unary_log_exp  */
#line 460 "src/bison/bison.y"
                        {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2867 "src/bison/bison.tab.c"
    break;

  case 55: /* unary_log_exp: EXCLAMATION unary_log_exp  */
#line 466 "src/bison/bison.y"
                                  {
		(yyval.node) = createNode("unary_log_exp");
	
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2879 "src/bison/bison.tab.c"
    break;

  case 56: /* unary_log_exp: rel_exp  */
#line 473 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2887 "src/bison/bison.tab.c"
    break;

  case 57: /* rel_exp: rel_exp REL_OP sum_exp  */
#line 479 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("rel_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2899 "src/bison/bison.tab.c"
    break;

  case 58: /* rel_exp: sum_exp  */
#line 486 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2907 "src/bison/bison.tab.c"
    break;

  case 59: /* sum_exp: sum_exp SUM_OP mul_exp  */
#line 492 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("sum_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2919 "src/bison/bison.tab.c"
    break;

  case 60: /* sum_exp: mul_exp  */
#line 499 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2927 "src/bison/bison.tab.c"
    break;

  case 61: /* mul_exp: mul_exp MUL_OP factor  */
#line 505 "src/bison/bison.y"
                              {
		(yyval.node) = createNode("mul_exp");

		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2940 "src/bison/bison.tab.c"
    break;

  case 62: /* mul_exp: factor  */
#line 513 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2948 "src/bison/bison.tab.c"
    break;

  case 63: /* mul_exp: SUM_OP factor  */
#line 516 "src/bison/bison.y"
                        {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf1 = (yyvsp[0].node);
	}
#line 2958 "src/bison/bison.tab.c"
    break;

  case 64: /* factor: immutable  */
#line 524 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2966 "src/bison/bison.tab.c"
    break;

  case 65: /* factor: ID  */
#line 527 "src/bison/bison.y"
             {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);

		verifyDefinedId((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column ,scopeStack , &errosSemanticos);
	}
#line 2977 "src/bison/bison.tab.c"
    break;

  case 66: /* immutable: '(' simple_exp ')'  */
#line 536 "src/bison/bison.y"
                           {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2985 "src/bison/bison.tab.c"
    break;

  case 67: /* immutable: call  */
#line 539 "src/bison/bison.y"
               {
		(yyval.node) =  (yyvsp[0].node);
	}
#line 2993 "src/bison/bison.tab.c"
    break;

  case 68: /* immutable: constant  */
#line 542 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3001 "src/bison/bison.tab.c"
    break;

  case 69: /* call: ID '(' args ')'  */
#line 548 "src/bison/bison.y"
                        {
		(yyval.node) = createNode("call");
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column);
		(yyval.node)->leaf2 = (yyvsp[-1].node);
		
		verifyDefinedId((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, scopeStack, &errosSemanticos);
		verifyCall((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, scopeStack, &errosSemanticos, numberOfArguments);
		numberOfArguments = 0;

	}
#line 3017 "src/bison/bison.tab.c"
    break;

  case 70: /* call: ID '(' ')'  */
#line 559 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("call");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		verifyDefinedId((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos);
		verifyCall((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos, numberOfArguments);
		numberOfArguments = 0;
	}
#line 3032 "src/bison/bison.tab.c"
    break;

  case 71: /* args: args ',' simple_exp  */
#line 572 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("args");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
		numberOfArguments = numberOfArguments + 1;
	}
#line 3043 "src/bison/bison.tab.c"
    break;

  case 72: /* args: simple_exp  */
#line 578 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
		numberOfArguments = numberOfArguments + 1;
	}
#line 3052 "src/bison/bison.tab.c"
    break;

  case 73: /* constant: NIL  */
#line 585 "src/bison/bison.y"
            {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 3061 "src/bison/bison.tab.c"
    break;

  case 74: /* constant: INT  */
#line 589 "src/bison/bison.y"
              {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 3070 "src/bison/bison.tab.c"
    break;

  case 75: /* constant: FLOAT  */
#line 593 "src/bison/bison.y"
                {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 3079 "src/bison/bison.tab.c"
    break;

  case 76: /* constant: STRING  */
#line 597 "src/bison/bison.y"
                 {		
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 3088 "src/bison/bison.tab.c"
    break;


#line 3092 "src/bison/bison.tab.c"

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
          goto yyexhaustedlab;
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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 603 "src/bison/bison.y"


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
