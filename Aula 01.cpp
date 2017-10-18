#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ANA 3

int main(void)
{            //                          Chamada                  Tamanho
	int x;   //                            %d                -32768 até 32767  
	long int numero = 32; //               %li ou %d    -2147483648 até 2147483647         
	unsigned long int X = 92344536;//      %lu %d                 0 até 4294967295
	float t = 43.2;//                      %f               3.4E-38 até 3.4E38 
	double Y = 8923742;//                  %f              1.7E-308 até 1.7E308
	char b = 'a';      // %c     caracteres ou numeros entre      0 até 255
	//void
	int EXEMPLO[9] = {1,3,4,6,4,33,100,76,4};
	char nome[3] = {'o','l','a'};
	
	/* Sou um comentário */
	///////////////////////
	
	if(numero == 32)
	{
		printf("Ola'\n");
	}
	else if(numero == 33)
	{
		printf("Xau\n");
	}
	else
	{
		printf(" Adios \n");
	}
	
	////////////////////////
	x = 0;
    while(x<10)
	{
               
		       x++;
	}
	///////////////////////
	
	do
	{
		t = t - 0.1;
	}
	while(t > 45);
	///////////////////////
	
	for(x = 0; x < 10; x++)
	{
		printf("x vale: %d", x);
		printf("\n");
	}
	///////////////////////
	
	scanf("%d", &x);
	
	////////////////////////
	switch(b)
	{
		case 'a':
		{
             printf(" Sou a letra b");
		     break;
       }
		case 'd':
        {
             printf(" Sou a letra d");
             break;
        }
    }
}
