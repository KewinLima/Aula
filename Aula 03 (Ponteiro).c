#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int valor = 10;
    int *ponteiro;

    ponteiro = &valor;

    printf("Ponteiro = %d\n", *ponteiro);

    system("pause");
    return 0;
}
