#ifndef NODE_H
#define NODE_H

#include "symbol.table.h"

typedef struct node
{
	struct node* leaf1;
	struct node* leaf2;
    struct node* leaf3;
    struct node* leaf4;
    struct node* leaf5;
    struct symbol *token;
    char name[50];
}
Node;

extern Node* createNode(char* name);
extern void printTree(Node* node, int depth);
extern void freeTree(Node *tree);

#endif