#include  <stdio.h>
#include <stdlib.h>

struct contato
{
           long  celular1;
           long  celular2;
           long  fixo;
           
};

typedef struct contato NovaEstrutura;

int main(void)
{
            NovaEstrutura MeuNumero;                           // livro MeuNumero[10]
            MeuNumero.celular1 = 997461947;
            MeuNumero.celular2 = 992345632;
            MeuNumero.fixo     = 33273617;
            
            printf("Celular 1: %d \n", MeuNumero.celular1);
            printf("Celular 2: %d \n", MeuNumero.celular2);
            printf("Fixo: %d \n", MeuNumero.fixo);
            
            system ("pause");
            return(0);
}

