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
extern int yyerror(const char* s);
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
  YYSYMBOL_var_or_statement = 51,          /* var_or_statement  */
  YYSYMBOL_if_stmt = 52,                   /* if_stmt  */
  YYSYMBOL_return_stmt = 53,               /* return_stmt  */
  YYSYMBOL_write_stmt = 54,                /* write_stmt  */
  YYSYMBOL_writeln_stmt = 55,              /* writeln_stmt  */
  YYSYMBOL_read_stmt = 56,                 /* read_stmt  */
  YYSYMBOL_simple_exp = 57,                /* simple_exp  */
  YYSYMBOL_unary_list_exp = 58,            /* unary_list_exp  */
  YYSYMBOL_bin_list_exp = 59,              /* bin_list_exp  */
  YYSYMBOL_bin_exp = 60,                   /* bin_exp  */
  YYSYMBOL_unary_log_exp = 61,             /* unary_log_exp  */
  YYSYMBOL_rel_exp = 62,                   /* rel_exp  */
  YYSYMBOL_sum_exp = 63,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 64,                   /* mul_exp  */
  YYSYMBOL_factor = 65,                    /* factor  */
  YYSYMBOL_immutable = 66,                 /* immutable  */
  YYSYMBOL_call = 67,                      /* call  */
  YYSYMBOL_args = 68,                      /* args  */
  YYSYMBOL_arg = 69,                       /* arg  */
  YYSYMBOL_constant = 70                   /* constant  */
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
#define YYLAST   4070

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
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
       0,    99,    99,   105,   110,   116,   119,   126,   141,   141,
     166,   166,   184,   191,   196,   199,   206,   221,   224,   227,
     230,   233,   236,   239,   242,   248,   258,   266,   270,   276,
     280,   287,   310,   317,   323,   328,   332,   335,   342,   346,
     353,   361,   377,   381,   388,   395,   402,   409,   418,   432,
     436,   443,   454,   467,   484,   499,   517,   525,   532,   546,
     553,   561,   568,   575,   582,   589,   593,   600,   604,   610,
     618,   622,   626,   633,   645,   659,   665,   673,   682,   687,
     692,   697
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
  "stmt_list", "var_or_statement", "if_stmt", "return_stmt", "write_stmt",
  "writeln_stmt", "read_stmt", "simple_exp", "unary_list_exp",
  "bin_list_exp", "bin_exp", "unary_log_exp", "rel_exp", "sum_exp",
  "mul_exp", "factor", "immutable", "call", "args", "arg", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-202)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-82)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      80,    23,    22,    54,   136,   144,   254,   565,    91,  -202,
     678,   709,    10,   320,    64,   -17,   396,   397,   481,   -14,
      65,    61,  3499,   748,   488,   -14,  2476,   382,  3899,  3912,
    3925,   104,   111,    68,   156,    15,   134,   151,    96,   503,
     105,   105,  3938,  2509,  1691,  2542,  2575,  2608,  2641,   149,
     160,  2674,  2707,  2740,  2773,  2806,  2839,  2872,  2905,   166,
    1203,   182,    -7,    56,   450,   351,  1275,  3951,  3964,  3977,
    3990,   815,   202,  1767,   653,  1691,   410,  2938,  2971,   205,
     224,  3004,  1691,  1691,   206,  3884,  4003,    69,  1422,  1683,
    1763,   228,  3037,  3070,   928,  3103,   503,   413,   413,   105,
     197,   197,   197,   251,  4016,   562,   584,   592,   244,   266,
     181,   279,  3136,   277,   280,   301,  4029,   376,   377,  1819,
    1851,   305,   308,   328,  1823,  4042,  1229,  1767,  1767,   337,
     344,   350,   605,   452,   353,   354,  3169,  3202,  3235,  3529,
     389,   389,  3268,   383,   391,  3529,  3529,  3301,  3334,  3499,
     282,  3586,  3602,  3618,   105,  3634,  1691,  3650,  3666,  3682,
     471,    12,   122,   558,   494,  1855,   582,   582,   757,  1691,
     326,   398,   147,   155,   137,   195,   421,   808,  1007,  1367,
    3752,   687,   937,  3576,  3592,   832,  3559,  1092,  1092,  3608,
    1691,    39,   615,    83,   208,   285,   741,   175,  3624,  3640,
    3656,  3672,  3367,   414,   357,   405,   406,   197,   426,  1691,
     433,   444,   448,   447,   456,   157,    18,   460,   463,   540,
    3499,   724,   790,   466,   974,  1040,  1909,  1948,  1981,  2014,
     400,  3400,   903,  3698,   473,  1133,  3764,   218,   580,   602,
     830,   582,   852,  1691,   177,  1196,  1530,  1587,  1656,  1794,
    3832,   492,  1855,  1640,  1640,   582,  1140,  1140,  1140,  1178,
    3688,   346,   247,   511,   632,  1092,   882,  1691,   298,  1058,
    1246,  1322,  1427,  1443,  1484,   501,  3559,  3568,  3568,  1092,
    1169,  1169,  1169,  1279,   510,   518,  1691,   480,  2047,  2080,
     532,  2113,  1691,  1691,   561,  3433,  2146,   530,  1691,  3466,
    3714,   622,  3730,  3776,   631,  1342,  3842,   538,  3788,   241,
     253,  3848,  3854,    75,   549,   563,   564,  1140,   579,  1691,
     586,   593,   606,   614,   624,   633,  3704,   636,  1461,  1635,
     662,  3720,   321,   991,  1801,  1877,    21,   640,   656,   657,
    1169,   663,  1691,   695,   711,   738,   761,   812,   834,   543,
     842,   674,   675,   685,   686,  2179,   688,   689,   702,  2212,
     713,  3746,  3800,  3860,   855,  3866,  1548,   714,   719,  3736,
    3810,   865,  3816,  1734,   872,   731,   743,  1229,  1767,  1767,
     751,   752,   755,  3872,   745,   881,   768,  3826,   886,   890,
     906,  2245,   782,   783,  2278,  2311,  2344,   788,   907,  1229,
     389,   389,  2377,   799,   813,  1229,  1229,  2410,  2443
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
    -202,  -202,  -202,   810,    49,  -202,  -202,  -202,  -202,   801,
    -119,  -117,  -109,   -32,   -62,   -19,  -137,   -42,   -86,   -84,
     -82,   -51,   -46,    42,  1244,  1515,  1606,  1038,  1450,  1349,
    1143,   -36,   349,   599,  -201,   721,   849
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    45,     7,    25,    19,    16,    17,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,   106,   107,    70
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    79,    86,    88,    89,    90,    71,   133,   177,   221,
      95,    13,   231,    96,   111,   -10,    81,   222,    22,   291,
     142,   -49,    14,   -12,   -12,     8,   147,   148,   -79,   -79,
     -79,   301,   -79,   -79,   304,   -12,   -79,   -79,   198,   177,
     225,    15,   226,   -79,   227,    82,   177,   177,   292,     6,
     -68,   373,   -68,     6,     9,   -66,   -66,   -66,   327,   -66,
      88,    88,    88,   120,   121,   122,   123,    18,   -66,    77,
     -66,    27,    28,    29,    30,   228,   -57,    14,   143,   144,
     229,     1,   350,   295,   -57,    38,    91,    39,   198,   -58,
      40,    41,     2,    -8,   223,    42,    78,   -58,    44,    85,
      28,    29,    30,   276,   364,   366,   -68,   224,   150,   151,
     152,   153,   -49,    38,   -49,   103,   105,   108,   233,    11,
     177,    12,   154,    42,   113,   114,    44,   371,   236,   245,
     249,   250,   155,   177,    75,   156,    -2,     1,   -80,   -80,
     -80,    76,   -80,   -80,    -4,    -4,   -80,   -80,     2,   260,
     269,   273,   274,   -80,   177,   253,    -4,   -59,   288,    80,
      27,    28,    29,    30,    83,   385,   105,   252,   -59,   134,
     135,   284,   389,   177,    38,   -57,    39,    92,   -49,    40,
      41,    84,    72,   290,    42,   289,   -57,    44,   -29,    95,
      73,   279,   -63,   -63,   -30,   -63,   198,   -58,   234,   198,
     203,   204,   205,   206,   -63,   306,   -63,   177,   -58,   115,
     -50,   251,   254,   -61,   207,   -61,   245,   245,   245,   312,
     320,   324,   325,   198,   208,   354,   -61,   209,   -57,   329,
     -32,   177,   275,   112,   -68,   -68,   -68,   -57,   -68,   -57,
     269,   269,   269,   335,   343,   347,   348,   198,   305,   -68,
     177,   285,   202,    95,    -5,    -5,   177,   177,   391,   116,
     221,   -56,   177,   -79,   -79,   -79,    -5,   -79,   222,   198,
     254,   -60,   -56,   -60,   105,   126,   -79,   105,   -79,   -31,
     402,   367,   221,   177,   -60,   307,   407,   408,   221,   221,
     222,   225,   198,   226,   127,   227,   222,   222,   -68,   -68,
     -68,   105,   -68,   277,   374,   -59,   177,   128,   129,   330,
     -68,   130,   232,   225,   -59,   226,   -59,   227,   -58,   225,
     225,   226,   226,   227,   227,   105,   228,   -58,   352,   -58,
     198,   229,   131,   -53,   356,   357,   -54,   198,   403,   404,
     360,   -56,   -66,   -66,   -66,   223,   -66,   105,   228,   -15,
     -56,   -15,   -56,   229,   228,   228,   -55,   -66,   224,   229,
     229,   368,   -68,   -68,   -68,   136,   -68,   223,    98,   -61,
     105,   -61,   137,   223,   223,   -68,   328,   -68,   138,   -61,
     224,   140,   141,    72,   375,   -79,   224,   224,   157,   157,
     157,    73,   230,   178,    98,   -60,   -56,   -60,   -68,   -68,
     -68,   297,   -68,   -68,   -56,   -60,   -68,   -68,   105,   298,
     -68,   109,    74,   110,   145,   105,   150,   151,   152,   153,
     392,   393,   146,   199,   178,    20,   -14,    21,   -14,   -50,
     154,   178,   178,   -80,   -78,    40,    41,   255,   -63,   -63,
     155,   -63,   -68,   156,   283,   157,   157,   157,   157,   210,
     210,   210,   -63,   -40,   -81,   -40,   -40,   -40,   -40,   -40,
     139,   -67,   -40,   -40,   -40,   -40,   -40,   -40,    97,   -40,
     -59,   -40,   -71,   199,   -40,   -40,   -72,   286,   -59,   -40,
     -40,   353,   -40,   110,   -40,   -40,   287,   -68,   -68,   -68,
     293,   -68,   -68,   294,   296,   -68,   -68,   160,   161,   162,
     163,   235,   -68,   157,   302,   178,   150,   151,   152,   153,
     -16,   164,   -16,   178,   246,   246,   246,   -13,   178,   -13,
     154,   168,    39,   308,   169,    40,    41,   -80,   -80,   -80,
     155,   -80,   331,   156,   199,   270,   270,   270,   -69,   178,
     -80,   -28,   -80,   -28,   -28,   -28,   -28,   -28,   -28,   351,
     -28,   -28,   -28,   -28,   -28,   -28,   210,   -28,   178,   -28,
     355,   -32,   -28,   -28,   358,    -6,    -6,   -28,   -28,   365,
     -28,   -74,   -28,   -28,   -78,   -78,   -78,    -6,   -78,   -78,
     -79,   199,   -78,   -78,   199,   237,   238,   239,   240,   -78,
     246,   -77,   178,   -77,   -80,   -78,   -79,   -79,   -79,   241,
     -79,   246,   246,   246,   246,   321,   321,   321,   199,   242,
     -81,   -79,   243,   124,   270,   125,   178,   -53,   -80,   -80,
     -80,   -76,   -80,   -76,   -67,   270,   270,   270,   270,   344,
     344,   344,   199,   -80,   -75,   178,   -75,   -71,   158,   158,
     158,   178,   178,   179,   -50,   -72,   -50,   178,   -78,   -78,
     -78,   124,   -78,   361,   199,   -54,   181,   182,   183,   184,
     124,   -78,   362,   -78,   -55,   124,   321,   369,   178,   -79,
     185,   -79,   186,   200,   179,   187,   188,   199,    -3,    -3,
     189,   179,   179,   190,   104,   -80,   -78,   -80,   -78,   344,
      -3,   178,   -81,   372,   -81,   158,   158,   158,   158,   211,
     211,   211,   -70,   -68,   -68,   -68,   377,   -68,   -68,    -7,
      -7,   -68,   -68,   378,   379,   199,   -68,   259,   -68,   380,
     381,    -7,   199,   200,   -53,   -24,   -53,   -24,   -24,   -24,
     -24,   -24,   -24,   382,   -24,   -24,   -24,   -24,   -24,   -24,
     -67,   -24,   -67,   -24,   -31,   -69,   -24,   -24,   -11,   -11,
     386,   -24,   -24,   158,   -24,   179,   -24,   -24,   278,   -61,
     -11,   -61,   390,   179,   247,   247,   247,   -71,   179,   -71,
     -61,   -73,   -61,   -81,   -81,   -81,   -74,   -81,   -81,   394,
     395,   -81,   -81,   396,   200,   271,   271,   271,   -81,   179,
     -72,   -17,   -72,   -17,   -17,   -17,   -17,   -17,   -17,   -70,
     -17,   -17,   -17,   -17,   -17,   -17,   211,   -17,   179,   -17,
     400,   401,   -17,   -17,    10,    -9,    -9,   -17,   -17,   -73,
     -17,    24,   -17,   -17,   -65,   -65,   -65,    -9,   -65,   256,
     405,   200,   257,   258,   200,   181,   182,   183,   184,   -65,
     247,   -54,   179,   -54,   406,   132,   -78,   -78,   -78,   185,
     -78,   247,   247,   247,   247,   322,   322,   322,   200,   189,
       0,   -78,   190,   -55,   271,   -55,   179,     0,   -81,   -81,
     -81,   124,   -81,   376,     0,   271,   271,   271,   271,   345,
     345,   345,   200,   -81,   124,   179,   383,     0,   159,   159,
     159,   179,   179,   180,   124,     0,   387,   179,   -81,   -81,
     -81,   -69,   -81,   -69,   200,     0,   181,   182,   183,   184,
     124,   -81,   397,   -81,     0,   -74,   322,   -74,   179,   124,
     185,   398,   186,   201,   180,   187,   188,   200,   -33,   -33,
     189,   180,   180,   190,   300,   -70,   -73,   -70,   -73,   345,
     -33,   179,     0,     0,     0,   159,   159,   159,   159,   212,
     212,   212,     0,   -79,   -79,   -79,     0,   -79,   -79,     0,
       0,   -79,   -79,     0,     0,   200,   -79,     0,   -79,     0,
       0,     0,   200,   201,     0,   -18,     0,   -18,   -18,   -18,
     -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,
       0,   -18,     0,   -18,     0,     0,   -18,   -18,     0,     0,
       0,   -18,   -18,   159,   -18,   180,   -18,   -18,   278,   -60,
       0,   -60,     0,   180,   248,   248,   248,     0,   180,     0,
     -60,     0,   -60,   -67,   -67,   -67,     0,   -67,   -67,     0,
       0,   -67,   -67,     0,   201,   272,   272,   272,   -67,   180,
       0,   -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,     0,
     -19,   -19,   -19,   -19,   -19,   -19,   212,   -19,   180,   -19,
       0,     0,   -19,   -19,     0,     0,     0,   -19,   -19,     0,
     -19,     0,   -19,   -19,   -65,   -65,   -65,    87,   -65,     0,
       0,   201,   173,     0,   201,     0,     0,   -65,     0,   -65,
     248,     0,   180,     0,     0,   261,   262,   263,   264,     0,
       0,   248,   248,   248,   248,   323,   323,   323,   201,   265,
       0,     0,   194,   173,   272,     0,   180,     0,     0,   266,
     173,   173,   267,     0,     0,   272,   272,   272,   272,   346,
     346,   346,   201,     0,   117,   180,   181,   182,   183,   184,
       0,   180,   180,   313,   314,   315,   316,   180,     0,     0,
     185,     0,   186,     0,   201,   187,   188,   317,     0,     0,
     189,     0,   194,   190,   303,     0,   323,   318,   180,     0,
     319,     0,   336,   337,   338,   339,     0,   201,     0,     0,
       0,   181,   182,   183,   184,     0,   340,   176,     0,   346,
       0,   180,     0,     0,   173,   185,   341,   186,     0,   342,
     187,   188,     0,   244,     0,   189,     0,   173,   190,   326,
       0,     0,   -65,   -65,   -65,   201,   -65,   197,   176,   -66,
     -66,   -66,   201,   -66,   268,   176,   176,   -65,   173,     0,
       0,   -66,    27,    28,    29,    30,   213,     0,     0,   214,
     215,   119,   216,   217,   218,     0,    38,   173,    39,     0,
       0,    40,    41,     0,     0,     0,    42,   219,     0,    44,
       0,   220,   -67,   -67,   -67,     0,   -67,   197,     0,     0,
     194,     0,     0,   194,     0,   -67,     0,   -67,     0,     0,
       0,   173,   181,   182,   183,   184,     0,     0,   170,     0,
     309,    99,   -63,   -63,     0,   -63,   185,   194,   186,   176,
       0,   187,   188,   -63,     0,   173,   189,     0,   176,   190,
     349,     0,   176,     0,   332,     0,     0,     0,   191,   170,
       0,   194,     0,     0,   173,     0,   170,   170,     0,   197,
     173,   173,     0,   176,     0,     0,   173,     0,   -71,   -71,
     -71,     0,   -71,   194,     0,   181,   182,   183,   184,     0,
       0,   -71,   176,   -71,     0,     0,     0,   173,     0,   185,
       0,   186,     0,     0,   187,   188,   194,     0,   191,   189,
       0,     0,   190,   363,     0,   197,     0,     0,   197,     0,
     173,     0,     0,   -71,   -71,   -71,   176,   -71,   -71,     0,
       0,   -71,   -71,   175,     0,   176,   176,   311,   -71,     0,
     170,     0,   197,     0,   194,     0,     0,     0,     0,   170,
     176,   194,     0,   170,     0,     0,     0,     0,     0,   197,
     197,   334,     0,   196,   175,     0,   197,     0,     0,   176,
     191,   175,   175,     0,   170,   176,   176,     0,   -65,   -65,
     -65,   176,   -65,   -72,   -72,   -72,   118,   -72,   197,     0,
     -65,     0,     0,   170,     0,     0,   -72,     0,   -72,   -51,
     -51,   -51,   176,   -51,   181,   182,   183,   184,     0,     0,
       0,   197,   -51,   196,   -51,     0,   191,     0,   185,   191,
     186,     0,     0,   187,   188,   176,     0,   170,   189,     0,
       0,   190,   370,     0,   174,     0,   170,   170,   170,     0,
     -52,   -52,   -52,   191,   -52,   175,     0,     0,     0,   197,
       0,   170,     0,   -52,   175,   -52,   197,     0,   175,     0,
     191,   191,   191,     0,   195,   174,     0,   191,     0,     0,
     170,     0,   174,   174,     0,   196,   170,   170,     0,   175,
       0,     0,   170,     0,     0,     0,   -67,   -67,   -67,   191,
     -67,   181,   182,   183,   184,     0,     0,     0,   175,   171,
       0,   -67,     0,   170,     0,   185,     0,   186,     0,     0,
     187,   188,   191,     0,   195,   189,     0,     0,   190,   384,
       0,   196,     0,     0,   196,     0,   170,     0,     0,   192,
     171,     0,   175,     0,     0,     0,     0,   171,   171,     0,
       0,   175,   310,   -71,   -71,   -71,   174,   -71,   196,     0,
     191,     0,     0,     0,     0,   174,   175,   191,   -71,   174,
       0,     0,     0,     0,     0,   196,   333,     0,     0,     0,
       0,     0,   196,     0,     0,   175,   195,     0,     0,   192,
     174,   175,   175,   237,   238,   239,   240,   175,     0,     0,
     172,   -69,   -69,   -69,   196,   -69,     0,   241,     0,   174,
       0,     0,   166,   167,   -69,     0,   -69,   242,   175,     0,
     243,   171,   -72,   -72,   -72,     0,   -72,   196,     0,     0,
     193,   172,   195,     0,   171,   195,     0,   -72,   172,   172,
       0,   175,     0,   174,   160,   161,   162,   163,     0,   -51,
     -51,   -51,   174,   -51,     0,   171,     0,     0,   164,   195,
     165,   -51,     0,   166,   167,   196,     0,   174,   168,     0,
       0,   169,   196,     0,   171,     0,   195,     0,     0,     0,
     193,     0,     0,   195,     0,     0,   174,   181,   182,   183,
     184,     0,   174,   174,     0,     0,     0,   192,   174,     0,
     192,   185,     0,   186,     0,   195,   187,   188,   171,     0,
       0,   189,   172,     0,   190,   388,     0,     0,     0,   174,
      85,    28,    29,    30,   192,   172,     0,     0,   195,   -52,
     -52,   -52,   171,   -52,    38,     0,    39,     0,     0,    40,
      41,   -52,   174,     0,    42,     0,   172,    44,   192,     0,
       0,   171,     0,     0,     0,     0,     0,   171,   171,     0,
     -51,   -51,   -51,   171,   -51,   172,   195,   279,   -62,   -62,
     192,   -62,     0,   195,     0,   -51,   181,   182,   183,   184,
     -62,     0,   -62,     0,   171,    99,   -62,   -62,   193,   -62,
     185,   193,   186,   192,     0,   187,   188,   -62,     0,   172,
     189,     0,     0,   190,     0,     0,     0,   171,   237,   238,
     239,   240,     0,     0,     0,   193,     0,   -64,   -64,   -64,
       0,   -64,   241,   172,   165,     0,     0,   166,   167,   -64,
       0,   192,   242,     0,     0,   243,     0,     0,   192,   193,
       0,     0,   172,   -64,   -64,   -64,     0,   -64,   172,   172,
       0,     0,     0,     0,   172,     0,   -64,     0,   -64,     0,
     -20,   193,   -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,
     -20,   -20,   -20,   -20,   -20,   172,   -20,     0,   -20,     0,
       0,   -20,   -20,     0,   193,     0,   -20,   -20,     0,   -20,
       0,   -20,   -20,     0,     0,     0,     0,     0,   172,   -21,
       0,   -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,
     -21,   -21,   -21,   -21,     0,   -21,     0,   -21,     0,     0,
     -21,   -21,   193,     0,     0,   -21,   -21,     0,   -21,   193,
     -21,   -21,   -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,
       0,   -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,     0,
     -22,     0,     0,   -22,   -22,     0,     0,     0,   -22,   -22,
       0,   -22,     0,   -22,   -22,   -23,     0,   -23,   -23,   -23,
     -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,
       0,   -23,     0,   -23,     0,     0,   -23,   -23,     0,     0,
       0,   -23,   -23,     0,   -23,     0,   -23,   -23,   -44,     0,
     -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,   -44,     0,   -44,     0,   -44,     0,     0,   -44,
     -44,     0,     0,     0,   -44,   -44,     0,   -44,     0,   -44,
     -44,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,     0,
     -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,     0,   -42,
       0,     0,   -42,   -42,     0,     0,     0,   -42,   -42,     0,
     -42,     0,   -42,   -42,   -46,     0,   -46,   -46,   -46,   -46,
     -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,     0,
     -46,     0,   -46,     0,     0,   -46,   -46,     0,     0,     0,
     -46,   -46,     0,   -46,     0,   -46,   -46,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,     0,   -27,     0,     0,   -27,   -27,
       0,     0,     0,   -27,   -27,     0,   -27,     0,   -27,   -27,
     -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,   -43,     0,   -43,     0,   -43,     0,
       0,   -43,   -43,     0,     0,     0,   -43,   -43,     0,   -43,
       0,   -43,   -43,   -33,     0,   -33,   -33,   -33,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
       0,   -33,     0,     0,   -33,   -33,     0,     0,     0,   -33,
     -33,     0,   -33,     0,   -33,   -33,   -40,     0,   -40,   -40,
     -40,   -40,   -40,   399,     0,   -40,   -40,   -40,   -40,   -40,
     -40,     0,   -40,     0,   -40,     0,     0,   -40,   -40,     0,
       0,     0,   -40,   -40,     0,   -40,     0,   -40,   -40,   -45,
       0,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
     -45,   -45,   -45,   -45,     0,   -45,     0,   -45,     0,     0,
     -45,   -45,     0,     0,     0,   -45,   -45,     0,   -45,     0,
     -45,   -45,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,
       0,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,     0,
     -47,     0,     0,   -47,   -47,     0,     0,     0,   -47,   -47,
       0,   -47,     0,   -47,   -47,   -48,     0,   -48,   -48,   -48,
     -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,
       0,   -48,     0,   -48,     0,     0,   -48,   -48,     0,     0,
       0,   -48,   -48,     0,   -48,     0,   -48,   -48,   -41,     0,
     -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,
     -41,   -41,   -41,     0,   -41,     0,   -41,     0,     0,   -41,
     -41,     0,     0,     0,   -41,   -41,     0,   -41,     0,   -41,
     -41,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,
     -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,     0,   -26,
       0,     0,   -26,   -26,     0,     0,     0,   -26,   -26,     0,
     -26,     0,   -26,   -26,   -25,     0,   -25,   -25,   -25,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,
     -25,     0,   -25,     0,     0,   -25,   -25,     0,     0,     0,
     -25,   -25,     0,   -25,     0,   -25,   -25,   -37,     0,   -37,
     -37,   -37,   -37,   -37,     0,     0,   -37,   -37,   -37,   -37,
     -37,   -37,     0,   -37,     0,   -37,     0,     0,   -37,   -37,
       0,     0,     0,   -37,   -37,     0,   -37,     0,   -37,   -37,
     -28,     0,   -28,   -28,   -28,   -28,   -28,     0,     0,   -28,
     -28,   -28,   -28,   -28,   -28,     0,   -28,     0,   -28,     0,
       0,   -28,   -28,     0,     0,     0,   -28,   -28,     0,   -28,
       0,   -28,   -28,   -39,     0,   -39,   -39,   -39,   -39,   -39,
       0,     0,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,
       0,   -39,     0,     0,   -39,   -39,     0,     0,     0,   -39,
     -39,     0,   -39,     0,   -39,   -39,   -38,     0,   -38,   -38,
     -38,   -38,   -38,     0,     0,   -38,   -38,   -38,   -38,   -38,
     -38,     0,   -38,     0,   -38,     0,     0,   -38,   -38,     0,
       0,     0,   -38,   -38,     0,   -38,     0,   -38,   -38,   -24,
       0,   -24,   -24,   -24,   -24,   -24,     0,     0,   -24,   -24,
     -24,   -24,   -24,   -24,     0,   -24,     0,   -24,     0,     0,
     -24,   -24,     0,     0,     0,   -24,   -24,     0,   -24,     0,
     -24,   -24,   -17,     0,   -17,   -17,   -17,   -17,   -17,     0,
       0,   -17,   -17,   -17,   -17,   -17,   -17,     0,   -17,     0,
     -17,     0,     0,   -17,   -17,     0,     0,     0,   -17,   -17,
       0,   -17,     0,   -17,   -17,   -18,     0,   -18,   -18,   -18,
     -18,   -18,     0,     0,   -18,   -18,   -18,   -18,   -18,   -18,
       0,   -18,     0,   -18,     0,     0,   -18,   -18,     0,     0,
       0,   -18,   -18,     0,   -18,     0,   -18,   -18,    93,     0,
      27,    28,    29,    30,    31,     0,     0,    32,    33,    34,
      35,    36,    37,     0,    38,     0,    39,     0,     0,    40,
      41,     0,     0,     0,    42,    43,     0,    44,     0,   149,
      94,   -36,     0,   -36,   -36,   -36,   -36,   -36,     0,     0,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,     0,   -36,
       0,     0,   -36,   -36,     0,     0,     0,   -36,   -36,     0,
     -36,     0,   -36,   -36,   -19,     0,   -19,   -19,   -19,   -19,
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
       0,     0,   -23,   -23,     0,   -23,     0,   -23,   -23,   -44,
       0,   -44,   -44,   -44,   -44,   -44,     0,     0,   -44,   -44,
     -44,   -44,   -44,   -44,     0,   -44,     0,   -44,     0,     0,
     -44,   -44,     0,     0,     0,   -44,   -44,     0,   -44,     0,
     -44,   -44,   -42,     0,   -42,   -42,   -42,   -42,   -42,     0,
       0,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,     0,
     -42,     0,     0,   -42,   -42,     0,     0,     0,   -42,   -42,
       0,   -42,     0,   -42,   -42,   -46,     0,   -46,   -46,   -46,
     -46,   -46,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,
       0,   -46,     0,   -46,     0,     0,   -46,   -46,     0,     0,
       0,   -46,   -46,     0,   -46,     0,   -46,   -46,   -27,     0,
     -27,   -27,   -27,   -27,   -27,     0,     0,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,     0,   -27,     0,     0,   -27,
     -27,     0,     0,     0,   -27,   -27,     0,   -27,     0,   -27,
     -27,   -35,     0,   -35,   -35,   -35,   -35,   -35,     0,     0,
     -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,     0,   -35,
       0,     0,   -35,   -35,     0,     0,     0,   -35,   -35,     0,
     -35,     0,   -35,   -35,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,     0,   -34,     0,     0,   -34,   -34,     0,     0,     0,
     -34,   -34,     0,   -34,     0,   -34,   -34,   -43,     0,   -43,
     -43,   -43,   -43,   -43,     0,     0,   -43,   -43,   -43,   -43,
     -43,   -43,     0,   -43,     0,   -43,     0,     0,   -43,   -43,
       0,     0,     0,   -43,   -43,     0,   -43,     0,   -43,   -43,
     -45,     0,   -45,   -45,   -45,   -45,   -45,     0,     0,   -45,
     -45,   -45,   -45,   -45,   -45,     0,   -45,     0,   -45,     0,
       0,   -45,   -45,     0,     0,     0,   -45,   -45,     0,   -45,
       0,   -45,   -45,   -47,     0,   -47,   -47,   -47,   -47,   -47,
       0,     0,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,
       0,   -47,     0,     0,   -47,   -47,     0,     0,     0,   -47,
     -47,     0,   -47,     0,   -47,   -47,   -48,     0,   -48,   -48,
     -48,   -48,   -48,     0,     0,   -48,   -48,   -48,   -48,   -48,
     -48,     0,   -48,     0,   -48,     0,     0,   -48,   -48,     0,
       0,     0,   -48,   -48,     0,   -48,     0,   -48,   -48,   -41,
       0,   -41,   -41,   -41,   -41,   -41,     0,     0,   -41,   -41,
     -41,   -41,   -41,   -41,     0,   -41,     0,   -41,     0,     0,
     -41,   -41,     0,     0,     0,   -41,   -41,     0,   -41,     0,
     -41,   -41,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,
       0,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,     0,
     -26,     0,     0,   -26,   -26,     0,     0,     0,   -26,   -26,
       0,   -26,     0,   -26,   -26,   -25,     0,   -25,   -25,   -25,
     -25,   -25,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,
       0,   -25,     0,   -25,     0,     0,   -25,   -25,     0,     0,
       0,   -25,   -25,     0,   -25,     0,   -25,   -25,    -7,     0,
      -7,    -7,    -7,    -7,    -7,     0,     0,    -7,    -7,    -7,
      -7,    -7,    -7,     0,    -7,     0,    -7,     0,     0,    -7,
      -7,     0,     0,     0,    -7,    -7,     0,    -7,     0,    -7,
      -7,    93,     0,    27,    28,    29,    30,    31,     0,     0,
      32,    33,    34,    35,    36,    37,     0,    38,     0,    39,
       0,     0,    40,    41,     0,     0,     0,    42,    43,     0,
      44,     0,   149,   299,    93,     0,    27,    28,    29,    30,
      31,     0,     0,    32,    33,    34,    35,    36,    37,     0,
      38,     0,    39,     0,     0,    40,    41,     0,     0,     0,
      42,    43,     0,    44,     0,   149,   359,   -33,     0,   -33,
     -33,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,     0,   -33,     0,     0,   -33,   -33,
       0,     0,     0,   -33,   -33,     0,   -33,     0,   -33,   -33,
      26,     0,    27,    28,    29,    30,    31,     0,     0,    32,
      33,    34,    35,    36,    37,     0,    38,     0,    39,     0,
       0,    40,    41,     0,     0,     0,    42,    43,     0,    44,
       0,   149,    27,    28,    29,    30,    31,     0,     0,    32,
      33,     0,    35,    36,    37,     0,    38,     0,    39,     0,
       0,    40,    41,     0,     0,     0,    42,    43,     0,    44,
       0,   149,   261,   262,   263,   264,     0,     0,     0,     0,
       0,   261,   262,   263,   264,     0,   265,     0,   186,     0,
       0,   187,   188,     0,     0,   265,   266,     0,     0,   267,
     187,   188,   -80,   -80,   -80,   266,   -80,   -80,   267,     0,
     -80,   -80,   -79,   -79,   -79,   -80,   -79,   -80,   -78,   -78,
     -78,     0,   -78,   -78,   -79,     0,   -78,   -78,   -80,   -80,
     -80,   -78,   -80,   -78,   -81,   -81,   -81,     0,   -81,   -81,
     -80,     0,   -81,   -81,   -78,   -78,   -78,   -81,   -78,   -81,
     -65,   -65,   -65,     0,   -65,   280,   -78,     0,   281,   282,
     -81,   -81,   -81,   -65,   -81,   -65,   -67,   -67,   -67,     0,
     -67,   -67,   -81,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -71,   -71,   -71,     0,   -71,   -71,   -67,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,
     -72,     0,   -72,   -72,   -71,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -69,   -69,   -69,     0,   -69,   -69,
     -72,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -74,   -74,   -74,     0,   -74,   -74,   -69,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -70,   -70,   -70,     0,
     -70,   -70,   -74,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -73,   -73,   -73,     0,   -73,   -73,   -70,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -72,   -72,
     -72,     0,   -72,   -72,   -73,     0,   -72,   -72,     0,     0,
     -69,   -69,   -69,   -72,   -69,   -69,     0,     0,   -69,   -69,
       0,     0,   -74,   -74,   -74,   -69,   -74,   -74,     0,     0,
     -74,   -74,     0,     0,   -70,   -70,   -70,   -74,   -70,   -70,
       0,     0,   -70,   -70,     0,     0,   -73,   -73,   -73,   -70,
     -73,   -73,     0,     0,   -73,   -73,   -74,   -74,   -74,     0,
     -74,   -73,   -70,   -70,   -70,     0,   -70,     0,     0,   -74,
       0,   -74,   -73,   -73,   -73,   -70,   -73,   -70,   -52,   -52,
     -52,     0,   -52,     0,     0,   -73,     0,   -73,   -69,   -69,
     -69,     0,   -69,   -52,   255,   -62,   -62,     0,   -62,     0,
     -64,   -64,   -64,   -69,   -64,     0,   -74,   -74,   -74,   -62,
     -74,     0,   -70,   -70,   -70,   -64,   -70,     0,   -73,   -73,
     -73,   -74,   -73,     0,     0,     0,     0,   -70,     0,     0,
     -68,   -68,   -68,   -73,   -68,   -68,     0,     0,   -68,   -68,
       0,     0,   -68,     0,    74,   -79,   -79,   -79,     0,   -79,
     -79,     0,     0,   -79,   -79,     0,     0,   -79,   -80,   -80,
     -80,     0,   -80,   -80,     0,     0,   -80,   -80,     0,     0,
     -80,   -78,   -78,   -78,     0,   -78,   -78,     0,     0,   -78,
     -78,     0,     0,   -78,   -81,   -81,   -81,     0,   -81,   -81,
       0,     0,   -81,   -81,     0,     0,   -81,   -65,   -65,   -65,
       0,   -65,   100,     0,     0,   101,   102,     0,     0,   -65,
     -67,   -67,   -67,     0,   -67,   -67,     0,     0,   -67,   -67,
       0,     0,   -67,   -71,   -71,   -71,     0,   -71,   -71,     0,
       0,   -71,   -71,     0,     0,   -71,   -72,   -72,   -72,     0,
     -72,   -72,     0,     0,   -72,   -72,     0,     0,   -72,   -69,
     -69,   -69,     0,   -69,   -69,     0,     0,   -69,   -69,     0,
       0,   -69,   -74,   -74,   -74,     0,   -74,   -74,     0,     0,
     -74,   -74,     0,     0,   -74,   -70,   -70,   -70,     0,   -70,
     -70,     0,     0,   -70,   -70,     0,     0,   -70,   -73,   -73,
     -73,     0,   -73,   -73,     0,     0,   -73,   -73,     0,     0,
     -73
};

static const yytype_int16 yycheck[] =
{
      19,    33,    38,    39,    40,    41,    25,   126,    44,   126,
      52,     1,   149,    20,    76,    32,     1,   126,    32,     1,
     139,    28,    12,     0,     1,     3,   145,   146,    16,    17,
      18,   232,    20,    21,   235,    12,    24,    25,    74,    75,
     126,    31,   126,    31,   126,    30,    82,    83,    30,     0,
      29,    30,    31,     4,     0,    16,    17,    18,   259,    20,
      96,    97,    98,    99,   100,   101,   102,     3,    29,     1,
      31,     3,     4,     5,     6,   126,    20,    12,   140,   141,
     126,     1,   283,   220,    28,    17,    44,    19,   124,    20,
      22,    23,    12,    32,   126,    27,    28,    28,    30,     3,
       4,     5,     6,    20,   305,    30,    31,   126,     3,     4,
       5,     6,    29,    17,    31,    73,    74,    75,   154,    28,
     156,    30,    17,    27,    82,    83,    30,   328,   164,   165,
     166,   167,    27,   169,    30,    30,     0,     1,    16,    17,
      18,    30,    20,    21,     0,     1,    24,    25,    12,   185,
     186,   187,   188,    31,   190,    18,    12,    20,     1,     3,
       3,     4,     5,     6,    30,   366,   124,    20,    31,   127,
     128,   207,   373,   209,    17,    20,    19,    28,    31,    22,
      23,    30,     1,   215,    27,    28,    31,    30,    28,   231,
       9,    16,    17,    18,    28,    20,   232,    20,   156,   235,
       3,     4,     5,     6,    29,   241,    31,   243,    31,     3,
      28,   169,    17,    18,    17,    20,   252,   253,   254,   255,
     256,   257,   258,   259,    27,   287,    31,    30,    20,   265,
      28,   267,   190,    28,    16,    17,    18,    29,    20,    31,
     276,   277,   278,   279,   280,   281,   282,   283,    30,    31,
     286,   209,    28,   295,     0,     1,   292,   293,   377,    31,
     377,    20,   298,    16,    17,    18,    12,    20,   377,   305,
      17,    18,    31,    20,   232,    31,    29,   235,    31,    28,
     399,   317,   399,   319,    31,   243,   405,   406,   405,   406,
     399,   377,   328,   377,    28,   377,   405,   406,    16,    17,
      18,   259,    20,    18,   340,    20,   342,    28,    31,   267,
      28,    31,    30,   399,    29,   399,    31,   399,    20,   405,
     406,   405,   406,   405,   406,   283,   377,    29,   286,    31,
     366,   377,    31,    28,   292,   293,    28,   373,   400,   401,
     298,    20,    16,    17,    18,   377,    20,   305,   399,    29,
      29,    31,    31,   399,   405,   406,    28,    31,   377,   405,
     406,   319,    16,    17,    18,    28,    20,   399,    17,    18,
     328,    20,    28,   405,   406,    29,    30,    31,    28,    28,
     399,    28,    28,     1,   342,    28,   405,   406,    39,    40,
      41,     9,     3,    44,    17,    18,    20,    20,    16,    17,
      18,     1,    20,    21,    28,    28,    24,    25,   366,     9,
      28,     1,    30,     3,    31,   373,     3,     4,     5,     6,
     378,   379,    31,    74,    75,    29,    29,    31,    31,    31,
      17,    82,    83,    28,    28,    22,    23,    16,    17,    18,
      27,    20,    28,    30,    30,    96,    97,    98,    99,   100,
     101,   102,    31,     1,    28,     3,     4,     5,     6,     7,
       8,    28,    10,    11,    12,    13,    14,    15,    18,    17,
      20,    19,    28,   124,    22,    23,    28,    30,    28,    27,
      28,     1,    30,     3,    32,    33,    30,    16,    17,    18,
      30,    20,    21,    30,    28,    24,    25,     3,     4,     5,
       6,    30,    31,   154,    31,   156,     3,     4,     5,     6,
      29,    17,    31,   164,   165,   166,   167,    29,   169,    31,
      17,    27,    19,    31,    30,    22,    23,    16,    17,    18,
      27,    20,    31,    30,   185,   186,   187,   188,    28,   190,
      29,     1,    31,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    12,    13,    14,    15,   207,    17,   209,    19,
      28,    31,    22,    23,     3,     0,     1,    27,    28,    31,
      30,    28,    32,    33,    16,    17,    18,    12,    20,    21,
      31,   232,    24,    25,   235,     3,     4,     5,     6,    31,
     241,    29,   243,    31,    31,    31,    16,    17,    18,    17,
      20,   252,   253,   254,   255,   256,   257,   258,   259,    27,
      31,    31,    30,    29,   265,    31,   267,    31,    16,    17,
      18,    29,    20,    31,    31,   276,   277,   278,   279,   280,
     281,   282,   283,    31,    29,   286,    31,    31,    39,    40,
      41,   292,   293,    44,    29,    31,    31,   298,    16,    17,
      18,    29,    20,    31,   305,    31,     3,     4,     5,     6,
      29,    29,    31,    31,    31,    29,   317,    31,   319,    29,
      17,    31,    19,    74,    75,    22,    23,   328,     0,     1,
      27,    82,    83,    30,    31,    29,    29,    31,    31,   340,
      12,   342,    29,    31,    31,    96,    97,    98,    99,   100,
     101,   102,    28,    16,    17,    18,    31,    20,    21,     0,
       1,    24,    25,    28,    28,   366,    29,    30,    31,    31,
      31,    12,   373,   124,    29,     1,    31,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    12,    13,    14,    15,
      29,    17,    31,    19,    31,    31,    22,    23,     0,     1,
      31,    27,    28,   154,    30,   156,    32,    33,    17,    18,
      12,    20,    31,   164,   165,   166,   167,    29,   169,    31,
      29,    28,    31,    16,    17,    18,    31,    20,    21,    28,
      28,    24,    25,    28,   185,   186,   187,   188,    31,   190,
      29,     1,    31,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    12,    13,    14,    15,   207,    17,   209,    19,
      28,    28,    22,    23,     4,     0,     1,    27,    28,    31,
      30,    20,    32,    33,    16,    17,    18,    12,    20,    21,
      31,   232,    24,    25,   235,     3,     4,     5,     6,    31,
     241,    29,   243,    31,    31,   124,    16,    17,    18,    17,
      20,   252,   253,   254,   255,   256,   257,   258,   259,    27,
      -1,    31,    30,    29,   265,    31,   267,    -1,    16,    17,
      18,    29,    20,    31,    -1,   276,   277,   278,   279,   280,
     281,   282,   283,    31,    29,   286,    31,    -1,    39,    40,
      41,   292,   293,    44,    29,    -1,    31,   298,    16,    17,
      18,    29,    20,    31,   305,    -1,     3,     4,     5,     6,
      29,    29,    31,    31,    -1,    29,   317,    31,   319,    29,
      17,    31,    19,    74,    75,    22,    23,   328,     0,     1,
      27,    82,    83,    30,    31,    29,    29,    31,    31,   340,
      12,   342,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,   102,    -1,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,    -1,   366,    29,    -1,    31,    -1,
      -1,    -1,   373,   124,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,   154,    30,   156,    32,    33,    17,    18,
      -1,    20,    -1,   164,   165,   166,   167,    -1,   169,    -1,
      29,    -1,    31,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,   185,   186,   187,   188,    31,   190,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,   207,    17,   209,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,    16,    17,    18,    39,    20,    -1,
      -1,   232,    44,    -1,   235,    -1,    -1,    29,    -1,    31,
     241,    -1,   243,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,   252,   253,   254,   255,   256,   257,   258,   259,    17,
      -1,    -1,    74,    75,   265,    -1,   267,    -1,    -1,    27,
      82,    83,    30,    -1,    -1,   276,   277,   278,   279,   280,
     281,   282,   283,    -1,    96,   286,     3,     4,     5,     6,
      -1,   292,   293,     3,     4,     5,     6,   298,    -1,    -1,
      17,    -1,    19,    -1,   305,    22,    23,    17,    -1,    -1,
      27,    -1,   124,    30,    31,    -1,   317,    27,   319,    -1,
      30,    -1,     3,     4,     5,     6,    -1,   328,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    17,    44,    -1,   340,
      -1,   342,    -1,    -1,   156,    17,    27,    19,    -1,    30,
      22,    23,    -1,   165,    -1,    27,    -1,   169,    30,    31,
      -1,    -1,    16,    17,    18,   366,    20,    74,    75,    16,
      17,    18,   373,    20,   186,    82,    83,    31,   190,    -1,
      -1,    28,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    98,    13,    14,    15,    -1,    17,   209,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    16,    17,    18,    -1,    20,   124,    -1,    -1,
     232,    -1,    -1,   235,    -1,    29,    -1,    31,    -1,    -1,
      -1,   243,     3,     4,     5,     6,    -1,    -1,    44,    -1,
     252,    16,    17,    18,    -1,    20,    17,   259,    19,   156,
      -1,    22,    23,    28,    -1,   267,    27,    -1,   165,    30,
      31,    -1,   169,    -1,   276,    -1,    -1,    -1,    74,    75,
      -1,   283,    -1,    -1,   286,    -1,    82,    83,    -1,   186,
     292,   293,    -1,   190,    -1,    -1,   298,    -1,    16,    17,
      18,    -1,    20,   305,    -1,     3,     4,     5,     6,    -1,
      -1,    29,   209,    31,    -1,    -1,    -1,   319,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,   328,    -1,   124,    27,
      -1,    -1,    30,    31,    -1,   232,    -1,    -1,   235,    -1,
     342,    -1,    -1,    16,    17,    18,   243,    20,    21,    -1,
      -1,    24,    25,    44,    -1,   252,   253,   254,    31,    -1,
     156,    -1,   259,    -1,   366,    -1,    -1,    -1,    -1,   165,
     267,   373,    -1,   169,    -1,    -1,    -1,    -1,    -1,   276,
     277,   278,    -1,    74,    75,    -1,   283,    -1,    -1,   286,
     186,    82,    83,    -1,   190,   292,   293,    -1,    16,    17,
      18,   298,    20,    16,    17,    18,    97,    20,   305,    -1,
      28,    -1,    -1,   209,    -1,    -1,    29,    -1,    31,    16,
      17,    18,   319,    20,     3,     4,     5,     6,    -1,    -1,
      -1,   328,    29,   124,    31,    -1,   232,    -1,    17,   235,
      19,    -1,    -1,    22,    23,   342,    -1,   243,    27,    -1,
      -1,    30,    31,    -1,    44,    -1,   252,   253,   254,    -1,
      16,    17,    18,   259,    20,   156,    -1,    -1,    -1,   366,
      -1,   267,    -1,    29,   165,    31,   373,    -1,   169,    -1,
     276,   277,   278,    -1,    74,    75,    -1,   283,    -1,    -1,
     286,    -1,    82,    83,    -1,   186,   292,   293,    -1,   190,
      -1,    -1,   298,    -1,    -1,    -1,    16,    17,    18,   305,
      20,     3,     4,     5,     6,    -1,    -1,    -1,   209,    44,
      -1,    31,    -1,   319,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,   328,    -1,   124,    27,    -1,    -1,    30,    31,
      -1,   232,    -1,    -1,   235,    -1,   342,    -1,    -1,    74,
      75,    -1,   243,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,   252,   253,    16,    17,    18,   156,    20,   259,    -1,
     366,    -1,    -1,    -1,    -1,   165,   267,   373,    31,   169,
      -1,    -1,    -1,    -1,    -1,   276,   277,    -1,    -1,    -1,
      -1,    -1,   283,    -1,    -1,   286,   186,    -1,    -1,   124,
     190,   292,   293,     3,     4,     5,     6,   298,    -1,    -1,
      44,    16,    17,    18,   305,    20,    -1,    17,    -1,   209,
      -1,    -1,    22,    23,    29,    -1,    31,    27,   319,    -1,
      30,   156,    16,    17,    18,    -1,    20,   328,    -1,    -1,
      74,    75,   232,    -1,   169,   235,    -1,    31,    82,    83,
      -1,   342,    -1,   243,     3,     4,     5,     6,    -1,    16,
      17,    18,   252,    20,    -1,   190,    -1,    -1,    17,   259,
      19,    28,    -1,    22,    23,   366,    -1,   267,    27,    -1,
      -1,    30,   373,    -1,   209,    -1,   276,    -1,    -1,    -1,
     124,    -1,    -1,   283,    -1,    -1,   286,     3,     4,     5,
       6,    -1,   292,   293,    -1,    -1,    -1,   232,   298,    -1,
     235,    17,    -1,    19,    -1,   305,    22,    23,   243,    -1,
      -1,    27,   156,    -1,    30,    31,    -1,    -1,    -1,   319,
       3,     4,     5,     6,   259,   169,    -1,    -1,   328,    16,
      17,    18,   267,    20,    17,    -1,    19,    -1,    -1,    22,
      23,    28,   342,    -1,    27,    -1,   190,    30,   283,    -1,
      -1,   286,    -1,    -1,    -1,    -1,    -1,   292,   293,    -1,
      16,    17,    18,   298,    20,   209,   366,    16,    17,    18,
     305,    20,    -1,   373,    -1,    31,     3,     4,     5,     6,
      29,    -1,    31,    -1,   319,    16,    17,    18,   232,    20,
      17,   235,    19,   328,    -1,    22,    23,    28,    -1,   243,
      27,    -1,    -1,    30,    -1,    -1,    -1,   342,     3,     4,
       5,     6,    -1,    -1,    -1,   259,    -1,    16,    17,    18,
      -1,    20,    17,   267,    19,    -1,    -1,    22,    23,    28,
      -1,   366,    27,    -1,    -1,    30,    -1,    -1,   373,   283,
      -1,    -1,   286,    16,    17,    18,    -1,    20,   292,   293,
      -1,    -1,    -1,    -1,   298,    -1,    29,    -1,    31,    -1,
       1,   305,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,   319,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,   328,    -1,    27,    28,    -1,    30,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,   342,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,   366,    -1,    -1,    27,    28,    -1,    30,   373,
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
      -1,    32,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    -1,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    17,    27,    -1,    -1,    30,
      22,    23,    16,    17,    18,    27,    20,    21,    30,    -1,
      24,    25,    16,    17,    18,    29,    20,    31,    16,    17,
      18,    -1,    20,    21,    28,    -1,    24,    25,    16,    17,
      18,    29,    20,    31,    16,    17,    18,    -1,    20,    21,
      28,    -1,    24,    25,    16,    17,    18,    29,    20,    31,
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
      20,    21,    28,    -1,    24,    25,    16,    17,    18,    29,
      20,    31,    16,    17,    18,    -1,    20,    21,    28,    -1,
      24,    25,    16,    17,    18,    29,    20,    31,    16,    17,
      18,    -1,    20,    21,    28,    -1,    24,    25,    -1,    -1,
      16,    17,    18,    31,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    16,    17,    18,    31,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    16,    17,    18,    31,    20,    21,
      -1,    -1,    24,    25,    -1,    -1,    16,    17,    18,    31,
      20,    21,    -1,    -1,    24,    25,    16,    17,    18,    -1,
      20,    31,    16,    17,    18,    -1,    20,    -1,    -1,    29,
      -1,    31,    16,    17,    18,    29,    20,    31,    16,    17,
      18,    -1,    20,    -1,    -1,    29,    -1,    31,    16,    17,
      18,    -1,    20,    31,    16,    17,    18,    -1,    20,    -1,
      16,    17,    18,    31,    20,    -1,    16,    17,    18,    31,
      20,    -1,    16,    17,    18,    31,    20,    -1,    16,    17,
      18,    31,    20,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      16,    17,    18,    31,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    -1,    30,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    -1,    -1,    28,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
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

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    12,    35,    36,    37,    38,    39,     3,     0,
      37,    28,    30,     1,    12,    31,    42,    43,     3,    41,
      29,    31,    32,    49,    43,    40,     1,     3,     4,     5,
       6,     7,    10,    11,    12,    13,    14,    15,    17,    19,
      22,    23,    27,    28,    30,    38,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      70,    49,     1,     9,    30,    30,    30,     1,    28,    47,
       3,     1,    30,    30,    30,     3,    65,    61,    65,    65,
      65,    57,    28,     1,    33,    51,    20,    18,    17,    16,
      21,    24,    25,    57,    31,    57,    68,    69,    57,     1,
       3,    48,    28,    57,    57,     3,    31,    61,    63,    64,
      65,    65,    65,    65,    29,    31,    31,    28,    28,    31,
      31,    31,    69,    44,    57,    57,    28,    28,    28,     8,
      28,    28,    44,    48,    48,    31,    31,    44,    44,    32,
       3,     4,     5,     6,    17,    27,    30,    66,    67,    70,
       3,     4,     5,     6,    17,    19,    22,    23,    27,    30,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      70,     3,     4,     5,     6,    17,    19,    22,    23,    27,
      30,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    70,    28,     3,     4,     5,     6,    17,    27,    30,
      66,    67,    70,     7,    10,    11,    13,    14,    15,    28,
      32,    45,    46,    47,    49,    52,    53,    54,    55,    56,
       3,    50,    30,    65,    57,    30,    65,     3,     4,     5,
       6,    17,    27,    30,    61,    65,    66,    67,    70,    65,
      65,    57,    20,    18,    17,    16,    21,    24,    25,    30,
      65,     3,     4,     5,     6,    17,    27,    30,    61,    65,
      66,    67,    70,    65,    65,    57,    20,    18,    17,    16,
      21,    24,    25,    30,    65,    57,    30,    30,     1,    28,
      47,     1,    30,    30,    30,    50,    28,     1,     9,    33,
      31,    68,    31,    31,    68,    30,    65,    57,    31,    61,
      63,    64,    65,     3,     4,     5,     6,    17,    27,    30,
      65,    66,    67,    70,    65,    65,    31,    68,    30,    65,
      57,    31,    61,    63,    64,    65,     3,     4,     5,     6,
      17,    27,    30,    65,    66,    67,    70,    65,    65,    31,
      68,    31,    57,     1,    48,    28,    57,    57,     3,    33,
      57,    31,    31,    31,    68,    31,    30,    65,    57,    31,
      31,    68,    31,    30,    65,    57,    31,    31,    28,    28,
      31,    31,    31,    31,    31,    68,    31,    31,    31,    68,
      31,    44,    57,    57,    28,    28,    28,    31,    31,     8,
      28,    28,    44,    48,    48,    31,    31,    44,    44
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    38,    40,    39,
      41,    39,    39,    42,    42,    42,    43,    44,    44,    44,
      44,    44,    44,    44,    44,    45,    45,    46,    46,    47,
      47,    48,    48,    49,    50,    50,    50,    50,    51,    51,
      52,    52,    53,    53,    53,    54,    54,    55,    56,    57,
      57,    58,    58,    59,    59,    59,    60,    60,    61,    61,
      62,    62,    63,    63,    64,    64,    64,    65,    65,    65,
      66,    66,    66,    67,    67,    68,    68,    69,    70,    70,
      70,    70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     0,     7,
       0,     6,     1,     3,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     9,     9,     2,     1,     1,
       1,     3,     2,     3,     2,     2,     1,     1,     1,     1,
       5,     7,     2,     3,     2,     5,     2,     5,     5,     1,
       1,     2,     2,     3,     3,     3,     3,     1,     2,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     2,
       3,     1,     1,     4,     3,     3,     1,     1,     1,     1,
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
#line 99 "src/bison/bison.y"
            {
	  tree = (yyval.node);
  }
#line 2393 "src/bison/bison.tab.c"
    break;

  case 3: /* decl_list: decl_list decl  */
#line 105 "src/bison/bison.y"
                       {
		(yyval.node) = createNode("decl_list");
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2403 "src/bison/bison.tab.c"
    break;

  case 4: /* decl_list: decl  */
#line 110 "src/bison/bison.y"
               {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2411 "src/bison/bison.tab.c"
    break;

  case 5: /* decl: var_decl  */
#line 116 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2419 "src/bison/bison.tab.c"
    break;

  case 6: /* decl: fun_decl  */
#line 119 "src/bison/bison.y"
                   {
		(yyval.node) =  (yyvsp[0].node);
	}
#line 2427 "src/bison/bison.tab.c"
    break;

  case 7: /* var_decl: TYPE ID ';'  */
#line 126 "src/bison/bison.y"
                    {
		(yyval.node) = createNode("var_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		(yyval.node)->leaf2 = createNode("ID");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		checkRedeclaration((yyvsp[-1].token).lexeme, (yyvsp[-1].token).scope, &errosSemanticos, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		insertSymbol((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column, (yyvsp[-2].token).lexeme, "var", (yyvsp[-1].token).scope);
	}
#line 2444 "src/bison/bison.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 141 "src/bison/bison.y"
                               {

		checkRedeclaration((yyvsp[-3].token).lexeme, (yyvsp[-3].token).scope, &errosSemanticos, (yyvsp[-3].token).line, (yyvsp[-3].token).column);		
		Symbol* createdSymbol = insertSymbol((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-4].token).lexeme, "fun",(yyvsp[-3].token).scope);
		
		int numberOfParams = 0;
		storeParamsTypes(createdSymbol, (yyvsp[-1].node), &numberOfParams);
		createdSymbol->numberOfParams = numberOfParams;

	}
#line 2459 "src/bison/bison.tab.c"
    break;

  case 9: /* fun_decl: TYPE ID '(' params ')' $@1 block_stmt  */
#line 150 "src/bison/bison.y"
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
#line 2480 "src/bison/bison.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 166 "src/bison/bison.y"
                         {

		checkRedeclaration((yyvsp[-2].token).lexeme, (yyvsp[-2].token).scope, &errosSemanticos, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
		Symbol* createdSymbol = insertSymbol((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-3].token).lexeme, "fun", (yyvsp[-2].token).scope);
		int numberOfParams = 0;
		createdSymbol->numberOfParams = numberOfParams;

	}
#line 2493 "src/bison/bison.tab.c"
    break;

  case 11: /* fun_decl: TYPE ID '(' ')' $@2 block_stmt  */
#line 173 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("fun_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-5].token).lexeme, (yyvsp[-5].token).line, (yyvsp[-5].token).column);

		(yyval.node)->leaf2 = createNode("ID");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2509 "src/bison/bison.tab.c"
    break;

  case 12: /* fun_decl: error  */
#line 184 "src/bison/bison.y"
                {
		yyerrok;
		(yyval.node) = createNode("\0");
	}
#line 2518 "src/bison/bison.tab.c"
    break;

  case 13: /* params: params ',' param_decl  */
#line 191 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("\0");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2528 "src/bison/bison.tab.c"
    break;

  case 14: /* params: param_decl  */
#line 196 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2536 "src/bison/bison.tab.c"
    break;

  case 15: /* params: error  */
#line 199 "src/bison/bison.y"
               {
		yyerrok;
		(yyval.node) = createNode("\0");
	}
#line 2545 "src/bison/bison.tab.c"
    break;

  case 16: /* param_decl: TYPE ID  */
#line 206 "src/bison/bison.y"
                {
		
		(yyval.node) = createNode("param_decl");
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		(yyval.node)->leaf2 = createNode("ID");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);

		// checkRedeclaration($2.lexeme, $2.scope, &errosSemanticos, $2.line, $2.column);
		insertSymbol((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[-1].token).lexeme, "param", (scopeId + 1));
	}
#line 2562 "src/bison/bison.tab.c"
    break;

  case 17: /* statement: exp_stmt  */
#line 221 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2570 "src/bison/bison.tab.c"
    break;

  case 18: /* statement: block_stmt  */
#line 224 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2578 "src/bison/bison.tab.c"
    break;

  case 19: /* statement: if_stmt  */
#line 227 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2586 "src/bison/bison.tab.c"
    break;

  case 20: /* statement: return_stmt  */
#line 230 "src/bison/bison.y"
                      {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2594 "src/bison/bison.tab.c"
    break;

  case 21: /* statement: write_stmt  */
#line 233 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2602 "src/bison/bison.tab.c"
    break;

  case 22: /* statement: writeln_stmt  */
#line 236 "src/bison/bison.y"
                       {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2610 "src/bison/bison.tab.c"
    break;

  case 23: /* statement: read_stmt  */
#line 239 "src/bison/bison.y"
                    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2618 "src/bison/bison.tab.c"
    break;

  case 24: /* statement: for_stmt  */
#line 242 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2626 "src/bison/bison.tab.c"
    break;

  case 25: /* for_stmt: FOR '(' assign_exp ';' simple_exp ';' assign_exp ')' statement  */
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
#line 2641 "src/bison/bison.tab.c"
    break;

  case 26: /* for_stmt: FOR '(' error ';' simple_exp ';' assign_exp ')' statement  */
#line 258 "src/bison/bison.y"
                                                                          {
		yyerrok;
		(yyval.node) = createNode("\0");
	}
#line 2650 "src/bison/bison.tab.c"
    break;

  case 27: /* exp_stmt: exp ';'  */
#line 266 "src/bison/bison.y"
                {
		(yyval.node) = (yyvsp[-1].node);
		(yyval.node)->type = (yyvsp[-1].node)->type;
	}
#line 2659 "src/bison/bison.tab.c"
    break;

  case 28: /* exp_stmt: ';'  */
#line 270 "src/bison/bison.y"
              {
		(yyval.node) = createNode("\0");
	}
#line 2667 "src/bison/bison.tab.c"
    break;

  case 29: /* exp: assign_exp  */
#line 276 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 2676 "src/bison/bison.tab.c"
    break;

  case 30: /* exp: simple_exp  */
#line 280 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 2685 "src/bison/bison.tab.c"
    break;

  case 31: /* assign_exp: ID ASSIGN simple_exp  */
#line 287 "src/bison/bison.y"
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
#line 2713 "src/bison/bison.tab.c"
    break;

  case 32: /* assign_exp: ID error  */
#line 310 "src/bison/bison.y"
                   {
		yyerrok;
		(yyval.node) = createNode("\0");
	}
#line 2722 "src/bison/bison.tab.c"
    break;

  case 33: /* block_stmt: '{' stmt_list '}'  */
#line 317 "src/bison/bison.y"
                          {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2730 "src/bison/bison.tab.c"
    break;

  case 34: /* stmt_list: stmt_list var_or_statement  */
#line 323 "src/bison/bison.y"
                               {
        (yyval.node) = createNode("stmt_list");
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
    }
#line 2740 "src/bison/bison.tab.c"
    break;

  case 35: /* stmt_list: stmt_list error  */
#line 328 "src/bison/bison.y"
                      {
        yyerrok;
		(yyval.node) = createNode("\0");
    }
#line 2749 "src/bison/bison.tab.c"
    break;

  case 36: /* stmt_list: var_or_statement  */
#line 332 "src/bison/bison.y"
                       {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2757 "src/bison/bison.tab.c"
    break;

  case 37: /* stmt_list: error  */
#line 335 "src/bison/bison.y"
                {
		yyerrok;
		(yyval.node) = createNode("\0");
	}
#line 2766 "src/bison/bison.tab.c"
    break;

  case 38: /* var_or_statement: statement  */
#line 342 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 2775 "src/bison/bison.tab.c"
    break;

  case 39: /* var_or_statement: var_decl  */
#line 346 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 2784 "src/bison/bison.tab.c"
    break;

  case 40: /* if_stmt: IF '(' simple_exp ')' statement  */
#line 353 "src/bison/bison.y"
                                                   {
		(yyval.node) = createNode("if_stmt");

		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2797 "src/bison/bison.tab.c"
    break;

  case 41: /* if_stmt: IF '(' simple_exp ')' statement ELSE statement  */
#line 361 "src/bison/bison.y"
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
#line 2815 "src/bison/bison.tab.c"
    break;

  case 42: /* return_stmt: RETURN ';'  */
#line 377 "src/bison/bison.y"
                   {
		(yyval.node) = createNode("return_stmt");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
	}
#line 2824 "src/bison/bison.tab.c"
    break;

  case 43: /* return_stmt: RETURN exp ';'  */
#line 381 "src/bison/bison.y"
                         {
		(yyval.node) = createNode("return_stmt");
		(yyval.node)->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
		(yyval.node)->type = (yyvsp[-1].node)->type;
		(yyval.node)->leaf1 = (yyvsp[-1].node);

	}
#line 2836 "src/bison/bison.tab.c"
    break;

  case 44: /* return_stmt: RETURN error  */
#line 388 "src/bison/bison.y"
                       {
		yyerrok;
		(yyval.node) = createNode("\0");
	}
#line 2845 "src/bison/bison.tab.c"
    break;

  case 45: /* write_stmt: WRITE '(' simple_exp ')' ';'  */
#line 395 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("write_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
	}
#line 2857 "src/bison/bison.tab.c"
    break;

  case 46: /* write_stmt: WRITE error  */
#line 402 "src/bison/bison.y"
                      {
		yyerrok;
		(yyval.node) = createNode("\0");
	}
#line 2866 "src/bison/bison.tab.c"
    break;

  case 47: /* writeln_stmt: WRITELN '(' simple_exp ')' ';'  */
#line 409 "src/bison/bison.y"
                                       {
		(yyval.node) = createNode("writeln_stmt");
		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
	}
#line 2877 "src/bison/bison.tab.c"
    break;

  case 48: /* read_stmt: READ '(' ID ')' ';'  */
#line 418 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("read_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);

		(yyval.node)->leaf2  = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		verifyDefinedId((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos);
	}
#line 2893 "src/bison/bison.tab.c"
    break;

  case 49: /* simple_exp: bin_exp  */
#line 432 "src/bison/bison.y"
                {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 2902 "src/bison/bison.tab.c"
    break;

  case 50: /* simple_exp: bin_list_exp  */
#line 436 "src/bison/bison.y"
                       {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 2911 "src/bison/bison.tab.c"
    break;

  case 51: /* unary_list_exp: '?' factor  */
#line 443 "src/bison/bison.y"
                   {
		(yyval.node) = createNode("unary_list_exp"); 

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);

		int tipo = checkTypeListExp((yyvsp[0].node), scopeStack);
		verifyIfIsList(tipo, "?", (yyvsp[-1].token).line, (yyvsp[-1].token).column, 0);
		(yyval.node)->type = tipo;
	}
#line 2927 "src/bison/bison.tab.c"
    break;

  case 52: /* unary_list_exp: '%' factor  */
#line 454 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("unary_list_exp"); 
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);

		int tipo = checkTypeListExp((yyvsp[0].node), scopeStack);
		verifyIfIsList(tipo, "%", (yyvsp[-1].token).line, (yyvsp[-1].token).column, 0);
		(yyval.node)->type = tipo;
	}
#line 2942 "src/bison/bison.tab.c"
    break;

  case 53: /* bin_list_exp: factor ':' factor  */
#line 467 "src/bison/bison.y"
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
#line 2964 "src/bison/bison.tab.c"
    break;

  case 54: /* bin_list_exp: factor MAP factor  */
#line 484 "src/bison/bison.y"
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
#line 2984 "src/bison/bison.tab.c"
    break;

  case 55: /* bin_list_exp: factor FILTER factor  */
#line 499 "src/bison/bison.y"
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
#line 3004 "src/bison/bison.tab.c"
    break;

  case 56: /* bin_exp: bin_exp LOG_OP unary_log_exp  */
#line 517 "src/bison/bison.y"
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

  case 57: /* bin_exp: unary_log_exp  */
#line 525 "src/bison/bison.y"
                        {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3026 "src/bison/bison.tab.c"
    break;

  case 58: /* unary_log_exp: EXCLAMATION unary_log_exp  */
#line 532 "src/bison/bison.y"
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
#line 3045 "src/bison/bison.tab.c"
    break;

  case 59: /* unary_log_exp: rel_exp  */
#line 546 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3054 "src/bison/bison.tab.c"
    break;

  case 60: /* rel_exp: rel_exp REL_OP sum_exp  */
#line 553 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		getExpressionType((yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].token), &errosSemanticos);
		(yyval.node)->type = 0;
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 3067 "src/bison/bison.tab.c"
    break;

  case 61: /* rel_exp: sum_exp  */
#line 561 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3076 "src/bison/bison.tab.c"
    break;

  case 62: /* sum_exp: sum_exp SUM_OP mul_exp  */
#line 568 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->type = getExpressionType((yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].token), &errosSemanticos);
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 3088 "src/bison/bison.tab.c"
    break;

  case 63: /* sum_exp: mul_exp  */
#line 575 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3097 "src/bison/bison.tab.c"
    break;

  case 64: /* mul_exp: mul_exp MUL_OP factor  */
#line 582 "src/bison/bison.y"
                              {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->type = getExpressionType((yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].token), &errosSemanticos);
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 3109 "src/bison/bison.tab.c"
    break;

  case 65: /* mul_exp: factor  */
#line 589 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3118 "src/bison/bison.tab.c"
    break;

  case 66: /* mul_exp: unary_list_exp  */
#line 593 "src/bison/bison.y"
                         {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3127 "src/bison/bison.tab.c"
    break;

  case 67: /* factor: immutable  */
#line 600 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3136 "src/bison/bison.tab.c"
    break;

  case 68: /* factor: ID  */
#line 604 "src/bison/bison.y"
             {
		(yyval.node) = createNode("ID");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
		(yyval.node)->type = searchTypeInSymbolTable((yyvsp[0].token).lexeme, scopeStack);
		verifyDefinedId((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column ,scopeStack , &errosSemanticos);
	}
#line 3147 "src/bison/bison.tab.c"
    break;

  case 69: /* factor: SUM_OP factor  */
#line 610 "src/bison/bison.y"
                        {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf1 = (yyvsp[0].node);
	}
#line 3157 "src/bison/bison.tab.c"
    break;

  case 70: /* immutable: '(' simple_exp ')'  */
#line 618 "src/bison/bison.y"
                           {
		(yyval.node) = (yyvsp[-1].node);
		(yyval.node)->type = (yyvsp[-1].node)->type;
	}
#line 3166 "src/bison/bison.tab.c"
    break;

  case 71: /* immutable: call  */
#line 622 "src/bison/bison.y"
               {
		(yyval.node) =  (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3175 "src/bison/bison.tab.c"
    break;

  case 72: /* immutable: constant  */
#line 626 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3184 "src/bison/bison.tab.c"
    break;

  case 73: /* call: ID '(' args ')'  */
#line 633 "src/bison/bison.y"
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
#line 3201 "src/bison/bison.tab.c"
    break;

  case 74: /* call: ID '(' ')'  */
#line 645 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("call");

		(yyval.node)->leaf1 = createNode("ID");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		verifyDefinedId((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos);
		verifyCall((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column, scopeStack, &errosSemanticos, numberOfArguments, NULL);
		(yyval.node)->type = searchTypeInSymbolTable((yyvsp[-2].token).lexeme, scopeStack);
		numberOfArguments = 0;
	}
#line 3217 "src/bison/bison.tab.c"
    break;

  case 75: /* args: args ',' arg  */
#line 659 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("args");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
		numberOfArguments = numberOfArguments + 1;
	}
#line 3228 "src/bison/bison.tab.c"
    break;

  case 76: /* args: arg  */
#line 665 "src/bison/bison.y"
              {
		(yyval.node) = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
		numberOfArguments = numberOfArguments + 1;
	}
#line 3238 "src/bison/bison.tab.c"
    break;

  case 77: /* arg: simple_exp  */
#line 673 "src/bison/bison.y"
                   {
		(yyval.node) = createNode("arg");
		(yyval.node)->leaf1 = (yyvsp[0].node);
		(yyval.node)->type = (yyvsp[0].node)->type;
	}
#line 3248 "src/bison/bison.tab.c"
    break;

  case 78: /* constant: NIL  */
#line 682 "src/bison/bison.y"
            {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
		(yyval.node)->type = 6;
	}
#line 3258 "src/bison/bison.tab.c"
    break;

  case 79: /* constant: INT  */
#line 687 "src/bison/bison.y"
              {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
		(yyval.node)->type = 0;
	}
#line 3268 "src/bison/bison.tab.c"
    break;

  case 80: /* constant: FLOAT  */
#line 692 "src/bison/bison.y"
                {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
		(yyval.node)->type = 1;
	}
#line 3278 "src/bison/bison.tab.c"
    break;

  case 81: /* constant: STRING  */
#line 697 "src/bison/bison.y"
                 {		
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
		(yyval.node)->type = 7;
	}
#line 3288 "src/bison/bison.tab.c"
    break;


#line 3292 "src/bison/bison.tab.c"

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

#line 704 "src/bison/bison.y"


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

int yyerror(const char* s) {
    printf(BHRED"SYNTATIC ERROR -> ");
    printf("%s ", s);
	printf("[Line %d, Column %d]\n"RESET, linhas, colunas);
	errors++;
	return 0;
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
	}
	printf(BHRED"\nNUMBER OF SYNTATIC ERROS: %d\n"RESET, errors);
	printf(BHRED"\nNUMBER OF SEMANTIC ERROS: %d\n\n"RESET, errosSemanticos);
	freeTree(tree);
	freeTable();
    yylex_destroy();
    return 0;
}
