#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int valor = 10;
    int *ponteiro;

    ponteiro = &valor;

    *ponteiro = 20;

    printf("valor = %d\n", valor);

    system("pause");
    return 0;
}
