/* Crie um programa para fazer a soma de A + B em uma biblioteca*/

#include <stdio.h>
#include <stdlib.h>

void soma(int x, int y, int* z);

int main(void)
{
    int a=1;
    int b=3;
    int c;

    soma(a,b, &c);
    printf ("%d", c);

    system("pause");
    return 0;
}

void soma(int x, int y, int* z)
{
    *z = x+y;
}
