/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_TINY_TAB_H_INCLUDED
# define YY_YY_TINY_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
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
    END = 258,                     /* END  */
    INT = 259,                     /* INT  */
    RETURN = 260,                  /* RETURN  */
    RBRACE = 261,                  /* RBRACE  */
    SEMICOLON = 262,               /* SEMICOLON  */
    TIMES = 263,                   /* TIMES  */
    WRITE = 264,                   /* WRITE  */
    NOT = 265,                     /* NOT  */
    IF = 266,                      /* IF  */
    LPAR = 267,                    /* LPAR  */
    LBRACK = 268,                  /* LBRACK  */
    COMMA = 269,                   /* COMMA  */
    DIVIDE = 270,                  /* DIVIDE  */
    READ = 271,                    /* READ  */
    LENGTH = 272,                  /* LENGTH  */
    ELSE = 273,                    /* ELSE  */
    RPAR = 274,                    /* RPAR  */
    RBRACK = 275,                  /* RBRACK  */
    PLUS = 276,                    /* PLUS  */
    EQUAL = 277,                   /* EQUAL  */
    GREATER = 278,                 /* GREATER  */
    WHILE = 279,                   /* WHILE  */
    NEQUAL = 280,                  /* NEQUAL  */
    LBRACE = 281,                  /* LBRACE  */
    ASSIGN = 282,                  /* ASSIGN  */
    MINUS = 283,                   /* MINUS  */
    CHAR = 284,                    /* CHAR  */
    LESS = 285,                    /* LESS  */
    NAME = 286,                    /* NAME  */
    NUMBER = 287,                  /* NUMBER  */
    QCHAR = 288,                   /* QCHAR  */
    COMMENT = 289,                 /* COMMENT  */
    END_OF_INSTRUCTION = 290       /* END_OF_INSTRUCTION  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TINY_TAB_H_INCLUDED  */
