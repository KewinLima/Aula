/*
r: Permiss�o de abertura somente para leitura.
   � necess�rio que o arquivo j� esteja presente no disco.

w: Permiss�o de abertura para escrita (grava��o).
   Este c�digo cria o arquivo caso ele n�o exista, e caso o
   mesmo exista ele recria o arquivo novamente fazendo com que
   o conte�do seja perdido. Portanto devemos tomar muito cuidado ao usar esse tipo de abertura.

a: Permiss�o para abrir um arquivo texto para escrita(grava��o),
   permite acrescentar novos dados ao final do arquivo. Caso n�o exista, ele ser� criado.
*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *file;
    file = fopen("C:\\Users\\kewinlima\\Desktop\\Aula Bia\\Lista.txt", "r");
    int x;
    fscanf(file, "%d", &x);
    printf("%d \n", x);
    fclose(file);

    system("PAUSE");
    return 0;
}
