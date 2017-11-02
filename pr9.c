#include <stdio.h>
#include <stdlib.h>

struct lista {
    int conteudo;
    struct lista *prox;
};

typedef struct lista Lista;
void addlista(Lista *nodo, Lista novo);
void imprimeListaTxt(Lista *nodo,FILE *file);

int main (void)
{
    char aux[TAM] ={};
    Lista *node, novo={}, m1={1,NULL}, m2={2,NULL}, m3={3,NULL}, m4={4,NULL}, m5={5,NULL};
    FILE *file;
    file = fopen("C:\\Users\\kewinlima\\Desktop\\Aula Bia\\pr9.txt", "w");

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

    imprimeListaTxt(node,file);
    fclose(file);
}

void addlista(Lista *nodo, Lista novo)
{
    printf("\nAdicionando a lista...\n");

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
    printf("NULL \n");
}

void imprimeListaTxt(Lista *nodo,FILE *file)
{
    printf("\nImprimindo lista no arquivo txt.\n");
    while(nodo != NULL)
    {
        fprintf(file,"%d %d\n",nodo->conteudo, nodo);
        nodo = nodo->prox;
    }
}
