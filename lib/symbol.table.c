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

extern Symbol *allocateToken(char *lexeme, int line, int column)
{
    Symbol *newToken = (Symbol *)malloc(sizeof(Symbol));
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
            printf("%-8d\n", current->symbol->numberOfParams);
        }
        else
        {
            printf("%-8s\n", "---");
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
    while (current != NULL && current->symbol != NULL)
    {
        if (strcmp(current->symbol->lexeme, lexeme) == 0 && isInScope(current->symbol->scope, scopeStack))
        {
            return;
        }
        current = current->next;
    }

    *errosSemanticos = *errosSemanticos + 1;
    printf(BHRED "SEMANTIC ERROR -> Undeclared \'%s\'. Line %d Column %d\n" RESET, lexeme, linha, coluna);
}