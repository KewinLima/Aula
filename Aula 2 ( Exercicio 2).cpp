/*Exercicio 2 , Crie uma função que insira uma palavra dentro de uma string */
#include <stdio.h>
#include <stdlib.h>

void concatenarStrings (char nome1[20], char nome2[20], char* pont);

int main (void)
{
    char nome1[20] = ("kewin"); // ['k','e','w','i','n','\0']
    char nome2[20] = {"bia"};
    char novonome[20] = {}; // ['\0']
    concatenarStrings(nome1, nome2, novonome);
    printf("%s\n", novonome);

    system("pause");

    return 0;
}

void concatenarStrings (char nome1[20], char nome2[20], char* pont)
{
    int i;
    int j;
    int k;
    char novonome[20] = {};

    for(i=0; nome1[i] != '\0'; i++)
    {
        novonome[i]=nome1[i];
    }

    for(j=0; nome2[j] != '\0'; j++)
    {
        novonome[j+i]=nome2[j];
    }
    for(k= 0; novonome[k] != '\0'; k++)
    {
        *pont = novonome [k];
        pont = pont +1;
    }
}
