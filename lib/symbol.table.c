#include "symbol.table.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

extern void insertSymbol(char *lexeme, int line, int column, char *type, char *decl, int scope)
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
}

extern void printSymbolTable()
{
    printf("\n\n------------------------------------------------------------ SYMBOL TABLE ------------------------------------------------------------- \n\n");
    printf("%-8s \t %-8s \t %-8s \t %-8s \t %-8s \t %-8s\n", "ID", "LINE", "COLUMN", "TYPE", "DECL", "SCOPE");
    SymbolList *current = head;
    while (current != NULL)
    {
        printf("%-8s \t %-8d \t %-8d \t %-8s \t %-8s \t %-8d\n", current->symbol->lexeme, current->symbol->line, current->symbol->column, current->symbol->type, current->symbol->decl, current->symbol->scope);
        current = current->next;
    }
}

extern void freeTable()
{

    freeTableRecursive(head);
}

extern void freeTableRecursive(SymbolList *list)
{
    if (!list){
        return;
    }

    if (list->next){
        freeTableRecursive(list->next);
    }

    free(list->symbol);
    free(list);
}