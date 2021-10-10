%option nounput noinput
%option noyywrap
%x COMENTARIO_MULTI_LINHA
%{
    #include "scope.stack.h"
    #include "symbol.table.h"
    #include "bison.tab.h"
    #include <string.h>
    #include <ctype.h>
    #define BHRED "\e[1;91m"
    #define BHMAG "\e[1;95m"
    #define BYEL "\e[1;33m"
    #define RESET "\e[0m"

    int contaNumeroDeBreakLines(char *texto);

    int linhas = 1;
    int colunas = 1;
    int scopeId = 0;

    extern int scopeStack[100];
%}

ESPACOS_EM_BRANCO 	        [ \t]*
TIPO_DADO                   int|float
IDENTIFICADOR               [_a-zA-Z][_a-zA-Z0-9]*
PALAVRA_RESERVADA           NIL|for|write|writeln|read|return|if|else
OP_BIN_ARITMETICA           [+\-\*/]
OP_LOGICA                   (&&)|(\|\|)
OP_BIN_RELACIONAL           <|<=|>|>=|==|!=
ID_NAO_PERMITIDO            [0-9]+{IDENTIFICADOR}|[0-9]+{TIPO_DADO}|[0-9]+{PALAVRA_RESERVADA}        

%%

"/*"([^*]|(\*+[^*/]))*\*+\/ {
    /* Ignora comentarios de multiplas linhas */ 
    linhas+=contaNumeroDeBreakLines(yytext); 
}

"/*" { 
    BEGIN(COMENTARIO_MULTI_LINHA); 
    colunas+=yyleng;
}

"//".*[\n] { 
    /* Ignora comentarios de uma linha */
    linhas+=1; colunas = 1;  
}

<COMENTARIO_MULTI_LINHA><<EOF>>  { 
    printf("\n(%d,%d)\t    " BHRED"Fim de comentário multilinhas não encontrado. \n\n"RESET, linhas, colunas);  yyterminate(); 
}

{ESPACOS_EM_BRANCO}     { colunas+=yyleng; /* ignora espacos em branco */ }

{TIPO_DADO}             { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    return TYPE;
} 

{TIPO_DADO}[" \t"]+"list"           { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    return TYPE;
} 

{PALAVRA_RESERVADA}     { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    
    if (strcmp(yytext, "NIL") == 0) 
    {
        return NIL;
    } else if (strcmp(yytext, "for") == 0)
    {
        return FOR;
    } else if (strcmp(yytext, "write") == 0)
    {
        return WRITE;
    } else if (strcmp(yytext, "writeln") == 0)
    {
        return WRITELN;
    } else if (strcmp(yytext, "read") == 0)
    {
        return READ;
    } else if (strcmp(yytext, "return") == 0)
    {
        return RETURN;
    } else if (strcmp(yytext, "if") == 0)
    {
        return IF;
    } else if (strcmp(yytext, "else") == 0)
    {
        return ELSE;
    }
}

{IDENTIFICADOR}         { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    yylval.token.scope = getLastElement(scopeStack);
    colunas+=yyleng;
    return ID;
} 

{OP_BIN_ARITMETICA}     { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;

    if (strcmp(yytext, "+") == 0 || strcmp(yytext, "-") == 0) {
        return SUM_OP;
    } else{
        return MUL_OP;
    }
}

":"                     { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    return ':';
}

"?"                     { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    return '?';
}

"<<"                    { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    return FILTER;
}

">>"                    { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    return MAP;
}

"!"                     { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    return EXCLAMATION;
}

{OP_LOGICA}             { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    return LOG_OP;
}

"%"                     { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    return '%';
}

"="                     { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    return ASSIGN;
}

{OP_BIN_RELACIONAL}     { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    return REL_OP;
}

[0-9]*                { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    return INT;
}

-?[0-9]*"."[0-9]*       { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    return FLOAT;
}

\"(\\.|[^"\\])*\" { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    return STRING;
}


","                     { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    return ',';
}

";"                     { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    return ';';
}

"\{"                    { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    scopeId++;
    pushStackScope(scopeStack, scopeId);
    return '{';
}

"\}"                    { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    popStack(scopeStack);
    return '}';
}

"\("                    { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    return '(';
}

"\)"                    { 
    strcpy(yylval.token.lexeme, yytext);
    yylval.token.line = linhas;
    yylval.token.column = colunas;
    colunas+=yyleng;
    return ')';
}

[\n]        		    { linhas++; colunas = 1;}

{ID_NAO_PERMITIDO}.    { 
    
    printf("\n(%d,%d)" BHRED"Expression \"%s\" not recognized\n\n"RESET, linhas, colunas, yytext); 
    colunas+=yyleng;
}

. {
    printf("\n(%d,%d)" BHRED"Expression \"%s\" not recognized\n\n"RESET, linhas, colunas, yytext); 
    colunas+=yyleng;
}

%%

int contaNumeroDeBreakLines(char *texto){

    int i = 0;
    int qtdBreakLines = 0;

    for (i = 0; i < strlen(texto); i++) {
        if(texto[i] == '\n'){
            qtdBreakLines++;
        }
    }

    //se o comentario for feito na mesma linha entao atualizar o numero de colunas
    colunas = qtdBreakLines == 0 ? (colunas + strlen(texto)) : 1;

    return qtdBreakLines;
}


