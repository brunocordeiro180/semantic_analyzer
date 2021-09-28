run:
	bison -o src/bison/bison.tab.c -v -d src/bison/bison.y -Wcounterexamples -g
	flex -o src/flex/lex.yy.c src/flex/flex.l 
	gcc-11 -g -c lib/symbol.table.c -o lib/symbol.table.o
	gcc-11 -g -c lib/scope.stack.c -o lib/scope.stack.o
	gcc-11 -g -c lib/node.c -o lib/node.o
	gcc-11 -g -o tradutor src/bison/bison.tab.c src/flex/lex.yy.c lib/symbol.table.o lib/scope.stack.o lib/node.o -I lib -I src/bison -I src/flex -lfl -g -Wall