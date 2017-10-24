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

int main(void)
{
        Lista m1, m2, m3, m4;
        Lista *cabeca;

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
        }

        system("pause");
        return 0;
}
