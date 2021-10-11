#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "symbol.table.h"

#define BHRED "\e[1;91m"
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
    node->type = -1;

    return node;
}

extern void printTree(Node *node, int depth)
{
    if (node == NULL)
    {   
        return;
    }

    if (strcmp(node->name, "\0") != 0 && !node->token)
    {

        for (int i = 0; i < depth; i++)
        {
            printf("-");
        }

        printf(" %s \n", node->name);
    }

    if (node->token)
    {
        for (int i = 0; i < depth; i++)
        {
            printf(BHMAG "-" RESET);
        }

        if(strcmp(node->name, "\0") != 0){
            printf(" %s", node->name);
        }

        printf(BHMAG " %s " RESET, node->token->lexeme);

        if(node->type != -1 && node->type != 7){
            printf("<%s> ", convertIntToType(node->type));
        }

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
        if (strcmp(node->name, "ID") == 0)
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
}

extern void checkIfIsFunctionUnary(Node *node, int linha, int coluna, int *scopeStack, int *errosSemanticos)
{
    if (node)
    {
        if (strcmp(node->name, "ID") == 0)
        {
            int isUnary = checkIfIsFunctionUnaryInSymbolTable(node->token->lexeme, linha, coluna, scopeStack, errosSemanticos);

            if (isUnary == 1)
            {
                return;
            }

            if (isUnary == 0)
            {
                *errosSemanticos = *errosSemanticos + 1;
                printf(BHRED "SEMANTIC ERROR -> Function \'%s\' must be unary. Line %d Column %d\n" RESET, node->token->lexeme, linha, coluna);
            }
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
}

extern void checkTypeOfReturn(Node *node)
{

    
}

int getChildType(Node *node){

    if(node == NULL){
        return -1;
    }

    if(node->type != -1){
        // printf("THIS IS TE TYPE %d\n", node->type);

        if(node->type == 4){
            return 1;
        }else if (node->type == 5){
            return 0;
        }else {
            return node->type;
        }
    }

    getChildType(node->leaf1);
    getChildType(node->leaf2);
    getChildType(node->leaf3);
    getChildType(node->leaf4);
    getChildType(node->leaf5);
}

extern int getExpressionType(Node* left, Node *right, Token token, int *errosSemanticos){
    int leftType = getChildType(left);
    int rightType = getChildType(right);

    // printf("\n\nSYMBOL %s. THIS IS LEFT TYPE: %d\n", lexeme, leftType);
    // printf("\n\nSYMBOL %s. THIS IS RIGHT TYPE: %d\n", lexeme, rightType);

    if(strcmp(token.lexeme, "+") == 0 || strcmp(token.lexeme, "-") == 0 || strcmp(token.lexeme, "*") == 0 || strcmp(token.lexeme, "/") == 0){
       if(leftType == 2 || leftType == 3 || leftType == 6 || rightType == 2 || rightType == 3 || rightType == 6){
            *errosSemanticos = *errosSemanticos + 1;
            printf(BHRED "SEMANTIC ERROR -> Operator \'%s\' can not be applied to type \'list\'. Line %d Column %d\n" RESET, token.lexeme, token.line, token.column);
       }
    }

    if((leftType == 1 && rightType == 0) || (leftType == 0 && rightType == 1)){
        if(leftType == 0){
            left->type = 4;
        }

        if(rightType == 0){
            right->type = 4;
        }

        return 1;
    }

    if(leftType == rightType){
        return leftType;
    }
}

extern int getAssignType(int typeOfLeftSide, int typeOfRightSide){

    if(typeOfLeftSide == typeOfRightSide){
        // printf("RETURNING %d\n\n", typeOfRightSide);
        return typeOfRightSide;
    }

    if(typeOfLeftSide == 0 && typeOfRightSide == 1){
        return 5;
    }

    if(typeOfLeftSide == 1 && typeOfRightSide == 0){
        return 4;
    }

    return -1;
}