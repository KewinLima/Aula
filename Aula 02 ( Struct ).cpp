#include  <stdio.h>
#include <stdlib.h>

void Imprimir(struct agenda contato);

struct agenda
{
           char nome[10];
           char sobrenome[10];
           long  telefone;
};

int main(void)
{
            struct agenda contato; 
            
            printf("Nome: ");
            scanf("%s", contato.nome);
            printf("Sobrenome: ");
            scanf("%s", contato.sobrenome);
            printf("Telefone: ");
            scanf("%d", &contato.telefone);
            
            Imprimir(contato);
            
            system ("pause");
            return(0);
            
}

void Imprimir(struct agenda parametro)
{
            int i;
            printf(" Nome: ");
            
            for(i = 0; parametro.nome[i] != '\0' ; i++)
            {
                        printf("%c", parametro.nome[i]);
            }
            
            printf(" %s", parametro.sobrenome);
            printf("\n Numero: %d \n", parametro.telefone);
}
