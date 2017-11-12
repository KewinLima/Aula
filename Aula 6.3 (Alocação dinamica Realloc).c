#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;
    p = (int*) calloc(1, sizeof(double));
    if(p == NULL)
    {
        printf("Estou sem memoria \n");
        p = (int*) realloc(p, sizeof(int));
    }
    else
    {
        printf("Antes %d \n Endereco de memoria %d \n", *p, p);
    }
    return 0;
}
