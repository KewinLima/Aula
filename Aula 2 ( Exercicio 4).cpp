/* Crie um programa que lê do usuario dados de uma agenda telefonica com: Nome, Sobrenome e telefone. */

#include <stdio.h>
#include <stdlib.h>

struct agenda{
       char nome[20];
       char sobrenome[20];
       long numero;       
};

typedef struct agenda estrutura;

int main ()
{
    estrutura contatos;
    
    printf("Digite o nome da pessoa\n");
    scanf("%s", contatos.nome);
    printf("Digite o sobrenome da pessoa\n");
    scanf("%s", contatos.sobrenome);
    printf("Digite o numero de contato da pessoa\n");
    scanf("%d", &contatos.numero);
    
    printf("Nome: %s\n", contatos.nome);
    printf("Sobrenome: %s\n", contatos.sobrenome);
    printf("Numero de contato: %d\n", contatos.numero);
    
    system("pause");
    return 0;
}