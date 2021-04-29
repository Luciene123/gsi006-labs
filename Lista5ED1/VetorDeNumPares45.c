/*(4)Programa que lê 6 valores e em seguida mostra na tela os valores lidos,
utilizando loop for e vetor,o programa aceita somente números pares*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int Vet[6];
	int i;
	printf("<< Listando um vetor de números pares>>\n");
    	for(i=0;i < 6;i++)
    	{   
		    printf("Entre com o numero inteiro %d:\n",i++ );
            if((Vet[i]%2)==0)
            {
			    scanf("%d",&Vet[i]);
            }
		    else
		    {	
			    printf("Erro: Valor inválido");
		    }
        }    
	

    	for(i=0;i < 6;i++)
    	{   
		    printf("Os numeros lidos são:\n",Vet[i]);
        }
	system("pause");
	return 0;
}