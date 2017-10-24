#include <stdio.h>
#include <stdlib.h>

struct lista{
        int valor;
        struct lista *proximo;
};

typedef struct lista Lista;

Lista *ProcurarNaLista(int Numero, Lista *gancho );

int main(void)
{
        int x;

        Lista m1,m2,m3;
        Lista *cabeca = &m1;
        Lista *Resposta;

        m1.valor = 10;
        m2.valor = 30;
        m3.valor = 50;

        m1.proximo = &m2;
        m2.proximo = &m3;
        m3.proximo = NULL; //ou 0 , ou (strcut * lista)0

        printf("Digite o numero a ser procurado: ");
        scanf("%d", &x);
        Resposta = ProcurarNaLista(x, cabeca);

        if(Resposta != NULL)
        {
            printf("O numero foi encontrado \n");
        }
        else
        {
            printf(" O numero não pode ser encontrado \n");
        }

        system("pause");
        return 0;
}
Lista *ProcurarNaLista(int Numero, Lista *gancho )
{
        while(gancho != NULL)
        {
            if(gancho->valor == Numero)
            {
                return gancho;
            }
            else
            {
                gancho = gancho->proximo;
            }
        }
        return NULL;
};
