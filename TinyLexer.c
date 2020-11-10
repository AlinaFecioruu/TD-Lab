// TinyLexer.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <stdio.h>
#include "symbols.h"
#include <errno.h>

extern FILE* yyin;
//extern int yylex(void);
extern int yyparse(void);
extern int yydebug;
const char* lexUnits[] = { "END",
							"INT",
							"RETURN",
							"RBRACE",
							"SEMICOLON",
							"TIMES",
							"WRITE",
							"NOT",
							"IF",
							"LPAR",
							"LBRACK",
							"COMMA",
							"DIVIDE",
							"READ",
							"LENGTH",
							"ELSE",
							"RPAR",
							"RBRACK",
							"PLUS",
							"EQUAL",
							"GREATER",
							"WHILE",
							"NEQUAL",
							"LBRACE",
							"ASSIGN",
							"MINUS",
							"CHAR",
							"LESS",
							"NAME",
							"NUMBER",
							"QCHAR",
							"COMMENT",
							"END_OF_INSTRUCTION" };

int main()
{
	//int lexUnit = 0;
	yydebug = 1;
	yyin = fopen("input.csrc", "rt");
	if (yyin != NULL)
	{
		int result = yyparse();
		switch (result)
		{
		case 0:
			printf("Parse successfull.\n");
			break;

		case 1:
			printf("Invalid input encountered\n");
			break;

		case 2:
			printf("Out of memory\n");
			break;

		default:
			break;
		}
		/*while ((lexUnit = yylex()) != END)
		{
			printf(" -> TOKEN: %s\n", symbols[lexUnit]);
		}*/
		fclose(yyin);
	}
	else
	{
		printf("Fisier inexistent");
	}


}

