#include <stdio.h>
#include <stdlib.h>
#define TAM 10000

struct lista {
    int conteudo;
    struct lista *prox;
};

typedef struct lista Lista;
void addlista(Lista *nodo, Lista novo);
void imprimeLista(Lista *nodo);
int conversao (char aux[TAM]);

int main (void)
{
    char aux[TAM] ={};
    Lista *node, novo={}, m1={1,NULL}, m2={2,NULL}, m3={3,NULL}, m4={4,NULL}, m5={5,NULL};
    FILE *file;
    file = fopen("C:\\Users\\kewinlima\\Desktop\\Aula Bia\\pr6.txt", "r");

    if(file == NULL)
    {
        printf("Arquivo .txt inexistente \n");
        return 0;
    }

    printf("Criando lista...\n");
    node = &m1;
    node->prox = NULL;
    imprimeLista(node);

    addlista(node, m2);
    imprimeLista(node);
    addlista(node, m3);
    imprimeLista(node);
    addlista(node, m4);
    imprimeLista(node);
    addlista(node, m5);
    imprimeLista(node);

    while(fgets(aux,sizeof(aux), file) != NULL)
    {
        printf("Valor lido do txt = %s", aux);
        novo.conteudo = conversao(aux);
        addlista(node, novo);
        imprimeLista(node);
    }
    fclose(file);
}

void addlista(Lista *nodo, Lista novo)
{
    printf("Adicionando a lista...\n");

    Lista *auxNovo;
    auxNovo = (Lista*)malloc(sizeof(Lista));
    *auxNovo = novo;

    while(nodo->prox != NULL)
    {
        nodo = nodo->prox;
    }

    nodo->prox = auxNovo;
    auxNovo->prox = NULL;
}

void imprimeLista(Lista *nodo)
{
    printf("Lista atual: ");
    while(nodo != NULL)
    {
        printf("%d->", nodo->conteudo);
        nodo = nodo->prox;
    }
    printf("NULL \n\n");
}

int conversao(char aux[TAM])
{
    int i = 1, n = 0,numero = 0;

    for(n= 0; aux[n] != '\0'; n++);//descobrir qual é o n maximo
    for(n=n-2; n >= 0; n--)
    {
        numero = numero + ((int)((aux[n])-48))*i;
        i=i*10;
    }
    return numero;
}
