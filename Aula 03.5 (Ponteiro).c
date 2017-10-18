#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

int main(void)
{
    int valor[TAMANHO] = {9,8,7,6,5};
    int *ponteiro;
    int teste = 0;
    int n;

    for(n=0; n < TAMANHO; n++)
    {
        ponteiro = valor + n;

        printf("Ponteiro = %d  ---  Endereco = %d \n",*ponteiro, ponteiro);
    }


    system("pause");
    return 0;
}
