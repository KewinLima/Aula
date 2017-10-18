/*
r: Permissão de abertura somente para leitura.
   É necessário que o arquivo já esteja presente no disco.

w: Permissão de abertura para escrita (gravação).
   Este código cria o arquivo caso ele não exista, e caso o
   mesmo exista ele recria o arquivo novamente fazendo com que
   o conteúdo seja perdido. Portanto devemos tomar muito cuidado ao usar esse tipo de abertura.

a: Permissão para abrir um arquivo texto para escrita(gravação),
   permite acrescentar novos dados ao final do arquivo. Caso não exista, ele será criado.
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
