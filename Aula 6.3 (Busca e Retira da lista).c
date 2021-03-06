//Crie uma fun��o que busca um elemento e remove ele
#include <stdio.h>
#include <stdlib.h>

struct lista
{
    char a;
    struct lista *ant;
    struct lista *prox;
};

typedef struct lista Lista;
Lista *criaLista (int endereco);
void buscaeexclui (int indice, Lista *nodo);

int main ()
{
    Lista *node, m1 = {'k', NULL}, m2 = {'b', NULL}, m3 = {'a', NULL}, m4 = {'v', NULL};
    char b;
    int c;

    criaLista(&m1);
    printf("Criando a lista...\n");
    node = criaLista(&m1);

    imprimeLista(node);
    printf("adicionando..\n");
    addlista(node, m2);
    printf("Lista atual: ");
    imprimeLista(node);
    printf("adicionando..\n");
    addlista(node, m3);
    printf("Lista atual: ");
    imprimeLista(node);
    addlista(node, m4);
    printf("Lista atual: ");
    imprimeLista(node);

    printf("Deseja excluir algum indice? s/n \n");
    scanf("%c", &b);

    if(b=='s')
    {
        printf("Qual indice deseja apagar?\n");
        scanf("%d", &c);
        if(c == 0)
        {
            buscaeexclui(c, node);
            node = node->prox;
            imprimeLista(node);
        }
        else
        {
            buscaeexclui(c, node);
            printf("Lista atual: ");
            imprimeLista(node);
        }
    }
    if(b=='n')
        return 0;
}

void addlista(Lista *nodo, Lista novo)
{
    Lista *auxNovo;
    auxNovo = (Lista*) malloc(sizeof(Lista));
    *auxNovo = novo;
    int antigoNodo;

    while(nodo->prox != NULL)
    {
        antigoNodo = nodo;
        nodo = nodo->prox;
        nodo->ant = antigoNodo;
    }

    nodo->prox = auxNovo;
    auxNovo->ant = nodo;
    auxNovo->prox = NULL;
}

void imprimeLista(Lista *nodo)
{
    printf("NULL");
    while(nodo != NULL)
    {
        printf("<-%c->", nodo->a);
        nodo = nodo->prox;
    }
    printf("NULL \n");
}

void buscaeexclui(int indice, Lista *nodo)
{
    int endprox, endant, ultimo =0, n;
    Lista *lixo,*aux;

    aux = nodo;

    for(n = 0; n-1 < indice; n++)
    {
        if(aux->prox == NULL)
        {
            ultimo = 1;
        }
        else
        {
            aux = aux->prox;
        }
    }

    if(ultimo == 1)
    {
        nodo = aux;
        lixo = nodo;
        nodo = nodo->ant;
        nodo->prox = NULL;
    }
    else if (indice == 0)
    {
        lixo = nodo;
        nodo = nodo->prox;
        nodo->ant = NULL;
    }
    else
    {
        for(n= 0; n!= indice; n++)
        {
            nodo -> ant = nodo;
            endant = nodo;
            nodo = nodo -> prox;
            endprox = nodo->prox;
        }
        lixo = nodo;
        nodo = nodo->ant;
        nodo->prox = endprox;
        nodo = nodo->prox;
        nodo->ant = endant;
    }
    free(lixo);
}

Lista *criaLista (int endereco)
{
    Lista *Auxcab;
    Auxcab = endereco;
    Auxcab->prox = NULL;
    Auxcab->ant = NULL;

    return Auxcab;
}
