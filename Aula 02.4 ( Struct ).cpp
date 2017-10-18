#include  <stdio.h>
#include <stdlib.h>

struct contato
{
           long  celular1;
           long  celular2;
           long  fixo;
           
}MeuNumero{997461947, 992164536, 33173627};

int main(void)
{  
            printf("Celular 1: %d \n", MeuNumero.celular1);
            printf("Celular 2: %d \n", MeuNumero.celular2);
            printf("Fixo: %d \n", MeuNumero.fixo);
            system ("pause");
            return(0);
}

