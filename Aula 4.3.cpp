1� Criar uma biblioteca em .h
2� Criar um Objeto em .o
3� Colocar as fun��es na .h
4� Colocar as chamadas das fun��es na .o
5� Compilar com:
    // Compile-only with -c option
    > g++ -c -Wall -g Hello.cpp
6� Executar com:
    // Link object file(s) into an executable
    > g++ -g -o Hello.exe Hello.o
