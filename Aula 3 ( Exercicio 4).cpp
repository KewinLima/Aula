/* Crie um programa para fazer a subtração de A - B em uma biblioteca*/

#include <stdio.h>
#include <stdlib.h>

void sub(int x, int y, int* z);

int main(void)
{
    int a=1;
    int b=3;
    int c;

    sub(a,b, &c);
    printf ("%d", c);

    system("pause");
    return 0;
}

void sub(int x, int y, int* z)
{
    *z = x-y;
}
