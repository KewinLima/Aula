/* Crie um programa para fazer a multiplicação de A * B em uma biblioteca*/

#include <stdio.h>
#include <stdlib.h>

void div(int x, int y, float* z);

int main(void)
{
    int a=1;
    int b=3;
    float c;

    div(a,b, &c);
    printf ("%f", c);

    system("pause");
    return 0;
}

void div(int x, int y, float* z)
{
    *z = (float)x/(float)y;
}
