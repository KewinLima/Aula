/* Crie um programa para fazer a operação: A ^ B em uma biblioteca*/

#include <stdio.h>
#include <stdlib.h>

void pot(int x, int y, int* z);

int main(void)
{
    int a = 4;
    int b= 4;
    int c;
    pot(a, b, &c);

    printf("%d elevado a %d eh %d:\n", a, b,c);
    system("pause");
    return 0;
}

void pot(int x, int y, int* z)
{
    int i;
    int c = x;

    for(i=1; i<y; i++)
    {
         x = x*c;
    }
    *z = x;
}
