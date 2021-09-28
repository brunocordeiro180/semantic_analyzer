#ifndef SCOPE_STACK_H
#define SCOPE_STACK_H

extern void initializeScopeStack(int *scopeStack);
extern void pushStackScope(int *scope, int scopeId);
extern void popStack(int *scope);
extern int getLastElement(int *scope);

#endif