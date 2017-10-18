#include  <stdio.h>
#include <stdlib.h>

struct agenda
{
           char nome[10];
           char sobrenome[10];
           long  telefone;
};

typedef struct agenda livro;

int main(void)
{
            livro contato = {{"kewin"}, {"lima"}, 998746591}; 
            
            printf("Nome: %s \n", contato.nome);
            printf("Sobrenome: %s \n", contato.sobrenome);
            printf("Telefone: %d \n", contato.telefone);

            
            system ("pause");
            return(0);
            
}
