#include "scope.stack.h"
#include <stdio.h>
#include <stdlib.h>

int scopeStack[100];

extern void initializeScopeStack(int *scope)
{
    scope[0] = 0;
    for (int i = 1; i < 100; i++)
    {
        scope[i] = -1;
    }
}

extern void pushStackScope(int *scope, int scopeId){
    for (int i = 0; i < 100; i++)
    {
        if(scope[i] == -1){
            scope[i] = scopeId;
            break;
        }
    }
}

extern void popStack(int *scope)
{
    for (int i = 0; i < 100; i++)
    {
        if(scope[i] == -1 && i != 0){
            scope[i - 1] = -1;
        }
    }
}

extern int getLastElement(int *scope){
    for (int i = 0; i < 100; i++)
    {
        if(scope[i] == -1){
            return scope[i - 1];
        }
    }

    return 0;
}
