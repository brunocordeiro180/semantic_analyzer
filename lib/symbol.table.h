#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

typedef struct symbol{
    int line;
    int column;
    int scope;
    int numberOfParams;
    char token[50];
    char lexeme[150];
    char type[20];
    char decl[5];
} Symbol;

typedef struct symbolList{
    Symbol *symbol;
    struct symbolList* next;
} SymbolList;

extern void initializeTable();
extern Symbol* insertSymbol(char* lexeme,  int line, int column, char* type, char* isFunction, int scope);
extern Symbol* allocateToken(char* lexeme, int line, int column);
extern void printSymbolTable();
extern void freeTable();
extern void freeTableRecursive(SymbolList *list);
extern void checkRedeclaration(char *lexeme, int scope, int* errosSemanticos, int linha, int coluna);
extern void findMain(int* errosSemanticos);
extern void verifyDefinedId(char *lexeme, int linha, int coluna, int* errosSemanticos);

#endif
