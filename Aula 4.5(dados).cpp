#include<stdio.h>
void main()
{
    FILE *file;
    file = fopen("C:\\Users\\kewinlima\\Desktop\\Aula Bia\\Lista.txt", "w");

    fprintf(file, "Ol� \n");
    fclose(file);

    system("PAUSE");
    return 0;
}

