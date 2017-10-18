/* Exercicio 1, crie uma função que retorna o tamanho de uma string */

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100

int tamanhoString(char String[100]);

int main ()
{
    int x;
    char nome[TAMANHO] = {"Beatrizaouwed kjabsdkjgasd uasgfkjaskfhguiAFOWC"};
    x = tamanhoString(nome);
    printf("Tamanho da string eh %d\n", x);

    system("pause");
    return 0;
}

int tamanhoString(char String[100])
{
    int i;

    for(i=0; String[i] != '\0'; i++);
    return i;
}
