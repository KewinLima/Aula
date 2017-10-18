#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int valor1 = 10;
    int valor2 = 20;
    int *ponteiro;

    ponteiro = &valor1;
    printf("Ponteiro = %d \n",*ponteiro);
    ponteiro = &valor2;
    printf("Ponteiro = %d \n",*ponteiro);

    system("pause");
    return 0;
}
