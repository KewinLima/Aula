#include <stdio.h>
#include <stdlib.h>
#define TAM 100

struct arvore
{
    char per[15];
    char res[15];
    struct arvore *sim;
    struct arvore *nao;
};

typedef struct arvore Arvore;

int main(void)
{
    int a =0,b =0;
    Arvore M[TAM]={};
    char aux[30]={};
    FILE *file;

    file = fopen("C:\\Users\\kewinlima\\Desktop\\Aula Bia\\Bineco.txt", "r");
    while(fgets(aux,sizeof(aux),file)!=NULL)
    {
        printf("%s", aux);
        for(b=0;aux[b] != '?';b++)
        {
            M[a].res[b] = aux[b];
        }
        a++;
    }

    system("pause");
    return 0;
}


