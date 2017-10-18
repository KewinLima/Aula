#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int valor = 10;
    int *ponteiro;

    printf("Endereço de valor = %d\n", &valor);

    ponteiro = 6356744;

    printf("Ponteiro = %d\n", *ponteiro);

    system("pause");
    return 0;
}
