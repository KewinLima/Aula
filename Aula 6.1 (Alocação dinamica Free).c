#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p, *m;
    p = (int*)malloc(sizeof(int));
    m = (int*)malloc(sizeof(int));
    m = p;
    *p = 1000;
    printf("Antes %d \n Endereco de memoria %d \n", *p);
    free(p);
    printf("Depois %d \n", *p);
    printf("Depois m = %d \n", *m);

    return 0;
}
