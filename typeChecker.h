/*
GROUP -  5

Prateek Sharma          -  2017A7PS0171P
Samarth Jain            -  2017A7PS0067P
Sriram Prakhya          -  2017A7PS0073P
Korukanti Shatrugna Rao -  2017A7PS0118P
*/

#ifndef typeChecker
#define typeChecker
#include <stdio.h>
#include <stdlib.h>
#include "typeCheckerDef.h"

void resetTypeCheck();
extern int returnVarType(char str[50]);
extern int assignTypeToVar(char str[50]);
extern void checkTypes(node* head);
extern int operationNode(char str[50]);
extern void switchStmtErrors(node *head);

#endif
