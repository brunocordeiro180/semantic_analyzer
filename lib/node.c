#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "symbol.table.h"

#define BHMAG "\e[1;95m"
#define RESET "\e[0m"

Node *tree = NULL;

extern Node *createNode(char *name)
{
    Node *node = (Node *)malloc(sizeof(Node));
    strcpy(node->name, name);

    node->leaf1 = NULL;
    node->leaf2 = NULL;
    node->leaf3 = NULL;
    node->leaf4 = NULL;
    node->leaf5 = NULL;
    node->token = NULL;

    return node;
}

extern void printTree(Node *node, int depth)
{
    if (node == NULL)
    {
        return;
    }

    if (strcmp(node->name, "\0") != 0 && strcmp(node->name, "identifier") != 0)
    {

        for (int i = 0; i < depth; i++)
        {
            printf("-");
        }

        printf("%s\n", node->name);
    }

    if (node->token)
    {
        for (int i = 0; i < depth; i++)
        {
            printf(BHMAG "-" RESET);
        }

        printf(BHMAG " %s " RESET, node->token->lexeme);
        printf(BHMAG "(%d,%d)\n" RESET, node->token->line, node->token->column);
    }

    printTree(node->leaf1, depth + 1);
    printTree(node->leaf2, depth + 1);
    printTree(node->leaf3, depth + 1);
    printTree(node->leaf4, depth + 1);
    printTree(node->leaf5, depth + 1);
}

extern void freeTree(Node *tree)
{

    if (!tree)
    {
        return;
    }

    if (tree->token)
    {
        free(tree->token);
    }

    freeTree(tree->leaf1);
    freeTree(tree->leaf2);
    freeTree(tree->leaf3);
    freeTree(tree->leaf4);
    freeTree(tree->leaf5);

    free(tree);
}

extern int checkTypeListExp(Node *node, int *scopeStack)
{
    if (node)
    {
        if (strcmp(node->name, "identifier") == 0)
        {
            return searchTypeInSymbolTable(node->token->lexeme, scopeStack);
        }
        else
        {
            checkTypeListExp(node->leaf1, scopeStack);
            checkTypeListExp(node->leaf2, scopeStack);
            checkTypeListExp(node->leaf3, scopeStack);
            checkTypeListExp(node->leaf4, scopeStack);
            checkTypeListExp(node->leaf5, scopeStack);
        }
    }


    return -1;

    // printf("\n\n\n\n");

    // printTree(node, 0);

    // printf("\n\n\n\n");
}