#include <stdio.h>
#include <stdlib.h>

struct lista {
    int conteudo;
    struct lista *prox;
};

typedef struct lista Lista;
void addfinallista(Lista *nodo, Lista novo);
void imprimeLista(Lista *nodo);

int main (void)
{
    Lista *node, novo={}, m1={1,NULL}, m2={2,NULL}, m3={3,NULL}, m4={4,NULL}, m5={5,NULL};

    //Criando a lista
    printf("Criando a lista...\n");
    node = &m1;
    node->prox = NULL;
    imprimeLista(node);

    printf("adicionando..\n");
    addlista(node, m2);
    printf("Lista atual: ");
    imprimeLista(node);
    printf("adicionando..\n");
    addlista(node, m3);
    printf("Lista atual: ");
    imprimeLista(node);
    printf("adicionando..\n");
    addlista(node, m4);
    printf("Lista atual: ");
    imprimeLista(node);
    printf("adicionando..\n");
    addlista(node, m5);
    printf("Lista atual: ");
    imprimeLista(node);

    while(1)
    {
        printf("Digite um inteiro\n");
        scanf("%d", &novo.conteudo);
        addlista(node, novo);
        imprimeLista(node);
    }
}

void addlista(Lista *nodo, Lista novo)
{
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
    while(nodo != NULL)
    {
        printf("%d->", nodo->conteudo);
        nodo = nodo->prox;
    }
    printf("NULL \n");
}
