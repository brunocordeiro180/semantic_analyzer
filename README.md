# Analisador Semântico

Para executar o programa abra este diretório pelo seu terminal e em seguida digite:

`
make 
`

ou 

`
make run
`

O comando irá gerar um executável chamado "tradutor". Execute o programa passando como argumento um dos arquivos de teste que se encontram na pasta "tests", como no exemplo abaixo:

``
./tradutor < teste1.txt
``

O programa em seguida irá listar os tokens encontrados no arquivo, assim como erros léxicos que o mesmo contêm.

## Debug 

Para debugar a execução e procurar erros de vazamento de memória execute:

`
valgrind -v --tool=memcheck --leak-check=full --log-file="logfile.out" --show-leak-kinds=all --track-origins=yes ./tradutor < tests/ex1.txt    
`
