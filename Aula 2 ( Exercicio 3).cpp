/*Crie uma função que adiciona uma string dentro da outra*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char nome1[20] = {};
    char nome2[20] = {};
    char nomesjuntos[20] = {};
    int i = 0, n=0;
    
    printf("Digite o primeiro nome\n");
    scanf("%s", nome1);
    printf("Digite o segundo nome\n");
    scanf("%s", nome2);
    
    
    while(nome1[i]!= '\0')
    {
                     nomesjuntos[i]=nome1[i];
                     i++;
    }
    i = 0;
    for(n =0; nome1[n]!= '\0'; n++);
    
    while(nome2[i]!= '\0')
    {                  
                       nomesjuntos[i+n] = nome2[i]; 
                       i++;
    }
    
    printf("Os nomes juntos sao %s\n", nomesjuntos);  
    
    system("pause");
    return 0;
}
