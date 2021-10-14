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
int numberOfArguments = 0;

// functions

int verifyIfIsList(int tipo, char *operator, int line, int column, int typeError);

// end functions

#define BHRED "\e[1;91m"
#define RESET "\e[0m"

#line 103 "src/bison/bison.tab.c"

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
  YYSYMBOL_bin_list_exp = 58,              /* bin_list_exp  */
  YYSYMBOL_bin_exp = 59,                   /* bin_exp  */
  YYSYMBOL_unary_log_exp = 60,             /* unary_log_exp  */
  YYSYMBOL_rel_exp = 61,                   /* rel_exp  */
  YYSYMBOL_sum_exp = 62,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 63,                   /* mul_exp  */
  YYSYMBOL_factor = 64,                    /* factor  */
  YYSYMBOL_immutable = 65,                 /* immutable  */
  YYSYMBOL_call = 66,                      /* call  */
  YYSYMBOL_args = 67,                      /* args  */
  YYSYMBOL_arg = 68,                       /* arg  */
  YYSYMBOL_constant = 69                   /* constant  */
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
#define YYLAST   4017

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  409

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
     165,   165,   183,   189,   194,   197,   203,   218,   221,   224,
     227,   230,   233,   236,   239,   242,   248,   258,   265,   269,
     275,   279,   286,   309,   315,   321,   326,   329,   335,   343,
     359,   363,   370,   376,   386,   395,   409,   413,   420,   431,
     444,   461,   476,   494,   502,   509,   523,   530,   538,   545,
     552,   559,   566,   570,   577,   581,   587,   595,   599,   603,
     610,   622,   636,   642,   650,   659,   664,   669,   674
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
  "read_stmt", "simple_exp", "unary_list_exp", "bin_list_exp", "bin_exp",
  "unary_log_exp", "rel_exp", "sum_exp", "mul_exp", "factor", "immutable",
  "call", "args", "arg", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-224)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-79)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,    16,     7,    23,    94,   134,   262,   289,    90,  -224,
     345,   435,     8,   324,    59,    -6,   327,   333,   349,    48,
      46,    70,   161,   461,   379,    48,    91,   710,  3818,  3831,
      97,   140,   191,   174,   156,   157,   177,   195,    60,   362,
     362,  3844,  2502,   583,  2535,  2568,  2601,  2634,   162,   176,
    2667,  2700,  2733,  2766,  2799,  2832,  2865,   183,   135,   192,
      -1,    32,   831,   478,   384,  3857,  3870,  3883,  3896,   554,
     196,  1497,  1103,   583,   453,  2898,  2931,   214,   233,   583,
     583,   220,  1376,  3909,    56,  1111,  1795,  3532,   234,  2964,
    2997,   572,  3030,    60,   368,   368,   362,   447,   447,   447,
     236,  3922,   485,   488,   489,   249,   258,   116,   264,  3063,
     278,   282,   288,  3935,   112,   647,  3558,  3574,   297,   302,
     305,  1562,  3948,   529,  1497,  1497,   342,   354,   355,   492,
     410,   358,   369,  3096,  3129,  3162,   161,   336,   336,  3195,
     378,   388,   161,   161,  3228,  3261,   161,   218,  3590,  3606,
    3622,   362,  3638,   583,  3654,  3812,  3961,   960,   837,  1580,
    3660,   463,  1877,   574,   574,  3672,   583,   227,   395,    22,
      26,    83,   185,   318,  3684,  3696,  3708,  3720,   890,  1126,
    1259,  1393,   651,  3540,   688,   688,  1420,   583,    14,   516,
      93,   125,   253,   311,   113,  1458,  3548,  3564,  3580,  3294,
     448,   402,   406,   413,   447,   421,   583,   429,   437,   459,
     430,   462,   480,   497,   479,   483,   507,   620,   161,   809,
     870,  1059,   494,  1777,  1908,  1941,  1974,  2007,  2040,   160,
    3327,  1222,  3966,   460,  1290,  3732,   428,   551,   773,   934,
     574,  1023,   583,    36,  1238,  1317,  1327,  1610,  1634,  1695,
     518,  1877,   779,   779,   574,   736,   736,   736,  1715,  3596,
      20,   591,   642,   912,   688,   977,   583,   265,  1476,  1516,
    1540,  1617,  1679,  1732,   519,  3540,  1029,  1029,   688,   740,
     740,   740,  1844,   537,   543,   583,   557,  2073,  2106,   553,
     575,   583,   583,   609,  3360,  2139,   587,   583,  3393,  3975,
     533,  3980,  3744,   561,  3424,  1820,   598,  3756,    79,   376,
    1826,  1871,    55,   610,   614,   618,   736,   630,   583,   638,
     639,   645,   649,   672,   685,  3612,   568,  3453,  3419,   701,
    3628,   279,  1082,  3448,  3477,   118,   615,   648,   666,   740,
     670,   583,   671,   675,   718,   727,   743,   757,   612,   763,
     623,   702,   654,   691,  2172,  2205,   706,   720,   721,  2238,
     729,  3989,  3768,  3794,   766,  3800,  3482,   733,   734,  3644,
    3506,   796,  3778,  3511,   821,   737,   741,   529,  1497,  1497,
     759,   771,   772,  3806,   776,   841,   777,  3784,   865,   894,
     913,  2271,   783,   790,  2304,  2337,  2370,   798,   916,   529,
     336,   336,  2403,   799,   803,   529,   529,  2436,  2469
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -224,  -224,  -224,   834,     0,  -224,  -224,  -224,  -224,   820,
     -45,  -118,  -102,   -30,   -49,   -18,  -143,   -99,   -94,   -82,
     -79,   -62,   197,  1246,  1535,  1537,  1080,  1389,  1387,  1098,
     -25,   432,   682,  -223,   726,   932
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    44,     7,    25,    19,    16,    17,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,   103,   104,    68
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    23,    77,   230,     6,   220,    92,    69,   300,    13,
       8,   303,    83,    85,    86,    87,   -12,   -12,   174,    93,
      14,   221,     1,     9,   224,   108,   -10,   -46,   -12,   225,
     -63,   -63,   -63,     2,   -63,   326,   -65,   -65,   -65,    15,
     -65,   226,   251,   -63,   227,   -63,   -54,   195,   174,   -65,
     327,   -65,   -54,   -46,   174,   174,   -55,   -54,    14,   349,
     -54,   228,    18,   147,   148,   149,   150,   -55,    85,    85,
      85,   117,   118,   119,   120,   294,   -55,   151,   130,    38,
      22,   364,    39,    40,   -55,   366,   -65,   152,   140,   141,
     153,   139,    70,   222,    -2,     1,   195,   144,   145,   -53,
      71,   252,    -8,   -56,   371,   223,     2,   -65,   -65,   -65,
     -53,   -65,   -65,   275,   -56,   -65,   -65,    70,    11,   -65,
      12,    72,   -46,   219,   -46,    71,   232,    73,   174,   278,
     -60,   -60,   -53,   -60,    -4,    -4,   235,   244,   248,   249,
     -53,   174,   -60,   385,   -60,   -54,    -4,   -65,   373,   -65,
     389,   -63,   -63,   -63,   -54,   -63,   -54,   259,   268,   272,
     273,   296,   174,   -63,    26,    27,    28,    29,    30,   297,
      74,    31,    32,    33,    34,    35,    36,    78,    37,   283,
      38,   174,   289,    39,    40,    92,    79,    80,    41,    42,
      89,    43,    75,   146,    26,    27,    28,    29,    82,    27,
      28,    29,   253,   -58,   -30,   -58,   195,    81,    37,   195,
      38,   -31,    37,    39,    40,   305,   -58,   174,    41,    76,
     -47,    43,    41,   112,   -33,    43,   244,   244,   244,   311,
     319,   323,   324,   195,   -65,   -65,   -65,   353,   -65,   328,
      88,   174,   109,   -63,   -63,   -63,   -65,   -63,   231,    92,
     268,   268,   268,   334,   342,   346,   347,   195,   -63,   220,
     174,   199,    -5,    -5,   -32,   113,   174,   174,   100,   102,
     105,   276,   174,   -56,    -5,   221,   110,   111,   224,   195,
     123,   220,   -56,   225,   -56,   -55,   124,   220,   220,    -6,
      -6,   367,   125,   174,   -55,   226,   -55,   221,   227,   -53,
     224,    -6,   195,   221,   221,   225,   224,   224,   -53,   126,
     -53,   225,   225,   127,   374,   228,   174,   226,   102,   128,
     227,   131,   132,   226,   226,   -50,   227,   227,   277,   -58,
     -51,   -58,   391,   -52,   254,   -60,   -60,   228,   -60,   229,
     -58,   195,   -58,   228,   228,    -3,    -3,   222,   195,   -60,
     233,   403,   404,   -15,   402,   -15,    20,    -3,    21,   223,
     407,   408,   -14,   250,   -14,   147,   148,   149,   150,   222,
     133,   147,   148,   149,   150,   222,   222,   219,   -16,   151,
     -16,   223,   134,   135,   274,   151,   137,   223,   223,   152,
      39,    40,   153,   253,   -57,   152,   -57,   138,   153,   219,
      96,   -60,   -60,   284,   -60,   219,   219,   -57,   -13,   142,
     -13,   -38,   -60,   -38,   -38,   -38,   -38,   -38,   136,   143,
     -38,   -38,   -38,   -38,   -38,   -38,   -47,   -38,   102,   -38,
     -76,   102,   -38,   -38,   -77,    -7,    -7,   -38,   -38,   306,
     -38,   -75,   -38,   -38,   -65,   -65,   -65,    -7,   -65,   -78,
     200,   201,   202,   203,   106,   102,   107,   -64,   304,   -65,
     285,   -11,   -11,   329,   204,   -68,   157,   158,   159,   160,
     154,   154,   154,   -11,   205,   175,   -65,   206,   282,   102,
     161,   287,   351,    26,    27,    28,    29,   -69,   356,   357,
     165,   301,   286,   166,   360,    95,   -58,    37,   -58,    38,
     290,   102,    39,    40,   196,   175,   -58,    41,   288,   291,
      43,   175,   175,   292,   -74,   368,   -74,   121,   -73,   122,
     -73,   -72,   295,   -72,   102,   154,   154,   154,   154,   207,
     207,   207,    26,    27,    28,    29,   210,   293,   375,   211,
     212,   213,   214,   215,   216,   -47,    37,   -47,    38,   307,
     330,    39,    40,   196,    -9,    -9,    41,   217,   352,    43,
     107,   218,   121,   102,   361,   -66,    -9,   -76,   -76,   -76,
     102,   -76,   -34,   -34,   350,   392,   393,   236,   237,   238,
     239,   354,   -76,   154,   -34,   175,   157,   158,   159,   160,
     121,   240,   362,   175,   245,   245,   245,   121,   175,   369,
     161,   241,   162,   355,   242,   163,   164,   -76,   -76,   -76,
     165,   -76,   358,   166,   196,   269,   269,   269,   -33,   175,
     -76,   -29,   -76,   -29,   -29,   -29,   -29,   -29,   -29,   365,
     -29,   -29,   -29,   -29,   -29,   -29,   207,   -29,   175,   -29,
     -71,   -76,   -29,   -29,   -76,   -77,   -76,   -29,   -29,   -75,
     -29,   -67,   -29,   -29,   178,   179,   180,   181,   -77,   -77,
     -77,   -78,   -77,   196,    95,   -57,   196,   -57,   182,   -50,
     -64,   -77,   245,   -77,   175,   -57,   -68,   -77,   186,   -77,
     -69,   187,   378,   245,   245,   245,   245,   320,   320,   320,
     196,   260,   261,   262,   263,   -75,   269,   -75,   175,   -78,
     -50,   -78,   -50,   -51,   -64,   264,   -64,   269,   269,   269,
     269,   343,   343,   343,   196,   265,   -52,   175,   266,   379,
     155,   155,   155,   175,   175,   176,   -76,   -76,   -76,   175,
     -76,   -76,   372,   377,   -76,   -76,   196,   380,   -76,   312,
     313,   314,   315,   335,   336,   337,   338,   -68,   320,   -68,
     175,   381,   382,   316,   197,   176,   -69,   339,   -69,   196,
     -32,   176,   176,   317,   -66,   386,   318,   340,   390,   -70,
     341,   343,   -51,   175,   -51,   155,   155,   155,   155,   208,
     208,   208,   236,   237,   238,   239,   -52,   394,   -52,   -77,
     -77,   -77,   121,   -77,   376,   121,   240,   383,   196,   395,
     396,   163,   164,   197,   -77,   196,   241,   -71,   -67,   242,
     -24,   400,   -24,   -24,   -24,   -24,   -24,   -24,   401,   -24,
     -24,   -24,   -24,   -24,   -24,   121,   -24,   387,   -24,   -70,
     405,   -24,   -24,   155,   406,   176,   -24,   -24,    10,   -24,
      24,   -24,   -24,   176,   246,   246,   246,   129,   176,    94,
     -66,   -56,   -66,   -76,   -76,   -76,     0,   -76,   -76,   -56,
       0,   -76,   -76,     0,   197,   270,   270,   270,   -76,   176,
     121,   -25,   397,   -25,   -25,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -25,   208,   -25,   176,   -25,
       0,     0,   -25,   -25,   -71,     0,   -71,   -25,   -25,     0,
     -25,     0,   -25,   -25,     0,     0,   -65,   -65,   -65,     0,
     -65,   -65,     0,   197,   -65,   -65,   197,     0,     0,   -65,
     258,   -65,   246,   121,   176,   398,     0,     0,   -75,   -75,
     -75,     0,   -75,   246,   246,   246,   246,   321,   321,   321,
     197,   -75,   -67,   -75,   -67,   -70,   270,   -70,   176,     0,
     -75,   -75,   -75,     0,   -75,     0,     0,   270,   270,   270,
     270,   344,   344,   344,   197,   -75,     0,   176,     0,     0,
     156,   156,   156,   176,   176,   177,   -65,   -65,   -65,   176,
     -65,   -65,     0,     0,   -65,   -65,   197,     0,     0,     0,
     234,   -65,     0,   -78,   -78,   -78,     0,   -78,   321,     0,
     176,     0,     0,     0,   198,   177,   -78,     0,   -78,   197,
       0,   177,   177,     0,     0,     0,     0,     0,     0,     0,
       0,   344,     0,   176,     0,   156,   156,   156,   156,   209,
     209,   209,   260,   261,   262,   263,     0,     0,     0,   -78,
     -78,   -78,     0,   -78,     0,     0,   264,     0,   197,     0,
       0,   184,   185,   198,   -78,   197,   265,     0,     0,   266,
     -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,     0,   -17,
     -17,   -17,   -17,   -17,   -17,     0,   -17,     0,   -17,     0,
       0,   -17,   -17,   156,     0,   177,   -17,   -17,     0,   -17,
       0,   -17,   -17,   177,   247,   247,   247,     0,   177,   277,
     -57,     0,   -57,     0,     0,     0,   178,   179,   180,   181,
       0,   -57,     0,   -57,   198,   271,   271,   271,    84,   177,
     182,     0,   183,   170,     0,   184,   185,   -62,   -62,   -62,
     186,   -62,     0,   187,   101,     0,   209,     0,   177,   -62,
       0,   173,   -76,   -76,   -76,     0,   -76,   -76,     0,     0,
     -76,   -76,   191,   170,     0,   -76,     0,   -76,     0,   170,
     170,     0,     0,   198,     0,     0,   198,     0,     0,     0,
     194,   173,   247,   114,   177,     0,     0,   173,   173,     0,
       0,     0,     0,   247,   247,   247,   247,   322,   322,   322,
     198,     0,     0,   116,     0,     0,   271,     0,   177,     0,
       0,   191,     0,     0,     0,     0,     0,   271,   271,   271,
     271,   345,   345,   345,   198,     0,     0,   177,     0,   194,
       0,     0,     0,   177,   177,   178,   179,   180,   181,   177,
       0,     0,     0,   170,     0,     0,   198,     0,     0,   182,
       0,   183,   243,     0,   184,   185,   170,     0,   322,   186,
     177,   173,   187,   299,   -62,   -62,   -62,     0,   -62,   198,
     173,     0,     0,   267,   173,     0,     0,   170,     0,   -62,
       0,   345,     0,   177,     0,   -77,   -77,   -77,     0,   -77,
     -77,   194,     0,   -77,   -77,   173,   170,     0,   -77,   167,
     -77,     0,     0,   178,   179,   180,   181,     0,   198,     0,
       0,     0,     0,     0,   173,   198,     0,   182,     0,   183,
       0,   191,   184,   185,   191,     0,     0,   186,   188,   167,
     187,   302,   170,     0,     0,   167,   167,     0,     0,   194,
       0,   308,   194,   -64,   -64,   -64,     0,   -64,   191,     0,
     173,     0,     0,   -68,   -68,   -68,   170,   -68,   -64,   173,
     173,   310,     0,     0,     0,   331,   194,     0,   -68,     0,
       0,     0,   191,     0,   173,   170,     0,   188,     0,     0,
       0,   170,   170,   194,   194,   333,     0,   170,     0,     0,
     194,     0,     0,   173,   191,     0,     0,     0,     0,   173,
     173,     0,   -65,   -65,   -65,   173,   -65,   -65,   170,   167,
     -65,   -65,   194,     0,   -65,     0,    72,   191,   167,   -75,
     -75,   -75,   167,   -75,   -75,     0,   173,   -75,   -75,     0,
       0,   170,   -75,     0,   -75,   194,     0,     0,     0,   188,
     172,     0,   171,   167,     0,     0,   -78,   -78,   -78,   173,
     -78,   -78,     0,     0,   -78,   -78,   191,     0,     0,   -78,
       0,   -78,   167,   191,     0,     0,     0,     0,     0,   193,
     172,   192,   171,     0,   194,     0,   172,   172,   171,   171,
       0,   194,     0,     0,   -62,   -62,   -62,   188,   -62,   279,
     188,   115,   280,   281,     0,     0,     0,   -62,   167,   -62,
       0,     0,   -62,   -62,   -62,     0,   -62,   167,   167,   167,
      82,    27,    28,    29,   188,   -62,     0,   -62,   193,     0,
     192,     0,   167,     0,    37,     0,    38,     0,     0,    39,
      40,   188,   188,   188,    41,     0,     0,    43,   188,     0,
       0,   167,   -64,   -64,   -64,     0,   -64,   167,   167,     0,
     172,     0,   171,   167,     0,   -64,     0,   -64,     0,   172,
     188,   171,     0,   172,     0,   171,   -68,   -68,   -68,     0,
     -68,     0,     0,     0,   167,   178,   179,   180,   181,   -68,
     193,   -68,   192,   188,   172,     0,   171,     0,   168,   182,
     169,   183,     0,     0,   184,   185,     0,   167,     0,   186,
       0,     0,   187,   172,     0,   171,   -77,   -77,   -77,     0,
     -77,   -77,     0,     0,   -77,   -77,     0,   189,   168,   190,
     169,   -77,   188,     0,   168,   168,   169,   169,   193,   188,
     192,   193,     0,   192,     0,     0,   -69,   -69,   -69,   172,
     -69,   171,     0,   -69,   -69,   -69,     0,   -69,   172,   309,
     171,   -69,     0,     0,     0,   193,   -69,   192,   -69,     0,
     -48,   -48,   -48,   172,   -48,   171,   189,     0,   190,     0,
       0,     0,   193,   332,   192,   -48,     0,     0,     0,   193,
       0,   192,   172,     0,   171,     0,     0,     0,   172,   172,
     171,   171,     0,     0,   172,     0,   171,     0,   168,     0,
     169,   193,     0,   192,     0,   -48,   -48,   -48,     0,   -48,
       0,   168,     0,   169,     0,   172,     0,   171,   -48,     0,
     -48,   -49,   -49,   -49,   193,   -49,   192,     0,   178,   179,
     180,   181,   168,     0,   169,     0,   -49,     0,   172,     0,
     171,     0,   182,     0,   183,     0,     0,   184,   185,     0,
       0,   168,   186,   169,     0,   187,   325,     0,   -49,   -49,
     -49,     0,   -49,   193,     0,   192,     0,     0,     0,     0,
     193,   -49,   192,   -49,     0,     0,   189,     0,   190,   189,
       0,   190,     0,     0,     0,     0,     0,   168,   -18,   169,
     -18,   -18,   -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,
     -18,   -18,   -18,   189,   -18,   190,   -18,     0,     0,   -18,
     -18,   168,     0,   169,   -18,   -18,     0,   -18,     0,   -18,
     -18,   -48,   -48,   -48,     0,   -48,     0,   189,     0,   190,
     168,     0,   169,   -48,     0,     0,   168,   168,   169,   169,
       0,     0,   168,     0,   169,     0,   -66,   -66,   -66,   189,
     -66,   190,   254,   -59,   -59,     0,   -59,   178,   179,   180,
     181,   -66,     0,   168,     0,   169,     0,   -59,     0,     0,
       0,   182,   189,   183,   190,     0,   184,   185,     0,     0,
       0,   186,     0,     0,   187,   348,   168,     0,   169,     0,
     236,   237,   238,   239,     0,     0,     0,   -61,   -61,   -61,
       0,   -61,     0,     0,   240,     0,   162,     0,     0,   163,
     164,   189,   -61,   190,   241,     0,     0,   242,   189,   -19,
     190,   -19,   -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,
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
     -34,   -34,   -38,     0,   -38,   -38,   -38,   -38,   -38,   399,
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
      43,     0,   146,    91,   -19,     0,   -19,   -19,   -19,   -19,
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
      40,     0,     0,     0,    41,    42,     0,    43,     0,   146,
     298,    90,     0,    26,    27,    28,    29,    30,     0,     0,
      31,    32,    33,    34,    35,    36,     0,    37,     0,    38,
       0,     0,    39,    40,     0,     0,     0,    41,    42,     0,
      43,     0,   146,   359,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,     0,   -34,     0,     0,   -34,   -34,     0,     0,     0,
     -34,   -34,     0,   -34,     0,   -34,   -34,   178,   179,   180,
     181,     0,     0,     0,     0,   -66,   -66,   -66,     0,   -66,
       0,   182,     0,   183,     0,     0,   184,   185,   -66,     0,
     -66,   186,     0,     0,   187,   363,   178,   179,   180,   181,
       0,     0,     0,     0,   278,   -59,   -59,     0,   -59,     0,
     182,     0,   183,     0,     0,   184,   185,   -59,     0,   -59,
     186,     0,     0,   187,   370,   178,   179,   180,   181,     0,
       0,     0,     0,   -61,   -61,   -61,     0,   -61,     0,   182,
       0,   183,     0,     0,   184,   185,   -61,     0,   -61,   186,
       0,     0,   187,   384,   178,   179,   180,   181,     0,     0,
       0,     0,   -71,   -71,   -71,     0,   -71,     0,   182,     0,
     183,     0,     0,   184,   185,   -71,     0,   -71,   186,     0,
       0,   187,   388,   260,   261,   262,   263,     0,   -49,   -49,
     -49,     0,   -49,     0,     0,     0,     0,   264,     0,   183,
     -49,     0,   184,   185,   -64,   -64,   -64,   265,   -64,   -64,
     266,     0,   -64,   -64,    96,   -59,   -59,   -64,   -59,   -64,
     -68,   -68,   -68,     0,   -68,   -68,   -59,     0,   -68,   -68,
     -61,   -61,   -61,   -68,   -61,   -68,   -69,   -69,   -69,     0,
     -69,   -69,   -61,     0,   -69,   -69,   -76,   -76,   -76,   -69,
     -76,   -69,   -66,   -66,   -66,     0,   -66,   -66,   -76,     0,
     -66,   -66,   -77,   -77,   -77,   -66,   -77,   -66,   -71,   -71,
     -71,     0,   -71,   -71,   -77,     0,   -71,   -71,   -75,   -75,
     -75,   -71,   -75,   -71,   -67,   -67,   -67,     0,   -67,   -67,
     -75,     0,   -67,   -67,   -78,   -78,   -78,   -67,   -78,   -67,
     -70,   -70,   -70,     0,   -70,   -70,   -78,     0,   -70,   -70,
     -64,   -64,   -64,   -70,   -64,   -70,   -75,   -75,   -75,     0,
     -75,   -75,   -64,     0,   -75,   -75,     0,     0,   -78,   -78,
     -78,   -75,   -78,   -78,     0,     0,   -78,   -78,     0,     0,
     -62,   -62,   -62,   -78,   -62,   255,     0,     0,   256,   257,
       0,     0,   -64,   -64,   -64,   -62,   -64,   -64,     0,     0,
     -64,   -64,     0,     0,   -68,   -68,   -68,   -64,   -68,   -68,
       0,     0,   -68,   -68,     0,     0,   -69,   -69,   -69,   -68,
     -69,   -69,     0,     0,   -69,   -69,     0,     0,   -66,   -66,
     -66,   -69,   -66,   -66,     0,     0,   -66,   -66,     0,     0,
     -71,   -71,   -71,   -66,   -71,   -71,     0,     0,   -71,   -71,
       0,     0,   -67,   -67,   -67,   -71,   -67,   -67,     0,     0,
     -67,   -67,     0,     0,   -70,   -70,   -70,   -67,   -70,   -70,
       0,     0,   -70,   -70,   -67,   -67,   -67,     0,   -67,   -70,
     -70,   -70,   -70,     0,   -70,     0,     0,   -67,     0,   -67,
     -71,   -71,   -71,   -70,   -71,   -70,   -67,   -67,   -67,     0,
     -67,     0,   -70,   -70,   -70,   -71,   -70,     0,   -68,   -68,
     -68,   -67,   -68,     0,   -77,   -77,   -77,   -70,   -77,   -77,
     -68,     0,   -77,   -77,     0,     0,   -77,   -75,   -75,   -75,
       0,   -75,   -75,     0,     0,   -75,   -75,     0,     0,   -75,
     -78,   -78,   -78,     0,   -78,   -78,     0,     0,   -78,   -78,
       0,     0,   -78,   -62,   -62,   -62,     0,   -62,    97,     0,
       0,    98,    99,     0,     0,   -62,   -64,   -64,   -64,     0,
     -64,   -64,     0,     0,   -64,   -64,     0,     0,   -64,   -68,
     -68,   -68,     0,   -68,   -68,     0,     0,   -68,   -68,     0,
       0,   -68,   -69,   -69,   -69,     0,   -69,   -69,     0,     0,
     -69,   -69,     0,     0,   -69,   -66,   -66,   -66,     0,   -66,
     -66,     0,     0,   -66,   -66,     0,     0,   -66,   -71,   -71,
     -71,     0,   -71,   -71,     0,     0,   -71,   -71,     0,     0,
     -71,   -67,   -67,   -67,     0,   -67,   -67,     0,     0,   -67,
     -67,     0,     0,   -67,   -70,   -70,   -70,     0,   -70,   -70,
       0,     0,   -70,   -70,     0,     0,   -70,   -69,   -69,   -69,
       0,   -69,   -66,   -66,   -66,     0,   -66,     0,     0,   -69,
       0,   -71,   -71,   -71,   -66,   -71,   -67,   -67,   -67,     0,
     -67,     0,     0,   -71,     0,   -70,   -70,   -70,   -67,   -70,
       0,     0,     0,     0,     0,     0,     0,   -70
};

static const yytype_int16 yycheck[] =
{
       0,    19,    32,   146,     4,   123,    51,    25,   231,     1,
       3,   234,    37,    38,    39,    40,     0,     1,    43,    20,
      12,   123,     1,     0,   123,    74,    32,    28,    12,   123,
      16,    17,    18,    12,    20,   258,    16,    17,    18,    31,
      20,   123,    20,    29,   123,    31,    20,    72,    73,    29,
      30,    31,    20,    31,    79,    80,    20,    31,    12,   282,
      28,   123,     3,     3,     4,     5,     6,    31,    93,    94,
      95,    96,    97,    98,    99,   218,    20,    17,   123,    19,
      32,   304,    22,    23,    28,    30,    31,    27,   137,   138,
      30,   136,     1,   123,     0,     1,   121,   142,   143,    20,
       9,    18,    32,    20,   327,   123,    12,    16,    17,    18,
      31,    20,    21,    20,    31,    24,    25,     1,    28,    28,
      30,    30,    29,   123,    31,     9,   151,    30,   153,    16,
      17,    18,    20,    20,     0,     1,   161,   162,   163,   164,
      28,   166,    29,   366,    31,    20,    12,    29,    30,    31,
     373,    16,    17,    18,    29,    20,    31,   182,   183,   184,
     185,     1,   187,    28,     3,     4,     5,     6,     7,     9,
      30,    10,    11,    12,    13,    14,    15,     3,    17,   204,
      19,   206,   212,    22,    23,   230,    30,    30,    27,    28,
      28,    30,     1,    32,     3,     4,     5,     6,     3,     4,
       5,     6,    17,    18,    28,    20,   231,    30,    17,   234,
      19,    28,    17,    22,    23,   240,    31,   242,    27,    28,
      28,    30,    27,     3,    28,    30,   251,   252,   253,   254,
     255,   256,   257,   258,    16,    17,    18,   286,    20,   264,
      43,   266,    28,    16,    17,    18,    28,    20,    30,   294,
     275,   276,   277,   278,   279,   280,   281,   282,    31,   377,
     285,    28,     0,     1,    28,    31,   291,   292,    71,    72,
      73,    18,   297,    20,    12,   377,    79,    80,   377,   304,
      31,   399,    29,   377,    31,    20,    28,   405,   406,     0,
       1,   316,    28,   318,    29,   377,    31,   399,   377,    20,
     399,    12,   327,   405,   406,   399,   405,   406,    29,    31,
      31,   405,   406,    31,   339,   377,   341,   399,   121,    31,
     399,   124,   125,   405,   406,    28,   405,   406,    17,    18,
      28,    20,   377,    28,    16,    17,    18,   399,    20,     3,
      29,   366,    31,   405,   406,     0,     1,   377,   373,    31,
     153,   400,   401,    29,   399,    31,    29,    12,    31,   377,
     405,   406,    29,   166,    31,     3,     4,     5,     6,   399,
      28,     3,     4,     5,     6,   405,   406,   377,    29,    17,
      31,   399,    28,    28,   187,    17,    28,   405,   406,    27,
      22,    23,    30,    17,    18,    27,    20,    28,    30,   399,
      16,    17,    18,   206,    20,   405,   406,    31,    29,    31,
      31,     1,    28,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    12,    13,    14,    15,    31,    17,   231,    19,
      28,   234,    22,    23,    28,     0,     1,    27,    28,   242,
      30,    28,    32,    33,    16,    17,    18,    12,    20,    28,
       3,     4,     5,     6,     1,   258,     3,    28,    30,    31,
      30,     0,     1,   266,    17,    28,     3,     4,     5,     6,
      38,    39,    40,    12,    27,    43,    28,    30,    30,   282,
      17,     1,   285,     3,     4,     5,     6,    28,   291,   292,
      27,    31,    30,    30,   297,    17,    18,    17,    20,    19,
       3,   304,    22,    23,    72,    73,    28,    27,    28,    30,
      30,    79,    80,    30,    29,   318,    31,    29,    29,    31,
      31,    29,    28,    31,   327,    93,    94,    95,    96,    97,
      98,    99,     3,     4,     5,     6,     7,    30,   341,    10,
      11,    12,    13,    14,    15,    29,    17,    31,    19,    31,
      31,    22,    23,   121,     0,     1,    27,    28,     1,    30,
       3,    32,    29,   366,    31,    28,    12,    16,    17,    18,
     373,    20,     0,     1,    31,   378,   379,     3,     4,     5,
       6,    28,    31,   151,    12,   153,     3,     4,     5,     6,
      29,    17,    31,   161,   162,   163,   164,    29,   166,    31,
      17,    27,    19,    28,    30,    22,    23,    16,    17,    18,
      27,    20,     3,    30,   182,   183,   184,   185,    31,   187,
      29,     1,    31,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    12,    13,    14,    15,   204,    17,   206,    19,
      28,    31,    22,    23,    29,    31,    31,    27,    28,    31,
      30,    28,    32,    33,     3,     4,     5,     6,    16,    17,
      18,    31,    20,   231,    17,    18,   234,    20,    17,    31,
      31,    29,   240,    31,   242,    28,    31,    29,    27,    31,
      31,    30,    28,   251,   252,   253,   254,   255,   256,   257,
     258,     3,     4,     5,     6,    29,   264,    31,   266,    29,
      29,    31,    31,    31,    29,    17,    31,   275,   276,   277,
     278,   279,   280,   281,   282,    27,    31,   285,    30,    28,
      38,    39,    40,   291,   292,    43,    16,    17,    18,   297,
      20,    21,    31,    31,    24,    25,   304,    31,    28,     3,
       4,     5,     6,     3,     4,     5,     6,    29,   316,    31,
     318,    31,    31,    17,    72,    73,    29,    17,    31,   327,
      31,    79,    80,    27,    31,    31,    30,    27,    31,    28,
      30,   339,    29,   341,    31,    93,    94,    95,    96,    97,
      98,    99,     3,     4,     5,     6,    29,    28,    31,    16,
      17,    18,    29,    20,    31,    29,    17,    31,   366,    28,
      28,    22,    23,   121,    31,   373,    27,    31,    31,    30,
       1,    28,     3,     4,     5,     6,     7,     8,    28,    10,
      11,    12,    13,    14,    15,    29,    17,    31,    19,    31,
      31,    22,    23,   151,    31,   153,    27,    28,     4,    30,
      20,    32,    33,   161,   162,   163,   164,   121,   166,    18,
      29,    20,    31,    16,    17,    18,    -1,    20,    21,    28,
      -1,    24,    25,    -1,   182,   183,   184,   185,    31,   187,
      29,     1,    31,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,   204,    17,   206,    19,
      -1,    -1,    22,    23,    29,    -1,    31,    27,    28,    -1,
      30,    -1,    32,    33,    -1,    -1,    16,    17,    18,    -1,
      20,    21,    -1,   231,    24,    25,   234,    -1,    -1,    29,
      30,    31,   240,    29,   242,    31,    -1,    -1,    16,    17,
      18,    -1,    20,   251,   252,   253,   254,   255,   256,   257,
     258,    29,    29,    31,    31,    29,   264,    31,   266,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,   275,   276,   277,
     278,   279,   280,   281,   282,    31,    -1,   285,    -1,    -1,
      38,    39,    40,   291,   292,    43,    16,    17,    18,   297,
      20,    21,    -1,    -1,    24,    25,   304,    -1,    -1,    -1,
      30,    31,    -1,    16,    17,    18,    -1,    20,   316,    -1,
     318,    -1,    -1,    -1,    72,    73,    29,    -1,    31,   327,
      -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   339,    -1,   341,    -1,    93,    94,    95,    96,    97,
      98,    99,     3,     4,     5,     6,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    17,    -1,   366,    -1,
      -1,    22,    23,   121,    31,   373,    27,    -1,    -1,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,   151,    -1,   153,    27,    28,    -1,    30,
      -1,    32,    33,   161,   162,   163,   164,    -1,   166,    17,
      18,    -1,    20,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    29,    -1,    31,   182,   183,   184,   185,    38,   187,
      17,    -1,    19,    43,    -1,    22,    23,    16,    17,    18,
      27,    20,    -1,    30,    31,    -1,   204,    -1,   206,    28,
      -1,    43,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    72,    73,    -1,    29,    -1,    31,    -1,    79,
      80,    -1,    -1,   231,    -1,    -1,   234,    -1,    -1,    -1,
      72,    73,   240,    93,   242,    -1,    -1,    79,    80,    -1,
      -1,    -1,    -1,   251,   252,   253,   254,   255,   256,   257,
     258,    -1,    -1,    95,    -1,    -1,   264,    -1,   266,    -1,
      -1,   121,    -1,    -1,    -1,    -1,    -1,   275,   276,   277,
     278,   279,   280,   281,   282,    -1,    -1,   285,    -1,   121,
      -1,    -1,    -1,   291,   292,     3,     4,     5,     6,   297,
      -1,    -1,    -1,   153,    -1,    -1,   304,    -1,    -1,    17,
      -1,    19,   162,    -1,    22,    23,   166,    -1,   316,    27,
     318,   153,    30,    31,    16,    17,    18,    -1,    20,   327,
     162,    -1,    -1,   183,   166,    -1,    -1,   187,    -1,    31,
      -1,   339,    -1,   341,    -1,    16,    17,    18,    -1,    20,
      21,   183,    -1,    24,    25,   187,   206,    -1,    29,    43,
      31,    -1,    -1,     3,     4,     5,     6,    -1,   366,    -1,
      -1,    -1,    -1,    -1,   206,   373,    -1,    17,    -1,    19,
      -1,   231,    22,    23,   234,    -1,    -1,    27,    72,    73,
      30,    31,   242,    -1,    -1,    79,    80,    -1,    -1,   231,
      -1,   251,   234,    16,    17,    18,    -1,    20,   258,    -1,
     242,    -1,    -1,    16,    17,    18,   266,    20,    31,   251,
     252,   253,    -1,    -1,    -1,   275,   258,    -1,    31,    -1,
      -1,    -1,   282,    -1,   266,   285,    -1,   121,    -1,    -1,
      -1,   291,   292,   275,   276,   277,    -1,   297,    -1,    -1,
     282,    -1,    -1,   285,   304,    -1,    -1,    -1,    -1,   291,
     292,    -1,    16,    17,    18,   297,    20,    21,   318,   153,
      24,    25,   304,    -1,    28,    -1,    30,   327,   162,    16,
      17,    18,   166,    20,    21,    -1,   318,    24,    25,    -1,
      -1,   341,    29,    -1,    31,   327,    -1,    -1,    -1,   183,
      43,    -1,    43,   187,    -1,    -1,    16,    17,    18,   341,
      20,    21,    -1,    -1,    24,    25,   366,    -1,    -1,    29,
      -1,    31,   206,   373,    -1,    -1,    -1,    -1,    -1,    72,
      73,    72,    73,    -1,   366,    -1,    79,    80,    79,    80,
      -1,   373,    -1,    -1,    16,    17,    18,   231,    20,    21,
     234,    94,    24,    25,    -1,    -1,    -1,    29,   242,    31,
      -1,    -1,    16,    17,    18,    -1,    20,   251,   252,   253,
       3,     4,     5,     6,   258,    29,    -1,    31,   121,    -1,
     121,    -1,   266,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,   275,   276,   277,    27,    -1,    -1,    30,   282,    -1,
      -1,   285,    16,    17,    18,    -1,    20,   291,   292,    -1,
     153,    -1,   153,   297,    -1,    29,    -1,    31,    -1,   162,
     304,   162,    -1,   166,    -1,   166,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,   318,     3,     4,     5,     6,    29,
     183,    31,   183,   327,   187,    -1,   187,    -1,    43,    17,
      43,    19,    -1,    -1,    22,    23,    -1,   341,    -1,    27,
      -1,    -1,    30,   206,    -1,   206,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    -1,    72,    73,    72,
      73,    31,   366,    -1,    79,    80,    79,    80,   231,   373,
     231,   234,    -1,   234,    -1,    -1,    16,    17,    18,   242,
      20,   242,    -1,    16,    17,    18,    -1,    20,   251,   252,
     251,    31,    -1,    -1,    -1,   258,    29,   258,    31,    -1,
      16,    17,    18,   266,    20,   266,   121,    -1,   121,    -1,
      -1,    -1,   275,   276,   275,    31,    -1,    -1,    -1,   282,
      -1,   282,   285,    -1,   285,    -1,    -1,    -1,   291,   292,
     291,   292,    -1,    -1,   297,    -1,   297,    -1,   153,    -1,
     153,   304,    -1,   304,    -1,    16,    17,    18,    -1,    20,
      -1,   166,    -1,   166,    -1,   318,    -1,   318,    29,    -1,
      31,    16,    17,    18,   327,    20,   327,    -1,     3,     4,
       5,     6,   187,    -1,   187,    -1,    31,    -1,   341,    -1,
     341,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,   206,    27,   206,    -1,    30,    31,    -1,    16,    17,
      18,    -1,    20,   366,    -1,   366,    -1,    -1,    -1,    -1,
     373,    29,   373,    31,    -1,    -1,   231,    -1,   231,   234,
      -1,   234,    -1,    -1,    -1,    -1,    -1,   242,     1,   242,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,   258,    17,   258,    19,    -1,    -1,    22,
      23,   266,    -1,   266,    27,    28,    -1,    30,    -1,    32,
      33,    16,    17,    18,    -1,    20,    -1,   282,    -1,   282,
     285,    -1,   285,    28,    -1,    -1,   291,   292,   291,   292,
      -1,    -1,   297,    -1,   297,    -1,    16,    17,    18,   304,
      20,   304,    16,    17,    18,    -1,    20,     3,     4,     5,
       6,    31,    -1,   318,    -1,   318,    -1,    31,    -1,    -1,
      -1,    17,   327,    19,   327,    -1,    22,    23,    -1,    -1,
      -1,    27,    -1,    -1,    30,    31,   341,    -1,   341,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,   366,    31,   366,    27,    -1,    -1,    30,   373,     1,
     373,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
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
       6,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    29,    -1,
      31,    27,    -1,    -1,    30,    31,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    29,    -1,    31,
      27,    -1,    -1,    30,    31,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    29,    -1,    31,    27,
      -1,    -1,    30,    31,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    29,    -1,    31,    27,    -1,
      -1,    30,    31,     3,     4,     5,     6,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    17,    -1,    19,
      28,    -1,    22,    23,    16,    17,    18,    27,    20,    21,
      30,    -1,    24,    25,    16,    17,    18,    29,    20,    31,
      16,    17,    18,    -1,    20,    21,    28,    -1,    24,    25,
      16,    17,    18,    29,    20,    31,    16,    17,    18,    -1,
      20,    21,    28,    -1,    24,    25,    16,    17,    18,    29,
      20,    31,    16,    17,    18,    -1,    20,    21,    28,    -1,
      24,    25,    16,    17,    18,    29,    20,    31,    16,    17,
      18,    -1,    20,    21,    28,    -1,    24,    25,    16,    17,
      18,    29,    20,    31,    16,    17,    18,    -1,    20,    21,
      28,    -1,    24,    25,    16,    17,    18,    29,    20,    31,
      16,    17,    18,    -1,    20,    21,    28,    -1,    24,    25,
      16,    17,    18,    29,    20,    31,    16,    17,    18,    -1,
      20,    21,    28,    -1,    24,    25,    -1,    -1,    16,    17,
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
      -1,    -1,    24,    25,    16,    17,    18,    -1,    20,    31,
      16,    17,    18,    -1,    20,    -1,    -1,    29,    -1,    31,
      16,    17,    18,    29,    20,    31,    16,    17,    18,    -1,
      20,    -1,    16,    17,    18,    31,    20,    -1,    16,    17,
      18,    31,    20,    -1,    16,    17,    18,    31,    20,    21,
      28,    -1,    24,    25,    -1,    -1,    28,    16,    17,    18,
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
      25,    -1,    -1,    28,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    16,    17,    18,
      -1,    20,    16,    17,    18,    -1,    20,    -1,    -1,    28,
      -1,    16,    17,    18,    28,    20,    16,    17,    18,    -1,
      20,    -1,    -1,    28,    -1,    16,    17,    18,    28,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28
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
      59,    60,    61,    62,    63,    64,    65,    66,    69,    49,
       1,     9,    30,    30,    30,     1,    28,    47,     3,    30,
      30,    30,     3,    64,    60,    64,    64,    64,    56,    28,
       1,    33,    44,    20,    18,    17,    16,    21,    24,    25,
      56,    31,    56,    67,    68,    56,     1,     3,    48,    28,
      56,    56,     3,    31,    60,    62,    63,    64,    64,    64,
      64,    29,    31,    31,    28,    28,    31,    31,    31,    68,
      44,    56,    56,    28,    28,    28,     8,    28,    28,    44,
      48,    48,    31,    31,    44,    44,    32,     3,     4,     5,
       6,    17,    27,    30,    65,    66,    69,     3,     4,     5,
       6,    17,    19,    22,    23,    27,    30,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    69,     3,     4,
       5,     6,    17,    19,    22,    23,    27,    30,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    69,    28,
       3,     4,     5,     6,    17,    27,    30,    65,    66,    69,
       7,    10,    11,    12,    13,    14,    15,    28,    32,    38,
      45,    46,    47,    49,    51,    52,    53,    54,    55,     3,
      50,    30,    64,    56,    30,    64,     3,     4,     5,     6,
      17,    27,    30,    60,    64,    65,    66,    69,    64,    64,
      56,    20,    18,    17,    16,    21,    24,    25,    30,    64,
       3,     4,     5,     6,    17,    27,    30,    60,    64,    65,
      66,    69,    64,    64,    56,    20,    18,    17,    16,    21,
      24,    25,    30,    64,    56,    30,    30,     1,    28,    47,
       3,    30,    30,    30,    50,    28,     1,     9,    33,    31,
      67,    31,    31,    67,    30,    64,    56,    31,    60,    62,
      63,    64,     3,     4,     5,     6,    17,    27,    30,    64,
      65,    66,    69,    64,    64,    31,    67,    30,    64,    56,
      31,    60,    62,    63,    64,     3,     4,     5,     6,    17,
      27,    30,    64,    65,    66,    69,    64,    64,    31,    67,
      31,    56,     1,    48,    28,    28,    56,    56,     3,    33,
      56,    31,    31,    31,    67,    31,    30,    64,    56,    31,
      31,    67,    31,    30,    64,    56,    31,    31,    28,    28,
      31,    31,    31,    31,    31,    67,    31,    31,    31,    67,
      31,    44,    56,    56,    28,    28,    28,    31,    31,     8,
      28,    28,    44,    48,    48,    31,    31,    44,    44
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
      66,    66,    67,    67,    68,    69,    69,    69,    69
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
       4,     3,     3,     1,     1,     1,     1,     1,     1
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
#line 2377 "src/bison/bison.tab.c"
    break;

  case 3: /* decl_list: decl_list decl  */
#line 104 "src/bison/bison.y"
                       {
		(yyval.node) = createNode("decl_list");
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2387 "src/bison/bison.tab.c"
    break;

  case 4: /* decl_list: decl  */
#line 109 "src/bison/bison.y"
               {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2395 "src/bison/bison.tab.c"
    break;

  case 5: /* decl: var_decl  */
#line 115 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2403 "src/bison/bison.tab.c"
    break;

  case 6: /* decl: fun_decl  */
#line 118 "src/bison/bison.y"
                   {
		(yyval.node) =  (yyvsp[0].node);
	}
#line 2411 "src/bison/bison.tab.c"
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
#line 2428 "src/bison/bison.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 140 "src/bison/bison.y"
                               {

		checkRedeclaration((yyvsp[-3].token).lexeme, (yyvsp[-3].token).scope, &errosSemanticos, (yyvsp[-3].token).line, (yyvsp[-3].token).column);		
		Symbol* createdSymbol = insertSymbol((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-4].token).lexeme, "fun",(yyvsp[-3].token).scope);
		
		int numberOfParams = 0;
		storeParamsTypes(createdSymbol, (yyvsp[-1].node), &numberOfParams);
		createdSymbol->numberOfParams = numberOfParams;

	}
#line 2443 "src/bison/bison.tab.c"
    break;

  case 9: /* fun_decl: TYPE ID '(' params ')' $@1 block_stmt  */
#line 149 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("fun_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-6].token).lexeme, (yyvsp[-6].token).line, (yyvsp[-6].token).column);

		(yyval.node)->leaf2 = createNode("ID");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-5].token).lexeme, (yyvsp[-5].token).line, (yyvsp[-5].token).column);
		
		(yyval.node)->leaf3 = (yyvsp[-3].node);
		(yyval.node)->leaf4 = (yyvsp[0].node);

		checkTypeOfReturn((yyvsp[0].node), (yyvsp[-6].token).lexeme, &errosSemanticos);
	
		// printf("\n\n\n\n");
	}
#line 2464 "src/bison/bison.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 165 "src/bison/bison.y"
                         {

		checkRedeclaration((yyvsp[-2].token).lexeme, (yyvsp[-2].token).scope, &errosSemanticos, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
		Symbol* createdSymbol = insertSymbol((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-3].token).lexeme, "fun", (yyvsp[-2].token).scope);
		int numberOfParams = 0;
		createdSymbol->numberOfParams = numberOfParams;

	}
#line 2477 "src/bison/bison.tab.c"
    break;

  case 11: /* fun_decl: TYPE ID '(' ')' $@2 block_stmt  */
#line 172 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("fun_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-5].token).lexeme, (yyvsp[-5].token).line, (yyvsp[-5].token).column);

		(yyval.node)->leaf2 = createNode("ID");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2493 "src/bison/bison.tab.c"
    break;

  case 12: /* fun_decl: error  */
#line 183 "src/bison/bison.y"
                {
		yyerrok;
	}
#line 2501 "src/bison/bison.tab.c"
    break;

  case 13: /* params: params ',' param_decl  */
#line 189 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("\0");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2511 "src/bison/bison.tab.c"
    break;

  case 14: /* params: param_decl  */
#line 194 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2519 "src/bison/bison.tab.c"
    break;

  case 15: /* params: error  */
#line 197 "src/bison/bison.y"
               {
		yyerrok;
	}
#line 2527 "src/bison/bison.tab.c"
    break;

  case 16: /* param_decl: TYPE ID  */
#line 203 "src/bison/bison.y"
                {
		
		(yyval.node) = createNode("param_decl");
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		(yyval.node)->leaf2 = createNode("ID");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);

		// checkRedeclaration($2.lexeme, $2.scope, &errosSemanticos, $2.line, $2.column);
		insertSymbol((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[-1].token).lexeme, "param", (scopeId + 1));
	}
#line 2544 "src/bison/bison.tab.c"
    break;

  case 17: /* statement: exp_stmt  */
#line 218 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2552 "src/bison/bison.tab.c"
    break;

  case 18: /* statement: block_stmt  */
#line 221 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2560 "src/bison/bison.tab.c"
    break;

  case 19: /* statement: if_stmt  */
#line 224 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2568 "src/bison/bison.tab.c"
    break;

  case 20: /* statement: return_stmt  */
#line 227 "src/bison/bison.y"
                      {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2576 "src/bison/bison.tab.c"
    break;

  case 21: /* statement: write_stmt  */
#line 230 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2584 "src/bison/bison.tab.c"
    break;

  case 22: /* statement: writeln_stmt  */
#line 233 "src/bison/bison.y"
                       {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2592 "src/bison/bison.tab.c"
    break;

  case 23: /* statement: read_stmt  */
#line 236 "src/bison/bison.y"
                    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2600 "src/bison/bison.tab.c"
    break;

  case 24: /* statement: var_decl  */
#line 239 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2608 "src/bison/bison.tab.c"
    break;

  case 25: /* statement: for_stmt  */
#line 242 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2616 "src/bison/bison.tab.c"
    break;

  case 26: /* for_stmt: FOR '(' assign_exp ';' simple_exp ';' assign_exp ')' statement  */
#line 248 "src/bison/bison.y"
                                                                       {
		(yyval.node) = createNode("for_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-8].token).lexeme, (yyvsp[-8].token).line, (yyvsp[-8].token).column);
		(yyval.node)->leaf2 = (yyvsp[-6].node);
		(yyval.node)->leaf3 = (yyvsp[-4].node);
		(yyval.node)->leaf4 = (yyvsp[-2].node);
		(yyval.node)->leaf5 = (yyvsp[0].node);
	}
#line 2631 "src/bison/bison.tab.c"
    break;

  case 27: /* for_stmt: FOR '(' error ';' simple_exp ';' assign_exp ')' statement  */
#line 258 "src/bison/bison.y"
                                                                          {

	}
#line 2639 "src/bison/bison.tab.c"
    break;

  case 28: /* exp_stmt: exp ';'  */
#line 265 "src/bison/bison.y"
                {
		(yyval.node) = (yyvsp[-1].node);
		(yyval.node)->type = (yyvsp[-1].node)->type;
	}
#line 2648 "src/bison/bison.tab.c"
    break;

  case 29: /* exp_stmt: ';'  */
#line 269 "src/bison/bison.y"
              {
		(yyval.node) = createNode("\0");
	}
#line 2656 "src/bison/bison.tab.c"
    break;

  case 30: /* exp: assign_exp  */
#line 275 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 2665 "src/bison/bison.tab.c"
    break;

  case 31: /* exp: simple_exp  */
#line 279 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 2674 "src/bison/bison.tab.c"
    break;

  case 32: /* assign_exp: ID ASSIGN simple_exp  */
#line 286 "src/bison/bison.y"
                             {
		(yyval.node) = createNode("assign_exp");
		(yyval.node)->token = allocateToken("=", (yyvsp[-1].token).line, (yyvsp[-1].token).column);


		int typeOfLeftSide = searchTypeInSymbolTable((yyvsp[-2].token).lexeme, scopeStack);
		int typeOfRightSide = (yyvsp[0].node)->type;


		(yyval.node)->type = getAssignType(typeOfLeftSide, typeOfRightSide,  &errosSemanticos, (yyval.node)->token->line, (yyval.node)->token->column);

		(yyval.node)->leaf1 = createNode("ID");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
		(yyval.node)->leaf1->type = typeOfLeftSide;

		(yyval.node)->leaf2 = (yyvsp[0].node);

		if(typeOfRightSide == 6){
			(yyvsp[0].node)->type = typeOfLeftSide;
		}

		verifyDefinedId((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos);
	}
#line 2702 "src/bison/bison.tab.c"
    break;

  case 33: /* assign_exp: ID error  */
#line 309 "src/bison/bison.y"
                   {
		yyerrok;
	}
#line 2710 "src/bison/bison.tab.c"
    break;

  case 34: /* block_stmt: '{' stmt_list '}'  */
#line 315 "src/bison/bison.y"
                          {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2718 "src/bison/bison.tab.c"
    break;

  case 35: /* stmt_list: stmt_list statement  */
#line 321 "src/bison/bison.y"
                        {
        (yyval.node) = createNode("stmt_list");
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
    }
#line 2728 "src/bison/bison.tab.c"
    break;

  case 36: /* stmt_list: stmt_list error  */
#line 326 "src/bison/bison.y"
                      {
        // printf("DEU PAU\n");
    }
#line 2736 "src/bison/bison.tab.c"
    break;

  case 37: /* stmt_list: statement  */
#line 329 "src/bison/bison.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2744 "src/bison/bison.tab.c"
    break;

  case 38: /* if_stmt: IF '(' simple_exp ')' statement  */
#line 335 "src/bison/bison.y"
                                                   {
		(yyval.node) = createNode("if_stmt");

		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2757 "src/bison/bison.tab.c"
    break;

  case 39: /* if_stmt: IF '(' simple_exp ')' statement ELSE statement  */
#line 343 "src/bison/bison.y"
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
#line 2775 "src/bison/bison.tab.c"
    break;

  case 40: /* return_stmt: RETURN ';'  */
#line 359 "src/bison/bison.y"
                   {
		(yyval.node) = createNode("return_stmt");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
	}
#line 2784 "src/bison/bison.tab.c"
    break;

  case 41: /* return_stmt: RETURN exp ';'  */
#line 363 "src/bison/bison.y"
                         {
		(yyval.node) = createNode("return_stmt");
		(yyval.node)->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
		(yyval.node)->type = (yyvsp[-1].node)->type;
		(yyval.node)->leaf1 = (yyvsp[-1].node);

	}
#line 2796 "src/bison/bison.tab.c"
    break;

  case 42: /* return_stmt: RETURN error  */
#line 370 "src/bison/bison.y"
                       {

	}
#line 2804 "src/bison/bison.tab.c"
    break;

  case 43: /* write_stmt: WRITE '(' simple_exp ')' ';'  */
#line 376 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("write_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
	}
#line 2816 "src/bison/bison.tab.c"
    break;

  case 44: /* writeln_stmt: WRITELN '(' simple_exp ')' ';'  */
#line 386 "src/bison/bison.y"
                                       {
		(yyval.node) = createNode("writeln_stmt");
		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
	}
#line 2827 "src/bison/bison.tab.c"
    break;

  case 45: /* read_stmt: READ '(' ID ')' ';'  */
#line 395 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("read_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);

		(yyval.node)->leaf2  = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		verifyDefinedId((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos);
	}
#line 2843 "src/bison/bison.tab.c"
    break;

  case 46: /* simple_exp: bin_exp  */
#line 409 "src/bison/bison.y"
                {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 2852 "src/bison/bison.tab.c"
    break;

  case 47: /* simple_exp: bin_list_exp  */
#line 413 "src/bison/bison.y"
                       {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 2861 "src/bison/bison.tab.c"
    break;

  case 48: /* unary_list_exp: '?' factor  */
#line 420 "src/bison/bison.y"
                   {
		(yyval.node) = createNode("unary_list_exp"); 

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);

		int tipo = checkTypeListExp((yyvsp[0].node), scopeStack);
		verifyIfIsList(tipo, "?", (yyvsp[-1].token).line, (yyvsp[-1].token).column, 0);
		(yyval.node)->type = tipo;
	}
#line 2877 "src/bison/bison.tab.c"
    break;

  case 49: /* unary_list_exp: '%' factor  */
#line 431 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("unary_list_exp"); 
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);

		int tipo = checkTypeListExp((yyvsp[0].node), scopeStack);
		verifyIfIsList(tipo, "%", (yyvsp[-1].token).line, (yyvsp[-1].token).column, 0);
		(yyval.node)->type = tipo;
	}
#line 2892 "src/bison/bison.tab.c"
    break;

  case 50: /* bin_list_exp: factor ':' factor  */
#line 444 "src/bison/bison.y"
                          {
		(yyval.node) = createNode("bin_list_exp");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		(yyval.node)->leaf1 = (yyvsp[-2].node);		
		(yyval.node)->leaf3 = (yyvsp[0].node);

		int tipo = checkTypeListExp((yyvsp[0].node), scopeStack);
		int isList = verifyIfIsList(tipo, (yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column, 1);

		if(isList == 1){
			(yyval.node)->type = tipo;
		}else{
			(yyval.node)->type = -1;
		}

	}
#line 2914 "src/bison/bison.tab.c"
    break;

  case 51: /* bin_list_exp: factor MAP factor  */
#line 461 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("bin_list_exp");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		(yyval.node)->leaf1 = (yyvsp[-2].node);		
		(yyval.node)->leaf3 = (yyvsp[0].node);

		checkIfIsFunctionUnary((yyvsp[-2].node), (yyvsp[-1].token).line, (yyvsp[-1].token).column, scopeStack, &errosSemanticos);

		int tipo = checkTypeListExp((yyvsp[0].node), scopeStack);
		verifyIfIsList(tipo, (yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column, 1);
		int tipoConversion  = resolveConversionOfList((yyvsp[-2].node), (yyvsp[0].node)); //para casos quando a funcao unitaria retorna um tipo diferente dos elementos dentro da lista
		
		(yyval.node)->type = tipoConversion;
	}
#line 2934 "src/bison/bison.tab.c"
    break;

  case 52: /* bin_list_exp: factor FILTER factor  */
#line 476 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("bin_list_exp");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		(yyval.node)->leaf1 = (yyvsp[-2].node);		
		(yyval.node)->leaf3 = (yyvsp[0].node);

		checkIfIsFunctionUnary((yyvsp[-2].node), (yyvsp[-1].token).line, (yyvsp[-1].token).column, scopeStack, &errosSemanticos);

		int tipo = checkTypeListExp((yyvsp[0].node), scopeStack);
		verifyIfIsList(tipo, (yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column, 1);
		// int tipoConversion  = resolveConversionOfList($1, $3); //para casos quando a funcao unitaria retorna um tipo diferente dos elementos dentro da lista
		
		(yyval.node)->type = tipo;
	}
#line 2954 "src/bison/bison.tab.c"
    break;

  case 53: /* bin_exp: bin_exp LOG_OP unary_log_exp  */
#line 494 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		getExpressionType((yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].token), &errosSemanticos);
		(yyval.node)->type = 0;
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2967 "src/bison/bison.tab.c"
    break;

  case 54: /* bin_exp: unary_log_exp  */
#line 502 "src/bison/bison.y"
                        {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 2976 "src/bison/bison.tab.c"
    break;

  case 55: /* unary_log_exp: EXCLAMATION unary_log_exp  */
#line 509 "src/bison/bison.y"
                                  {
		(yyval.node) = createNode("unary_log_exp");
	
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);

		if((yyvsp[0].node)->type == 2 || (yyvsp[0].node)->type == 3 || (yyvsp[0].node)->type == 6){
			(yyval.node)->type = (yyvsp[0].node)->type;
		}else{
			(yyval.node)->type = 0;
		}

	}
#line 2995 "src/bison/bison.tab.c"
    break;

  case 56: /* unary_log_exp: rel_exp  */
#line 523 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3004 "src/bison/bison.tab.c"
    break;

  case 57: /* rel_exp: rel_exp REL_OP sum_exp  */
#line 530 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		getExpressionType((yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].token), &errosSemanticos);
		(yyval.node)->type = 0;
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 3017 "src/bison/bison.tab.c"
    break;

  case 58: /* rel_exp: sum_exp  */
#line 538 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3026 "src/bison/bison.tab.c"
    break;

  case 59: /* sum_exp: sum_exp SUM_OP mul_exp  */
#line 545 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->type = getExpressionType((yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].token), &errosSemanticos);
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 3038 "src/bison/bison.tab.c"
    break;

  case 60: /* sum_exp: mul_exp  */
#line 552 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3047 "src/bison/bison.tab.c"
    break;

  case 61: /* mul_exp: mul_exp MUL_OP factor  */
#line 559 "src/bison/bison.y"
                              {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->type = getExpressionType((yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].token), &errosSemanticos);
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 3059 "src/bison/bison.tab.c"
    break;

  case 62: /* mul_exp: factor  */
#line 566 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3068 "src/bison/bison.tab.c"
    break;

  case 63: /* mul_exp: unary_list_exp  */
#line 570 "src/bison/bison.y"
                         {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3077 "src/bison/bison.tab.c"
    break;

  case 64: /* factor: immutable  */
#line 577 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3086 "src/bison/bison.tab.c"
    break;

  case 65: /* factor: ID  */
#line 581 "src/bison/bison.y"
             {
		(yyval.node) = createNode("ID");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
		(yyval.node)->type = searchTypeInSymbolTable((yyvsp[0].token).lexeme, scopeStack);
		verifyDefinedId((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column ,scopeStack , &errosSemanticos);
	}
#line 3097 "src/bison/bison.tab.c"
    break;

  case 66: /* factor: SUM_OP factor  */
#line 587 "src/bison/bison.y"
                        {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf1 = (yyvsp[0].node);
	}
#line 3107 "src/bison/bison.tab.c"
    break;

  case 67: /* immutable: '(' simple_exp ')'  */
#line 595 "src/bison/bison.y"
                           {
		(yyval.node) = (yyvsp[-1].node);
		(yyval.node)->type = (yyvsp[-1].node)->type;
	}
#line 3116 "src/bison/bison.tab.c"
    break;

  case 68: /* immutable: call  */
#line 599 "src/bison/bison.y"
               {
		(yyval.node) =  (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3125 "src/bison/bison.tab.c"
    break;

  case 69: /* immutable: constant  */
#line 603 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3134 "src/bison/bison.tab.c"
    break;

  case 70: /* call: ID '(' args ')'  */
#line 610 "src/bison/bison.y"
                        {
		(yyval.node) = createNode("call");
		(yyval.node)->leaf1 = createNode("ID");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column);
		(yyval.node)->leaf2 = (yyvsp[-1].node);
		
		verifyDefinedId((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, scopeStack, &errosSemanticos);
		verifyCall((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, scopeStack, &errosSemanticos, numberOfArguments, (yyvsp[-1].node));
		(yyval.node)->type = searchTypeInSymbolTable((yyvsp[-3].token).lexeme, scopeStack);
		numberOfArguments = 0;

	}
#line 3151 "src/bison/bison.tab.c"
    break;

  case 71: /* call: ID '(' ')'  */
#line 622 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("call");

		(yyval.node)->leaf1 = createNode("ID");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		verifyDefinedId((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos);
		verifyCall((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos, numberOfArguments, NULL);
		(yyval.node)->type = searchTypeInSymbolTable((yyvsp[-2].token).lexeme, scopeStack);
		numberOfArguments = 0;
	}
#line 3167 "src/bison/bison.tab.c"
    break;

  case 72: /* args: args ',' arg  */
#line 636 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("args");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
		numberOfArguments = numberOfArguments + 1;
	}
#line 3178 "src/bison/bison.tab.c"
    break;

  case 73: /* args: arg  */
#line 642 "src/bison/bison.y"
              {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
		numberOfArguments = numberOfArguments + 1;
	}
#line 3188 "src/bison/bison.tab.c"
    break;

  case 74: /* arg: simple_exp  */
#line 650 "src/bison/bison.y"
                   {
		(yyval.node) = createNode("arg");
		(yyval.node)->leaf1 = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3198 "src/bison/bison.tab.c"
    break;

  case 75: /* constant: NIL  */
#line 659 "src/bison/bison.y"
            {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
		(yyval.node)->type = 6;
	}
#line 3208 "src/bison/bison.tab.c"
    break;

  case 76: /* constant: INT  */
#line 664 "src/bison/bison.y"
              {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
		(yyval.node)->type = 0;
	}
#line 3218 "src/bison/bison.tab.c"
    break;

  case 77: /* constant: FLOAT  */
#line 669 "src/bison/bison.y"
                {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
		(yyval.node)->type = 1;
	}
#line 3228 "src/bison/bison.tab.c"
    break;

  case 78: /* constant: STRING  */
#line 674 "src/bison/bison.y"
                 {		
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
		(yyval.node)->type = 7;
	}
#line 3238 "src/bison/bison.tab.c"
    break;


#line 3242 "src/bison/bison.tab.c"

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

#line 681 "src/bison/bison.y"


// type error: 0 -> operacao unaria de listas 1- > operacao binaria de listas
int verifyIfIsList(int tipo, char *operator, int line, int column, int typeError){

	char *tipoString = convertIntToType(tipo);
	int isList = 1;

	if(tipo != 2 && tipo != 3){
		errosSemanticos = errosSemanticos + 1;
		
		if(typeError == 0){
			printf(BHRED"SEMANTIC ERROR -> Operator \'%s\' cannot be applied to type %s. Line %d Column %d\n"RESET, operator, tipoString, line, column);
			isList = 0;
		}

		if(typeError == 1){
			printf(BHRED"SEMANTIC ERROR -> Second argument of binary infix operator of lists \'%s\' cannot be applied to type %s. Line %d Column %d\n"RESET, operator, tipoString, line, column);
			isList = 0;
		}

	}

	return isList;
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
	printf("\n");
    yyparse();
	findMain(&errosSemanticos);
	if(!errors){
		printf("\n\n--------------------------------------------------------------- TREE ---------------------------------------------------------------- \n\n");
		printTree(tree, 1);
		printSymbolTable(symbolTable);
		freeTree(tree);
	}
	printf(BHRED"\nNUMBER OF SYNTATIC ERROS: %d\n"RESET, errors);
	printf(BHRED"\nNUMBER OF SEMANTIC ERROS: %d\n\n"RESET, errosSemanticos);
	// printSymbolTable(symbolTable);
	freeTable();
    yylex_destroy();
    return 0;
}
