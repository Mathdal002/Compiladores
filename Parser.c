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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         bnf_parse
#define yylex           bnf_lex
#define yyerror         bnf_error
#define yydebug         bnf_debug
#define yynerrs         bnf_nerrs

/* First part of user prologue.  */
#line 20 "bnf.y"

/* Begin C preamble code */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Absyn.h"

#define YYMAXDEPTH 10000000

/* The type yyscan_t is defined by flex, but we need it in the parser already. */
#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

typedef struct yy_buffer_state *YY_BUFFER_STATE;
extern YY_BUFFER_STATE bnf__scan_string(const char *str, yyscan_t scanner);
extern void bnf__delete_buffer(YY_BUFFER_STATE buf, yyscan_t scanner);

extern void bnf_lex_destroy(yyscan_t scanner);
extern char* bnf_get_text(yyscan_t scanner);

extern yyscan_t bnf__initialize_lexer(FILE * inp);

/* List reversal functions. */

/* End C preamble code */

#line 106 "Parser.c"

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

#include "Bison.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL__ERROR_ = 3,                    /* _ERROR_  */
  YYSYMBOL__BANGEQ = 4,                    /* _BANGEQ  */
  YYSYMBOL__DAMP = 5,                      /* _DAMP  */
  YYSYMBOL__LPAREN = 6,                    /* _LPAREN  */
  YYSYMBOL__RPAREN = 7,                    /* _RPAREN  */
  YYSYMBOL__STAR = 8,                      /* _STAR  */
  YYSYMBOL__PLUS = 9,                      /* _PLUS  */
  YYSYMBOL__COMMA = 10,                    /* _COMMA  */
  YYSYMBOL__MINUS = 11,                    /* _MINUS  */
  YYSYMBOL__SLASH = 12,                    /* _SLASH  */
  YYSYMBOL__COLON = 13,                    /* _COLON  */
  YYSYMBOL__SEMI = 14,                     /* _SEMI  */
  YYSYMBOL__LT = 15,                       /* _LT  */
  YYSYMBOL__LDARROW = 16,                  /* _LDARROW  */
  YYSYMBOL__LTGT = 17,                     /* _LTGT  */
  YYSYMBOL__EQ = 18,                       /* _EQ  */
  YYSYMBOL__DEQ = 19,                      /* _DEQ  */
  YYSYMBOL__GT = 20,                       /* _GT  */
  YYSYMBOL__GTEQ = 21,                     /* _GTEQ  */
  YYSYMBOL__KW_23 = 22,                    /* _KW_23  */
  YYSYMBOL__KW_Istrut = 23,                /* _KW_Istrut  */
  YYSYMBOL__KW_LABEL = 24,                 /* _KW_LABEL  */
  YYSYMBOL__KW_Pa = 25,                    /* _KW_Pa  */
  YYSYMBOL__KW_Perma = 26,                 /* _KW_Perma  */
  YYSYMBOL__KW_Quanto = 27,                /* _KW_Quanto  */
  YYSYMBOL__KW_So = 28,                    /* _KW_So  */
  YYSYMBOL__KW_Uai = 29,                   /* _KW_Uai  */
  YYSYMBOL__KW_Vaila = 30,                 /* _KW_Vaila  */
  YYSYMBOL__KW_Vemca = 31,                 /* _KW_Vemca  */
  YYSYMBOL__KW_Zoia = 32,                  /* _KW_Zoia  */
  YYSYMBOL__LBRACK = 33,                   /* _LBRACK  */
  YYSYMBOL__RBRACK = 34,                   /* _RBRACK  */
  YYSYMBOL__KW_ceu = 35,                   /* _KW_ceu  */
  YYSYMBOL__KW_deus = 36,                  /* _KW_deus  */
  YYSYMBOL__KW_do = 37,                    /* _KW_do  */
  YYSYMBOL__KW_floati = 38,                /* _KW_floati  */
  YYSYMBOL__KW_intero = 39,                /* _KW_intero  */
  YYSYMBOL__KW_main = 40,                  /* _KW_main  */
  YYSYMBOL__KW_stringo = 41,               /* _KW_stringo  */
  YYSYMBOL__LBRACE = 42,                   /* _LBRACE  */
  YYSYMBOL__BAR = 43,                      /* _BAR  */
  YYSYMBOL__RBRACE = 44,                   /* _RBRACE  */
  YYSYMBOL__STRING_ = 45,                  /* _STRING_  */
  YYSYMBOL__INTEGER_ = 46,                 /* _INTEGER_  */
  YYSYMBOL__DOUBLE_ = 47,                  /* _DOUBLE_  */
  YYSYMBOL__IDENT_ = 48,                   /* _IDENT_  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_S = 50,                         /* S  */
  YYSYMBOL_Block = 51,                     /* Block  */
  YYSYMBOL_CMDS = 52,                      /* CMDS  */
  YYSYMBOL_CMD = 53,                       /* CMD  */
  YYSYMBOL_ATRIB = 54,                     /* ATRIB  */
  YYSYMBOL_EXP = 55,                       /* EXP  */
  YYSYMBOL_UAI = 56,                       /* UAI  */
  YYSYMBOL_OPerL = 57,                     /* OPerL  */
  YYSYMBOL_OPerA = 58,                     /* OPerA  */
  YYSYMBOL_OPL = 59,                       /* OPL  */
  YYSYMBOL_ZOIA = 60,                      /* ZOIA  */
  YYSYMBOL_VEMCA = 61,                     /* VEMCA  */
  YYSYMBOL_QUANTO = 62,                    /* QUANTO  */
  YYSYMBOL_PA = 63,                        /* PA  */
  YYSYMBOL_VALUE = 64,                     /* VALUE  */
  YYSYMBOL_Type = 65,                      /* Type  */
  YYSYMBOL_TREM = 66,                      /* TREM  */
  YYSYMBOL_STRUCT = 67,                    /* STRUCT  */
  YYSYMBOL_HeteroElements = 68,            /* HeteroElements  */
  YYSYMBOL_HeteroElement = 69,             /* HeteroElement  */
  YYSYMBOL_FUNC = 70,                      /* FUNC  */
  YYSYMBOL_VAILA = 71,                     /* VAILA  */
  YYSYMBOL_LABEL = 72,                     /* LABEL  */
  YYSYMBOL_ConjValues = 73,                /* ConjValues  */
  YYSYMBOL_ConjValues2D = 74,              /* ConjValues2D  */
  YYSYMBOL_PERMA = 75,                     /* PERMA  */
  YYSYMBOL_APONTA = 76                     /* APONTA  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 85 "bnf.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, bnf_get_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 228 "Parser.c"


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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   258

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   176,   176,   178,   180,   181,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     198,   199,   200,   201,   203,   204,   205,   206,   208,   209,
     211,   212,   213,   214,   215,   216,   217,   218,   220,   221,
     222,   223,   225,   227,   228,   229,   231,   233,   235,   237,
     238,   239,   240,   241,   242,   244,   245,   246,   248,   249,
     250,   251,   253,   255,   256,   258,   259,   260,   262,   263,
     264,   266,   268,   270,   271,   273,   274,   276,   278
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
  "\"end of file\"", "error", "\"invalid token\"", "_ERROR_", "_BANGEQ",
  "_DAMP", "_LPAREN", "_RPAREN", "_STAR", "_PLUS", "_COMMA", "_MINUS",
  "_SLASH", "_COLON", "_SEMI", "_LT", "_LDARROW", "_LTGT", "_EQ", "_DEQ",
  "_GT", "_GTEQ", "_KW_23", "_KW_Istrut", "_KW_LABEL", "_KW_Pa",
  "_KW_Perma", "_KW_Quanto", "_KW_So", "_KW_Uai", "_KW_Vaila", "_KW_Vemca",
  "_KW_Zoia", "_LBRACK", "_RBRACK", "_KW_ceu", "_KW_deus", "_KW_do",
  "_KW_floati", "_KW_intero", "_KW_main", "_KW_stringo", "_LBRACE", "_BAR",
  "_RBRACE", "_STRING_", "_INTEGER_", "_DOUBLE_", "_IDENT_", "$accept",
  "S", "Block", "CMDS", "CMD", "ATRIB", "EXP", "UAI", "OPerL", "OPerA",
  "OPL", "ZOIA", "VEMCA", "QUANTO", "PA", "VALUE", "Type", "TREM",
  "STRUCT", "HeteroElements", "HeteroElement", "FUNC", "VAILA", "LABEL",
  "ConjValues", "ConjValues2D", "PERMA", "APONTA", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-148)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -15,   -24,    30,    -6,  -148,    14,     8,    86,  -148,    -2,
      15,    29,    20,    66,     1,    69,    72,    33,    77,    81,
    -148,  -148,  -148,  -148,  -148,  -148,     4,    44,    86,  -148,
     237,  -148,  -148,  -148,  -148,  -148,  -148,     0,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,    56,   165,    87,    48,    82,
       1,    49,    -2,    -2,    89,     1,   -12,     9,    -2,    -2,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,    -2,    -2,    52,    -4,  -148,    94,
      62,     8,    57,    96,   237,   100,   113,  -148,    73,    31,
     108,   119,   183,   115,    65,   237,   237,   112,    -2,    91,
       8,   120,  -148,   123,   -12,    -2,     8,     8,   137,   135,
     -12,  -148,  -148,  -148,  -148,   121,    97,   201,   139,   122,
    -148,   116,   -12,   141,   237,  -148,   129,   145,  -148,    54,
      -2,   146,  -148,  -148,    -5,   -28,   118,  -148,     8,  -148,
     148,   -12,   131,  -148,  -148,   130,   132,  -148,  -148,  -148,
     124,   154,    -2,  -148,  -148,   159,  -148,   -12,   133,   161,
     -28,   136,   169,   179,   156,    -3,  -148,  -148,   153,  -148,
     -12,   182,  -148,   160,   189,  -148,  -148,   175,    -2,   -12,
     177,   219,   180,   205,     8,   215,  -148,  -148,   175,  -148
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     2,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,    55,    57,    52,    53,    54,    49,     0,     4,     6,
       7,     8,    11,    12,     9,    10,    27,     0,    14,    18,
      15,    16,    17,    13,    19,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     5,    36,    37,    39,    40,    41,    38,    32,    33,
      35,    34,    30,    31,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
       0,     0,     0,    27,     0,    25,    24,     0,     0,     0,
       0,     0,    72,     0,     0,     0,     0,     0,     0,     0,
       0,    69,    70,    23,    22,    50,     0,     0,    27,     0,
      68,     0,     0,     0,    42,    47,    28,     0,    43,     0,
       0,     0,    21,    20,     0,     0,     0,    77,     0,    46,
       0,     0,     0,    78,    58,     0,     0,    65,    67,    66,
       0,    63,     0,    29,    44,     0,    51,     0,     0,     0,
       0,     0,     0,    73,     0,     0,    62,    64,     0,    45,
       0,     0,    60,     0,     0,    74,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    75,    61,    48,     0,    76
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,   -80,   204,  -148,  -148,    -7,  -148,   149,  -148,
     -50,  -148,  -148,  -148,  -148,   -51,    10,  -148,  -148,    83,
    -148,  -148,  -148,  -148,  -147,    41,  -148,  -148
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    27,    28,    29,    84,    31,    74,    75,
      85,    32,    33,    34,    35,    36,    37,    38,    39,   150,
     151,    40,    41,    42,   164,   180,    43,    44
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      30,   102,    46,    86,     9,    89,    91,    93,    76,   144,
      57,   172,     3,   145,    98,   173,    90,   147,   148,   149,
     120,    30,    58,   175,    51,     1,   125,   126,   146,    99,
       4,     5,   182,    23,    24,    25,    45,    59,   109,    20,
      21,   110,    22,    23,    24,    25,    45,   118,    77,     6,
       7,    92,    94,   123,    23,    24,    25,    45,   153,   129,
      82,   140,    48,    47,   141,    88,    49,    95,    96,    62,
      63,   136,    50,    64,    65,    52,    66,    67,    53,    54,
      68,    69,    70,    55,    71,    72,    73,    56,    60,    59,
     155,   117,     9,    79,    80,    81,   101,    83,   124,   115,
      97,   100,   161,    87,   187,   103,   163,   106,    10,    11,
      12,    13,    14,    15,   104,    16,    17,    18,    19,   163,
     107,   108,   111,   142,    20,    21,   112,    22,   163,   114,
     116,    23,    24,    25,    26,    62,    63,   119,   121,    64,
      65,   122,    66,    67,   127,   131,    68,    69,    70,   128,
      71,    72,    73,   133,   130,   137,   134,   138,   135,   139,
     143,   152,   154,   157,   160,   156,   162,   165,   159,    62,
      63,   181,    78,    64,    65,   166,    66,    67,   158,   168,
      68,    69,    70,   169,    71,    72,    73,    62,    63,   170,
     171,    64,    65,   177,    66,    67,   176,   113,    68,    69,
      70,   174,    71,    72,    73,    62,    63,   178,   179,    64,
      65,   183,    66,    67,   185,   132,    68,    69,    70,   186,
      71,    72,    73,    62,    63,   188,   184,    64,    65,   189,
      66,    67,    61,   105,    68,    69,    70,     0,    71,    72,
      73,    62,    63,   167,     0,    64,    65,     0,    66,    67,
       0,     0,    68,    69,    70,     0,    71,    72,    73
};

static const yytype_int16 yycheck[] =
{
       7,    81,     9,    53,     6,    56,    57,    58,     8,    14,
       6,    14,    36,    18,    18,    18,     7,    45,    46,    47,
     100,    28,    18,   170,    14,    40,   106,   107,    33,    33,
       0,    37,   179,    45,    46,    47,    48,    33,     7,    38,
      39,    10,    41,    45,    46,    47,    48,    98,    48,    35,
      42,    58,    59,   104,    45,    46,    47,    48,   138,   110,
      50,     7,    33,    48,    10,    55,    46,    74,    75,     4,
       5,   122,     6,     8,     9,     6,    11,    12,     6,    46,
      15,    16,    17,     6,    19,    20,    21,     6,    44,    33,
     141,    98,     6,     6,    46,    13,    34,    48,   105,    34,
      48,     7,   152,    14,   184,    48,   157,     7,    22,    23,
      24,    25,    26,    27,    18,    29,    30,    31,    32,   170,
       7,    48,    14,   130,    38,    39,     7,    41,   179,    14,
      18,    45,    46,    47,    48,     4,     5,    46,    18,     8,
       9,    18,    11,    12,     7,    48,    15,    16,    17,    14,
      19,    20,    21,    14,    33,    14,    34,    28,    42,    14,
      14,    43,    14,    33,    10,    34,     7,    34,    44,     4,
       5,   178,     7,     8,     9,    14,    11,    12,    46,    43,
      15,    16,    17,    14,    19,    20,    21,     4,     5,    10,
      34,     8,     9,    33,    11,    12,    14,    14,    15,    16,
      17,    48,    19,    20,    21,     4,     5,    18,    33,     8,
       9,    34,    11,    12,    34,    14,    15,    16,    17,    14,
      19,    20,    21,     4,     5,    10,     7,     8,     9,   188,
      11,    12,    28,    84,    15,    16,    17,    -1,    19,    20,
      21,     4,     5,   160,    -1,     8,     9,    -1,    11,    12,
      -1,    -1,    15,    16,    17,    -1,    19,    20,    21
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    40,    50,    36,     0,    37,    35,    42,    51,     6,
      22,    23,    24,    25,    26,    27,    29,    30,    31,    32,
      38,    39,    41,    45,    46,    47,    48,    52,    53,    54,
      55,    56,    60,    61,    62,    63,    64,    65,    66,    67,
      70,    71,    72,    75,    76,    48,    55,    48,    33,    46,
       6,    65,     6,     6,    46,     6,     6,     6,    18,    33,
      44,    52,     4,     5,     8,     9,    11,    12,    15,    16,
      17,    19,    20,    21,    57,    58,     8,    48,     7,     6,
      46,    13,    65,    48,    55,    59,    59,    14,    65,    64,
       7,    64,    55,    64,    55,    55,    55,    48,    18,    33,
       7,    34,    51,    48,    18,    57,     7,     7,    48,     7,
      10,    14,     7,    14,    14,    34,    18,    55,    64,    46,
      51,    18,    18,    64,    55,    51,    51,     7,    14,    64,
      33,    48,    14,    14,    34,    42,    64,    14,    28,    14,
       7,    10,    55,    14,    14,    18,    33,    45,    46,    47,
      68,    69,    43,    51,    14,    64,    34,    33,    46,    44,
      10,    59,     7,    64,    73,    34,    14,    68,    43,    14,
      10,    34,    14,    18,    48,    73,    14,    33,    18,    33,
      74,    55,    73,    34,     7,    34,    14,    51,    10,    74
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    54,    54,    55,    55,    55,    55,    56,    56,
      57,    57,    57,    57,    57,    57,    57,    57,    58,    58,
      58,    58,    59,    60,    60,    60,    61,    62,    63,    64,
      64,    64,    64,    64,    64,    65,    65,    65,    66,    66,
      66,    66,    67,    68,    68,    69,    69,    69,    70,    70,
      70,    71,    72,    73,    73,    74,    74,    75,    76
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     5,     4,     4,     3,     3,     3,     1,     5,     7,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     5,     7,     9,     6,     5,    14,     1,
       4,     7,     1,     1,     1,     1,     1,     1,     6,    10,
       9,    13,     9,     1,     3,     1,     1,     1,     5,     4,
       4,     3,     4,     1,     3,     3,     5,     6,     6
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
        yyerror (&yylloc, scanner, result, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner, result); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner, result);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, yyscan_t scanner, YYSTYPE *result)
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner, result);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, result); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, YYSTYPE *result)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* S: _KW_main _KW_deus _KW_do _KW_ceu Block  */
#line 176 "bnf.y"
                                           { (yyval.s_) = make_Sst((yyvsp[0].block_)); result->s_ = (yyval.s_); }
#line 1441 "Parser.c"
    break;

  case 3: /* Block: _LBRACE CMDS _RBRACE  */
#line 178 "bnf.y"
                             { (yyval.block_) = make_LBlock((yyvsp[-1].cmds_)); result->block_ = (yyval.block_); }
#line 1447 "Parser.c"
    break;

  case 4: /* CMDS: CMD  */
#line 180 "bnf.y"
           { (yyval.cmds_) = make_CMDSCMD((yyvsp[0].cmd_)); result->cmds_ = (yyval.cmds_); }
#line 1453 "Parser.c"
    break;

  case 5: /* CMDS: CMD CMDS  */
#line 181 "bnf.y"
             { (yyval.cmds_) = make_CMDS1((yyvsp[-1].cmd_), (yyvsp[0].cmds_)); result->cmds_ = (yyval.cmds_); }
#line 1459 "Parser.c"
    break;

  case 6: /* CMD: ATRIB  */
#line 183 "bnf.y"
            { (yyval.cmd_) = make_CMDATRIB((yyvsp[0].atrib_)); result->cmd_ = (yyval.cmd_); }
#line 1465 "Parser.c"
    break;

  case 7: /* CMD: EXP  */
#line 184 "bnf.y"
        { (yyval.cmd_) = make_CMDEXP((yyvsp[0].exp_)); result->cmd_ = (yyval.cmd_); }
#line 1471 "Parser.c"
    break;

  case 8: /* CMD: UAI  */
#line 185 "bnf.y"
        { (yyval.cmd_) = make_CMDUAI((yyvsp[0].uai_)); result->cmd_ = (yyval.cmd_); }
#line 1477 "Parser.c"
    break;

  case 9: /* CMD: QUANTO  */
#line 186 "bnf.y"
           { (yyval.cmd_) = make_CMDQUANTO((yyvsp[0].quanto_)); result->cmd_ = (yyval.cmd_); }
#line 1483 "Parser.c"
    break;

  case 10: /* CMD: PA  */
#line 187 "bnf.y"
       { (yyval.cmd_) = make_CMDPA((yyvsp[0].pa_)); result->cmd_ = (yyval.cmd_); }
#line 1489 "Parser.c"
    break;

  case 11: /* CMD: ZOIA  */
#line 188 "bnf.y"
         { (yyval.cmd_) = make_CMDZOIA((yyvsp[0].zoia_)); result->cmd_ = (yyval.cmd_); }
#line 1495 "Parser.c"
    break;

  case 12: /* CMD: VEMCA  */
#line 189 "bnf.y"
          { (yyval.cmd_) = make_CMDVEMCA((yyvsp[0].vemca_)); result->cmd_ = (yyval.cmd_); }
#line 1501 "Parser.c"
    break;

  case 13: /* CMD: PERMA  */
#line 190 "bnf.y"
          { (yyval.cmd_) = make_CMDPERMA((yyvsp[0].perma_)); result->cmd_ = (yyval.cmd_); }
#line 1507 "Parser.c"
    break;

  case 14: /* CMD: TREM  */
#line 191 "bnf.y"
         { (yyval.cmd_) = make_CMDTREM((yyvsp[0].trem_)); result->cmd_ = (yyval.cmd_); }
#line 1513 "Parser.c"
    break;

  case 15: /* CMD: FUNC  */
#line 192 "bnf.y"
         { (yyval.cmd_) = make_CMDFUNC((yyvsp[0].func_)); result->cmd_ = (yyval.cmd_); }
#line 1519 "Parser.c"
    break;

  case 16: /* CMD: VAILA  */
#line 193 "bnf.y"
          { (yyval.cmd_) = make_CMDVAILA((yyvsp[0].vaila_)); result->cmd_ = (yyval.cmd_); }
#line 1525 "Parser.c"
    break;

  case 17: /* CMD: LABEL  */
#line 194 "bnf.y"
          { (yyval.cmd_) = make_CMDLABEL((yyvsp[0].label_)); result->cmd_ = (yyval.cmd_); }
#line 1531 "Parser.c"
    break;

  case 18: /* CMD: STRUCT  */
#line 195 "bnf.y"
           { (yyval.cmd_) = make_CMDSTRUCT((yyvsp[0].struct_)); result->cmd_ = (yyval.cmd_); }
#line 1537 "Parser.c"
    break;

  case 19: /* CMD: APONTA  */
#line 196 "bnf.y"
           { (yyval.cmd_) = make_CMDAPONTA((yyvsp[0].aponta_)); result->cmd_ = (yyval.cmd_); }
#line 1543 "Parser.c"
    break;

  case 20: /* ATRIB: Type _IDENT_ _EQ VALUE _SEMI  */
#line 198 "bnf.y"
                                     { (yyval.atrib_) = make_ATRIB1((yyvsp[-4].type_), (yyvsp[-3]._string), (yyvsp[-1].value_)); result->atrib_ = (yyval.atrib_); }
#line 1549 "Parser.c"
    break;

  case 21: /* ATRIB: Type _IDENT_ _EQ EXP _SEMI  */
#line 199 "bnf.y"
                               { (yyval.atrib_) = make_ATRIB2((yyvsp[-4].type_), (yyvsp[-3]._string), (yyvsp[-1].exp_)); result->atrib_ = (yyval.atrib_); }
#line 1555 "Parser.c"
    break;

  case 22: /* ATRIB: _IDENT_ _EQ VALUE _SEMI  */
#line 200 "bnf.y"
                            { (yyval.atrib_) = make_ATRIB3((yyvsp[-3]._string), (yyvsp[-1].value_)); result->atrib_ = (yyval.atrib_); }
#line 1561 "Parser.c"
    break;

  case 23: /* ATRIB: _IDENT_ _EQ EXP _SEMI  */
#line 201 "bnf.y"
                          { (yyval.atrib_) = make_ATRIB4((yyvsp[-3]._string), (yyvsp[-1].exp_)); result->atrib_ = (yyval.atrib_); }
#line 1567 "Parser.c"
    break;

  case 24: /* EXP: EXP OPerA EXP  */
#line 203 "bnf.y"
                    { (yyval.exp_) = make_EXP1((yyvsp[-2].exp_), (yyvsp[-1].opera_), (yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 1573 "Parser.c"
    break;

  case 25: /* EXP: EXP OPerL EXP  */
#line 204 "bnf.y"
                  { (yyval.exp_) = make_EXP2((yyvsp[-2].exp_), (yyvsp[-1].operl_), (yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 1579 "Parser.c"
    break;

  case 26: /* EXP: _LPAREN EXP _RPAREN  */
#line 205 "bnf.y"
                        { (yyval.exp_) = make_EXP3((yyvsp[-1].exp_)); result->exp_ = (yyval.exp_); }
#line 1585 "Parser.c"
    break;

  case 27: /* EXP: VALUE  */
#line 206 "bnf.y"
          { (yyval.exp_) = make_EXPVALUE((yyvsp[0].value_)); result->exp_ = (yyval.exp_); }
#line 1591 "Parser.c"
    break;

  case 28: /* UAI: _KW_Uai _LPAREN OPL _RPAREN Block  */
#line 208 "bnf.y"
                                        { (yyval.uai_) = make_UAI1((yyvsp[-2].opl_), (yyvsp[0].block_)); result->uai_ = (yyval.uai_); }
#line 1597 "Parser.c"
    break;

  case 29: /* UAI: _KW_Uai _LPAREN OPL _RPAREN Block _KW_So Block  */
#line 209 "bnf.y"
                                                   { (yyval.uai_) = make_UAI2((yyvsp[-4].opl_), (yyvsp[-2].block_), (yyvsp[0].block_)); result->uai_ = (yyval.uai_); }
#line 1603 "Parser.c"
    break;

  case 30: /* OPerL: _GT  */
#line 211 "bnf.y"
            { (yyval.operl_) = make_OPerL1(); result->operl_ = (yyval.operl_); }
#line 1609 "Parser.c"
    break;

  case 31: /* OPerL: _GTEQ  */
#line 212 "bnf.y"
          { (yyval.operl_) = make_OPerL2(); result->operl_ = (yyval.operl_); }
#line 1615 "Parser.c"
    break;

  case 32: /* OPerL: _LT  */
#line 213 "bnf.y"
        { (yyval.operl_) = make_OPerL3(); result->operl_ = (yyval.operl_); }
#line 1621 "Parser.c"
    break;

  case 33: /* OPerL: _LDARROW  */
#line 214 "bnf.y"
             { (yyval.operl_) = make_OPerL4(); result->operl_ = (yyval.operl_); }
#line 1627 "Parser.c"
    break;

  case 34: /* OPerL: _DEQ  */
#line 215 "bnf.y"
         { (yyval.operl_) = make_OPerL5(); result->operl_ = (yyval.operl_); }
#line 1633 "Parser.c"
    break;

  case 35: /* OPerL: _LTGT  */
#line 216 "bnf.y"
          { (yyval.operl_) = make_OPerL6(); result->operl_ = (yyval.operl_); }
#line 1639 "Parser.c"
    break;

  case 36: /* OPerL: _BANGEQ  */
#line 217 "bnf.y"
            { (yyval.operl_) = make_OPerL7(); result->operl_ = (yyval.operl_); }
#line 1645 "Parser.c"
    break;

  case 37: /* OPerL: _DAMP  */
#line 218 "bnf.y"
          { (yyval.operl_) = make_OPerL8(); result->operl_ = (yyval.operl_); }
#line 1651 "Parser.c"
    break;

  case 38: /* OPerA: _SLASH  */
#line 220 "bnf.y"
               { (yyval.opera_) = make_OPerA1(); result->opera_ = (yyval.opera_); }
#line 1657 "Parser.c"
    break;

  case 39: /* OPerA: _STAR  */
#line 221 "bnf.y"
          { (yyval.opera_) = make_OPerA2(); result->opera_ = (yyval.opera_); }
#line 1663 "Parser.c"
    break;

  case 40: /* OPerA: _PLUS  */
#line 222 "bnf.y"
          { (yyval.opera_) = make_OPerA3(); result->opera_ = (yyval.opera_); }
#line 1669 "Parser.c"
    break;

  case 41: /* OPerA: _MINUS  */
#line 223 "bnf.y"
           { (yyval.opera_) = make_OPerA4(); result->opera_ = (yyval.opera_); }
#line 1675 "Parser.c"
    break;

  case 42: /* OPL: EXP OPerL EXP  */
#line 225 "bnf.y"
                    { (yyval.opl_) = make_OPL1((yyvsp[-2].exp_), (yyvsp[-1].operl_), (yyvsp[0].exp_)); result->opl_ = (yyval.opl_); }
#line 1681 "Parser.c"
    break;

  case 43: /* ZOIA: _KW_Zoia _LPAREN VALUE _RPAREN _SEMI  */
#line 227 "bnf.y"
                                            { (yyval.zoia_) = make_ZOIA1((yyvsp[-2].value_)); result->zoia_ = (yyval.zoia_); }
#line 1687 "Parser.c"
    break;

  case 44: /* ZOIA: _KW_Zoia _LPAREN VALUE _COMMA VALUE _RPAREN _SEMI  */
#line 228 "bnf.y"
                                                      { (yyval.zoia_) = make_ZOIA2((yyvsp[-4].value_), (yyvsp[-2].value_)); result->zoia_ = (yyval.zoia_); }
#line 1693 "Parser.c"
    break;

  case 45: /* ZOIA: _KW_Zoia _LPAREN VALUE _COMMA VALUE _COMMA VALUE _RPAREN _SEMI  */
#line 229 "bnf.y"
                                                                   { (yyval.zoia_) = make_ZOIA3((yyvsp[-6].value_), (yyvsp[-4].value_), (yyvsp[-2].value_)); result->zoia_ = (yyval.zoia_); }
#line 1699 "Parser.c"
    break;

  case 46: /* VEMCA: _KW_Vemca _LPAREN Type _IDENT_ _RPAREN _SEMI  */
#line 231 "bnf.y"
                                                     { (yyval.vemca_) = make_VEMCA1((yyvsp[-3].type_), (yyvsp[-2]._string)); result->vemca_ = (yyval.vemca_); }
#line 1705 "Parser.c"
    break;

  case 47: /* QUANTO: _KW_Quanto _LPAREN OPL _RPAREN Block  */
#line 233 "bnf.y"
                                              { (yyval.quanto_) = make_QUANTO1((yyvsp[-2].opl_), (yyvsp[0].block_)); result->quanto_ = (yyval.quanto_); }
#line 1711 "Parser.c"
    break;

  case 48: /* PA: _KW_Pa _LPAREN Type _IDENT_ _EQ VALUE _BAR OPL _BAR _IDENT_ _EQ EXP _RPAREN Block  */
#line 235 "bnf.y"
                                                                                       { (yyval.pa_) = make_PA1((yyvsp[-11].type_), (yyvsp[-10]._string), (yyvsp[-8].value_), (yyvsp[-6].opl_), (yyvsp[-4]._string), (yyvsp[-2].exp_), (yyvsp[0].block_)); result->pa_ = (yyval.pa_); }
#line 1717 "Parser.c"
    break;

  case 49: /* VALUE: _IDENT_  */
#line 237 "bnf.y"
                { (yyval.value_) = make_VALUEIdent((yyvsp[0]._string)); result->value_ = (yyval.value_); }
#line 1723 "Parser.c"
    break;

  case 50: /* VALUE: _IDENT_ _LBRACK EXP _RBRACK  */
#line 238 "bnf.y"
                                { (yyval.value_) = make_VALUE1((yyvsp[-3]._string), (yyvsp[-1].exp_)); result->value_ = (yyval.value_); }
#line 1729 "Parser.c"
    break;

  case 51: /* VALUE: _IDENT_ _LBRACK EXP _RBRACK _LBRACK EXP _RBRACK  */
#line 239 "bnf.y"
                                                    { (yyval.value_) = make_VALUE2((yyvsp[-6]._string), (yyvsp[-4].exp_), (yyvsp[-1].exp_)); result->value_ = (yyval.value_); }
#line 1735 "Parser.c"
    break;

  case 52: /* VALUE: _STRING_  */
#line 240 "bnf.y"
             { (yyval.value_) = make_VALUEString((yyvsp[0]._string)); result->value_ = (yyval.value_); }
#line 1741 "Parser.c"
    break;

  case 53: /* VALUE: _INTEGER_  */
#line 241 "bnf.y"
              { (yyval.value_) = make_VALUEInteger((yyvsp[0]._int)); result->value_ = (yyval.value_); }
#line 1747 "Parser.c"
    break;

  case 54: /* VALUE: _DOUBLE_  */
#line 242 "bnf.y"
             { (yyval.value_) = make_VALUEDouble((yyvsp[0]._double)); result->value_ = (yyval.value_); }
#line 1753 "Parser.c"
    break;

  case 55: /* Type: _KW_intero  */
#line 244 "bnf.y"
                  { (yyval.type_) = make_Type_intero(); result->type_ = (yyval.type_); }
#line 1759 "Parser.c"
    break;

  case 56: /* Type: _KW_floati  */
#line 245 "bnf.y"
               { (yyval.type_) = make_Type_floati(); result->type_ = (yyval.type_); }
#line 1765 "Parser.c"
    break;

  case 57: /* Type: _KW_stringo  */
#line 246 "bnf.y"
                { (yyval.type_) = make_Type_stringo(); result->type_ = (yyval.type_); }
#line 1771 "Parser.c"
    break;

  case 58: /* TREM: Type _IDENT_ _LBRACK _INTEGER_ _RBRACK _SEMI  */
#line 248 "bnf.y"
                                                    { (yyval.trem_) = make_TREM1((yyvsp[-5].type_), (yyvsp[-4]._string), (yyvsp[-2]._int)); result->trem_ = (yyval.trem_); }
#line 1777 "Parser.c"
    break;

  case 59: /* TREM: Type _IDENT_ _LBRACK _INTEGER_ _RBRACK _EQ _LBRACK ConjValues _RBRACK _SEMI  */
#line 249 "bnf.y"
                                                                                { (yyval.trem_) = make_TREM2((yyvsp[-9].type_), (yyvsp[-8]._string), (yyvsp[-6]._int), (yyvsp[-2].conjvalues_)); result->trem_ = (yyval.trem_); }
#line 1783 "Parser.c"
    break;

  case 60: /* TREM: Type _IDENT_ _LBRACK _INTEGER_ _RBRACK _LBRACK _INTEGER_ _RBRACK _SEMI  */
#line 250 "bnf.y"
                                                                           { (yyval.trem_) = make_TREM3((yyvsp[-8].type_), (yyvsp[-7]._string), (yyvsp[-5]._int), (yyvsp[-2]._int)); result->trem_ = (yyval.trem_); }
#line 1789 "Parser.c"
    break;

  case 61: /* TREM: Type _IDENT_ _LBRACK _INTEGER_ _RBRACK _LBRACK _INTEGER_ _RBRACK _EQ _LBRACK ConjValues2D _RBRACK _SEMI  */
#line 251 "bnf.y"
                                                                                                            { (yyval.trem_) = make_TREM4((yyvsp[-12].type_), (yyvsp[-11]._string), (yyvsp[-9]._int), (yyvsp[-6]._int), (yyvsp[-2].conjvalues2d_)); result->trem_ = (yyval.trem_); }
#line 1795 "Parser.c"
    break;

  case 62: /* STRUCT: _KW_Istrut _LBRACK _INTEGER_ _RBRACK _EQ _LBRACE HeteroElements _RBRACE _SEMI  */
#line 253 "bnf.y"
                                                                                       { (yyval.struct_) = make_STRUCT1((yyvsp[-6]._int), (yyvsp[-2].heteroelements_)); result->struct_ = (yyval.struct_); }
#line 1801 "Parser.c"
    break;

  case 63: /* HeteroElements: HeteroElement  */
#line 255 "bnf.y"
                               { (yyval.heteroelements_) = make_HeteroElementsHeteroElement((yyvsp[0].heteroelement_)); result->heteroelements_ = (yyval.heteroelements_); }
#line 1807 "Parser.c"
    break;

  case 64: /* HeteroElements: HeteroElement _COMMA HeteroElements  */
#line 256 "bnf.y"
                                        { (yyval.heteroelements_) = make_HeteroElements1((yyvsp[-2].heteroelement_), (yyvsp[0].heteroelements_)); result->heteroelements_ = (yyval.heteroelements_); }
#line 1813 "Parser.c"
    break;

  case 65: /* HeteroElement: _STRING_  */
#line 258 "bnf.y"
                         { (yyval.heteroelement_) = make_HeteroElementString((yyvsp[0]._string)); result->heteroelement_ = (yyval.heteroelement_); }
#line 1819 "Parser.c"
    break;

  case 66: /* HeteroElement: _DOUBLE_  */
#line 259 "bnf.y"
             { (yyval.heteroelement_) = make_HeteroElementDouble((yyvsp[0]._double)); result->heteroelement_ = (yyval.heteroelement_); }
#line 1825 "Parser.c"
    break;

  case 67: /* HeteroElement: _INTEGER_  */
#line 260 "bnf.y"
              { (yyval.heteroelement_) = make_HeteroElementInteger((yyvsp[0]._int)); result->heteroelement_ = (yyval.heteroelement_); }
#line 1831 "Parser.c"
    break;

  case 68: /* FUNC: _KW_23 _IDENT_ _LPAREN _RPAREN Block  */
#line 262 "bnf.y"
                                            { (yyval.func_) = make_FUNC1((yyvsp[-3]._string), (yyvsp[0].block_)); result->func_ = (yyval.func_); }
#line 1837 "Parser.c"
    break;

  case 69: /* FUNC: _IDENT_ _LPAREN _RPAREN _SEMI  */
#line 263 "bnf.y"
                                  { (yyval.func_) = make_FUNC2((yyvsp[-3]._string)); result->func_ = (yyval.func_); }
#line 1843 "Parser.c"
    break;

  case 70: /* FUNC: _IDENT_ _LPAREN VALUE _RPAREN  */
#line 264 "bnf.y"
                                  { (yyval.func_) = make_FUNC3((yyvsp[-3]._string), (yyvsp[-1].value_)); result->func_ = (yyval.func_); }
#line 1849 "Parser.c"
    break;

  case 71: /* VAILA: _KW_Vaila _INTEGER_ _SEMI  */
#line 266 "bnf.y"
                                  { (yyval.vaila_) = make_VAILA1((yyvsp[-1]._int)); result->vaila_ = (yyval.vaila_); }
#line 1855 "Parser.c"
    break;

  case 72: /* LABEL: _KW_LABEL _INTEGER_ _COLON Block  */
#line 268 "bnf.y"
                                         { (yyval.label_) = make_LABEL1((yyvsp[-2]._int), (yyvsp[0].block_)); result->label_ = (yyval.label_); }
#line 1861 "Parser.c"
    break;

  case 73: /* ConjValues: VALUE  */
#line 270 "bnf.y"
                   { (yyval.conjvalues_) = make_ConjValuesVALUE((yyvsp[0].value_)); result->conjvalues_ = (yyval.conjvalues_); }
#line 1867 "Parser.c"
    break;

  case 74: /* ConjValues: VALUE _COMMA ConjValues  */
#line 271 "bnf.y"
                            { (yyval.conjvalues_) = make_ConjValues1((yyvsp[-2].value_), (yyvsp[0].conjvalues_)); result->conjvalues_ = (yyval.conjvalues_); }
#line 1873 "Parser.c"
    break;

  case 75: /* ConjValues2D: _LBRACK ConjValues _RBRACK  */
#line 273 "bnf.y"
                                          { (yyval.conjvalues2d_) = make_ConjValues2D1((yyvsp[-1].conjvalues_)); result->conjvalues2d_ = (yyval.conjvalues2d_); }
#line 1879 "Parser.c"
    break;

  case 76: /* ConjValues2D: _LBRACK ConjValues _RBRACK _COMMA ConjValues2D  */
#line 274 "bnf.y"
                                                   { (yyval.conjvalues2d_) = make_ConjValues2D2((yyvsp[-3].conjvalues_), (yyvsp[0].conjvalues2d_)); result->conjvalues2d_ = (yyval.conjvalues2d_); }
#line 1885 "Parser.c"
    break;

  case 77: /* PERMA: _KW_Perma Type _IDENT_ _EQ VALUE _SEMI  */
#line 276 "bnf.y"
                                               { (yyval.perma_) = make_LConst((yyvsp[-4].type_), (yyvsp[-3]._string), (yyvsp[-1].value_)); result->perma_ = (yyval.perma_); }
#line 1891 "Parser.c"
    break;

  case 78: /* APONTA: Type _STAR _IDENT_ _EQ _IDENT_ _SEMI  */
#line 278 "bnf.y"
                                              { (yyval.aponta_) = make_LPoint((yyvsp[-5].type_), (yyvsp[-3]._string), (yyvsp[-1]._string)); result->aponta_ = (yyval.aponta_); }
#line 1897 "Parser.c"
    break;


#line 1901 "Parser.c"

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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, scanner, result, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc, scanner, result);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
  yyerror (&yylloc, scanner, result, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, scanner, result);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 281 "bnf.y"



/* Entrypoint: parse S from file. */
S pS(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.s_;
  }
}

/* Entrypoint: parse S from string. */
S psS(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.s_;
  }
}

/* Entrypoint: parse Block from file. */
Block pBlock(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.block_;
  }
}

/* Entrypoint: parse Block from string. */
Block psBlock(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.block_;
  }
}

/* Entrypoint: parse CMDS from file. */
CMDS pCMDS(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.cmds_;
  }
}

/* Entrypoint: parse CMDS from string. */
CMDS psCMDS(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.cmds_;
  }
}

/* Entrypoint: parse CMD from file. */
CMD pCMD(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.cmd_;
  }
}

/* Entrypoint: parse CMD from string. */
CMD psCMD(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.cmd_;
  }
}

/* Entrypoint: parse ATRIB from file. */
ATRIB pATRIB(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.atrib_;
  }
}

/* Entrypoint: parse ATRIB from string. */
ATRIB psATRIB(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.atrib_;
  }
}

/* Entrypoint: parse EXP from file. */
EXP pEXP(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse EXP from string. */
EXP psEXP(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse UAI from file. */
UAI pUAI(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.uai_;
  }
}

/* Entrypoint: parse UAI from string. */
UAI psUAI(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.uai_;
  }
}

/* Entrypoint: parse OPerL from file. */
OPerL pOPerL(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.operl_;
  }
}

/* Entrypoint: parse OPerL from string. */
OPerL psOPerL(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.operl_;
  }
}

/* Entrypoint: parse OPerA from file. */
OPerA pOPerA(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.opera_;
  }
}

/* Entrypoint: parse OPerA from string. */
OPerA psOPerA(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.opera_;
  }
}

/* Entrypoint: parse OPL from file. */
OPL pOPL(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.opl_;
  }
}

/* Entrypoint: parse OPL from string. */
OPL psOPL(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.opl_;
  }
}

/* Entrypoint: parse ZOIA from file. */
ZOIA pZOIA(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.zoia_;
  }
}

/* Entrypoint: parse ZOIA from string. */
ZOIA psZOIA(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.zoia_;
  }
}

/* Entrypoint: parse VEMCA from file. */
VEMCA pVEMCA(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.vemca_;
  }
}

/* Entrypoint: parse VEMCA from string. */
VEMCA psVEMCA(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.vemca_;
  }
}

/* Entrypoint: parse QUANTO from file. */
QUANTO pQUANTO(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.quanto_;
  }
}

/* Entrypoint: parse QUANTO from string. */
QUANTO psQUANTO(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.quanto_;
  }
}

/* Entrypoint: parse PA from file. */
PA pPA(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.pa_;
  }
}

/* Entrypoint: parse PA from string. */
PA psPA(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.pa_;
  }
}

/* Entrypoint: parse VALUE from file. */
VALUE pVALUE(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.value_;
  }
}

/* Entrypoint: parse VALUE from string. */
VALUE psVALUE(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.value_;
  }
}

/* Entrypoint: parse Type from file. */
Type pType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type from string. */
Type psType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse TREM from file. */
TREM pTREM(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.trem_;
  }
}

/* Entrypoint: parse TREM from string. */
TREM psTREM(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.trem_;
  }
}

/* Entrypoint: parse STRUCT from file. */
STRUCT pSTRUCT(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.struct_;
  }
}

/* Entrypoint: parse STRUCT from string. */
STRUCT psSTRUCT(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.struct_;
  }
}

/* Entrypoint: parse HeteroElements from file. */
HeteroElements pHeteroElements(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.heteroelements_;
  }
}

/* Entrypoint: parse HeteroElements from string. */
HeteroElements psHeteroElements(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.heteroelements_;
  }
}

/* Entrypoint: parse HeteroElement from file. */
HeteroElement pHeteroElement(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.heteroelement_;
  }
}

/* Entrypoint: parse HeteroElement from string. */
HeteroElement psHeteroElement(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.heteroelement_;
  }
}

/* Entrypoint: parse FUNC from file. */
FUNC pFUNC(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.func_;
  }
}

/* Entrypoint: parse FUNC from string. */
FUNC psFUNC(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.func_;
  }
}

/* Entrypoint: parse VAILA from file. */
VAILA pVAILA(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.vaila_;
  }
}

/* Entrypoint: parse VAILA from string. */
VAILA psVAILA(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.vaila_;
  }
}

/* Entrypoint: parse LABEL from file. */
LABEL pLABEL(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.label_;
  }
}

/* Entrypoint: parse LABEL from string. */
LABEL psLABEL(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.label_;
  }
}

/* Entrypoint: parse ConjValues from file. */
ConjValues pConjValues(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.conjvalues_;
  }
}

/* Entrypoint: parse ConjValues from string. */
ConjValues psConjValues(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.conjvalues_;
  }
}

/* Entrypoint: parse ConjValues2D from file. */
ConjValues2D pConjValues2D(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.conjvalues2d_;
  }
}

/* Entrypoint: parse ConjValues2D from string. */
ConjValues2D psConjValues2D(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.conjvalues2d_;
  }
}

/* Entrypoint: parse PERMA from file. */
PERMA pPERMA(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.perma_;
  }
}

/* Entrypoint: parse PERMA from string. */
PERMA psPERMA(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.perma_;
  }
}

/* Entrypoint: parse APONTA from file. */
APONTA pAPONTA(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.aponta_;
  }
}

/* Entrypoint: parse APONTA from string. */
APONTA psAPONTA(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = bnf__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = bnf__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  bnf__delete_buffer(buf, scanner);
  bnf_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.aponta_;
  }
}



