/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     STATE = 259,
     SETENV = 260,
     PRINTENV = 261,
     UNSETENV = 262,
     CD = 263,
     ALIAS = 264,
     UNALIAS = 265,
     LS = 266,
     QUOTE = 267,
     DOLLAR = 268,
     OCURL = 269,
     ECURL = 270,
     LESS = 271,
     GREATER = 272,
     STAR = 273,
     QUESTION = 274,
     PIPING = 275,
     AMPER = 276,
     ENDF = 277,
     BYE = 278,
     VARIABLE = 279
   };
#endif
/* Tokens.  */
#define NUMBER 258
#define STATE 259
#define SETENV 260
#define PRINTENV 261
#define UNSETENV 262
#define CD 263
#define ALIAS 264
#define UNALIAS 265
#define LS 266
#define QUOTE 267
#define DOLLAR 268
#define OCURL 269
#define ECURL 270
#define LESS 271
#define GREATER 272
#define STAR 273
#define QUESTION 274
#define PIPING 275
#define AMPER 276
#define ENDF 277
#define BYE 278
#define VARIABLE 279




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 26 "shell.y"
{
	char* str;
	int num;
}
/* Line 1529 of yacc.c.  */
#line 102 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

