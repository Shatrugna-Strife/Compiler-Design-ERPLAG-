/*
GROUP -  5

Prateek Sharma          -  2017A7PS0171P
Samarth Jain            -  2017A7PS0067P
Sriram Prakhya          -  2017A7PS0073P
Korukanti Shatrugna Rao -  2017A7PS0118P
*/

#ifndef typeCheckerDef
#define typeCheckerDef
#include <stdio.h>
#include <stdlib.h>
#include "parser.h"
#include "symbolTableDef.h"

typedef struct arraysInfoDynamic
{

    int isdynamic;
    int sc;
	int type;
	char arrayId[100];
	char lowerBoundLexeme[100];
	int subtype;
	char higherBoundLexeme[100];

}arraysInfoDynamic;


extern int tchinter;

node* MainStack[1000];
extern int semantic_error;
extern int condition5;


char storeStack[100];



#endif
