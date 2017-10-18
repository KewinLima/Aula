#include<stdio.h>
void main()
{
    FILE *file;
    file = fopen("C:\\Users\\kewinlima\\Desktop\\Aula Bia\\Lista.txt", "w");

    fprintf(file, "Olá \n");
    fclose(file);

    system("PAUSE");
    return 0;
}

