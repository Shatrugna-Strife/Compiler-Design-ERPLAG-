/*
GROUP -  5

Prateek Sharma          -  2017A7PS0171P
Samarth Jain            -  2017A7PS0067P
Sriram Prakhya          -  2017A7PS0073P
Korukanti Shatrugna Rao -  2017A7PS0118P
*/

#ifndef codegen
#define codegen
#include <stdio.h>
#include <stdlib.h>
#include "typeChecker.h"

extern void codeGeneration(node* head);
extern void resetCodeGen();
extern void inputCode(node* head);
extern void printCode(node *head);
extern void assignopCode(node* head);
extern void loopOpCode(node* head);
extern void conditionalopCode(node* head);
FILE *fp_asm;
#endif
