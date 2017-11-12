#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;
    p = (int*) malloc(32*sizeof(int));

    *p = 1000;
    printf("Antes %d \n Endereco de memoria %d \n", *p);
    free(p);
    printf("Depois %d \n", *p);

    return 0;
}
