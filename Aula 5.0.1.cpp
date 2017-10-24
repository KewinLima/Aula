#include <stdio.h>
#include <stdlib.h>

struct agenda{
    long *numero;
    unsigned long *cpf;
};

typedef struct agenda Agenda;

int main(void)
{
        long MeuNumero = 329382;
        unsigned long MeuCpf = 7863248;
        Agenda minhaAgenda;

        minhaAgenda.numero = &MeuNumero;
        minhaAgenda.cpf = &MeuCpf;

        printf("Numero de kewin: %d\n", *minhaAgenda.numero);
        printf("CPF de kewin: %d\n", *(minhaAgenda.cpf));

        system("pause");
        return 0;
}
