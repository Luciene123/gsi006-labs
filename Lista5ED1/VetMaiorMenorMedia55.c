/*(5) programa que lê 5 valores e em seguida mostra na tela os valores lidos, utilizando loop for,juntamente 
com o maior, o menor e a média dos valores*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int Vet[5];
	int i;
	int maior=0, menor=0,soma=0;
	float media=0;
    	for(i=0;i < 5;i++)
    	{   
		printf("Entre com o numero %d:\n",i+1);
        	scanf("%d",&Vet[i]);
        	if(Vet[i]<= menor)
                	menor=Vet[i];
        	if(Vet[i]>= maior)
                	maior=Vet[i];
        	soma+=Vet[i];
    	}
    	media=soma/5;
    	for(i=0;i < 5;i++)
    	{
         	printf("Os valores digitados são:%d\n",Vet[i]);
         	printf("O maior valor é:%d\n",maior);
         	printf("O menor valor é:%d\n",menor);
         	printf("A média é:%f\n",media);
    	}
	system("pause");
	return 0;
}