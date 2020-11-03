%{
include <stdio.h>
%}
%token END
%token INT
%token RETURN
%token RBRACE
%token SEMICOLON
%token TIMES
%token WRITE
%token NOT
%token IF
%token LPAR
%token LBRACK
%token COMMA
%token DIVIDE 
%token READ
%token LENGTH
%token ELSE
%token RPAR
%token RBRACK
%token PLUS
%token EQUAL
%token GREATER
%token WHILE
%token NEQUAL
%token LBRACE
%token ASSIGN
%token MINUS
%token CHAR
%token LESS
%token NAME
%token NUMBER
%token QCHAR
%token COMMENT
%token END_OF_INSTRUCTION

%start program
%%
program
	:declaration 
	|program declaration 
	;

declaration
	:fun_declaration
	|var_declaration
	;

fun_declaration
	:type NAME LPAR formal_pars RPAR block
	;

formal_pars
	:formal_par 
	|formal_par formal_pars COMMA formal_par
	|
	;

formal_par
	:type NAME
	;

block
	:LBRACE statements RBRACE
	|LBRACE block var_declaration statements RBRACE
	;

var_declaration
	:type NAME SEMICOLON
	;

type
	:INT
	|CHAR
	|type LBRACK exp RBRACK
	;

statements
	: statement 
	| statement statements SEMICOLON statement
	;

statement 
	: IF LPAR exp RPAR statement
	| IF LPAR exp RPAR statement ELSE statement
	| WHILE LPAR exp RPAR statement
	| lexp ASSIGN exp
	| RETURN exp
	| NAME LPAR pars RPAR
	| block
	| WRITE exp
	| READ lexp
	;

lexp
	:var
	| lexp LBRACK exp RBRACK 
	;

exp 
	: lexp
	| exp binop exp
	| unop exp
	| LPAR exp RPAR
	| NUMBER
	| NAME LPAR pars RPAR 
	| QCHAR
	| LENGTH lexp 
	;

binop
	: MINUS
	| PLUS
	| TIMES
	| DIVIDE
	| EQUAL
	| NEQUAL
	| GREATER
	| LESS
	;

unop 
	: MINUS
	|NOT
	;

pars
	: exp
	| exp pars COMMA exp
	|
	;

var
	:NAME



%%

void yyerror(char * s)
{
	printf ("%s\n" , s);
}
