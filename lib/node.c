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
        
        //esse strcmp(node->name, "arg") != 0 eh so pra arvore ficar menos poluida
        if(strcmp(node->name, "\0") != 0 && strcmp(node->name, "arg") != 0){
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

extern void checkTypeOfReturn(Node *node, char *typeOfFunction,  int *errosSemanticos)
{
    if(node == NULL){
        return;
    }

    if(strcmp(node->name, "return_stmt") == 0){
        if((convertTypeToInt(typeOfFunction) == 0 || convertTypeToInt(typeOfFunction) == 1)
            && (node->type == 2 || node->type == 3)
        ){
            *errosSemanticos = *errosSemanticos + 1;
            printf(BHRED "SEMANTIC ERROR -> Function expect return of type \'%s\' but return is of type \'list\'. Line %d Column %d\n" RESET, typeOfFunction, node->token->line, node->token->column);
        }

        if((convertTypeToInt(typeOfFunction) == 2 || convertTypeToInt(typeOfFunction) == 3)
            && (node->type == 0 || node->type == 1 || node->type == 4 || node->type == 5 || node->type == 7)
        ){
            *errosSemanticos = *errosSemanticos + 1;
            printf(BHRED "SEMANTIC ERROR -> Function expect return of type \'%s\' but return is of type \'%s\'. Line %d Column %d\n" RESET, typeOfFunction, convertIntToType(node->type) ,node->token->line, node->token->column);
        }

        if((convertTypeToInt(typeOfFunction) == 2 &&  node->type == 3)
            || (convertTypeToInt(typeOfFunction) == 3 &&  node->type == 2)
        ){
            *errosSemanticos = *errosSemanticos + 1;
            printf(BHRED "SEMANTIC ERROR -> Function expect return of type \'%s\' but return is of type \'%s\'. Line %d Column %d\n" RESET, typeOfFunction, convertIntToType(node->type) ,node->token->line, node->token->column);
        }
    }

    checkTypeOfReturn(node->leaf1, typeOfFunction, errosSemanticos);
    checkTypeOfReturn(node->leaf2, typeOfFunction, errosSemanticos);
    checkTypeOfReturn(node->leaf3, typeOfFunction, errosSemanticos);
    checkTypeOfReturn(node->leaf4, typeOfFunction, errosSemanticos);
    checkTypeOfReturn(node->leaf5, typeOfFunction, errosSemanticos);
}

int getChildType(Node *node){

    // printTree(node, 1);

    if(node == NULL){
        return -1;
    }

    if(node->type != -1){
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

    // printf("\n\nSYMBOL %s. THIS IS LEFT TYPE: %d\n", token.lexeme, leftType);
    // printf("\n\nSYMBOL %s. THIS IS RIGHT TYPE: %d\n", token.lexeme, rightType);

    if(strcmp(token.lexeme, "+") == 0 || strcmp(token.lexeme, "-") == 0 || strcmp(token.lexeme, "*") == 0 || strcmp(token.lexeme, "/") == 0){
       if(leftType == 2 || leftType == 3 || leftType == 6 || rightType == 2 || rightType == 3 || rightType == 6){
            *errosSemanticos = *errosSemanticos + 1;
            printf(BHRED "SEMANTIC ERROR -> Operator \'%s\' can not be applied to type \'list\'. Line %d Column %d\n" RESET, token.lexeme, token.line, token.column);
       }
    }

    if(leftType == rightType){
        return leftType;
    }

    if((leftType == 0 && rightType == 5) || (rightType == 0 && leftType == 5)){
        return 0;
    }

    if((leftType == 1 && rightType == 4) || (rightType == 1 && leftType == 4)){
        return 1;
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

    if((leftType == 2 && rightType == 6) || (leftType == 6 && rightType == 2)){
        
        if(rightType == 6){
            right->type = 2;
        }else{
            left->type = 2;
        }

        return 2;
    }

    if((leftType == 3 && rightType == 6) || (leftType == 6 && rightType == 3)){
        if(rightType == 6){
            right->type = 3;
        }else{
            left->type = 3;
        }
        return 3;
    }
}

extern int getAssignType(int typeOfLeftSide, int typeOfRightSide,  int *errosSemanticos, int line, int column){

    if(typeOfLeftSide == typeOfRightSide){
        return typeOfRightSide;
    }

    if(typeOfLeftSide == 2 || typeOfLeftSide == 3){


        if(typeOfRightSide == 6){
            return typeOfLeftSide;
        }

        if(typeOfLeftSide == 2 || typeOfRightSide == 3){
            *errosSemanticos = *errosSemanticos + 1;
            printf(BHRED "SEMANTIC ERROR -> Attempt to assign \'%s\' to a variable of type \'%s\'. Line %d Column %d\n" RESET, convertIntToType(typeOfRightSide), convertIntToType(typeOfLeftSide), line, column);
            return -1;
        }

        if(typeOfLeftSide == 3 || typeOfRightSide == 2){
            *errosSemanticos = *errosSemanticos + 1;
            printf(BHRED "SEMANTIC ERROR -> Attempt to assign \'%s\' to a variable of type \'%s\'. Line %d Column %d\n" RESET, convertIntToType(typeOfRightSide), convertIntToType(typeOfLeftSide), line, column);
            return -1;
        }

        if(typeOfRightSide == 0 || typeOfRightSide == 1 || typeOfRightSide == 4 || typeOfRightSide == 5){
            *errosSemanticos = *errosSemanticos + 1;
            printf(BHRED "SEMANTIC ERROR -> Attempt to assign \'%s\' to a variable of type \'%s\'. Line %d Column %d\n" RESET, convertIntToType(typeOfRightSide), convertIntToType(typeOfLeftSide), line, column);
            return -1;
        }
    }

    if(typeOfLeftSide == 0 && typeOfRightSide == 1){
        return 5;
    }

    if(typeOfLeftSide == 1 && typeOfRightSide == 0){
        return 4;
    }

    return -1;
}

extern int resolveConversionOfList(Node *left, Node *right){
    if((left->type == 1 || left->type == 4) && right->type == 2){
        return 3;
    }

    if((left->type == 0 || left->type == 5) && right->type == 3){
        return 2;
    }

    return right->type;
}

extern void storeParamsTypes(Symbol *symbol, Node *node, int *index){
    // printf("\n\n");
    // printTree(node, 1);
    // printf("\n\n");

    if(node == NULL){
        return;
    }

    if(strcmp(node->name, "param_decl") == 0){
        symbol->typeParameters[*index] = convertTypeToInt(node->leaf1->token->lexeme);
        *index = *index + 1;
    }

    storeParamsTypes(symbol, node->leaf1, index);
    storeParamsTypes(symbol, node->leaf2, index);
    storeParamsTypes(symbol, node->leaf3, index);
    storeParamsTypes(symbol, node->leaf4, index);
    storeParamsTypes(symbol, node->leaf5, index);
}

void verifyArgsTypes(Node *arg, Symbol *symbol, int *errosSemanticos, int *index){
    
  
    if(arg == NULL){
        return;
    }

    if(strcmp(arg->name, "arg") == 0){
       
        // printf(BHRED "SEMANTIC ERROR -> INDEX %d LEXEME %s. Function parameter expects type \'%s\', but passed type is \'%s\'\n" RESET, *index, symbol->lexeme, convertIntToType(symbol->typeParameters[*index]), convertIntToType(arg->type));

        if(arg->type == 2 && symbol->typeParameters[*index] != 2 && symbol->typeParameters[*index] != 6
            || arg->type == 3 && symbol->typeParameters[*index] != 3 && symbol->typeParameters[*index] != 6
        ){
            // printf(BHRED "SEMANTIC ERROR -> INDEX %d LEXEME %s. Function parameter expects type \'%s\', but passed type is \'%s\'\n" RESET, *index, symbol->lexeme, convertIntToType(symbol->typeParameters[*index]), convertIntToType(arg->type));
            printf(BHRED "SEMANTIC ERROR -> In function \'%s\' parameter expects type \'%s\', but passed type is \'%s\'\n" RESET, symbol->lexeme, convertIntToType(symbol->typeParameters[*index]), convertIntToType(arg->type));
            *errosSemanticos = *errosSemanticos + 1;
        }

        if(arg->type != 2 && arg->type != 3 && arg->type != 6 && (symbol->typeParameters[*index] == 2 || symbol->typeParameters[*index] == 3 || symbol->typeParameters[*index] == 6)
        ){
            // printf(BHRED "SEMANTIC ERROR -> INDEX %d LEXEME %s. Function parameter expects type \'%s\', but passed type is \'%s\'\n" RESET, *index, symbol->lexeme, convertIntToType(symbol->typeParameters[*index]), convertIntToType(arg->type));
            printf(BHRED "SEMANTIC ERROR -> In function \'%s\' parameter expects type \'%s\', but passed type is \'%s\'\n" RESET, symbol->lexeme, convertIntToType(symbol->typeParameters[*index]), convertIntToType(arg->type));
            *errosSemanticos = *errosSemanticos + 1;
        }

        if(symbol->typeParameters[*index] == 1 && arg->type == 0){
            arg->leaf1->type = 4;
        }

        if(symbol->typeParameters[*index] == 0 && arg->type == 1){
            arg->leaf1->type = 5;
        }

        *index = *index + 1;
    }

    verifyArgsTypes(arg->leaf1, symbol, errosSemanticos, index);
    verifyArgsTypes(arg->leaf2, symbol, errosSemanticos, index);
}

extern void verifyCall(char *lexeme, int linha, int coluna, int *scopeStack, int *errosSemanticos, int numberOfArgs, Node *node)
{
   
    Symbol *symbol = getSymbolFromTable(lexeme, scopeStack);

    // printf("\n\n\n");
    // printf("Verify arg types for %s", symbol->lexeme);
    // printTree(node, 1);
    // printf("\n\n\n");
    // printf("SYMBOL FOUND %s\n", symbol->lexeme);
          

    // for(int i = 0; i < 150; i++){
    //     if(symbol->typeParameters[i] != -999999){
    //         printf("\n\n%s: TYPE: %d\n\n", symbol->lexeme, symbol->typeParameters[i]);
    //     }
    // }

    if (symbol->numberOfParams < numberOfArgs)
    {
        printf(BHRED "SEMANTIC ERROR -> Too many arguments in \'%s\'. Line %d Column %d\n" RESET, lexeme, linha, coluna);
        *errosSemanticos = *errosSemanticos + 1;
        return;
    }

    if (symbol->numberOfParams > numberOfArgs)
    {
        printf(BHRED "SEMANTIC ERROR -> Too few arguments in \'%s\'. Line %d Column %d\n" RESET, lexeme, linha, coluna);
        *errosSemanticos = *errosSemanticos + 1;
        return;
    }

    if(numberOfArgs != 0){
        int index = 0;
        verifyArgsTypes(node, symbol, errosSemanticos, &index);
    }
}