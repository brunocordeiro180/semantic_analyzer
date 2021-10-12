#include "symbol.table.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BHRED "\e[1;91m"
#define RESET "\e[0m"

SymbolList *head;

extern void initializeTable()
{
    head = (SymbolList *)malloc(sizeof(SymbolList));
    head->symbol = NULL;
    head->next = NULL;
}

extern Token *allocateToken(char *lexeme, int line, int column)
{
    Token *newToken = (Token *)malloc(sizeof(Token));
    strcpy(newToken->lexeme, lexeme);
    newToken->line = line;
    newToken->column = column;

    return newToken;
}

extern Symbol *insertSymbol(char *lexeme, int line, int column, char *type, char *decl, int scope)
{
    Symbol *newSymbol = (Symbol *)malloc(sizeof(Symbol));
    SymbolList *current = head;

    strcpy(newSymbol->lexeme, lexeme);
    strcpy(newSymbol->type, type);
    strcpy(newSymbol->decl, decl);
    newSymbol->line = line;
    newSymbol->column = column;
    newSymbol->scope = scope;

    if (current->symbol == NULL)
    { //verifica se é o primeiro elemento da lista
        current->symbol = newSymbol;
        current->next = NULL;
    }
    else
    {
        while (current->next != NULL)
        {
            current = current->next;
        }

        SymbolList *newEntry = (SymbolList *)malloc(sizeof(SymbolList));
        current->next = newEntry;
        current->next->symbol = newSymbol;
        current->next->next = NULL;
    }

    return newSymbol;
}

extern void printSymbolTable()
{
    printf("\n\n------------------------------------------------------------ SYMBOL TABLE ------------------------------------------------------------- \n\n");
    printf("%-8s \t %-8s \t %-8s \t %-8s \t %-8s \t %-8s\t %-8s\n", "ID", "LINE", "COLUMN", "TYPE", "DECL", "SCOPE", "PARAMS_N");
    SymbolList *current = head;
    while (current != NULL)
    {
        printf("%-8s \t %-8d \t %-8d \t %-8s \t %-8s \t %-8d \t", current->symbol->lexeme, current->symbol->line, current->symbol->column, current->symbol->type, current->symbol->decl, current->symbol->scope);
        if (strcmp(current->symbol->decl, "fun") == 0)
        {
            printf("%4s%-8d\n", " ", current->symbol->numberOfParams);
        }
        else
        {
            printf("%4s%-8s\n", " ", "---");
        }
        current = current->next;
    }
}

extern void freeTable()
{

    freeTableRecursive(head);
}

extern void freeTableRecursive(SymbolList *list)
{
    if (!list)
    {
        return;
    }

    if (list->next)
    {
        freeTableRecursive(list->next);
    }

    free(list->symbol);
    free(list);
}

extern void checkRedeclaration(char *lexeme, int scope, int *errosSemanticos, int linha, int coluna)
{
    SymbolList *current = head;
    while (current != NULL && current->symbol != NULL)
    {
        // printf("current->symbol->lexeme %s\n", current->symbol->lexeme);
        // printf("current->symbol->scope %d\n", current->symbol->scope);
        if (strcmp(current->symbol->lexeme, lexeme) == 0 && current->symbol->scope == scope)
        {
            *errosSemanticos = *errosSemanticos + 1;
            printf(BHRED "SEMANTIC ERROR -> redeclaration of \'%s\'. Line %d Column %d\n" RESET, lexeme, linha, coluna);
        }
        current = current->next;
    }
}

extern void findMain(int *errosSemanticos)
{
    SymbolList *current = head;
    while (current != NULL)
    {
        if (strcmp(current->symbol->lexeme, "main") == 0 && strcmp(current->symbol->decl, "fun") == 0)
        {
            return;
        }
        current = current->next;
    }

    *errosSemanticos = *errosSemanticos + 1;
    printf(BHRED "SEMANTIC ERROR -> undefined reference to \"main\"\n" RESET);
}

// void printScopeStack(int *scopeStack)
// {
//     printf("{");
//     for (int i = 0; i < 100; i++)
//     {
//         if (scopeStack[i] != -1)
//         {
//             printf(" %d,", scopeStack[i]);
//         }
//     }

//     printf("}\n");
// }

int isInScope(int scope, int *scopeStack)
{

    // printScopeStack(scopeStack);
    for (int i = 0; i < 100; i++)
    {
        if (scopeStack[i] == scope)
        {
            return 1;
        }
    }

    return 0;
}

extern void verifyDefinedId(char *lexeme, int linha, int coluna, int *scopeStack, int *errosSemanticos)
{
    SymbolList *current = head;
    int find = 0;
    while (current != NULL && current->symbol != NULL)
    {
        if (strcmp(current->symbol->lexeme, lexeme) == 0 && isInScope(current->symbol->scope, scopeStack))
        {
            find = 1;
        }
        current = current->next;
    }

    if (find == 0)
    {
        *errosSemanticos = *errosSemanticos + 1;
        printf(BHRED "SEMANTIC ERROR -> Undeclared \'%s\'. Line %d Column %d\n" RESET, lexeme, linha, coluna);
    }
}

extern void verifyCall(char *lexeme, int linha, int coluna, int *scopeStack, int *errosSemanticos, int numberOfArgs)
{
    SymbolList *current = head;
    while (current != NULL && current->symbol != NULL)
    {
        if (strcmp(current->symbol->lexeme, lexeme) == 0 && strcmp(current->symbol->decl, "fun") == 0 && isInScope(current->symbol->scope, scopeStack))
        {

            if (current->symbol->numberOfParams < numberOfArgs)
            {
                printf(BHRED "SEMANTIC ERROR -> Too many arguments in \'%s\'. Line %d Column %d\n" RESET, lexeme, linha, coluna);
                *errosSemanticos = *errosSemanticos + 1;
                return;
            }

            if (current->symbol->numberOfParams > numberOfArgs)
            {
                printf(BHRED "SEMANTIC ERROR -> Too few arguments in \'%s\'. Line %d Column %d\n" RESET, lexeme, linha, coluna);
                *errosSemanticos = *errosSemanticos + 1;
                return;
            }
        }

        current = current->next;
    }
}

extern int searchTypeInSymbolTable(char *lexeme, int *scopeStack)
{
    SymbolList *current = head;
    while (current != NULL && current->symbol != NULL)
    {
        if (strcmp(current->symbol->lexeme, lexeme) == 0 && isInScope(current->symbol->scope, scopeStack))
        {
            if (strcmp(current->symbol->type, "int") == 0)
            {
                return 0;
            }
            else if (strcmp(current->symbol->type, "float") == 0)
            {
                return 1;
            }
            else if (strcmp(current->symbol->type, "int list") == 0)
            {
                return 2;
            }
            else if (strcmp(current->symbol->type, "float list") == 0)
            {
                return 3;
            }
        }
        current = current->next;
    }
    return -1;
}

extern int checkIfIsFunctionUnaryInSymbolTable(char *lexeme, int linha, int coluna, int *scopeStack, int *errosSemanticos)
{
    SymbolList *current = head;
    while (current != NULL && current->symbol != NULL)
    {
        if (strcmp(current->symbol->lexeme, lexeme) == 0 && isInScope(current->symbol->scope, scopeStack) && strcmp(current->symbol->decl, "fun") == 0 && current->symbol->numberOfParams != 1)
        {
            return 0;
        }
        current = current->next;
    }

    verifyDefinedId(lexeme, linha, coluna, scopeStack, errosSemanticos);
    return 1;
}

extern char *convertIntToType(int tipo)
{
    char *tipoString;
    tipoString = malloc(sizeof(char) * 30);

    switch (tipo)
    {
    case 0:
        strcpy(tipoString, "int");
        break;
    case 1:
        strcpy(tipoString, "float");
        break;
    case 2:
        strcpy(tipoString, "int list");
        break;
    case 3:
        strcpy(tipoString, "float list");
        break;
    case 4:
        strcpy(tipoString, "intToFloat");
        break;
    case 5:
        strcpy(tipoString, "floatToInt");
        break;
    case 6:
        strcpy(tipoString, "list");
        break;
    default:
        strcpy(tipoString, "undefined");
        break;
    }

    return tipoString;
}

extern int convertTypeToInt(char *tipoString){

    if (strcmp(tipoString, "int") == 0)
    {
        return 0;
    }

    if (strcmp(tipoString, "float") == 0)
    {
        return 1;
    }

    if (strcmp(tipoString, "int list") == 0)
    {
        return 2;
    }

    if (strcmp(tipoString, "float list") == 0)
    {
        return 3;
    }

    return -1;
}