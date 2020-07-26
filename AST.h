/*
GROUP -  5

Prateek Sharma          -  2017A7PS0171P
Samarth Jain            -  2017A7PS0067P
Sriram Prakhya          -  2017A7PS0073P
Korukanti Shatrugna Rao -  2017A7PS0118P
*/
#ifndef AST
#define AST
#include <stdio.h>
#include <stdlib.h>

extern void printAST(node* head);
extern void ParseTreenodes(node* head);
extern void ASTnodes(node* head);

extern int importantNode(char str[50]);
extern void deleteNode(node* head);
extern node* generateAST(node* head);
#endif
