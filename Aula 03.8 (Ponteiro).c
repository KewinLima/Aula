#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 6

int main(void)
{
    char nome[TAMANHO] = {'k','e','w','i','n','\0'};
    imprimirVetor(nome);

    system("pause");
    return 0;
}

//char* strcpy(char* vetor[]);

void imprimirVetor(char vetor[TAMANHO])
{
    int n;
    for( n=0; n <TAMANHO; n++)
    {
        printf("%c \n", vetor[n]);
    }
    printf("%s \n", vetor);
}
