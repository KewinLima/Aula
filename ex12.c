#include <stdio.h>
#include <stdlib.h>

struct lista {
    int conteudo;
    struct lista *prox;
};

typedef struct lista Lista;
void addfinallista(Lista *nodo, Lista novo);

int main ()
{
    Lista *node;
    Lista m1={}, m2={}, m3={}, m4={}, m5={};
    Lista novo = {};

    node = &m1;
    node->prox = NULL;

    m1.conteudo = 1;
    m2.conteudo = 2;
    m3.conteudo = 3;
    m4.conteudo = 4;
    m5.conteudo = 5;

    addlista(node, m2);
    addlista(node, m3);
    addlista(node, m4);
    addlista(node, m5);

    printf("Digite um inteiro\n");
    scanf("%d", &novo.conteudo);
    addlista(node, novo);

    imprimeLista(node);
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
