#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 6

int main(void)
{
    int valor = 10;
    imprimirValor(&valor);

    system("pause");
    return 0;
}
void imprimirValor(int *ponteiro)
{
    printf("%d \n", *ponteiro);
}
