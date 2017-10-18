#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

int main(void)
{
    int valor[TAMANHO] = {9,8,7,6,5};
    int *ponteiro;

    ponteiro = valor;
    printf("Ponteiro = %d \n",*ponteiro);

    system("pause");
    return 0;
}
