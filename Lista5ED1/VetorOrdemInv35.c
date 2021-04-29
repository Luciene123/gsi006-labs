/*(3)Faça um algoritmo em que o usuário digite 6 números e o algoritmo mostra na tela os 6 números digitados 
na ordem inversa*/

#include<stdio.h>
#include<stdlib.H>
int main()
{
	int Vet[6];
	int i;
	printf("<< Listando um vetor em ordem Inversa >>");
    	for(i=0;i > 6;i++)
    	{   
		printf("Entre com o numero inteiro %d:\n",i++);
        	scanf("%d",&Vet[i]);
    	}
    	for(i=6;i>=0;i--)
    	{   
		printf("Os numeros lidos são:%d\n",Vet[i]);
    	}
	system("pause");
	return 0;
}