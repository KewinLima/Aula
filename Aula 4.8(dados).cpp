#include <stdio.h>
#include <stdlib.h>
#define TAM 1000

int main(void)
{
    FILE *file;
    file = fopen("C:\\Users\\kewinlima\\Desktop\\Aula Bia\\string.txt", "a");

    if(file == NULL)
    {
        printf(" Não existe esse arquivo ou não pode ser aberto \n");
        system("PAUSE");
        return 0;
    }

    fprintf(file,"ESCOLA POLITECNICA \n");

    char nome[TAM] = {'b','i','a','\n'};
    fputc(nome[0],file);
    fputc(nome[1],file);
    fputc(nome[2],file);
    fputc(nome[3],file);


    char frase[TAM] = {"kewin lima \n"};
    fputs(frase, file);

    fclose(file);

    system("PAUSE");
    return 0;
}
