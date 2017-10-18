#include <stdio.h>
#include <stdlib.h>
#define TAM 1000

int main(void)
{
    FILE *file;
    file = fopen("C:\\Users\\kewinlima\\Desktop\\Aula Bia\\Lista.txt", "r");

    if(file == NULL)
    {
        printf(" Não existe esse arquivo ou não pode ser aberto \n");
        system("PAUSE");
        return 0;
    }

    char x[TAM];

    while(fgets(x, TAM, file) != NULL)
    {
        printf("%s \n", x);
    }
    fclose(file);

    system("PAUSE");
    return 0;
}
