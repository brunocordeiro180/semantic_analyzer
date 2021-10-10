%define parse.error verbose
%define lr.type canonical-lr
%{
#include "scope.stack.h"
#include "symbol.table.h"
#include "token.h"
#include "node.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yylex_destroy();
extern void yyerror(const char* s);
extern int scopeStack[100];
extern int scopeId;
SymbolList *symbolTable;
extern Node *tree;
extern int linhas;
extern int colunas;
int errors = 0;
int errosSemanticos;
int numberOfParams = 0;
int numberOfArguments = 0;

// functions

void verifyIfIsList(int tipo, char *operator, int line, int column, int typeError);

// end functions

#define BHRED "\e[1;91m"
#define RESET "\e[0m"
%}

%token <token> ID INT FLOAT NIL
%token <token> IF ELSE
%token <token> ASSIGN FOR
%token <token> RETURN TYPE
%token <token> WRITE WRITELN READ
%left  <token> MUL_OP
%token <token> SUM_OP 
%token <token> REL_OP
%right <token> EXCLAMATION
%token <token> LOG_OP 
%token <token> ':' '?' '%' MAP FILTER
%right THEN ELSE
%token <token> STRING 
%token <token> ';' ',' '(' ')' '{' '}'

%type <node> S
%type <node> decl_list
%type <node> decl
%type <node> var_decl
%type <node> fun_decl
%type <node> params
%type <node> param_decl
%type <node> statement
%type <node> for_stmt
%type <node> exp_stmt
%type <node> exp
%type <node> assign_exp
%type <node> block_stmt
%type <node> stmt_list
%type <node> if_stmt
%type <node> return_stmt
%type <node> write_stmt
%type <node> writeln_stmt
%type <node> read_stmt
%type <node> simple_exp
%type <node> list_exp
%type <node> unary_list_exp
%type <node> bin_exp
%type <node> unary_log_exp
%type <node> rel_exp
%type <node> sum_exp
%type <node> mul_exp
%type <node> factor
%type <node> immutable
%type <node> call
%type <node> args
%type <node> constant 


%code requires {
    #include "token.h"
	#include "node.h"
}

%union{
	Token token;
	Node* node;
}

%%

S:
  decl_list {
	  tree = $$;
  }
;

decl_list:
	decl_list decl {
		$$ = createNode("decl_list");
		$$->leaf1 = $1;
		$$->leaf2 = $2;
	}
	| decl {
		$$ = $1;
	}
;

decl: 
	var_decl {
		$$ = $1;
	}
	| fun_decl {
		$$ =  $1;
	}
;


var_decl:
	TYPE ID ';' {
		$$ = createNode("var_decl");
		
		$$->leaf1 = createNode("\0");
		$$->leaf1->token = allocateToken($1.lexeme, $1.line, $1.column);

		$$->leaf2 = createNode("ID");
		$$->leaf2->token = allocateToken($2.lexeme, $2.line, $2.column);

		checkRedeclaration($2.lexeme, $2.scope, &errosSemanticos, $2.line, $2.column);
		insertSymbol($2.lexeme, $2.line, $2.column, $1.lexeme, "var", $2.scope);
	}
;

fun_decl: 
	TYPE ID '(' params ')' {

		checkRedeclaration($2.lexeme, $2.scope, &errosSemanticos, $2.line, $2.column);		
		Symbol* createdSymbol = insertSymbol($2.lexeme, $2.line, $2.column, $1.lexeme, "fun",$2.scope);
		createdSymbol->numberOfParams = numberOfParams + 1;
		numberOfParams = 0;

	} block_stmt {
		$$ = createNode("fun_decl");
		
		$$->leaf1 = createNode("\0");
		$$->leaf1->token = allocateToken($1.lexeme, $1.line, $1.column);

		$$->leaf2 = createNode("ID");
		$$->leaf2->token = allocateToken($2.lexeme, $2.line, $2.column);
		
		$$->leaf3 = $4;
		$$->leaf4 = $7;

		checkTypeOfReturn($$);
		// printf("\n\n\n\n");
	}
	| TYPE ID '(' ')'{

		checkRedeclaration($2.lexeme, $2.scope, &errosSemanticos, $2.line, $2.column);
		Symbol* createdSymbol = insertSymbol($2.lexeme, $2.line, $2.column, $1.lexeme, "fun", $2.scope);
		numberOfParams = 0;
		createdSymbol->numberOfParams = numberOfParams;

	} block_stmt {
		$$ = createNode("fun_decl");
		
		$$->leaf1 = createNode("\0");
		$$->leaf1->token = allocateToken($1.lexeme, $1.line, $1.column);

		$$->leaf2 = createNode("ID");
		$$->leaf2->token = allocateToken($2.lexeme, $2.line, $2.column);
		
		$$->leaf3 = $6;
	}
	| error {
		yyerrok;
	}
;

params:
	params ',' param_decl  {
		$$ = createNode("\0");
		$$->leaf1 = $1;
		$$->leaf2 = $3;
		numberOfParams = numberOfParams + 1;
	}
	| param_decl {
		$$ = $1;
	}
	| error{
		yyerrok;
	}
;

param_decl:
	TYPE ID {
		
		$$ = createNode("param_decl");
		$$->leaf1 = createNode("\0");
		$$->leaf1->token = allocateToken($1.lexeme, $1.line, $1.column);

		$$->leaf2 = createNode("ID");
		$$->leaf2->token = allocateToken($2.lexeme, $2.line, $2.column);

		// checkRedeclaration($2.lexeme, $2.scope, &errosSemanticos, $2.line, $2.column);
		insertSymbol($2.lexeme, $2.line, $2.column, $1.lexeme, "param", (scopeId + 1));
	}
;

statement: 
	exp_stmt {
		$$ = $1;
	}
	| block_stmt {
		$$ = $1;
	}
	| if_stmt {
		$$ = $1;
	}
	| return_stmt {
		$$ = $1;
	}
	| write_stmt {
		$$ = $1;
	}
	| writeln_stmt {
		$$ = $1;
	}
	| read_stmt {
		$$ = $1;
	}
	| var_decl {
		$$ = $1;
	}
	| for_stmt {
		$$ = $1;
	}
;

for_stmt:
	FOR '(' assign_exp ';' simple_exp ';' assign_exp ')' statement {
		$$ = createNode("for_stmt");

		$$->leaf1 = createNode("\0");
		$$->leaf1->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->leaf2 = $3;
		$$->leaf3 = $5;
		$$->leaf4 = $7;
		$$->leaf5 = $9;
	}
	| 	FOR '(' error ';' simple_exp ';' assign_exp ')' statement {

	}
	
;

exp_stmt:
	exp ';' {
		$$ = $1;
	}
	| ';' {
		$$ = createNode("\0");
	}
;

exp: 
	assign_exp {
		$$ = $1;
	}
	| simple_exp {
		$$ = $1;
	}
;

assign_exp:
	ID ASSIGN simple_exp {
		$$ = createNode("assign_exp");
		$$->token = allocateToken("=", $2.line, $2.column);


		int typeOfLeftSide = searchTypeInSymbolTable($1.lexeme, scopeStack);
		int typeOfRightSide = $3->type;


		$$->type = getAssignType(typeOfLeftSide, typeOfRightSide);

		$$->leaf1 = createNode("ID");
		$$->leaf1->token = allocateToken($1.lexeme, $1.line, $1.column);

		$$->leaf2 = $3;

		verifyDefinedId($1.lexeme, $1.line, $1.column, scopeStack, &errosSemanticos);
	}
	| ID error {
		yyerrok;
	}
;

block_stmt:
	'{' stmt_list '}' {
		$$ = $2;
	}
;

stmt_list:
    stmt_list statement {
        $$ = createNode("stmt_list");
		$$->leaf1 = $1;
		$$->leaf2 = $2;
    }
    | stmt_list error {
        // printf("DEU PAU\n");
    }
    | statement {
        $$ = $1;
    }
;

if_stmt:
	IF '(' simple_exp ')' statement %prec THEN {
		$$ = createNode("if_stmt");

		$$->leaf1 = createNode("\0");;
		$$->leaf1->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->leaf2 = $3;
		$$->leaf3 = $5;
	}
	| IF '(' simple_exp ')' statement ELSE statement {
		$$ = createNode("if_else_stmt");

		$$->leaf1 = createNode("\0");;
		$$->leaf1->token = allocateToken($1.lexeme, $1.line, $1.column);
		
		$$->leaf2 = $3;
		$$->leaf3 = $5;

		$$->leaf4 = createNode("\0");
		$$->leaf4->token = allocateToken($6.lexeme, $6.line, $6.column);
		$$->leaf5 = $7;
	}
;

return_stmt:
	RETURN ';' {
		$$ = createNode("return_stmt");
		$$->token = allocateToken($1.lexeme, $1.line, $1.column);
	}
	| RETURN exp ';' {
		$$ = createNode("return_stmt");
		$$->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->leaf1 = $2;

	}
	| RETURN error {

	}
;

write_stmt:
	WRITE '(' simple_exp ')' ';' {
		$$ = createNode("write_stmt");

		$$->leaf1 = createNode("\0");
		$$->leaf1->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->leaf2 = $3;
	}
;

writeln_stmt:
	WRITELN '(' simple_exp ')' ';' {
		$$ = createNode("writeln_stmt");
		$$->leaf1 = createNode("\0");;
		$$->leaf1->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->leaf2 = $3;
	}
;

read_stmt:
	READ '(' ID ')' ';' {
		$$ = createNode("read_stmt");

		$$->leaf1 = createNode("\0");
		$$->leaf1->token = allocateToken($1.lexeme, $1.line, $1.column);

		$$->leaf2  = createNode("\0");
		$$->leaf2->token = allocateToken($3.lexeme, $3.line, $3.column);

		verifyDefinedId($3.lexeme, $3.line, $3.column, scopeStack, &errosSemanticos);
	}
;

simple_exp:
	bin_exp {
		$$ = $1;
	}
	| list_exp {
		$$ = $1;
	}
;

unary_list_exp:
	'?' factor {
		$$ = createNode("list_exp"); 

		$$->leaf1 = createNode("\0");
		$$->leaf1->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->leaf2 = $2;

		int tipo = checkTypeListExp($2, scopeStack);
		verifyIfIsList(tipo, "?", $1.line, $1.column, 0);
	}
	| '%' factor {
		$$ = createNode("list_exp"); 
		$$->leaf1 = createNode("\0");
		$$->leaf1->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->leaf2 = $2;

		int tipo = checkTypeListExp($2, scopeStack);
		verifyIfIsList(tipo, "%", $1.line, $1.column, 0);
	}
;

list_exp:
	factor ':' factor {
		$$ = createNode("list_exp");

		$$->leaf1 = $1;
		$$->leaf2 = createNode("\0");
		$$->leaf2->token = allocateToken($2.lexeme, $2.line, $2.column);
		$$->leaf3 = $3;
	}
	| factor MAP factor {
		$$ = createNode("list_exp");
		$$->leaf1 = $1;
		$$->leaf2 = createNode("\0");
		$$->leaf2->token = allocateToken($2.lexeme, $2.line, $2.column);
		$$->leaf3 = $3;

		checkIfIsFunctionUnary($1, $2.line, $2.column, scopeStack, &errosSemanticos);

		int tipo = checkTypeListExp($3, scopeStack);
		verifyIfIsList(tipo, $2.lexeme, $2.line, $2.column, 1);
	}
	| factor FILTER factor {
		$$ = createNode("list_exp");
		$$->leaf1 = $1;
		$$->leaf2 = createNode("\0");
		$$->leaf2->token = allocateToken($2.lexeme, $2.line, $2.column);
		$$->leaf3 = $3;

		checkIfIsFunctionUnary($1, $2.line, $2.column, scopeStack, &errosSemanticos);

		int tipo = checkTypeListExp($3, scopeStack);
		verifyIfIsList(tipo, $2.lexeme, $2.line, $2.column, 1);
	}
;

bin_exp:
	bin_exp LOG_OP unary_log_exp {
		$$ = createNode("\0");
		$$->token = allocateToken($2.lexeme, $2.line, $2.column);
		$$->type = getExpressionType($1, $3, $2, &errosSemanticos);
		$$->leaf1 = $1;
		$$->leaf2 = $3;
	}
	| unary_log_exp {
		$$ = $1;
		$$->type = $1->type;
	}
;

unary_log_exp:
	EXCLAMATION unary_log_exp {
		$$ = createNode("unary_log_exp");
	
		$$->leaf1 = createNode("\0");
		$$->leaf1->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->leaf2 = $2;
	}
	| rel_exp {
		$$ = $1;
		$$->type = $1->type;
	}
;

rel_exp:
	rel_exp REL_OP sum_exp {
		$$ = createNode("\0");
		$$->token = allocateToken($2.lexeme, $2.line, $2.column);
		$$->type = getExpressionType($1, $3, $2, &errosSemanticos);
		$$->leaf1 = $1;
		$$->leaf2 = $3;
	}
	| sum_exp {
		$$ = $1;
		$$->type = $1->type;
	}
;

sum_exp:
	sum_exp SUM_OP mul_exp {
		$$ = createNode("\0");
		$$->token = allocateToken($2.lexeme, $2.line, $2.column);
		$$->type = getExpressionType($1, $3, $2, &errosSemanticos);
		$$->leaf1 = $1;
		$$->leaf2 = $3;
	}
	| mul_exp {
		$$ = $1;
		$$->type = $1->type;
	}
;

mul_exp:
	mul_exp MUL_OP factor {
		$$ = createNode("\0");
		$$->token = allocateToken($2.lexeme, $2.line, $2.column);
		$$->type = getExpressionType($1, $3, $2, &errosSemanticos);
		$$->leaf1 = $1;
		$$->leaf2 = $3;
	}
	| factor {
		$$ = $1;
		$$->type = $1->type;
	}
	| unary_list_exp {
		$$ = $1;
	}
;

factor:
	immutable {
		$$ = $1;
	}
	| ID {
		$$ = createNode("ID");
		$$->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->type = searchTypeInSymbolTable($1.lexeme, scopeStack);
		verifyDefinedId($1.lexeme, $1.line, $1.column ,scopeStack , &errosSemanticos);
	}
	| SUM_OP factor {
		$$ = createNode("\0");
		$$->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->leaf1 = $2;
	}
;

immutable:
	'(' simple_exp ')' {
		$$ = $2;
		$$->type = $2->type;
	}
	| call {
		$$ =  $1;
		$$->type = $1->type;
	}
	| constant {
		$$ = $1;
		$$->type = $1->type;
	}
;

call:
	ID '(' args ')' {
		$$ = createNode("call");
		$$->leaf1 = createNode("ID");
		$$->leaf1->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->leaf2 = $3;
		
		verifyDefinedId($1.lexeme, $1.line, $1.column, scopeStack, &errosSemanticos);
		verifyCall($1.lexeme, $1.line, $1.column, scopeStack, &errosSemanticos, numberOfArguments);
		numberOfArguments = 0;

	}
	| ID '(' ')' {
		$$ = createNode("call");

		$$->leaf1 = createNode("ID");
		$$->leaf1->token = allocateToken($1.lexeme, $1.line, $1.column);

		verifyDefinedId($1.lexeme, $1.line, $1.column, scopeStack, &errosSemanticos);
		verifyCall($1.lexeme, $1.line, $1.column, scopeStack, &errosSemanticos, numberOfArguments);
		numberOfArguments = 0;
	}
;

args: 
	args ',' simple_exp {
		$$ = createNode("args");
		$$->leaf1 = $1;
		$$->leaf2 = $3;
		numberOfArguments = numberOfArguments + 1;
	}
	| simple_exp {
		$$ = $1;
		numberOfArguments = numberOfArguments + 1;
	}
;

constant:
	NIL {
		$$ = createNode("\0");
		$$->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->type = 6;
	}
	| INT {
		$$ = createNode("\0");
		$$->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->type = 0;
	}
	| FLOAT {
		$$ = createNode("\0");
		$$->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->type = 1;
	}
	| STRING {		
		$$ = createNode("\0");
		$$->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->type = 7;
	}
;	

%%

// type error: 0 -> operacao unaria de listas 1- > operacao binaria de listas
void verifyIfIsList(int tipo, char *operator, int line, int column, int typeError){

	char *tipoString = convertIntToType(tipo);

	if(tipo != 2 && tipo != 3){
		errosSemanticos = errosSemanticos + 1;
		
		if(typeError == 0){
			printf(BHRED"SEMANTIC ERROR -> Operator \'%s\' cannot be applied to type %s. Line %d Column %d\n"RESET, operator, tipoString, line, column);
		}

		if(typeError == 1){
			printf(BHRED"SEMANTIC ERROR -> Second argument of binary infix operator of lists \'%s\' cannot be applied to type %s. Line %d Column %d\n"RESET, operator, tipoString, line, column);
		}

	}
}

extern void yyerror(const char* s) {
    printf(BHRED"SYNTATIC ERROR -> ");
    printf("%s ", s);
	printf("[Line %d, Column %d]\n"RESET, linhas, colunas);
	errors++;
}

int main(int argc, char **argv){
	initializeTable(symbolTable);
	initializeScopeStack(scopeStack);
    yyparse();
	findMain(&errosSemanticos);
	if(!errors){
		printf("\n\n--------------------------------------------------------------- TREE ---------------------------------------------------------------- \n\n");
		printTree(tree, 1);
		printSymbolTable(symbolTable);
		freeTree(tree);
	}
	// printSymbolTable(symbolTable);
	freeTable();
    yylex_destroy();
    return 0;
}