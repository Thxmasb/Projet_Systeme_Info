/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "syntaxe.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "TDS.h"
    int yyerror();
    int yylex();
    int valeur_temp[128];
    int indexTemp=250;
    int compteurInstruction=0;
    int compteurDebutWhile=0;
    FILE* fichierASM = NULL;


#line 81 "syntaxe.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "syntaxe.tab.h".  */
#ifndef YY_YY_SYNTAXE_TAB_H_INCLUDED
# define YY_YY_SYNTAXE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    t_MAIN = 258,
    t_AO = 259,
    t_AF = 260,
    t_CONST = 261,
    t_INT = 262,
    t_ID = 263,
    t_PLUS = 264,
    t_MINUS = 265,
    t_MUL = 266,
    t_DIV = 267,
    t_EQUAL = 268,
    t_PO = 269,
    t_PF = 270,
    t_SPACE = 271,
    t_COMMA = 272,
    t_NL = 273,
    t_DC = 274,
    t_PRINTF = 275,
    t_DECIMALE = 276,
    t_IF = 277,
    t_INF = 278,
    t_SUP = 279,
    t_ELSE = 280,
    t_WHILE = 281
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "syntaxe.y" /* yacc.c:355  */

    char * variable;
    int nombre;

#line 153 "syntaxe.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAXE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 170 "syntaxe.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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
#define YYLAST   114

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  27
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  40
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  88

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   281

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      25,    26
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    47,    47,    46,    63,    63,    63,    67,    67,    67,
      71,    75,    76,    80,    81,    85,    86,    90,    96,    97,
     102,   107,   111,   114,   121,   122,   129,   130,   131,   135,
     136,   137,   138,   139,   143,   147,   156,   157,   158,   159,
     160
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "t_MAIN", "t_AO", "t_AF", "t_CONST",
  "t_INT", "t_ID", "t_PLUS", "t_MINUS", "t_MUL", "t_DIV", "t_EQUAL",
  "t_PO", "t_PF", "t_SPACE", "t_COMMA", "t_NL", "t_DC", "t_PRINTF",
  "t_DECIMALE", "t_IF", "t_INF", "t_SUP", "t_ELSE", "t_WHILE", "$accept",
  "Prog", "$@1", "If", "$@2", "$@3", "While", "$@4", "$@5", "Body",
  "BodyIF", "Declarations", "Instructions", "Declaration", "Instruction",
  "SuiteIf", "Condition", "Expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281
};
# endif

#define YYPACT_NINF -69

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-69)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      20,   -69,    34,    36,   -69,    43,    67,    24,    24,    62,
      73,     2,    38,    66,   -69,   -69,    68,    76,    78,    79,
     -69,   -69,   -69,     2,    59,    74,   -69,   -69,    52,    52,
      52,    52,   -69,   -69,   -69,   -69,    52,   -69,    65,    -4,
      80,    30,    81,    37,    52,    52,    52,    52,   -69,    72,
     -69,    84,    48,    51,   -69,   -69,    56,    56,   -69,   -69,
     -69,    90,    52,    52,    77,    52,    77,    94,     7,    77,
      77,    77,     7,    95,     2,   -69,   -69,   -69,   -69,    96,
      82,   -69,    -1,   -69,     7,   -69,    97,   -69
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,    13,    18,    17,     3,     0,     0,     0,     0,
      24,    25,    10,    15,     0,     0,    21,    14,     0,     0,
       0,     0,    16,    19,    20,    35,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     0,
       4,     0,     0,     0,     7,    40,    36,    37,    38,    39,
      22,     0,     0,     0,    30,     0,    31,     0,     0,    29,
      32,    33,     0,     0,     0,    12,     8,     5,    11,     0,
      28,     9,     0,     6,     0,    27,     0,    26
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -69,   -69,   -69,    17,   -69,   -69,   -69,   -69,   -69,   -69,
     -68,    25,   -11,    98,   -69,   -69,    83,   -27
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    20,    61,    80,    21,    67,    79,    10,
      73,    74,    75,    12,    23,    83,    40,    41
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      22,    38,    39,    84,    76,    44,    45,    46,    47,    43,
      16,    49,    32,     8,     9,    16,    86,    56,    57,    58,
      59,    18,    17,     1,    18,    64,    66,    17,    19,    18,
       8,     9,    11,    19,     4,    69,    70,    27,    71,    44,
      45,    46,    47,    51,     8,     9,    44,    45,    46,    47,
       5,    24,    55,    52,    53,    25,    35,    26,     6,    35,
      35,    63,    36,    78,    65,    36,    36,    46,    47,    37,
      14,     7,    37,    37,    44,    45,    46,    47,    15,    24,
      33,    28,    34,    25,    48,    26,    44,    45,    46,    47,
      29,    60,    30,    31,    68,    50,    54,    62,    72,    85,
      77,    81,    87,     0,     0,     0,    13,    82,     0,     0,
       0,     0,     0,     0,    42
};

static const yytype_int8 yycheck[] =
{
      11,    28,    29,     4,    72,     9,    10,    11,    12,    36,
       8,    15,    23,     6,     7,     8,    84,    44,    45,    46,
      47,    22,    20,     3,    22,    52,    53,    20,    26,    22,
       6,     7,     7,    26,     0,    62,    63,    12,    65,     9,
      10,    11,    12,    13,     6,     7,     9,    10,    11,    12,
      14,    13,    15,    23,    24,    17,     8,    19,    15,     8,
       8,    13,    14,    74,    13,    14,    14,    11,    12,    21,
       8,     4,    21,    21,     9,    10,    11,    12,     5,    13,
      21,    13,     8,    17,    19,    19,     9,    10,    11,    12,
      14,    19,    14,    14,     4,    15,    15,    13,     4,    82,
       5,     5,     5,    -1,    -1,    -1,     8,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,     0,    14,    15,     4,     6,     7,
      36,    38,    40,    40,     8,     5,     8,    20,    22,    26,
      30,    33,    39,    41,    13,    17,    19,    38,    13,    14,
      14,    14,    39,    21,     8,     8,    14,    21,    44,    44,
      43,    44,    43,    44,     9,    10,    11,    12,    19,    15,
      15,    13,    23,    24,    15,    15,    44,    44,    44,    44,
      19,    31,    13,    13,    44,    13,    44,    34,     4,    44,
      44,    44,     4,    37,    38,    39,    37,     5,    39,    35,
      32,     5,    25,    42,     4,    30,    37,     5
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    27,    29,    28,    31,    32,    30,    34,    35,    33,
      36,    37,    37,    38,    38,    39,    39,    40,    40,    40,
      40,    40,    41,    41,    41,    41,    42,    42,    42,    43,
      43,    43,    43,    43,    44,    44,    44,    44,    44,    44,
      44
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     7,     0,     0,    10,     0,     0,     9,
       2,     2,     1,     1,     2,     1,     2,     2,     2,     3,
       3,     2,     5,     4,     1,     1,     4,     2,     0,     4,
       3,     3,     4,     4,     1,     1,     3,     3,     3,     3,
       3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 47 "syntaxe.y" /* yacc.c:1646  */
    {
            
            fichierASM = fopen("asm.txt", "w+");

            if (fichierASM == NULL)
            {
                printf("Impossible d'ouvrir le fichierASMASM");
                exit(1);
            }        
  
        }
#line 1315 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 59 "syntaxe.y" /* yacc.c:1646  */
    {printf("J'ai trouvé un programme\n");}
#line 1321 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 63 "syntaxe.y" /* yacc.c:1646  */
    {compteurInstruction++;(yyvsp[-3].nombre)=ftell(fichierASM); printf("JMF %d %d\n",(yyvsp[-1].nombre),(yyvsp[-3].nombre)); fprintf(fichierASM, "JMF %d %d",(yyvsp[-1].nombre),(yyvsp[-3].nombre));}
#line 1327 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 63 "syntaxe.y" /* yacc.c:1646  */
    { fseek(fichierASM,(yyvsp[-7].nombre),SEEK_SET); fprintf(fichierASM, "JMF %d %d\n",(yyvsp[-5].nombre),compteurInstruction+1);fseek(fichierASM,0,SEEK_END);}
#line 1333 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 63 "syntaxe.y" /* yacc.c:1646  */
    {printf("J'ai un if\n");}
#line 1339 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 67 "syntaxe.y" /* yacc.c:1646  */
    {compteurDebutWhile=compteurInstruction;compteurInstruction++;(yyvsp[-3].nombre)=ftell(fichierASM); printf("JMF %d %d\n",(yyvsp[-1].nombre),(yyvsp[-3].nombre)); fprintf(fichierASM, "JMF %d %d",(yyvsp[-1].nombre),(yyvsp[-3].nombre));}
#line 1345 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 67 "syntaxe.y" /* yacc.c:1646  */
    {fprintf(fichierASM, "JMP %d\n",compteurDebutWhile);}
#line 1351 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 67 "syntaxe.y" /* yacc.c:1646  */
    {fseek(fichierASM,(yyvsp[-8].nombre),SEEK_SET); fprintf(fichierASM, "JMF %d %d\n",(yyvsp[-6].nombre),compteurInstruction+2);fseek(fichierASM,0,SEEK_END); printf("J'ai un while\n");}
#line 1357 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 71 "syntaxe.y" /* yacc.c:1646  */
    {printf("J'ai un body\n");}
#line 1363 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 75 "syntaxe.y" /* yacc.c:1646  */
    {printf("J'ai un body\n");}
#line 1369 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 76 "syntaxe.y" /* yacc.c:1646  */
    {printf("J'ai un body\n");}
#line 1375 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 80 "syntaxe.y" /* yacc.c:1646  */
    {printf("J'ai trouvé une declaration\n");}
#line 1381 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 81 "syntaxe.y" /* yacc.c:1646  */
    {printf("J'ai trouvé une autre declaration\n");}
#line 1387 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 85 "syntaxe.y" /* yacc.c:1646  */
    {printf("J'ai trouvé une Instruction\n");}
#line 1393 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 86 "syntaxe.y" /* yacc.c:1646  */
    {printf("J'ai trouvé une autre Instruction\n");}
#line 1399 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 90 "syntaxe.y" /* yacc.c:1646  */
    {(yyval.variable)=(yyvsp[0].variable);
         if(indexSymbole((yyvsp[0].variable))!=-1){
            printf("Symbole déja ajouté\n");
         }
         else{printf("Symbole ajouté %s\n",(yyvsp[0].variable));ajouterSymbole((yyvsp[0].variable),0);}
         }
#line 1410 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 96 "syntaxe.y" /* yacc.c:1646  */
    {printf("J'ai trouvé une const\n");}
#line 1416 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 97 "syntaxe.y" /* yacc.c:1646  */
    {compteurInstruction++;
                                    printf("J'ai trouvé une déclaration avec valeur %s = %d\n",(yyvsp[-2].variable),(yyvsp[0].nombre));initialiserSymbole((yyvsp[-2].variable));
                                    printf("J'ajoute sa valeur à l'adresse %d\n",indexSymbole((yyvsp[-2].variable)));
                                    printf("AFC %d %d\n",indexSymbole((yyvsp[-2].variable)),(yyvsp[0].nombre));fprintf(fichierASM,"AFC %d %d\n",indexSymbole((yyvsp[-2].variable)),(yyvsp[0].nombre));
                                    }
#line 1426 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 102 "syntaxe.y" /* yacc.c:1646  */
    {printf("J'ai une autre déclarations dans cette ligne : %s\n",(yyvsp[0].variable)); (yyval.variable)=(yyvsp[0].variable);
                                if(indexSymbole((yyvsp[0].variable))!=-1){
                                    printf("Symbole déja ajouté\n");
                                 }
                                 else{printf("Symbole ajouté %s\n",(yyvsp[0].variable));ajouterSymbole((yyvsp[0].variable),0);}}
#line 1436 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 107 "syntaxe.y" /* yacc.c:1646  */
    {printf("J'ai fini la ligne de déclarations\n");}
#line 1442 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 111 "syntaxe.y" /* yacc.c:1646  */
    {compteurInstruction++;
                                        printf("J'ai trouvé un printf de la valeur qui est à l'adresse %d\n",(yyvsp[-2].nombre));
                                        fprintf(fichierASM,"PRI %d\n",(yyvsp[-2].nombre));}
#line 1450 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 114 "syntaxe.y" /* yacc.c:1646  */
    {compteurInstruction++;
                                  printf("J'ai trouvé un calcul sur l'ID %s\n",(yyvsp[-3].variable));
                                  printf("COP %d %d\n",indexSymbole((yyvsp[-3].variable)),(yyvsp[-1].nombre));
                                  fprintf(fichierASM,"COP %d %d\n",indexSymbole((yyvsp[-3].variable)),(yyvsp[-1].nombre));
                                  indexTemp=250;
                                  initialiserSymbole((yyvsp[-3].variable));
                                 }
#line 1462 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 129 "syntaxe.y" /* yacc.c:1646  */
    {printf("J'ai un else\n");}
#line 1468 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 130 "syntaxe.y" /* yacc.c:1646  */
    {printf("J'ai un else if\n");}
#line 1474 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 131 "syntaxe.y" /* yacc.c:1646  */
    {printf("J'ai fini le if\n");}
#line 1480 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 135 "syntaxe.y" /* yacc.c:1646  */
    {compteurInstruction++;printf("J'ai trouvé une condition egal egal\n");printf("EQU %d %d %d\n",indexTemp-=1,(yyvsp[-3].nombre),(yyvsp[0].nombre));fprintf(fichierASM,"EQU %d %d %d\n",indexTemp,(yyvsp[-3].nombre),(yyvsp[0].nombre));(yyval.nombre)=indexTemp;}
#line 1486 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 136 "syntaxe.y" /* yacc.c:1646  */
    {compteurInstruction++;printf("J'ai trouvé une condition <\n");printf("INF %d %d %d\n",indexTemp-=1,(yyvsp[-2].nombre),(yyvsp[0].nombre));fprintf(fichierASM,"INF %d %d %d\n",indexTemp,(yyvsp[-2].nombre),(yyvsp[0].nombre));(yyval.nombre)=indexTemp;}
#line 1492 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 137 "syntaxe.y" /* yacc.c:1646  */
    {compteurInstruction++;printf("J'ai trouvé une condition >\n");printf("SUP %d %d %d\n",indexTemp-=1,(yyvsp[-2].nombre),(yyvsp[0].nombre));fprintf(fichierASM,"SUP %d %d %d\n",indexTemp,(yyvsp[-2].nombre),(yyvsp[0].nombre));(yyval.nombre)=indexTemp;}
#line 1498 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 138 "syntaxe.y" /* yacc.c:1646  */
    {printf("J'ai trouvé une condition <=\n");}
#line 1504 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 139 "syntaxe.y" /* yacc.c:1646  */
    {printf("J'ai trouvé une condition >=\n");}
#line 1510 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 143 "syntaxe.y" /* yacc.c:1646  */
    {compteurInstruction++;printf("Decimale: %d\n",(yyvsp[0].nombre));
                   printf("AFC %d %d\n", indexTemp-=1,(yyvsp[0].nombre));fprintf(fichierASM,"AFC %d %d\n", indexTemp,(yyvsp[0].nombre));
                   (yyval.nombre)=indexTemp;        
                  }
#line 1519 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 147 "syntaxe.y" /* yacc.c:1646  */
    {printf("Id : %s\n",(yyvsp[0].variable)); 
               if(initialSymbole((yyvsp[0].variable))){
                    (yyval.nombre)=indexSymbole((yyvsp[0].variable));
                    printf("La variable %s est initialisée\n",(yyvsp[0].variable));
                    }
               else{
                    printf("La variable n'est pas initialisée calcul impossible\n");
               }
             }
#line 1533 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 156 "syntaxe.y" /* yacc.c:1646  */
    {compteurInstruction++;printf("J'ai trouvé une addition \n");(yyval.nombre)=indexTemp;printf("ADD %d %d %d\n",indexTemp,(yyvsp[-2].nombre),(yyvsp[0].nombre));fprintf(fichierASM,"ADD %d %d %d\n",indexTemp,(yyvsp[-2].nombre),(yyvsp[0].nombre));}
#line 1539 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 157 "syntaxe.y" /* yacc.c:1646  */
    {compteurInstruction++;printf("J'ai trouvé une soustraction\n");(yyval.nombre)=indexTemp;printf("SOU %d %d %d\n",indexTemp,(yyvsp[-2].nombre),(yyvsp[0].nombre));fprintf(fichierASM,"SOU %d %d %d\n",indexTemp,(yyvsp[-2].nombre),(yyvsp[0].nombre));}
#line 1545 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 158 "syntaxe.y" /* yacc.c:1646  */
    {compteurInstruction++;printf("J'ai trouvé une multiplication\n");(yyval.nombre)=indexTemp;printf("MUL %d %d %d\n",indexTemp,(yyvsp[-2].nombre),(yyvsp[0].nombre));fprintf(fichierASM,"MUL %d %d %d\n",indexTemp,(yyvsp[-2].nombre),(yyvsp[0].nombre));}
#line 1551 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 159 "syntaxe.y" /* yacc.c:1646  */
    {compteurInstruction++;printf("J'ai trouvé une division\n");(yyval.nombre)=indexTemp;printf("DIV %d %d %d\n",indexTemp,(yyvsp[-2].nombre),(yyvsp[0].nombre));fprintf(fichierASM,"DIV %d %d %d\n",indexTemp,(yyvsp[-2].nombre),(yyvsp[0].nombre));}
#line 1557 "syntaxe.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 160 "syntaxe.y" /* yacc.c:1646  */
    {printf("J'ai trouvé une exp entre parentheses\n");(yyval.nombre)=indexTemp;}
#line 1563 "syntaxe.tab.c" /* yacc.c:1646  */
    break;


#line 1567 "syntaxe.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 163 "syntaxe.y" /* yacc.c:1906  */

int main(){ 
    return  yyparse(); 
}

int yyerror(char *s){ 
    fprintf(stderr,"%s\n",s); 
}
