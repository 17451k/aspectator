/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1

/* Substitute the variable and function names.  */
#define yyparse ldv_yyparse
#define yylex   ldv_yylex
#define yyerror ldv_yyerror
#define yylval  ldv_yylval
#define yychar  ldv_yychar
#define yydebug ldv_yydebug
#define yynerrs ldv_yynerrs
#define yylloc ldv_yylloc

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LDV_FILE = 258,
     LDV_BODY = 259,
     LDV_ID = 260,
     LDV_INT_NUMB = 261,
     LDV_TYPEDEF = 262,
     LDV_EXTERN = 263,
     LDV_STATIC = 264,
     LDV_AUTO = 265,
     LDV_REGISTER = 266,
     LDV_VOID = 267,
     LDV_CHAR = 268,
     LDV_INT = 269,
     LDV_FLOAT = 270,
     LDV_DOUBLE = 271,
     LDV_BOOL = 272,
     LDV_COMPLEX = 273,
     LDV_SHORT = 274,
     LDV_LONG = 275,
     LDV_SIGNED = 276,
     LDV_UNSIGNED = 277,
     LDV_STRUCT = 278,
     LDV_UNION = 279,
     LDV_ENUM = 280,
     LDV_TYPEDEF_NAME = 281,
     LDV_CONST = 282,
     LDV_RESTRICT = 283,
     LDV_VOLATILE = 284,
     LDV_INLINE = 285,
     LDV_AND = 286,
     LDV_ANY_PARAMS = 287,
     LDV_ELLIPSIS = 288,
     LDV_OR = 289
   };
#endif
/* Tokens.  */
#define LDV_FILE 258
#define LDV_BODY 259
#define LDV_ID 260
#define LDV_INT_NUMB 261
#define LDV_TYPEDEF 262
#define LDV_EXTERN 263
#define LDV_STATIC 264
#define LDV_AUTO 265
#define LDV_REGISTER 266
#define LDV_VOID 267
#define LDV_CHAR 268
#define LDV_INT 269
#define LDV_FLOAT 270
#define LDV_DOUBLE 271
#define LDV_BOOL 272
#define LDV_COMPLEX 273
#define LDV_SHORT 274
#define LDV_LONG 275
#define LDV_SIGNED 276
#define LDV_UNSIGNED 277
#define LDV_STRUCT 278
#define LDV_UNION 279
#define LDV_ENUM 280
#define LDV_TYPEDEF_NAME 281
#define LDV_CONST 282
#define LDV_RESTRICT 283
#define LDV_VOLATILE 284
#define LDV_INLINE 285
#define LDV_AND 286
#define LDV_ANY_PARAMS 287
#define LDV_ELLIPSIS 288
#define LDV_OR 289




/* Copy the first part of user declarations.  */
#line 25 "ldv-aspect-parser.y"


/* For ISALPHA, ISDIGIT, etc. functions. */
#include <safe-ctype.h>

/* General gcc core types and functions. */
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"

/* For error functions. */
#include "diagnostic-core.h"
#include "toplev.h"

#include "ldv-aspect-parser.h"
#include "ldv-aspect-types.h"
#include "ldv-core.h"
#include "ldv-cpp-pointcut-matcher.h"
#include "ldv-io.h"


#define LDV_BODY_PATTERN_ARG                "arg"
#define LDV_BODY_PATTERN_ARG_TYPE           "arg_type"
#define LDV_BODY_PATTERN_ARG_SIZE           "arg_size"
#define LDV_BODY_PATTERN_ARG_VALUE          "arg_value"
#define LDV_BODY_PATTERN_ASPECT_FUNC_NAME   "aspect_func_name"
#define LDV_BODY_PATTERN_FUNC_NAME          "func_name"
#define LDV_BODY_PATTERN_PROCEED            "proceed"
#define LDV_BODY_PATTERN_RES                "res"
#define LDV_BODY_PATTERN_RET_TYPE           "ret_type"

#define ldv_set_first_line(val)    yylloc.first_line = (val); ldv_print_info (LDV_INFO_LEX, "%d: first line is \"%d\"", __LINE__, yylloc.first_line);
#define ldv_set_last_line(val)     yylloc.last_line = (val); ldv_print_info (LDV_INFO_LEX, "%d: last line is \"%d\"", __LINE__, yylloc.last_line);
#define ldv_set_first_column(val)  yylloc.first_column = (val); ldv_print_info (LDV_INFO_LEX, "%d: first column is \"%d\"", __LINE__, yylloc.first_column);
#define ldv_set_last_column(val)   yylloc.last_column = (val); ldv_print_info (LDV_INFO_LEX, "%d: last column is \"%d\"", __LINE__, yylloc.last_column);
#define ldv_set_file_name(val)     yylloc.file_name = (val); ldv_print_info (LDV_INFO_LEX, "%d: file name is \"%s\"", __LINE__, yylloc.file_name);


/* Specify own location tracking type. */
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
  const char *file_name;
} YYLTYPE;
#define yyltype YYLTYPE
#define YYLTYPE_IS_DECLARED 1

/* Relation between a keyword and a corresponding token. */
struct ldv_keyword_token
{
  const char *keyword;
  int token;
};

/* Map between keywords and tokens. */
struct ldv_keyword_token ldv_keyword_token_map [] = {
    {"typedef", LDV_TYPEDEF}
  , {"extern", LDV_EXTERN}
  , {"static", LDV_STATIC}
  , {"auto", LDV_AUTO}
  , {"register", LDV_REGISTER}
  , {"void", LDV_VOID}
  , {"char", LDV_CHAR}
  , {"int", LDV_INT}
  , {"float", LDV_FLOAT}
  , {"double", LDV_DOUBLE}
  , {"_Bool", LDV_BOOL}
  , {"_Complex", LDV_COMPLEX}
  , {"short", LDV_SHORT}
  , {"long", LDV_LONG}
  , {"signed", LDV_SIGNED}
  , {"unsigned", LDV_UNSIGNED}
  , {"struct", LDV_STRUCT}
  , {"union", LDV_UNION}
  , {"enum", LDV_ENUM}
  , {"const", LDV_CONST}
  , {"restrict", LDV_RESTRICT}
  , {"volatile", LDV_VOLATILE}
  , {"inline", LDV_INLINE}
  , {NULL, 0}
};

/* The named pointcuts list. */
static ldv_list_ptr ldv_n_pointcut_list = NULL;
/* Flag says whether it's parsed macro signature or not. */
static bool ldv_ismacro;
/* Flag true if some type specifier was parsed and false otherwise.
 * It becomes false when declaration specifiers are parsed. */
static bool ldv_istype_spec = true;


static void ldv_check_pp_semantics (ldv_pp_ptr);
static ldv_cp_ptr ldv_create_c_pointcut (void);
static ldv_pps_ptr ldv_create_pp_signature (void);
static int ldv_get_id_kind (char *id);
static unsigned int ldv_parse_advice_body (ldv_ab_ptr *body);
static ldv_aspect_pattern_ptr ldv_parse_aspect_pattern (void);
static ldv_aspect_pattern_param_ptr ldv_parse_aspect_pattern_param (void);
static unsigned int ldv_parse_aspect_pattern_param_str (char **str);
static ldv_list_ptr ldv_parse_aspect_pattern_params (void);
static int ldv_parse_aspect_pattern_known_value (char const **str);
static char *ldv_parse_comments (void);
static unsigned int ldv_parse_file_name (char **file_name);
static unsigned int ldv_parse_id (char **id, bool accept_digits);
static int ldv_parse_preprocessor_directives (void);
static unsigned int ldv_parse_unsigned_integer (unsigned int *integer);
static void ldv_parse_whitespaces (void);
static void ldv_print_info_location (yyltype, const char *, const char *, ...) ATTRIBUTE_PRINTF_3;
static ldv_pps_ptr_quals_ptr ldv_set_ptr_quals (ldv_pps_declspecs_ptr);
static void yyerror (char const *, ...);
static int yylex (void);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 157 "ldv-aspect-parser.y"
{
  ldv_list_ptr list;
  ldv_file_ptr file;
  ldv_ab_ptr body;
  ldv_id_ptr id;
  ldv_int_ptr integer;
  ldv_np_ptr n_pointcut;
  ldv_adef_ptr a_definition;
  ldv_adecl_ptr a_declaration;
  ldv_cp_ptr c_pointcut;
  ldv_pp_ptr p_pointcut;
  ldv_pps_ptr pp_signature;
  ldv_pps_macro_ptr pps_macro;
  ldv_pps_file_ptr pps_file;
  ldv_pps_decl_ptr pps_declaration;
  ldv_pps_decl_ptr pps_decl;
  ldv_pps_declspecs_ptr pps_declspecs;
}
/* Line 187 of yacc.c.  */
#line 309 "ldv-aspect-parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 334 "ldv-aspect-parser.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   112

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNRULES -- Number of states.  */
#define YYNSTATES  137

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,     2,     2,     2,     2,     2,
      37,    38,    43,     2,    40,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    36,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,    39,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    15,    18,    22,    24,
      26,    29,    33,    37,    41,    46,    47,    48,    52,    54,
      57,    58,    60,    62,    67,    69,    70,    72,    74,    78,
      80,    83,    87,    92,    94,    96,    99,   102,   105,   108,
     111,   112,   114,   115,   116,   120,   122,   124,   126,   128,
     130,   132,   134,   136,   138,   140,   142,   144,   146,   148,
     150,   152,   153,   157,   158,   162,   163,   167,   169,   171,
     173,   175,   177,   180,   182,   186,   191,   196,   197,   199,
     202,   206,   207,   209,   210,   212,   214,   217,   218,   221,
     225,   227,   231,   233,   236,   239,   241,   244,   245,   247,
     251,   256,   261,   262,   264,   265
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    -1,    45,    47,    -1,    45,    46,    -1,
       5,     5,    36,    49,    -1,    48,     4,    -1,     5,    36,
      49,    -1,     5,    -1,    50,    -1,    35,    49,    -1,    49,
      34,    49,    -1,    49,    31,    49,    -1,    37,    49,    38,
      -1,     5,    37,    51,    38,    -1,    -1,    -1,    52,    55,
      53,    -1,    56,    -1,    54,    59,    -1,    -1,    39,    -1,
       5,    -1,     5,    37,    57,    38,    -1,     3,    -1,    -1,
      58,    -1,     5,    -1,    58,    40,     5,    -1,    33,    -1,
       5,    33,    -1,    58,    40,    33,    -1,    58,    40,     5,
      33,    -1,    60,    -1,    63,    -1,    63,    73,    -1,    66,
      62,    -1,    67,    62,    -1,    71,    62,    -1,    72,    62,
      -1,    -1,    61,    -1,    -1,    -1,    64,    61,    65,    -1,
       7,    -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,
      12,    -1,    13,    -1,    14,    -1,    15,    -1,    16,    -1,
      17,    -1,    18,    -1,    19,    -1,    20,    -1,    21,    -1,
      22,    -1,    -1,    23,    68,     5,    -1,    -1,    24,    69,
       5,    -1,    -1,    25,    70,     5,    -1,    26,    -1,    27,
      -1,    28,    -1,    29,    -1,    30,    -1,    75,    74,    -1,
       5,    -1,    37,    73,    38,    -1,    74,    41,    77,    42,
      -1,    74,    37,    80,    38,    -1,    -1,    76,    -1,    43,
      78,    -1,    43,    78,    76,    -1,    -1,     6,    -1,    -1,
      79,    -1,    71,    -1,    79,    71,    -1,    -1,    82,    81,
      -1,    82,    40,    33,    -1,    83,    -1,    82,    40,    83,
      -1,    32,    -1,    63,    73,    -1,    63,    85,    -1,    76,
      -1,    75,    86,    -1,    -1,    84,    -1,    37,    84,    38,
      -1,    87,    41,    77,    42,    -1,    86,    37,    88,    38,
      -1,    -1,    86,    -1,    -1,    80,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   274,   274,   276,   281,   287,   319,   341,   380,   414,
     430,   446,   464,   482,   490,   550,   550,   550,   564,   578,
     597,   599,   602,   622,   644,   661,   664,   670,   678,   684,
     695,   705,   715,   725,   731,   750,   811,   821,   831,   841,
     854,   857,   863,   863,   863,   869,   881,   893,   905,   917,
     931,   944,   957,   970,   983,   996,  1009,  1022,  1040,  1058,
    1076,  1094,  1094,  1108,  1108,  1122,  1122,  1136,  1152,  1164,
    1176,  1190,  1204,  1212,  1229,  1235,  1260,  1279,  1282,  1288,
    1305,  1324,  1327,  1334,  1337,  1343,  1347,  1359,  1359,  1371,
    1388,  1406,  1425,  1438,  1457,  1478,  1484,  1493,  1502,  1508,
    1514,  1540,  1559,  1562,  1569,  1572
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LDV_FILE", "LDV_BODY", "LDV_ID",
  "LDV_INT_NUMB", "LDV_TYPEDEF", "LDV_EXTERN", "LDV_STATIC", "LDV_AUTO",
  "LDV_REGISTER", "LDV_VOID", "LDV_CHAR", "LDV_INT", "LDV_FLOAT",
  "LDV_DOUBLE", "LDV_BOOL", "LDV_COMPLEX", "LDV_SHORT", "LDV_LONG",
  "LDV_SIGNED", "LDV_UNSIGNED", "LDV_STRUCT", "LDV_UNION", "LDV_ENUM",
  "LDV_TYPEDEF_NAME", "LDV_CONST", "LDV_RESTRICT", "LDV_VOLATILE",
  "LDV_INLINE", "\"&&\"", "\"..\"", "\"...\"", "\"||\"", "'!'", "':'",
  "'('", "')'", "'^'", "','", "'['", "']'", "'*'", "$accept", "input",
  "named_pointcut", "advice_definition", "advice_declaration",
  "composite_pointcut", "primitive_pointcut",
  "primitive_pointcut_signature", "@1", "@2", "typedef_marker_opt",
  "primitive_pointcut_signature_macro",
  "primitive_pointcut_signature_file", "macro_param_opt", "macro_param",
  "primitive_pointcut_signature_declaration", "c_declaration",
  "c_declaration_specifiers", "c_declaration_specifiers_opt",
  "c_declaration_specifiers_aux", "@3", "@4", "c_storage_class_specifier",
  "c_type_specifier", "@5", "@6", "@7", "c_type_qualifier",
  "c_function_specifier", "c_declarator", "c_direct_declarator",
  "c_pointer_opt", "c_pointer", "int_opt", "c_type_qualifier_list_opt",
  "c_type_qualifier_list", "c_parameter_type_list", "@8",
  "c_parameter_list", "c_parameter_declaration", "c_abstract_declarator",
  "c_abstract_declarator_opt", "c_direct_abstract_declarator",
  "c_direct_abstract_declarator_opt", "c_parameter_type_list_opt", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,    33,    58,    40,    41,    94,
      44,    91,    93,    42
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    45,    45,    46,    47,    48,    49,    49,
      49,    49,    49,    49,    50,    52,    53,    51,    51,    51,
      54,    54,    55,    55,    56,    57,    57,    58,    58,    58,
      58,    58,    58,    59,    60,    60,    61,    61,    61,    61,
      62,    62,    64,    65,    63,    66,    66,    66,    66,    66,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    68,    67,    69,    67,    70,    67,    67,    71,    71,
      71,    72,    73,    74,    74,    74,    74,    75,    75,    76,
      76,    77,    77,    78,    78,    79,    79,    81,    80,    80,
      82,    82,    83,    83,    83,    84,    84,    85,    85,    86,
      86,    86,    87,    87,    88,    88
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     4,     2,     3,     1,     1,
       2,     3,     3,     3,     4,     0,     0,     3,     1,     2,
       0,     1,     1,     4,     1,     0,     1,     1,     3,     1,
       2,     3,     4,     1,     1,     2,     2,     2,     2,     2,
       0,     1,     0,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     3,     0,     3,     0,     3,     1,     1,     1,
       1,     1,     2,     1,     3,     4,     4,     0,     1,     2,
       3,     0,     1,     0,     1,     1,     2,     0,     2,     3,
       1,     3,     1,     2,     2,     1,     2,     0,     1,     3,
       4,     4,     0,     1,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     4,     3,     0,     0,     0,     6,
       0,     8,     0,     0,     7,     9,     5,    20,    10,     0,
       0,     0,    24,    21,     0,     0,    42,    18,    13,    12,
      11,    14,    22,    16,    19,    33,    77,     0,    25,    17,
      83,    35,     0,    78,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    63,    65,    67,    68,    69,    70,    71,    43,    40,
      40,    40,    40,    27,    29,     0,    26,    85,    79,    84,
      73,    77,    72,     0,     0,     0,    44,    41,    36,    37,
      38,    39,    30,    23,     0,    80,    86,     0,    42,    81,
      62,    64,    66,    28,    31,    74,    92,    77,     0,    87,
      90,    82,     0,    32,    93,   102,    78,    98,    94,    76,
      42,    88,    75,    77,    96,     0,    89,    91,     0,    42,
      81,    99,   105,     0,     0,   101,   100
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     4,     5,     6,    14,    15,    24,    25,    39,
      26,    33,    27,    75,    76,    34,    35,    87,    88,   107,
      37,    86,    69,    70,    83,    84,    85,    71,    72,    97,
      82,    42,    43,   112,    78,    79,   108,   121,   109,   110,
     117,   118,   124,   125,   133
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -98
static const yytype_int8 yypact[] =
{
     -98,    16,   -98,     6,   -98,   -98,    78,     8,    -1,   -98,
      -1,    46,    -1,    -1,    50,   -98,    50,     0,   -98,   -16,
      -1,    -1,   -98,   -98,    47,    81,   -98,   -98,   -98,   -98,
      56,   -98,    51,   -98,   -98,   -98,    35,    40,     2,   -98,
     -15,   -98,     1,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,    40,
      40,    40,    40,    57,   -98,    53,    49,   -98,    52,   -15,
     -98,    52,    38,    87,    88,    89,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,     4,   -98,   -98,    58,    65,    92,
     -98,   -98,   -98,    66,   -98,   -98,   -98,    34,    62,    61,
     -98,   -98,    60,   -98,   -98,     3,     5,   -98,   -98,   -98,
      -8,   -98,   -98,    52,    39,    63,   -98,   -98,    67,    -9,
      92,   -98,   -98,    68,    69,   -98,   -98
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -98,   -98,   -98,   -98,   -98,     7,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,    70,   -39,    77,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -38,   -98,   -36,
     -98,   -97,   -77,   -22,   -98,   -98,   -20,   -98,   -98,   -10,
     -11,   -98,   -98,   -98,   -98
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -105
static const yytype_int16 yytable[] =
{
      41,    95,    77,    22,    11,   -15,    80,    73,    80,   103,
     115,     7,    64,    65,    66,    20,     2,    16,    21,    18,
      19,     3,    28,   106,   106,   126,   115,    29,    30,  -104,
     116,    89,    90,    91,    12,    74,    13,   104,    81,    23,
     123,    96,     8,   -95,    10,   -95,   116,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,   114,   -97,   -34,   -97,    98,   129,    40,    40,    99,
    -103,    20,     9,    17,    21,    31,    32,    20,    38,    94,
      92,    93,   100,   101,   102,    40,   105,   106,   111,   113,
     119,   120,   122,    36,   130,   131,   135,    68,   134,   132,
     127,   136,   128
};

static const yytype_uint8 yycheck[] =
{
      36,    78,    40,     3,     5,     5,     5,     5,     5,     5,
     107,     5,    27,    28,    29,    31,     0,    10,    34,    12,
      13,     5,    38,    32,    32,    33,   123,    20,    21,    38,
     107,    70,    71,    72,    35,    33,    37,    33,    37,    39,
      37,    79,    36,    38,    36,    40,   123,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   107,    38,    38,    40,    37,    37,    43,    43,    41,
      41,    31,     4,    37,    34,    38,     5,    31,    37,    40,
      33,    38,     5,     5,     5,    43,    38,    32,     6,    33,
      38,    40,    42,    26,    41,    38,    38,    37,   130,   129,
     120,    42,   123
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    45,     0,     5,    46,    47,    48,     5,    36,     4,
      36,     5,    35,    37,    49,    50,    49,    37,    49,    49,
      31,    34,     3,    39,    51,    52,    54,    56,    38,    49,
      49,    38,     5,    55,    59,    60,    63,    64,    37,    53,
      43,    73,    75,    76,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    61,    66,
      67,    71,    72,     5,    33,    57,    58,    71,    78,    79,
       5,    37,    74,    68,    69,    70,    65,    61,    62,    62,
      62,    62,    33,    38,    40,    76,    71,    73,    37,    41,
       5,     5,     5,     5,    33,    38,    32,    63,    80,    82,
      83,     6,    77,    33,    73,    75,    76,    84,    85,    38,
      40,    81,    42,    37,    86,    87,    33,    83,    84,    37,
      41,    38,    80,    88,    77,    38,    42
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif


  /* User initialization code.  */
#line 260 "ldv-aspect-parser.y"
{
  /* Initialize the beginning location and aspect file. */
  yylloc.first_line = yylloc.last_line = 1;
  ldv_set_first_line (yylloc.first_line);
  ldv_set_last_line (yylloc.last_line);
  yylloc.first_column = yylloc.last_column = 1;
  ldv_set_first_column (yylloc.first_column);
  ldv_set_last_column (yylloc.last_column);
  yylloc.file_name = ldv_aspect_fname;
  ldv_set_file_name (yylloc.file_name);
}
/* Line 1069 of yacc.c.  */
#line 1531 "ldv-aspect-parser.c"
  yylsp[0] = yylloc;
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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 277 "ldv-aspect-parser.y"
    {
      /* Add advice definition from corresponding rule to the advice definitions list. */
      ldv_list_push_back (&ldv_adef_list, (yyvsp[(2) - (2)].a_definition));
    ;}
    break;

  case 4:
#line 282 "ldv-aspect-parser.y"
    {
      ldv_list_push_back (&ldv_n_pointcut_list, (yyvsp[(2) - (2)].n_pointcut));
    ;}
    break;

  case 5:
#line 288 "ldv-aspect-parser.y"
    {
      ldv_np_ptr n_pointcut_new = NULL;
      char *p_keyword = NULL;

      /* Set pointcut keyword from lexer identifier. */
      p_keyword = ldv_get_id_name ((yyvsp[(1) - (4)].id));

      if (strcmp ("pointcut", p_keyword))
        {
          ldv_print_info_location ((yylsp[(1) - (4)]), LDV_ERROR_BISON, "incorrect keyword \"%s\" was used", p_keyword);
          LDV_FATAL_ERROR ("use one of the following keywords: \"pointcut\", \"before\", \"after\", \"around\", \"new\"");
        }

      /* Delete an unneeded identifier. */
      ldv_delete_id ((yyvsp[(1) - (4)].id));

      n_pointcut_new = XCNEW (ldv_named_pointcut);
      ldv_print_info (LDV_INFO_MEM, "named pointcut memory was released");

      /* Set a pointcut name from a lexer identifier. */
      n_pointcut_new->p_name = ldv_get_id_name ((yyvsp[(2) - (4)].id));

      /* Set a composite pointcut of a named pointcut from a corresponding rule. */
      n_pointcut_new->c_pointcut = (yyvsp[(4) - (4)].c_pointcut);

      ldv_print_info (LDV_INFO_BISON, "bison parsed named pointcut");

      (yyval.n_pointcut) = n_pointcut_new;
    ;}
    break;

  case 6:
#line 320 "ldv-aspect-parser.y"
    {
      ldv_adef_ptr a_definition_new = NULL;

      a_definition_new = XCNEW (ldv_advice_definition);
      ldv_print_info (LDV_INFO_MEM, "advice definition memory was released");

      /* Set an advice definition declaration from a corresponding rule. */
      a_definition_new->a_declaration = (yyvsp[(1) - (2)].a_declaration);

      /* Set and advice definition body from a lexer body. */
      a_definition_new->a_body = (yyvsp[(2) - (2)].body);

      /* Set that an advice wasn't used at the beginning. */
      a_definition_new->use_counter = 0;

      ldv_print_info (LDV_INFO_BISON, "bison parsed advice definition");

      (yyval.a_definition) = a_definition_new;
    ;}
    break;

  case 7:
#line 342 "ldv-aspect-parser.y"
    {
      char *a_kind = NULL;
      ldv_adecl_ptr a_declaration = NULL;

      /* Set an advice declaration kind from a lexer identifier. */
      a_kind = ldv_get_id_name ((yyvsp[(1) - (3)].id));

      a_declaration = XCNEW (ldv_advice_declaration);
      ldv_print_info (LDV_INFO_MEM, "advice declaration memory was released");

      /* Set a corresponding advice kind. */
      if (!strcmp ("after", a_kind))
        a_declaration->a_kind = LDV_A_AFTER;
      else if (!strcmp ("before", a_kind))
        a_declaration->a_kind = LDV_A_BEFORE;
      else if (!strcmp ("around", a_kind))
        a_declaration->a_kind = LDV_A_AROUND;
      else if (!strcmp ("new", a_kind))
        a_declaration->a_kind = LDV_A_NEW;
      else
        {
          ldv_print_info_location ((yylsp[(1) - (3)]), LDV_ERROR_BISON, "incorrect advice declaration kind \"%s\" was used", a_kind);
          LDV_FATAL_ERROR ("use \"after\", \"around\", \"before\", \"new\" advice declaration kind");
        }

      /* Set a composite pointcut from a corresponding rule. */
      a_declaration->c_pointcut = (yyvsp[(3) - (3)].c_pointcut);

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"%s\" advice declaration", a_kind);

      /* Delete an unneeded identifier. */
      ldv_delete_id ((yyvsp[(1) - (3)].id));

      (yyval.a_declaration) = a_declaration;
    ;}
    break;

  case 8:
#line 381 "ldv-aspect-parser.y"
    {
      ldv_np_ptr n_pointcut = NULL;
      ldv_list_ptr n_pointcut_list = NULL;
      char *p_name = NULL;
      ldv_cp_ptr c_pointcut = NULL;

      /* Set a pointcut name from a lexer identifier. */
      p_name = ldv_get_id_name ((yyvsp[(1) - (1)].id));

      c_pointcut = NULL;

      /* Walk through a named pointcuts list to find matches. */
      for (n_pointcut_list = ldv_n_pointcut_list; n_pointcut_list ; n_pointcut_list = ldv_list_get_next (n_pointcut_list))
        {
          n_pointcut = (ldv_np_ptr) ldv_list_get_data (n_pointcut_list);

          if (!strcmp(n_pointcut->p_name, p_name))
            {
              ldv_print_info (LDV_INFO_MATCH, "pointcut with name \"%s\" was matched", p_name);
              c_pointcut = n_pointcut->c_pointcut;
              break;
            }
        }

      ldv_print_info (LDV_INFO_BISON, "bison parsed named composite pointcut");

      if (c_pointcut)
        (yyval.c_pointcut) = c_pointcut;
      else
        {
          LDV_FATAL_ERROR ("undefined pointcut with name \"%s\" was used", p_name);
        }
    ;}
    break;

  case 9:
#line 415 "ldv-aspect-parser.y"
    {
      ldv_cp_ptr c_pointcut = NULL;

      c_pointcut = ldv_create_c_pointcut ();

      /* Set a corresponding composite pointcut kind. */
      c_pointcut->cp_kind = LDV_CP_PRIMITIVE;

      /* Set a primitive pointcut from a corresponding rule. */
      c_pointcut->p_pointcut = (yyvsp[(1) - (1)].p_pointcut);

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"primitive\" composite pointcut");

      (yyval.c_pointcut) = c_pointcut;
    ;}
    break;

  case 10:
#line 431 "ldv-aspect-parser.y"
    {
      ldv_cp_ptr c_pointcut = NULL;

      c_pointcut = ldv_create_c_pointcut ();

      /* Set a corresponding composite pointcut kind. */
      c_pointcut->cp_kind = LDV_CP_NOT;

      /* Set a composite pointcut from a corresponding rule. */
      c_pointcut->c_pointcut_first = (yyvsp[(2) - (2)].c_pointcut);

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"not\" composite pointcut");

      (yyval.c_pointcut) = c_pointcut;
    ;}
    break;

  case 11:
#line 447 "ldv-aspect-parser.y"
    {
      ldv_cp_ptr c_pointcut = NULL;

      c_pointcut = ldv_create_c_pointcut ();

      /* Set a corresponding composite pointcut kind. */
      c_pointcut->cp_kind = LDV_CP_OR;

      /* Set a first composite pointcut from a corresponding rule. */
      c_pointcut->c_pointcut_first = (yyvsp[(1) - (3)].c_pointcut);
      /* Set a second composite pointcut from a corresponding rule. */
      c_pointcut->c_pointcut_second = (yyvsp[(3) - (3)].c_pointcut);

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"or\" composite pointcut");

      (yyval.c_pointcut) = c_pointcut;
    ;}
    break;

  case 12:
#line 465 "ldv-aspect-parser.y"
    {
      ldv_cp_ptr c_pointcut = NULL;

      c_pointcut = ldv_create_c_pointcut ();

      /* Set a corresponding composite pointcut kind. */
      c_pointcut->cp_kind = LDV_CP_AND;

      /* Set a first composite pointcut from a corresponding rule. */
      c_pointcut->c_pointcut_first = (yyvsp[(1) - (3)].c_pointcut);
      /* Set a second composite pointcut from a corresponding rule. */
      c_pointcut->c_pointcut_second = (yyvsp[(3) - (3)].c_pointcut);

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"and\" composite pointcut");

      (yyval.c_pointcut) = c_pointcut;
    ;}
    break;

  case 13:
#line 483 "ldv-aspect-parser.y"
    {
      ldv_print_info (LDV_INFO_BISON, "bison parsed composite pointcut of associativity");

      (yyval.c_pointcut) = (yyvsp[(2) - (3)].c_pointcut);
    ;}
    break;

  case 14:
#line 491 "ldv-aspect-parser.y"
    {
      char *pp_kind = NULL;
      ldv_pp_ptr p_pointcut = NULL;

      /* Set a primitive pointcut kind from a lexer identifier. */
      pp_kind = ldv_get_id_name ((yyvsp[(1) - (4)].id));

      p_pointcut = XCNEW (ldv_primitive_pointcut);
      ldv_print_info (LDV_INFO_MEM, "primitive pointcut memory was released");

      /* Set a corresponding primitive pointcut kind. */
      if (!strcmp ("call", pp_kind))
        p_pointcut->pp_kind = LDV_PP_CALL;
      else if (!strcmp ("define", pp_kind))
        p_pointcut->pp_kind = LDV_PP_DEFINE;
      else if (!strcmp ("execution", pp_kind))
        p_pointcut->pp_kind = LDV_PP_EXECUTION;
      else if (!strcmp ("file", pp_kind))
        p_pointcut->pp_kind = LDV_PP_FILE;
      else if (!strcmp ("get", pp_kind))
        p_pointcut->pp_kind = LDV_PP_GET;
      else if (!strcmp ("get_global", pp_kind))
        p_pointcut->pp_kind = LDV_PP_GET_GLOBAL;
      else if (!strcmp ("get_local", pp_kind))
        p_pointcut->pp_kind = LDV_PP_GET_LOCAL;
      else if (!strcmp ("incall", pp_kind))
        p_pointcut->pp_kind = LDV_PP_INCALL;
      else if (!strcmp ("infile", pp_kind))
        p_pointcut->pp_kind = LDV_PP_INFILE;
      else if (!strcmp ("infunc", pp_kind))
        p_pointcut->pp_kind = LDV_PP_INFUNC;
      else if (!strcmp ("introduce", pp_kind))
        p_pointcut->pp_kind = LDV_PP_INTRODUCE;
      else if (!strcmp ("set", pp_kind))
        p_pointcut->pp_kind = LDV_PP_SET;
      else if (!strcmp ("set_global", pp_kind))
        p_pointcut->pp_kind = LDV_PP_SET_GLOBAL;
      else if (!strcmp ("set_local", pp_kind))
        p_pointcut->pp_kind = LDV_PP_SET_LOCAL;
      else
        {
          ldv_print_info_location ((yylsp[(1) - (4)]), LDV_ERROR_BISON, "incorrect primitive pointcut kind \"%s\" was used", pp_kind);
          LDV_FATAL_ERROR ("use \"call\", \"define\", \"execution\", \"file\", \"get\", \"get_global\", \"get_local\", \"incall\", \"infile\", \"infunc\", \"introduce\", \"set\", \"set_global\", \"set_local\" primitive pointcut kind");
        }

      /* Set a primitive pointcut signature from a corresponding rule. */
      p_pointcut->pp_signature = (yyvsp[(3) - (4)].pp_signature);

      ldv_check_pp_semantics (p_pointcut);

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"%s\" primitive pointcut", pp_kind);

      /* Delete an unneeded identifier. */
      ldv_delete_id ((yyvsp[(1) - (4)].id));

      (yyval.p_pointcut) = p_pointcut;
    ;}
    break;

  case 15:
#line 550 "ldv-aspect-parser.y"
    { ldv_ismacro = true; ;}
    break;

  case 16:
#line 550 "ldv-aspect-parser.y"
    { ldv_ismacro = false; ;}
    break;

  case 17:
#line 551 "ldv-aspect-parser.y"
    {
      ldv_pps_ptr pp_signature = NULL;

      pp_signature = ldv_create_pp_signature ();

      /* Specify that a macro signature is parsed. */
      pp_signature->pps_kind = LDV_PPS_DEFINE;

      /* Specify a macro signature. */
      pp_signature->pps_macro = (yyvsp[(2) - (3)].pps_macro);

      (yyval.pp_signature) = pp_signature;
    ;}
    break;

  case 18:
#line 565 "ldv-aspect-parser.y"
    {
      ldv_pps_ptr pp_signature = NULL;

      pp_signature = ldv_create_pp_signature ();

      /* Specify that a file signature is parsed. */
      pp_signature->pps_kind = LDV_PPS_FILE;

      /* Specify a file signature. */
      pp_signature->pps_file = (yyvsp[(1) - (1)].pps_file);

      (yyval.pp_signature) = pp_signature;
    ;}
    break;

  case 19:
#line 579 "ldv-aspect-parser.y"
    {
      ldv_pps_ptr pp_signature = NULL;

      pp_signature = ldv_create_pp_signature ();

      /* Specify that a declaration signature is parsed. */
      pp_signature->pps_kind = LDV_PPS_DECL;

      /* Specify a declaration signature. */
      pp_signature->pps_declaration = (yyvsp[(2) - (2)].pps_decl);

      (yyval.pp_signature) = pp_signature;
    ;}
    break;

  case 22:
#line 603 "ldv-aspect-parser.y"
    {
      ldv_pps_macro_ptr macro = NULL;

      macro = XCNEW (ldv_primitive_pointcut_signature_macro);
      ldv_print_info (LDV_INFO_MEM, "macro primitive pointcut signature memory was released");

      /* Specify that macro definition signature is parsed. */
      macro->pps_macro_kind = LDV_PPS_MACRO_DEF;

      /* Set a macro primitive pointcut signature macro name from a lexer identifier. */
      macro->macro_name = (yyvsp[(1) - (1)].id);

      /* Specify that there is no macro parameters at all. */
      macro->macro_param_list = NULL;

      ldv_print_info (LDV_INFO_BISON, "bison parsed macro definition signature");

      (yyval.pps_macro) = macro;
    ;}
    break;

  case 23:
#line 623 "ldv-aspect-parser.y"
    {
      ldv_pps_macro_ptr macro = NULL;

      macro = XCNEW (ldv_primitive_pointcut_signature_macro);
      ldv_print_info (LDV_INFO_MEM, "macro primitive pointcut signature memory was released");

      /* Specify that macro function signature is parsed. */
      macro->pps_macro_kind = LDV_PPS_MACRO_FUNC;

      /* Set a macro primitive pointcut signature macro name from a lexer identifier. */
      macro->macro_name = (yyvsp[(1) - (4)].id);

      /* Set a macro function parameters from a corresponding rule. */
      macro->macro_param_list = (yyvsp[(3) - (4)].list);

      ldv_print_info (LDV_INFO_BISON, "bison parsed macro function signature");

      (yyval.pps_macro) = macro;
    ;}
    break;

  case 24:
#line 645 "ldv-aspect-parser.y"
    {
      ldv_pps_file_ptr file = NULL;

      file = XCNEW (ldv_primitive_pointcut_signature_file);
      ldv_print_info (LDV_INFO_MEM, "file primitive pointcut signature memory was released");

      /* Set a function name from a lexer identifier. */
      file->file_name = (yyvsp[(1) - (1)].file);

      ldv_print_info (LDV_INFO_BISON, "bison parsed file signature");

      (yyval.pps_file) = file;
    ;}
    break;

  case 25:
#line 661 "ldv-aspect-parser.y"
    {
      (yyval.list) = NULL;
    ;}
    break;

  case 26:
#line 665 "ldv-aspect-parser.y"
    {
      (yyval.list) = (yyvsp[(1) - (1)].list);
    ;}
    break;

  case 27:
#line 671 "ldv-aspect-parser.y"
    {
      ldv_list_ptr macro_param_list = NULL;

      ldv_list_push_back (&macro_param_list, (yyvsp[(1) - (1)].id));

      (yyval.list) = macro_param_list;
    ;}
    break;

  case 28:
#line 679 "ldv-aspect-parser.y"
    {
      ldv_list_push_back (&(yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].id));

      (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 29:
#line 685 "ldv-aspect-parser.y"
    {
      ldv_list_ptr macro_param_list = NULL;
      ldv_id_ptr id = ldv_create_id ();

      ldv_puts_id ("...", id);

      ldv_list_push_back (&macro_param_list, id);

      (yyval.list) = macro_param_list;
    ;}
    break;

  case 30:
#line 696 "ldv-aspect-parser.y"
    {
      ldv_list_ptr macro_param_list = NULL;

      ldv_puts_id ("...", (yyvsp[(1) - (2)].id));

      ldv_list_push_back (&macro_param_list, (yyvsp[(1) - (2)].id));

      (yyval.list) = macro_param_list;
    ;}
    break;

  case 31:
#line 706 "ldv-aspect-parser.y"
    {
      ldv_id_ptr id = ldv_create_id ();

      ldv_puts_id ("...", id);

      ldv_list_push_back (&(yyvsp[(1) - (3)].list), id);

      (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 32:
#line 716 "ldv-aspect-parser.y"
    {
      ldv_puts_id ("...", (yyvsp[(3) - (4)].id));

      ldv_list_push_back (&(yyvsp[(1) - (4)].list), (yyvsp[(3) - (4)].id));

      (yyval.list) = (yyvsp[(1) - (4)].list);
    ;}
    break;

  case 33:
#line 726 "ldv-aspect-parser.y"
    {
      (yyval.pps_decl) = (yyvsp[(1) - (1)].pps_decl);
    ;}
    break;

  case 34:
#line 732 "ldv-aspect-parser.y"
    {
      ldv_pps_decl_ptr pps_decl = NULL;

      pps_decl = ldv_create_pps_decl ();

      /* Specify declaration specifiers. */
      pps_decl->pps_declspecs = (yyvsp[(1) - (1)].pps_declspecs);

      /* Specify an empty declarator, i.e. no name is declared. */
      pps_decl->pps_declarator = NULL;

      /* Specify a kind of a declaration, a type. */
      pps_decl->pps_decl_kind = LDV_PPS_DECL_TYPE;

      ldv_print_info (LDV_INFO_BISON, "bison parsed type declaration signature pointcut");

      (yyval.pps_decl) = pps_decl;
    ;}
    break;

  case 35:
#line 751 "ldv-aspect-parser.y"
    {
      ldv_pps_decl_ptr decl = NULL;
      ldv_pps_declarator_ptr declarator = NULL;
      ldv_list_ptr declarator_list = NULL;
      bool isdecl_kind_specified = false;

      decl = ldv_create_pps_decl ();

      /* Specify declaration specifiers and a declarator chain. */
      decl->pps_declspecs = (yyvsp[(1) - (2)].pps_declspecs);
      decl->pps_declarator = (yyvsp[(2) - (2)].list);

      /* Specify a kind of a declaration, a function or a variable. */
      for (declarator_list = (yyvsp[(2) - (2)].list)
        ;
        ; declarator_list = ldv_list_get_next (declarator_list))
        {
          declarator = (ldv_pps_declarator_ptr) ldv_list_get_data (declarator_list);

          /* We deal with a variable declaration in this case. */
          if (declarator->pps_declarator_kind == LDV_PPS_DECLARATOR_ID)
            {
              decl->pps_decl_kind = LDV_PPS_DECL_VAR;
              isdecl_kind_specified = true;

              ldv_print_info (LDV_INFO_BISON, "bison parsed variable declaration signature pointcut");

              (yyval.pps_decl) = decl;

              break;
            }
          /* We deal with a function declaration in this case and a following
             declarator in a declarator chain must be a function name
             declaration. */
          else if (declarator->pps_declarator_kind == LDV_PPS_DECLARATOR_FUNC)
            {
              declarator_list = ldv_list_get_next (declarator_list);
              declarator = (ldv_pps_declarator_ptr) ldv_list_get_data (declarator_list);

              if (declarator->pps_declarator_kind == LDV_PPS_DECLARATOR_ID)
                {
                  decl->pps_decl_kind = LDV_PPS_DECL_FUNC;
                  isdecl_kind_specified = true;

                  ldv_print_info (LDV_INFO_BISON, "bison parsed function declaration signature pointcut");

                  (yyval.pps_decl) = decl;

                  break;
                }
            }
        }

      if (!isdecl_kind_specified)
        {
          LDV_FATAL_ERROR ("declaration kind can't be determined");
        }
    ;}
    break;

  case 36:
#line 812 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_merge_declspecs ((yyvsp[(1) - (2)].pps_declspecs), (yyvsp[(2) - (2)].pps_declspecs));

      ldv_print_info (LDV_INFO_BISON, "bison merged declaration specifiers");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 37:
#line 822 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_merge_declspecs ((yyvsp[(1) - (2)].pps_declspecs), (yyvsp[(2) - (2)].pps_declspecs));

      ldv_print_info (LDV_INFO_BISON, "bison merged declaration specifiers");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 38:
#line 832 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_merge_declspecs ((yyvsp[(1) - (2)].pps_declspecs), (yyvsp[(2) - (2)].pps_declspecs));

      ldv_print_info (LDV_INFO_BISON, "bison merged declaration specifiers");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 39:
#line 842 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_merge_declspecs ((yyvsp[(1) - (2)].pps_declspecs), (yyvsp[(2) - (2)].pps_declspecs));

      ldv_print_info (LDV_INFO_BISON, "bison merged declaration specifiers");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 40:
#line 854 "ldv-aspect-parser.y"
    {
      (yyval.pps_declspecs) = NULL;
    ;}
    break;

  case 41:
#line 858 "ldv-aspect-parser.y"
    {
      (yyval.pps_declspecs) = (yyvsp[(1) - (1)].pps_declspecs);
    ;}
    break;

  case 42:
#line 863 "ldv-aspect-parser.y"
    { ldv_istype_spec = false; ;}
    break;

  case 43:
#line 863 "ldv-aspect-parser.y"
    { ldv_istype_spec = true; ;}
    break;

  case 44:
#line 864 "ldv-aspect-parser.y"
    {
      (yyval.pps_declspecs) = (yyvsp[(2) - (3)].pps_declspecs);
    ;}
    break;

  case 45:
#line 870 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->istypedef = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"typedef\" storage class specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 46:
#line 882 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->isextern = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"extern\" storage class specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 47:
#line 894 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->isstatic = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"static\" storage class specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 48:
#line 906 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->isauto = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"auto\" storage class specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 49:
#line 918 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->isregister = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"register\" storage class specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 50:
#line 932 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->isvoid = true;
      ldv_istype_spec = pps_declspecs->istype_spec = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"void\" type specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 51:
#line 945 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->ischar = true;
      ldv_istype_spec = pps_declspecs->istype_spec = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"char\" type specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 52:
#line 958 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->isint = true;
      ldv_istype_spec = pps_declspecs->istype_spec = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"int\" type specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 53:
#line 971 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->isfloat = true;
      ldv_istype_spec = pps_declspecs->istype_spec = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"float\" type specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 54:
#line 984 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->isdouble = true;
      ldv_istype_spec = pps_declspecs->istype_spec = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"double\" type specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 55:
#line 997 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->isbool = true;
      ldv_istype_spec = pps_declspecs->istype_spec = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"bool\" type specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 56:
#line 1010 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->iscomplex = true;
      ldv_istype_spec = pps_declspecs->istype_spec = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"complex\" type specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 57:
#line 1023 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->isshort = true;
      ldv_istype_spec = pps_declspecs->istype_spec = true;

      /* Assume that 'int' presents if 'short' is encountered. Don't do this if
         'double' type specifier was already parsed. */
      if (!pps_declspecs->isdouble)
        pps_declspecs->isint = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"short\" type specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 58:
#line 1041 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->islong = true;
      ldv_istype_spec = pps_declspecs->istype_spec = true;

      /* Assume that 'int' presents if 'long' is encountered. Don't do this if
       * 'double' type specifier was already parsed. */
      if (!pps_declspecs->isdouble)
        pps_declspecs->isint = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"long\" type specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 59:
#line 1059 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->issigned = true;
      ldv_istype_spec = pps_declspecs->istype_spec = true;

      /* Assume that 'int' presents if 'signed' is encountered. Don't do this if
       * 'double' or 'char' type specifier was already parsed. */
      if (!pps_declspecs->isdouble && !pps_declspecs->ischar)
        pps_declspecs->isint = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"signed\" type specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 60:
#line 1077 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->isunsigned = true;
      ldv_istype_spec = pps_declspecs->istype_spec = true;

      /* Assume that 'int' presents if 'unsigned' is encountered. Don't do this if
       * 'double' or 'char' type specifier was already parsed. */
      if (!pps_declspecs->isdouble && !pps_declspecs->ischar)
        pps_declspecs->isint = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"unsigned\" type specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 61:
#line 1094 "ldv-aspect-parser.y"
    { ldv_istype_spec = true; ;}
    break;

  case 62:
#line 1095 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->isstruct = true;
      pps_declspecs->type_name = (yyvsp[(3) - (3)].id);
      pps_declspecs->istype_spec = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"struct\" type specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 63:
#line 1108 "ldv-aspect-parser.y"
    { ldv_istype_spec = true; ;}
    break;

  case 64:
#line 1109 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->isunion = true;
      pps_declspecs->type_name = (yyvsp[(3) - (3)].id);
      pps_declspecs->istype_spec = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"union\" type specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 65:
#line 1122 "ldv-aspect-parser.y"
    { ldv_istype_spec = true; ;}
    break;

  case 66:
#line 1123 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->isenum = true;
      pps_declspecs->type_name = (yyvsp[(3) - (3)].id);
      pps_declspecs->istype_spec = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"enum\" type specifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 67:
#line 1137 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->istypedef_name = true;
      pps_declspecs->type_name = (yyvsp[(1) - (1)].id);
      ldv_istype_spec = pps_declspecs->istype_spec = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed typedef name \"%s\" type specifier", ldv_get_id_name ((yyvsp[(1) - (1)].id)));

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 68:
#line 1153 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->isconst = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"const\" type qualifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 69:
#line 1165 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->isrestrict = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"restrict\" type qualifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 70:
#line 1177 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->isvolatile = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"volatile\" type qualifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 71:
#line 1191 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_create_declspecs ();

      pps_declspecs->isinline = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed \"inline\" type qualifier");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 72:
#line 1205 "ldv-aspect-parser.y"
    {
      ldv_print_info (LDV_INFO_BISON, "bison parsed declarator");

      (yyval.list) = ldv_list_splice ((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].list));
    ;}
    break;

  case 73:
#line 1213 "ldv-aspect-parser.y"
    {
      ldv_pps_declarator_ptr declarator_new = NULL;
      ldv_list_ptr declarator_list = NULL;

      declarator_new = ldv_create_declarator ();

      declarator_list = ldv_list_push_front (NULL, declarator_new);

      declarator_new->pps_declarator_kind = LDV_PPS_DECLARATOR_ID;

      declarator_new->declarator_name = (yyvsp[(1) - (1)].id);

      ldv_print_info (LDV_INFO_BISON, "bison parsed identifier direct declarator");

      (yyval.list) = declarator_list;
    ;}
    break;

  case 74:
#line 1230 "ldv-aspect-parser.y"
    {
      ldv_print_info (LDV_INFO_BISON, "bison parsed direct declarator of associativity");

      (yyval.list) = (yyvsp[(2) - (3)].list);
    ;}
    break;

  case 75:
#line 1236 "ldv-aspect-parser.y"
    {
      ldv_pps_declarator_ptr declarator_new = NULL;

      declarator_new = ldv_create_declarator ();

      (yyvsp[(1) - (4)].list) = ldv_list_push_front ((yyvsp[(1) - (4)].list), declarator_new);

      declarator_new->pps_declarator_kind = LDV_PPS_DECLARATOR_ARRAY;

      declarator_new->pps_array_size = ldv_create_pps_array_size ();

      /* If an array size was specified then save it. */
      if ((yyvsp[(3) - (4)].integer))
        {
          declarator_new->pps_array_size->pps_array_size = ldv_get_int ((yyvsp[(3) - (4)].integer));
          declarator_new->pps_array_size->issize_specified = true;
        }
      else
        declarator_new->pps_array_size->issize_specified = false;

      ldv_print_info (LDV_INFO_BISON, "bison parsed array direct declarator");

      (yyval.list) = (yyvsp[(1) - (4)].list);
    ;}
    break;

  case 76:
#line 1261 "ldv-aspect-parser.y"
    {
      ldv_pps_declarator_ptr declarator_new = NULL;

      declarator_new = ldv_create_declarator ();

      (yyvsp[(1) - (4)].list) = ldv_list_push_front ((yyvsp[(1) - (4)].list), declarator_new);

      declarator_new->pps_declarator_kind = LDV_PPS_DECLARATOR_FUNC;

      declarator_new->func_arg_list = (yyvsp[(3) - (4)].list);

      ldv_print_info (LDV_INFO_BISON, "bison parsed function direct declarator");

      (yyval.list) = (yyvsp[(1) - (4)].list);
    ;}
    break;

  case 77:
#line 1279 "ldv-aspect-parser.y"
    {
      (yyval.list) = NULL;
    ;}
    break;

  case 78:
#line 1283 "ldv-aspect-parser.y"
    {
      (yyval.list) = (yyvsp[(1) - (1)].list);
    ;}
    break;

  case 79:
#line 1289 "ldv-aspect-parser.y"
    {
      ldv_pps_declarator_ptr declarator_new = NULL;
      ldv_list_ptr declarator_list = NULL;

      declarator_new = ldv_create_declarator ();

      declarator_list = ldv_list_push_front (NULL, declarator_new);

      declarator_new->pps_declarator_kind = LDV_PPS_DECLARATOR_PTR;

      declarator_new->pps_ptr_quals = ldv_set_ptr_quals ((yyvsp[(2) - (2)].pps_declspecs));

      ldv_print_info (LDV_INFO_BISON, "bison parsed pointer declarator");

      (yyval.list) = declarator_list;
    ;}
    break;

  case 80:
#line 1306 "ldv-aspect-parser.y"
    {
      ldv_pps_declarator_ptr declarator_new = NULL;

      declarator_new = ldv_create_declarator ();

      (yyvsp[(3) - (3)].list) = ldv_list_push_front ((yyvsp[(3) - (3)].list), declarator_new);

      declarator_new->pps_declarator_kind = LDV_PPS_DECLARATOR_PTR;

      declarator_new->pps_ptr_quals = ldv_set_ptr_quals ((yyvsp[(2) - (3)].pps_declspecs));

      ldv_print_info (LDV_INFO_BISON, "bison parsed pointer declarator");

      (yyval.list) = (yyvsp[(3) - (3)].list);
    ;}
    break;

  case 81:
#line 1324 "ldv-aspect-parser.y"
    {
      (yyval.integer) = NULL;
    ;}
    break;

  case 82:
#line 1328 "ldv-aspect-parser.y"
    {
      (yyval.integer) = (yyvsp[(1) - (1)].integer);
    ;}
    break;

  case 83:
#line 1334 "ldv-aspect-parser.y"
    {
      (yyval.pps_declspecs) = NULL;
    ;}
    break;

  case 84:
#line 1338 "ldv-aspect-parser.y"
    {
      (yyval.pps_declspecs) = (yyvsp[(1) - (1)].pps_declspecs);
    ;}
    break;

  case 85:
#line 1344 "ldv-aspect-parser.y"
    {
      (yyval.pps_declspecs) = (yyvsp[(1) - (1)].pps_declspecs);
    ;}
    break;

  case 86:
#line 1348 "ldv-aspect-parser.y"
    {
      ldv_pps_declspecs_ptr pps_declspecs = NULL;

      pps_declspecs = ldv_merge_declspecs ((yyvsp[(1) - (2)].pps_declspecs), (yyvsp[(2) - (2)].pps_declspecs));

      ldv_print_info (LDV_INFO_BISON, "bison merged type qualifiers");

      (yyval.pps_declspecs) = pps_declspecs;
    ;}
    break;

  case 87:
#line 1359 "ldv-aspect-parser.y"
    { /* It's a hack!!! It's needed to alow a correct processing of typedefs names inside a parameter list. */ ldv_istype_spec = true; ;}
    break;

  case 88:
#line 1360 "ldv-aspect-parser.y"
    {
      ldv_pps_func_arg_ptr func_arg = NULL;

      func_arg = (ldv_pps_func_arg_ptr) ldv_list_get_data ((yyvsp[(1) - (2)].list));

      func_arg->isva = false;

      ldv_print_info (LDV_INFO_BISON, "bison parsed parameter list");

      (yyval.list) = (yyvsp[(1) - (2)].list);
    ;}
    break;

  case 89:
#line 1372 "ldv-aspect-parser.y"
    {
      ldv_pps_func_arg_ptr func_arg = NULL;
      ldv_list_ptr func_arg_list = NULL;

      func_arg_list = ldv_list_get_last ((yyvsp[(1) - (3)].list));

      func_arg = (ldv_pps_func_arg_ptr) ldv_list_get_data (func_arg_list);

      func_arg->isva = true;

      ldv_print_info (LDV_INFO_BISON, "bison parsed parameter list of variable length");

      (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 90:
#line 1389 "ldv-aspect-parser.y"
    {
      ldv_pps_func_arg_ptr pps_func_arg_new = NULL;
      ldv_list_ptr func_arg_list = NULL;

      pps_func_arg_new = ldv_create_pps_func_arg ();

      pps_func_arg_new->pps_func_arg = (yyvsp[(1) - (1)].pps_decl);

      pps_func_arg_new->isva = false;

      /* It's a hack!!! It's needed to alow a correct processing of typedefs names inside a parameter list. */
      ldv_istype_spec = false;

      ldv_list_push_back (&func_arg_list, pps_func_arg_new);

      (yyval.list) = func_arg_list;
    ;}
    break;

  case 91:
#line 1407 "ldv-aspect-parser.y"
    {
      ldv_pps_func_arg_ptr pps_func_arg_new = NULL;

      pps_func_arg_new = ldv_create_pps_func_arg ();

      pps_func_arg_new->pps_func_arg = (yyvsp[(3) - (3)].pps_decl);

      ldv_list_push_back (&(yyvsp[(1) - (3)].list), pps_func_arg_new);

      pps_func_arg_new->isva = false;

      /* It's a hack!!! It's needed to alow a correct processing of typedefs names inside a parameter list. */
      ldv_istype_spec = false;

      (yyval.list) = (yyvsp[(1) - (3)].list);
    ;}
    break;

  case 92:
#line 1426 "ldv-aspect-parser.y"
    {
      ldv_pps_decl_ptr pps_decl = NULL;

      pps_decl = ldv_create_pps_decl ();

      /* Specify that any parameters may correspond to this 'declaration'. */
      pps_decl->pps_decl_kind = LDV_PPS_DECL_ANY_PARAMS;

      ldv_print_info (LDV_INFO_BISON, "bison parsed any parameters wildcard");

      (yyval.pps_decl) = pps_decl;
    ;}
    break;

  case 93:
#line 1439 "ldv-aspect-parser.y"
    {
      ldv_pps_decl_ptr pps_decl = NULL;

      pps_decl = ldv_create_pps_decl ();

      /* Specify a kind of a declaration. */
      pps_decl->pps_decl_kind = LDV_PPS_DECL_PARAM;

      /* Specify declaration specifiers. */
      pps_decl->pps_declspecs = (yyvsp[(1) - (2)].pps_declspecs);

      /* Specify a declarator. */
      pps_decl->pps_declarator = (yyvsp[(2) - (2)].list);

      ldv_print_info (LDV_INFO_BISON, "bison parsed parameter declaration");

      (yyval.pps_decl) = pps_decl;
    ;}
    break;

  case 94:
#line 1458 "ldv-aspect-parser.y"
    {
      ldv_pps_decl_ptr pps_decl = NULL;

      pps_decl = ldv_create_pps_decl ();

      /* Specify a kind of a declaration. */
      pps_decl->pps_decl_kind = LDV_PPS_DECL_PARAM;

      /* Specify declaration specifiers. */
      pps_decl->pps_declspecs = (yyvsp[(1) - (2)].pps_declspecs);

      /* Specify an abstact declarator. */
      pps_decl->pps_declarator = (yyvsp[(2) - (2)].list);

      ldv_print_info (LDV_INFO_BISON, "bison parsed parameter declaration");

      (yyval.pps_decl) = pps_decl;
    ;}
    break;

  case 95:
#line 1479 "ldv-aspect-parser.y"
    {
      ldv_print_info (LDV_INFO_BISON, "bison parsed abstract declarator");

      (yyval.list) = (yyvsp[(1) - (1)].list);
    ;}
    break;

  case 96:
#line 1485 "ldv-aspect-parser.y"
    {
      ldv_print_info (LDV_INFO_BISON, "bison parsed abstract declarator");

      (yyval.list) = ldv_list_splice ((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].list));
    ;}
    break;

  case 97:
#line 1493 "ldv-aspect-parser.y"
    {
      ldv_list_ptr declarator_list = NULL;

      declarator_list = ldv_list_push_front (NULL, ldv_create_declarator ());

      ldv_print_info (LDV_INFO_BISON, "bison parsed empty abstract declarator");

      (yyval.list) = declarator_list;
    ;}
    break;

  case 98:
#line 1503 "ldv-aspect-parser.y"
    {
      (yyval.list) = (yyvsp[(1) - (1)].list);
    ;}
    break;

  case 99:
#line 1509 "ldv-aspect-parser.y"
    {
      ldv_print_info (LDV_INFO_BISON, "bison parsed direct abstract declarator of associativity");

      (yyval.list) = (yyvsp[(2) - (3)].list);
    ;}
    break;

  case 100:
#line 1515 "ldv-aspect-parser.y"
    {
      ldv_pps_declarator_ptr declarator_new = NULL;

      declarator_new = ldv_create_declarator ();

      (yyvsp[(1) - (4)].list) = ldv_list_push_front ((yyvsp[(1) - (4)].list), declarator_new);

      declarator_new->pps_declarator_kind = LDV_PPS_DECLARATOR_ARRAY;

      declarator_new->pps_array_size = ldv_create_pps_array_size ();

      /* If an array size was specified then save it. */
      if ((yyvsp[(3) - (4)].integer))
        {
          declarator_new->pps_array_size->pps_array_size = ldv_get_int ((yyvsp[(3) - (4)].integer));
          declarator_new->pps_array_size->issize_specified = true;
        }
      else
        declarator_new->pps_array_size->issize_specified = false;

      ldv_print_info (LDV_INFO_BISON, "bison parsed array direct abstract declarator");

      (yyval.list) = (yyvsp[(1) - (4)].list);
    ;}
    break;

  case 101:
#line 1541 "ldv-aspect-parser.y"
    {
      ldv_pps_declarator_ptr declarator_new = NULL;

      declarator_new = ldv_create_declarator ();

      (yyvsp[(1) - (4)].list) = ldv_list_push_front ((yyvsp[(1) - (4)].list), declarator_new);

      declarator_new->pps_declarator_kind = LDV_PPS_DECLARATOR_FUNC;

      declarator_new->func_arg_list = (yyvsp[(3) - (4)].list);

      ldv_print_info (LDV_INFO_BISON, "bison parsed function direct abstract declarator");

      (yyval.list) = (yyvsp[(1) - (4)].list);
    ;}
    break;

  case 102:
#line 1559 "ldv-aspect-parser.y"
    {
      (yyval.list) = NULL;
    ;}
    break;

  case 103:
#line 1563 "ldv-aspect-parser.y"
    {
      (yyval.list) = (yyvsp[(1) - (1)].list);
    ;}
    break;

  case 104:
#line 1569 "ldv-aspect-parser.y"
    {
      (yyval.list) = NULL;
    ;}
    break;

  case 105:
#line 1573 "ldv-aspect-parser.y"
    {
      (yyval.list) = (yyvsp[(1) - (1)].list);
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3258 "ldv-aspect-parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1577 "ldv-aspect-parser.y"


void
ldv_aspect_parser (void)
{
  ldv_print_info (LDV_INFO, "begin parse no comment aspect file");

  /* Enable debugging. */
  if (ldv_isinfo_bison)
    yydebug = 1;

  /* Call a main parsing procedure. */
  yyparse();

  ldv_print_info (LDV_INFO, "finish parse no comment aspect file");
}

void
ldv_check_pp_semantics (ldv_pp_ptr p_pointcut)
{
  ldv_ppk pp_kind;
  ldv_ppsk pps_kind;

  pp_kind = p_pointcut->pp_kind;
  pps_kind = p_pointcut->pp_signature->pps_kind;

  /* There are following relations between a primitive pointcut signature kind
     and a primitive pointcut kind:
       LDV_PPS_DEFINE - LDV_PP_DEFINE
       LDV_PPS_FILE - LDV_PP_FILE
       LDV_PPS_FILE - LDV_PP_INFILE
       LDV_PPS_DECL - LDV_PP_CALL
       LDV_PPS_DECL - LDV_PP_EXECUTION
       LDV_PPS_DECL - LDV_PP_GET
       LDV_PPS_DECL - LDV_PP_GET_GLOBAL
       LDV_PPS_DECL - LDV_PP_GET_LOCAL
       LDV_PPS_DECL - LDV_PP_INCALL
       LDV_PPS_DECL - LDV_PP_INFUNC
       LDV_PPS_DECL - LDV_PP_INTRODUCE
       LDV_PPS_DECL - LDV_PP_SET
       LDV_PPS_DECL - LDV_PP_SET_GLOBAL
       LDV_PPS_DECL - LDV_PP_SET_LOCAL. */
  switch (pps_kind)
    {
    case LDV_PPS_DEFINE:
      if (pp_kind == LDV_PP_DEFINE)
        return ;

      break;

    case LDV_PPS_FILE:
      if (pp_kind == LDV_PP_FILE || pp_kind == LDV_PP_INFILE)
        return ;

      break;

    case LDV_PPS_DECL:
      if (pp_kind == LDV_PP_CALL || pp_kind == LDV_PP_EXECUTION
        || pp_kind == LDV_PP_GET || pp_kind == LDV_PP_GET_GLOBAL
        || pp_kind == LDV_PP_GET_LOCAL || pp_kind == LDV_PP_INCALL
        || pp_kind == LDV_PP_INFUNC || pp_kind == LDV_PP_INTRODUCE
        || pp_kind == LDV_PP_SET || pp_kind == LDV_PP_SET_GLOBAL
        || pp_kind == LDV_PP_SET_LOCAL)
        return ;

      break;

    default:
      LDV_FATAL_ERROR ("incorrect primitive pointcut signature kind \"%d\" is used", pps_kind);
    }

  LDV_FATAL_ERROR ("incorrect primitive pointcut kind \"%d\" is used with primitive pointcut signature kind \"%d\"", pp_kind, pps_kind);
}

ldv_cp_ptr
ldv_create_c_pointcut (void)
{
  ldv_cp_ptr c_pointcut = NULL;

  c_pointcut = XCNEW (ldv_composite_pointcut);
  ldv_print_info (LDV_INFO_MEM, "composite pointcut memory was released");

  c_pointcut->cp_kind = LDV_CP_NONE;

  return c_pointcut;
}

ldv_pps_ptr
ldv_create_pp_signature (void)
{
  ldv_pps_ptr pp_signature = NULL;

  pp_signature = XCNEW (ldv_primitive_pointcut_signature);
  ldv_print_info (LDV_INFO_MEM, "primitive pointcut signature memory was released");

  pp_signature->pps_kind = LDV_PPS_NONE;

  return pp_signature;
}

int
ldv_get_id_kind (char *id)
{
  int i;

  /* Do not bind an identifier with some C keyword when parse a macro
     signature. */
  if (!ldv_ismacro)
    {
      /* Check whether an identifier is a C declaration specifier keyword. */
      for (i = 0; ldv_keyword_token_map[i].keyword; i++)
        {
          if (!strcmp(id, ldv_keyword_token_map[i].keyword))
            {
              ldv_print_info (LDV_INFO_LEX, "lex parsed keyword \"%s\"", id);
              return ldv_keyword_token_map[i].token;
            }
        }
    }

  /* A typedef name is encountered when type specifiers are parsed and a
     nonkeyword identifier was met. */
  if (!ldv_istype_spec)
    {
      ldv_istype_spec = true;

      ldv_print_info (LDV_INFO_LEX, "lex parsed typedef name \"%s\"", id);
      return LDV_TYPEDEF_NAME;
    }

  ldv_print_info (LDV_INFO_LEX, "lex parsed identifier \"%s\"", id);
  return LDV_ID;
}

/* We aren't interested in advice body content, except for correct determinition
   of the advice body end (that is '}') and aspect patterns. */
unsigned int
ldv_parse_advice_body (ldv_ab_ptr *body)
{
  int c;
  int brace_count = 1;
  ldv_aspect_pattern_ptr pattern = NULL;
  ldv_ab_aspect_pattern_ptr body_pattern = NULL;
  char *comment = NULL;

  c = ldv_getc (LDV_ASPECT_STREAM);

  /* Open brace begins an advice body. */
  if (c == '{')
    {
      *body = ldv_create_body ();
      ldv_putc_body (c, *body);
      ldv_set_last_column (yylloc.last_column + 1);

      while (1)
        {
          /* Parse aspect patterns inside an advice body. */
          if ((pattern = ldv_parse_aspect_pattern ()))
            {
              body_pattern = ldv_create_body_aspect_pattern ();
              body_pattern->pattern = pattern;
              body_pattern->place = LDV_STR_OFFSET (ldv_get_body_text (*body));
              ldv_list_push_back (&((*body)->patterns), body_pattern);
              continue;
            }

          /* Parse comments inside a body. We should keep them since there may
             be model comments through them. */
          if ((comment = ldv_parse_comments ()))
            {
              ldv_puts_body (comment, *body);
              continue;
            }

          if ((c = ldv_getc (LDV_ASPECT_STREAM)) == EOF)
            {
              LDV_FATAL_ERROR ("End of file is reached but advice body \"%s\" isn't completed", ldv_get_body_text (*body));
            }

          /* Process the end of line inside a body. */
          if (c == '\n')
            {
              ldv_set_last_line (yylloc.last_line + 1);
              ldv_set_last_column (1);
              /* Reset initial position as well. */
              ldv_set_first_line (yylloc.last_line);
              ldv_set_first_column (yylloc.last_column);
              ldv_putc_body (c, *body);
              continue;
            }

          ldv_putc_body (c, *body);
          ldv_set_last_column (yylloc.last_column + 1);

          /* Increase/decrease a brace counter to skip '{...}' construction
             inside a body. */
          if (c == '{')
            brace_count++;
          else if (c == '}')
            brace_count--;

          if (c == '}' && !brace_count)
            break;
        }

      /* Advice body was parsed successfully. */
      return 1;
    }

  /* Push back a non advice body character. */
  ldv_ungetc (c, LDV_ASPECT_STREAM);

  /* That is advice body wasn't read. */
  return 0;
}

ldv_aspect_pattern_ptr
ldv_parse_aspect_pattern (void)
{
  int c;
  ldv_aspect_pattern_ptr pattern = NULL;
  char *str = NULL;
  unsigned int integer;
  ldv_list_ptr params = NULL;

  c = ldv_getc (LDV_ASPECT_STREAM);

  /* '$' begins an aspect pattern. */
  if (c == '$')
    {
      ldv_set_last_column (yylloc.last_column + 1);

      /* Move first column pointer to the beginning of pattern. */
      ldv_set_first_column (yylloc.last_column);

      pattern = ldv_create_aspect_pattern ();

      /* Parse aspect pattern name. */
      if (ldv_parse_id (&str, false))
        {
          pattern->name = str;
          ldv_print_info (LDV_INFO_LEX, "lex parsed aspect pattern name \"%s\"", pattern->name);
        }
      else
        {
          LDV_FATAL_ERROR ("aspect pattern hasn't a name!");
        }

      /* Some aspect patterns require corresponding argument numbers. */
      if (ldv_parse_unsigned_integer (&integer))
        {
          pattern->arg_numb = integer;
          ldv_print_info (LDV_INFO_LEX, "lex parsed aspect pattern argument number \"%u\"", pattern->arg_numb);
        }
      else if (!strcmp (pattern->name, "arg")
        || !strcmp (pattern->name, "arg_type")
        || !strcmp (pattern->name, "arg_size")
        || !strcmp (pattern->name, "arg_value"))
        {
          LDV_FATAL_ERROR ("aspect pattern \"%s\" requires corresponding argument number to be specified", pattern->name);
        }

      /* Parse aspect pattern parameters if so. */
      if ((params = ldv_parse_aspect_pattern_params ()))
        pattern->params = params;

      /* Evaluate environment variables immediately after parsing. */
      if (!strcmp (pattern->name, "env"))
        pattern->value = ldv_get_aspect_pattern_env (pattern);

      /* Use a special value for aspect pattern pointing to a file instrumented. */
      if (!strcmp (pattern->name, "this"))
        pattern->value = "$this";

      return pattern;
    }
  else
    {
      /* Push back a non aspect pattern character. */
      ldv_ungetc (c, LDV_ASPECT_STREAM);
    }

  /* That is aspect pattern wasn't read. */
  return NULL;
}

ldv_aspect_pattern_param_ptr
ldv_parse_aspect_pattern_param (void)
{
  ldv_aspect_pattern_param_ptr param = NULL;
  ldv_aspect_pattern_ptr pattern = NULL;
  char *str = NULL;
  unsigned int integer;

  param = ldv_create_aspect_pattern_param ();

  if ((pattern = ldv_parse_aspect_pattern ()))
    {
      param->kind = LDV_ASPECT_PATTERN_ASPECT_PATTERN;
      param->aspect_pattern = pattern;

      ldv_print_info (LDV_INFO_LEX, "lex parsed aspect pattern parameter that is aspect pattern");

      return param;
    }

  if (ldv_parse_unsigned_integer (&integer))
    {
      param->kind = LDV_ASPECT_PATTERN_INTEGER;
      param->integer = integer;

      ldv_print_info (LDV_INFO_LEX, "lex parsed unsigned int aspect pattern parameter \"%u\"", integer);

      return param;
    }

  if (ldv_parse_id (&str, true))
    {
      param->kind = LDV_ASPECT_PATTERN_STRING;
      param->string = str;

      ldv_print_info (LDV_INFO_LEX, "lex parsed string aspect pattern parameter \"%s\"", str);

      return param;
    }

  if (ldv_parse_aspect_pattern_param_str (&str))
    {
      param->kind = LDV_ASPECT_PATTERN_STRING;
      param->string = str;

      ldv_print_info (LDV_INFO_LEX, "lex parsed string aspect pattern parameter \"%s\"", str);

      return param;
    }

  /* That is aspect pattern parameter wasn't read. */
  return NULL;
}

unsigned int
ldv_parse_aspect_pattern_param_str (char **str)
{
  int c;
  unsigned int byte_count = 0;
  ldv_str_ptr str_read = NULL;

  c = ldv_getc (LDV_ASPECT_STREAM);

  /* String aspect pattern parameter is a sequence of characters in quotes. */
  if (c == '"')
    {
      byte_count++;
      str_read = ldv_create_string ();

      /* Get the rest of string. */
      while (1)
        {
          c = ldv_getc (LDV_ASPECT_STREAM);
          byte_count++;

          if (c == '"')
            break;

          ldv_putc_string (c, str_read);
        }
    }

  if (byte_count)
    {
      /* Assign read from stream string to string passed through parameter. */
      *str = ldv_get_str (str_read);
      /* Move current position properly and return the number of bytes read. */
      ldv_set_last_column (yylloc.last_column + byte_count);
      return byte_count;
    }

  /* Don't assign any value to string passed through parameter. 0 bytes were
     read from stream. */
  return 0;
}

ldv_list_ptr
ldv_parse_aspect_pattern_params (void)
{
  int c;
  ldv_list_ptr params = NULL;
  ldv_aspect_pattern_param_ptr param = NULL;

  c = ldv_getc (LDV_ASPECT_STREAM);

  /* '<' begins an aspect pattern parameters list. */
  if (c == '<')
    {
      ldv_set_last_column (yylloc.last_column + 1);

      while (1)
        {
          if ((param = ldv_parse_aspect_pattern_param ()))
            {
              ldv_list_push_back (&params, param);
            }
          else
            {
              LDV_FATAL_ERROR ("aspect pattern parameter wasn't parsed");
            }

          /* Next symbol may be either ',' (that means that there is some other
             aspect pattern parameters) or '>' (that finishes parameters list). */
          ldv_set_last_column (yylloc.last_column + 1);
          switch (c = ldv_getc (LDV_ASPECT_STREAM))
            {
            case ',':
              break;

            case '>':
              return params;

            default:
              LDV_FATAL_ERROR ("aspect pattern parameters list has incorrect format!");
            }
        }
    }
  else
    {
      /* Push back a non aspect pattern parameter character. */
      ldv_ungetc (c, LDV_ASPECT_STREAM);
    }

  /* That is aspect pattern parameter wasn't read. */
  return NULL;
}

int
ldv_parse_aspect_pattern_known_value (char const **str)
{
  ldv_aspect_pattern_ptr pattern = NULL;

  /* First of all try to parse aspect pattern. */
  if ((pattern = ldv_parse_aspect_pattern ()))
    {
      if (pattern->value)
        {
          *str = pattern->value;

          return 1;
        }
      else
        {
          /* Increase and decrease a current last column position artificially
             to meet standard error conditions and print information on errors
             properly. */
          ldv_set_last_column (yylloc.last_column + 1);
          ldv_print_info_location (yylloc, LDV_ERROR_LEX, "incorrect aspect pattern \"%s\" was used", pattern->name);
          ldv_set_last_column (yylloc.last_column - 1);
          LDV_FATAL_ERROR ("aspect pattern \"%s\" cannot be calculated without matching", pattern->name);
        }
    }

  /* That is aspect pattern wasn't read. */
  return 0;
}

char *
ldv_parse_comments (void)
{
  int c, c_next;
  ldv_text_ptr comment = NULL;

  while ((c = ldv_getc (LDV_ASPECT_STREAM)) != EOF)
    {
      /* A possible comment beginning. */
      if (c == '/')
        {
          /* Define a comment type (C or C++) by means of a following
             character. */
          if ((c_next = ldv_getc (LDV_ASPECT_STREAM)) == EOF)
            {
              LDV_FATAL_ERROR ("end of file is reached, but comment isn't completed");
            }

          /* Drop a C++ comment '//...\n' from '//' up to the end of a line.
             Don't track a current file position. */
          if (c_next == '/')
            {
              comment = ldv_create_text ();
              ldv_puts_text ("//", comment);

              while ((c = ldv_getc (LDV_ASPECT_STREAM)) != EOF)
                {
                  /* Push back the end of line to calculate position properly. */
                  if (c == '\n')
                    {
                      ldv_ungetc (c, LDV_ASPECT_STREAM);
                      break;
                    }

                  ldv_putc_text (c, comment);
                  ldv_print_info (LDV_INFO_IO, "read C++ comment character \"%c\"", ldv_end_of_line (c));
                }

              /* So, we'll skip following whitespaces and comments if so. */
              return ldv_get_text (comment);
            }
          /* Drop a C comment '/_*...*_/' from '/_*' up to '*_/'. Track a
             current file position, since '*_/' can be placed at another line
             and there may be other symbols after it. */
          else if (c_next == '*')
            {
              comment = ldv_create_text ();
              ldv_puts_text ("/*", comment);
              ldv_set_last_column (yylloc.last_column + 2);

              while ((c = ldv_getc (LDV_ASPECT_STREAM)) != EOF)
                {
                  /* See whether a C comment end is reached. */
                  if (c == '*')
                    {
                      c_next = ldv_getc (LDV_ASPECT_STREAM);

                      if (c_next != EOF && c_next == '/')
                        {
                          ldv_puts_text ("*/", comment);
                          ldv_set_last_column (yylloc.last_column + 2);
                          /* So, we'll skip following whitespaces and comments if so. */
                          return ldv_get_text (comment);
                        }
                      else
                        {
                          ldv_set_last_column (yylloc.last_column + 1);
                          ldv_ungetc (c_next, LDV_ASPECT_STREAM);
                        }
                    }
                  /* If the end of line is encountered, enlarge a current line
                     position. */
                  else if (c == '\n')
                    {
                      ldv_set_last_line (yylloc.last_line + 1);
                      ldv_set_last_column (1);
                    }
                  else
                    ldv_set_last_column (yylloc.last_column + 1);

                  ldv_putc_text (c, comment);
                  ldv_print_info (LDV_INFO_IO, "read C comment character \"%c\"", ldv_end_of_line (c));
                }

              LDV_FATAL_ERROR ("End of file is reached but C comment \"%s\" isn't completed", ldv_get_text (comment));
            }
          else
            {
              /* Push back non comment characters. */
              ldv_ungetc (c_next, LDV_ASPECT_STREAM);
              ldv_ungetc (c, LDV_ASPECT_STREAM);
              break;
            }
        }
      else
        {
          /* Push back a non comment character. */
          ldv_ungetc (c, LDV_ASPECT_STREAM);
          break;
        }
    }

  /* No comments were parsed. */
  return NULL;
}

/* Correct file name has the form "file_name" */
unsigned int
ldv_parse_file_name (char **file_name)
{
  int c;
  unsigned int byte_count = 0;
  ldv_str_ptr str = NULL;
  char const *aspect_pattern_value = NULL;

  c = ldv_getc (LDV_ASPECT_STREAM);

  /* Quote begins a file name. */
  if (c == '"')
    {
      byte_count++;
      str = ldv_create_string ();

      /* Get the rest of a file name. Note, that there may be aspect patterns
         with known values in this name. */
      while (1)
        {
          if (ldv_parse_aspect_pattern_known_value (&aspect_pattern_value))
            {
              ldv_puts_string (aspect_pattern_value, str);
              continue;
            }

          if ((c = ldv_getc (LDV_ASPECT_STREAM)) == EOF)
            break;

          byte_count++;

          /* Second quote finishes a given file name. */
          if (c == '"')
            break;

          if (c == '\n')
            {
              LDV_FATAL_ERROR ("file path isn't terminated with quote - it's terminated with the end of line");
            }

          ldv_putc_string (c, str);
        }

      /* Assign read file name to file name passed through parameter. */
      *file_name = ldv_get_str (str);

      /* Move current position properly. */
      ldv_set_last_column (yylloc.last_column + byte_count);

      return byte_count;
    }

  /* Push back a non file name character. */
  ldv_ungetc (c, LDV_ASPECT_STREAM);

  /* That is file name wasn't read. */
  return 0;
}

/* Correct identifier or C keyword begins with any character (in a low or an
   upper case) or '_'.  Subsequent identifier symbols are characters, digits and
   '_'. */
unsigned int
ldv_parse_id (char **id, bool accept_digits)
{
  int c;
  unsigned int byte_count = 0;
  ldv_str_ptr str = NULL;

  c = ldv_getc (LDV_ASPECT_STREAM);

  if (ISIDST (c))
    {
      str = ldv_create_string ();

      /* Get the rest of an identifier. */
      do
        {
          byte_count++;
          ldv_putc_string (c, str);
          c = ldv_getc (LDV_ASPECT_STREAM);
        }
      while (accept_digits ? ISIDNUM (c) : ISIDST (c));
    }

  /* Push back a first nonidentifier character. */
  ldv_ungetc (c, LDV_ASPECT_STREAM);

  if (str)
    {
      /* Assign read identifier to identifier passed through parameter. */
      *id = ldv_get_str (str);

      /* Move current position properly. */
      ldv_set_last_column (yylloc.last_column + byte_count);

      return byte_count;
    }

  /* That is identifier wasn't read. */
  return 0;
}

/* Preprocessor special directives have the following format:
     # \d+ "[^"]+" \d+
   where the first number denotes the following line number in the file
   specified inside quotes. There are may be less or more numbers at the end
   of such lines. A current position isn't tracked while processing such
   lines. */
int
ldv_parse_preprocessor_directives (void)
{
  int c, c_next;
  unsigned int line_numb;
  ldv_str_ptr file_name;

  while ((c = ldv_getc (LDV_ASPECT_STREAM)) != EOF)
    {
      if (c == '#')
        {
          line_numb = 0;

          while ((c = ldv_getc (LDV_ASPECT_STREAM)) != EOF)
            {
              /* Read a file name specified and change a current file name
                 respectively to report error locations correctly. */
              if (c == '"')
                {
                  file_name = ldv_create_string ();

                  while ((c_next = ldv_getc (LDV_ASPECT_STREAM)) != EOF)
                   {
                     ldv_print_info (LDV_INFO_IO, "dropped preprocessor character \"%c\"", ldv_end_of_line (c_next));

                     if (c_next == '"')
                       {
                          break;
                       }

                     ldv_putc_string (c_next, file_name);
                   }

                  ldv_set_file_name (ldv_get_str(file_name));
                }

              /* Update the current line with respect to a special line. */
              if (!line_numb
                && (ldv_parse_unsigned_integer (&line_numb) > 0))
                {
                  ldv_set_last_line (line_numb);
                  ldv_set_last_column (1);
                }

              if (c == '\n')
                {
                  /* Don't ungetc the end of line to avoid line enlarging. */
                  break;
                }

              ldv_print_info (LDV_INFO_IO, "dropped preprocessor character \"%c\"", ldv_end_of_line (c));
            }

          /* So, lexer should be envolved from the beginning. */
          return 1;
        }
      else
        {
          ldv_ungetc (c, LDV_ASPECT_STREAM);
          break;
        }
    }

  /* That is a special preprocessor directive wasn't read. */
  return 0;
}

unsigned int
ldv_parse_unsigned_integer (unsigned int *integer)
{
  int c;
  unsigned int byte_count = 0;
  unsigned int integer_read = 0;

  c = ldv_getc (LDV_ASPECT_STREAM);

  if (ISDIGIT (c))
    {
      do
        {
          integer_read = 10 * integer_read + (c - '0');
          byte_count++;
          c = ldv_getc (LDV_ASPECT_STREAM);
        }
      while (ISDIGIT (c));
    }

  /* Push back a first nondigit character. */
  ldv_ungetc (c, LDV_ASPECT_STREAM);

  if (byte_count)
    {
      /* Assign read from stream integer to integer passed through parameter. */
      *integer = integer_read;
      /* Move current position properly and return the number of bytes read. */
      ldv_set_last_column (yylloc.last_column + byte_count);
      return byte_count;
    }

  /* Don't assign any value to integer passed through parameter. 0 bytes were
     read from stream. */
  return 0;
}

void
ldv_parse_whitespaces (void)
{
  int c;

  while (1)
    {
      c = ldv_getc (LDV_ASPECT_STREAM);

      switch (c)
        {
        case ' ':
        case '\t':
          ldv_set_last_column (yylloc.last_column + 1);
          continue;

        case '\n':
          ldv_set_last_line (yylloc.last_line + 1);
          ldv_set_last_column (1);
          continue;

        default:
          /* Push back a first nonwhitespace character. */
          ldv_ungetc (c, LDV_ASPECT_STREAM);
        }

      break;
    }
}

void
ldv_print_info_location (yyltype loc, const char *info_kind, const char *format, ...)
{
  va_list ap;

  if (!strcmp (info_kind, LDV_INFO_BISON))
    {
      if (!ldv_isinfo_bison)
        return;
    }
  else if (!strcmp (info_kind, LDV_INFO_LEX))
    {
      if (!ldv_isinfo_lex)
        return;
    }
  else if (strcmp (info_kind, LDV_ERROR_BISON) && strcmp (info_kind, LDV_ERROR_LEX))
    {
      LDV_FATAL_ERROR ("don't use location tracking beyond lex or bison information");
    }

  va_start (ap, format);
  /* Use a previous last line since a current value points to a following
     character. */
  fprintf (LDV_INFO_STREAM, "%s: %s:%d.%d-%d.%d: ", info_kind, loc.file_name, loc.first_line, loc.first_column, loc.last_line, (loc.last_column - 1));
  vfprintf (LDV_INFO_STREAM, format, ap);
  va_end (ap);

  fputc ('\n', LDV_INFO_STREAM);
}

ldv_pps_ptr_quals_ptr
ldv_set_ptr_quals (ldv_pps_declspecs_ptr declspecs)
{
  ldv_pps_ptr_quals_ptr ptr_quals = NULL;

  ptr_quals = ldv_create_ptr_quals ();

  /* In that case when there is no declaration specifiers at all. */
  if (!declspecs)
    {
      ptr_quals->isconst = false;
      ptr_quals->isrestrict = false;
      ptr_quals->isvolatile = false;

      return ptr_quals;
    }

  /* Set type qualifiers from declaration specifiers to pointer qualifiers. */
  ptr_quals->isconst = declspecs->isconst;
  ptr_quals->isrestrict = declspecs->isrestrict;
  ptr_quals->isvolatile = declspecs->isvolatile;

  return ptr_quals;
}

void
yyerror (char const *format, ...)
{
  va_list ap;

  va_start (ap, format);

  ldv_print_info (LDV_ERROR_BISON, format, ap);

  va_end (ap);

  ldv_print_info_location (yylloc, LDV_ERROR_BISON, "aspect file processed has incorrect syntax");

  LDV_FATAL_ERROR ("terminate work after syntax error happened");
}

int
yylex (void)
{
  int c, c_next;
  ldv_ab_ptr body = NULL;
  ldv_file_ptr file = NULL;
  char *str = NULL;
  ldv_id_ptr id = NULL;
  unsigned int i;
  ldv_int_ptr integer = NULL;

  /* Skip nonsignificant whitespaces from the beginning of a current line. */
  ldv_parse_whitespaces ();

  /* Examine whether a C or C++ comment is encountered. Skip a corresponding
     comment if so and continue parsing. */
  if (ldv_parse_comments ())
    return yylex ();

  /* Examine whether a special preprocessor line is encountered. */
  if (ldv_parse_preprocessor_directives ())
    return yylex ();

  /* Initialize a first line and a first column. */
  ldv_set_first_line (yylloc.last_line);
  ldv_set_first_column (yylloc.last_column);

  /* Get a first character of a token. */
  c = ldv_getc (LDV_ASPECT_STREAM);

  /* Reach the end of a file. So aspect parser must finish its work. */
  if (c == EOF)
    {
      ldv_print_info (LDV_INFO_LEX, "lex reached the end of file");
      return 0;
    }

  /* Push back non EOF character. */
  ldv_ungetc (c, LDV_ASPECT_STREAM);

  /* Parse an advice body. */
  if (ldv_parse_advice_body (&body))
    {
      /* Set a corresponding semantic value. */
      yylval.body = body;

      ldv_print_info (LDV_INFO_LEX, "lex parsed body \"%s\"", ldv_get_body_text (body));
      return LDV_BODY;
    }

  /* Parse a file name. */
  if (ldv_parse_file_name (&str))
    {
      /* Initialize corresponding internal structure. */
      file = ldv_create_file ();
      ldv_puts_file (str, file);

      /* Check a special file name pattern that refer to a file processed. */
      if (!strcmp (str, "$this"))
        file->isthis = true;
      else
        file->isthis = false;

      /* Set a corresponding semantic value. */
      yylval.file = file;

      ldv_print_info (LDV_INFO_LEX, "lex parsed file name \"%s\"", ldv_get_file_name (file));
      return LDV_FILE;
    }

  /* Parse some identifier or a C keyword. */
  if (ldv_parse_id (&str, true))
    {
      /* Initialize corresponding internal structure. */
      id = ldv_create_id ();
      ldv_puts_id (str, id);

      /* Set a corresponding semantic value. */
      yylval.id = id;

      return ldv_get_id_kind (str);
    }

  /* Parse some integer number. It consists of digits. */
  if (ldv_parse_unsigned_integer (&i))
    {
      /* Initialize corresponding internal structure. */
      integer = ldv_create_int ();
      integer->numb = i;

      /* Set a corresponding semantic value. */
      yylval.integer = integer;

      ldv_print_info (LDV_INFO_LEX, "lex parsed integer number \"%d\"", ldv_get_int (integer));

      return LDV_INT_NUMB;
    }

  /* After all parse multicharacter tokens. */
  c = ldv_getc (LDV_ASPECT_STREAM);
  ldv_set_last_column (yylloc.last_column + 1);
  if (c == '|' || c == '&' || c == '.')
    {
      c_next = ldv_getc (LDV_ASPECT_STREAM);

      /* Or boolean operator '||' */
      if (c == '|' && c_next == '|')
        {
          ldv_set_last_column (yylloc.last_column + 1);
          ldv_print_info (LDV_INFO_LEX, "lex parsed or boolean operator");

          return LDV_OR;
        }

      /* And boolean operator '&&' */
      if (c == '&' && c_next == '&')
        {
          ldv_set_last_column (yylloc.last_column + 1);
          ldv_print_info (LDV_INFO_LEX, "lex parsed and boolean operator");

          return LDV_AND;
        }

      /* Either C ellipsis '...' or ldv any parameters '..'. */
      if (c == '.' && c_next == '.')
        {
          ldv_set_last_column (yylloc.last_column + 1);

          /* See on a next character. */
          c_next = ldv_getc (LDV_ASPECT_STREAM);

          if (c_next == '.')
            {
              ldv_set_last_column (yylloc.last_column + 1);
              ldv_print_info (LDV_INFO_LEX, "lex parsed ellipsis");

              return LDV_ELLIPSIS;
            }
          else
            {
              ldv_ungetc (c_next, LDV_ASPECT_STREAM);
              ldv_print_info (LDV_INFO_LEX, "lex parsed any parameters wildcard");

              return LDV_ANY_PARAMS;
            }
        }

      ldv_ungetc (c, LDV_ASPECT_STREAM);
    }

  /* Just return a symbol. */
  return c;
}

