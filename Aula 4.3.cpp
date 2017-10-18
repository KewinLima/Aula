1º Criar uma biblioteca em .h
2º Criar um Objeto em .o
3º Colocar as funções na .h
4º Colocar as chamadas das funções na .o
5º Compilar com:
    // Compile-only with -c option
    > g++ -c -Wall -g Hello.cpp
6º Executar com:
    // Link object file(s) into an executable
    > g++ -g -o Hello.exe Hello.o
