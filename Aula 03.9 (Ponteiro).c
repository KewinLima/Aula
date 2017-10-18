#include <stdio.h>
#include <stdlib.h>

int *soma(int x, int y);

int main(void)
{
    int Y = 5;
    int X = 3;
    int *pont;

    pont = soma(X,Y);

    printf("soma de %d e %d e': %d \n", X,Y,*pont);
    system("pause");
    return 0;
}

int *soma(int x, int y)
{
    int var = x + y;
    return &var;
}
