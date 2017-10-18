#include <stdio.h>
#include <stdlib.h>
#define TAM 100

void copiartxt (FILE *f1, FILE *f2);
int main ()
{
    FILE *f1;
    FILE *f2;
    f1 = fopen("C:\\Users\\kewinlima\\Desktop\\Aula Bia\\string.txt", "r");
    f2 = fopen("C:\\Users\\kewinlima\\Desktop\\Aula Bia\\listas.txt", "w");
    copiartxt(f1, f2);
    system("pause");
    return 0;
}

void copiartxt (FILE *f1, FILE *f2)
{
    char x[TAM][TAM];
    int n;

    for(n =0; fgets(x[n], TAM, f1) != NULL; n++)
    {
        printf("string: %s", x[n]);
        fputs(x[n], f2);
    }

    fclose(f1);
    fclose(f2);
}
