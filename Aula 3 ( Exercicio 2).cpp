/* Crie um programa que utilizando 1 ponteiro imprima uma string completa caracter por caracter */
#include <stdio.h>
#include <stdlib.h>
void imprimir (char *name);
int main(void)
{
    char nome[8] = {"Beatriz"};
    imprimir(nome);
    system("pause");
    return 0;
}

void imprimir (char *name)
{
    int i;

    for(i=0; *name != '\0' ; i++)
    {
        printf("Endereco %d\n", name);
        printf("%c\n", *name);
        name = name+1;
    }
}

