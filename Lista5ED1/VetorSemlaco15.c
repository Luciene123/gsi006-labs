/*(1) programa que lê 6 valores e em seguida mostra na tela os valores lidos. Não
utiliza loops e utilize vetores para armazenar os números.*/

#include <stdio.h>
#include <stdlib.H>

int main()
{
	int Vet[6];
	printf("<< Listando um vetor>>n");
	printf("Entre com o numero 1:\n");
	scanf("%d",&Vet[0]);
	printf("Entre com o numero 2:\n");
	scanf("%d",&Vet[1]);
	printf("Entre com o numero 3:\n");
	scanf("%d",&Vet[2]);
	printf("Entre com o numero 4:\n");
	scanf("%d",&Vet[3]);
	printf("Entre com o numero 5:\n");
	scanf("%d",&Vet[4]);
	printf("Entre com o numero 1:\n");
	scanf("%d",&Vet[5]);
	printf("Os valores lidos são:%d %d %d %d %d %d\n", Vet[0],Vet[1], Vet[2], Vet[3], Vet[4],Vet[5]);
	system("pause");
	return 0;
}