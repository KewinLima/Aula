#include <stdio.h>
#include <stdlib.h>

char nome[20];
char nome1[20];
char nome2[20];
int kewin = 10;

int main(void)
{
        printf("Digite um nome: ");
        scanf("%s %s %s", nome, nome1, nome2);
        printf("Nome = %s %s %s\n", nome, nome1,nome2);
        printf("Endereço de memoria de kewin = %d \n", &kewin);
        system("pause");
        return(0);
}
