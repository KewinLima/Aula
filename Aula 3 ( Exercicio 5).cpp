/* Crie um programa para fazer a multiplicação de A * B em uma biblioteca*/

#include <stdio.h>
#include <stdlib.h>

void mult(int x, int y, int* z);

int main(void)
{
    int a=1;
    int b=3;
    int c;

    mult(a,b, &c);
    printf ("%d", c);

    system("pause");
    return 0;
}

void mult(int x, int y, int* z)
{
    *z = x*y;
}
