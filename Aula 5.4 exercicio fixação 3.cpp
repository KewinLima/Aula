//Crie uma fun��o que adiciona elementos na lista

#include <stdio.h>
#include <stdlib.h>


struct lista{
        int valor;
        int valor2;
        char letra;
        float a;
        struct lista *proximo;
};

typedef struct lista Lista;

void addlista(Lista *cabeca, Lista elemento);

int main(void)
{
        Lista m1, m2, m3, m4;
        Lista novo;
        Lista *cabeca;
        int Tamanho=0;

        cabeca = &m1;

        m1.valor = 10;
        m1.valor2 = 30;
        m1.letra = 'a';
        m1.a = 3.5;

        m2.valor = 100;
        m2.valor2= 300;
        m2.letra = 'b';
        m2.a = 4.5;

        m3.valor = 20;
        m3.valor2 = 40;
        m3.letra = 'c';
        m3.a = 5.5;

        m4.valor = 200;
        m4.valor2= 400;
        m4.letra = 'd';
        m4.a = 6.5;

        m1.proximo = &m2;
        m2.proximo = &m3;
        m3.proximo = &m4;
        m4.proximo = NULL; //ou 0 , ou (strcut * lista)0

        while(cabeca != NULL)
        {
            printf(" Valor = %d \n", cabeca->valor);
            printf(" Valor 2 = %d \n", cabeca->valor2);
            printf(" Letra = %c \n", cabeca->letra);
            printf(" Decimal = %f \n", cabeca->a);

            cabeca = cabeca->proximo;
            printf("Linha 61\n");
        }
        addlista(&m1,novo);
        system("pause");
        return 0;
}

void addlista(Lista *cabeca, Lista novo)
{
    int x=0;
    while(x < 4)
    {
        cabeca = cabeca->proximo;
        x++;
        printf("74 soma=%d", x);
    }
    printf("76 cabeca.proximo=%d \n", (*cabeca).proximo);
    cabeca->proximo = &novo;
    printf("78 novo.proximo=%d \n", novo.proximo);
    novo.proximo = NULL;
}
