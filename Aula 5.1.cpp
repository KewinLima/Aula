//Exercicio de fixação, operações matemáticas

#include <stdio.h>
#include <stdlib.h>

struct agenda{
    long numero;
    unsigned long cpf;
};

typedef struct agenda Agenda;

int main(void)
{
        Agenda kewin;
        Agenda *bia;

        bia = &kewin;

        kewin.numero = 997461947;
        kewin.cpf = 55845481;

        printf("Numero de kewin: %d\n", kewin.numero);
        printf("CPF de kewin: %d\n", kewin.cpf);

        printf("Numero de Bia: %d\n", (*bia).numero);
        printf("CPF de Bia: %d\n", bia->cpf);
}
