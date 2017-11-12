#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;
    p = (int*) calloc(32, sizeof(int));
    printf("Antes %d \n Endereco de memoria %d \n", *p);
    free(p);
    printf("Depois %d \n",*p );

    return 0;
}
