/*(2) programa que lê 6 valores e em seguida mostra na tela os valores lidos,utilizando loop for*/

#include<stdio.h>
#include<stdlib.H>
int main()
{
	int Vet[6];
	int i;
	printf("<< Listando um vetor >>\n");
    	for(i=0;i<6;i++)
    	{   
		printf("Entre com o numero inteiro %d:\n",i++);
        	scanf("%d",&Vet[i]);
    	}
    	for(i=0;i<6;i++)
    	{   
		printf("Os numeros lidos são %d:\n",Vet[i]);
    	}
	system("pause");
	return 0;
}	