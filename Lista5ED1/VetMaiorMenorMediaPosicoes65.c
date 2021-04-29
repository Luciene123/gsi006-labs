/*(6)Programa que lê 5 valores e em seguida mostra na tela os valores lidos,utilizando loop for,juntamente com o maior, o menor
 e a média dos valores, juntamnte com suas posicões.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int Vet[5];
	int i;
	int maior=0, menor=0,soma=0, posmaior, posmenor;
	float media=0;
   	for(i=0;i<5;i++)
    	{   
		printf("Entre com o numero %d:\n",i++);
        	scanf("%d",&Vet[i]);
        	if(Vet[i]<= menor)
                	menor=Vet[i];
                	posmenor=i;
        	if(Vet[i]>= maior)
                	maior=Vet[i];
                	posmaior=i;
        	soma+=Vet[i];
      	}
    	media=soma/5;
    	for(i=0;i<6;i++)
    	{
         	printf("Os valores digitados são:%d\n",Vet[i]);
         	printf("O maior valor é:%d, localizado na posicão %d do vetor\n",maior,posmaior);
         	printf("O menor valor é:%d localizado na posição %d do vetor\n",menor,posmenor);
         	printf("A média é:%f\n",media);
 	}
	system("pause");
	return 0;
}