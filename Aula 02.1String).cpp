#include <stdio.h>
#include <stdlib.h>

char nome[20] = "Beatriz";

int main(void)
{
            for(int i = 0; nome[i] != '\0'; i++)
            {
                        printf("%c", nome[i]); 
            }
            printf("Nome = %s \n", nome);
            
            system("pause");
            return(0);
}
