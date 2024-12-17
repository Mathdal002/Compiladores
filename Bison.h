/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_BNF_BISON_H_INCLUDED
# define YY_BNF_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int bnf_debug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    _ERROR_ = 258,                 /* _ERROR_  */
    _BANGEQ = 259,                 /* _BANGEQ  */
    _DAMP = 260,                   /* _DAMP  */
    _LPAREN = 261,                 /* _LPAREN  */
    _RPAREN = 262,                 /* _RPAREN  */
    _STAR = 263,                   /* _STAR  */
    _PLUS = 264,                   /* _PLUS  */
    _COMMA = 265,                  /* _COMMA  */
    _MINUS = 266,                  /* _MINUS  */
    _SLASH = 267,                  /* _SLASH  */
    _COLON = 268,                  /* _COLON  */
    _SEMI = 269,                   /* _SEMI  */
    _LT = 270,                     /* _LT  */
    _LDARROW = 271,                /* _LDARROW  */
    _LTGT = 272,                   /* _LTGT  */
    _EQ = 273,                     /* _EQ  */
    _DEQ = 274,                    /* _DEQ  */
    _GT = 275,                     /* _GT  */
    _GTEQ = 276,                   /* _GTEQ  */
    _KW_23 = 277,                  /* _KW_23  */
    _KW_Istrut = 278,              /* _KW_Istrut  */
    _KW_LABEL = 279,               /* _KW_LABEL  */
    _KW_Pa = 280,                  /* _KW_Pa  */
    _KW_Perma = 281,               /* _KW_Perma  */
    _KW_Quanto = 282,              /* _KW_Quanto  */
    _KW_So = 283,                  /* _KW_So  */
    _KW_Uai = 284,                 /* _KW_Uai  */
    _KW_Vaila = 285,               /* _KW_Vaila  */
    _KW_Vemca = 286,               /* _KW_Vemca  */
    _KW_Zoia = 287,                /* _KW_Zoia  */
    _LBRACK = 288,                 /* _LBRACK  */
    _RBRACK = 289,                 /* _RBRACK  */
    _KW_ceu = 290,                 /* _KW_ceu  */
    _KW_deus = 291,                /* _KW_deus  */
    _KW_do = 292,                  /* _KW_do  */
    _KW_floati = 293,              /* _KW_floati  */
    _KW_intero = 294,              /* _KW_intero  */
    _KW_main = 295,                /* _KW_main  */
    _KW_stringo = 296,             /* _KW_stringo  */
    _LBRACE = 297,                 /* _LBRACE  */
    _BAR = 298,                    /* _BAR  */
    _RBRACE = 299,                 /* _RBRACE  */
    _STRING_ = 300,                /* _STRING_  */
    _INTEGER_ = 301,               /* _INTEGER_  */
    _DOUBLE_ = 302,                /* _DOUBLE_  */
    _IDENT_ = 303                  /* _IDENT_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 51 "bnf.y"

  int    _int;
  char   _char;
  double _double;
  char*  _string;
  S s_;
  Block block_;
  CMDS cmds_;
  CMD cmd_;
  ATRIB atrib_;
  EXP exp_;
  UAI uai_;
  OPerL operl_;
  OPerA opera_;
  OPL opl_;
  ZOIA zoia_;
  VEMCA vemca_;
  QUANTO quanto_;
  PA pa_;
  VALUE value_;
  Type type_;
  TREM trem_;
  STRUCT struct_;
  HeteroElements heteroelements_;
  HeteroElement heteroelement_;
  FUNC func_;
  VAILA vaila_;
  LABEL label_;
  ConjValues conjvalues_;
  ConjValues2D conjvalues2d_;
  PERMA perma_;
  APONTA aponta_;

#line 146 "Bison.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




int bnf_parse (yyscan_t scanner, YYSTYPE *result);


#endif /* !YY_BNF_BISON_H_INCLUDED  */
