#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

int main(void)
{
    char valor[TAMANHO] = {'a','e','i','o','u'};
    char *ponteiro;
    int n;

    for(n=0; n < TAMANHO; n++)
    {
        ponteiro = valor + n;

        printf("Ponteiro = %c  ---  Endereco = %d -  Tamanho = %d\n",*ponteiro, ponteiro, sizeof(double));
    }

    system("pause");
    return 0;
}
