#ifndef NODE_H
#define NODE_H

#include "symbol.table.h"
#include "token.h"

typedef struct node
{
	struct node* leaf1;
	struct node* leaf2;
    struct node* leaf3;
    struct node* leaf4;
    struct node* leaf5;
    struct token *token;
    char name[50];
    int type;
}
Node;

extern Node* createNode(char* name);
extern void printTree(Node* node, int depth);
extern void freeTree(Node *tree);
extern int checkTypeListExp(Node *node, int *scopeStack);
extern void checkIfIsFunctionUnary(Node *node, int linha, int coluna, int *scopeStack, int *errosSemanticos);
extern void checkTypeOfReturn(Node *node, char *typeOfFunction,  int *errosSemanticos);
extern int getExpressionType(Node* left, Node *right, Token token, int *errosSemanticos);
extern int getAssignType(int typeOfLeftSide, int typeOfRightSide,  int *errosSemanticos, int line, int column);
extern int resolveConversionOfList(Node *left, Node *right);
extern void storeParamsTypes(Symbol *symbol, Node *node, int *index);
extern void verifyCall(char *lexeme, int linha, int coluna, int *scopeStack, int *errosSemanticos, int numberOfArgs, Node *node);

#endif