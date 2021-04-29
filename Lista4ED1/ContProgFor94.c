//(9)CONTAGEM PROGRESSIVA COM for E VALOR INICIAL DETERMINADO PELO USUÁRIO

#include<stdio.h>
#include<stdlib.h>
/*Ex(9)utilizando comando for que mostra uma contagem progressiva na tela,
iniciando com valor que o usuário digita, terminando em 0. Mostrar uma mensagem “FIM*/
int main()
{ 
	int i,n=0;
	printf("DIGITE UM VALOR INTEIRO INICIAL NEGATIVO PARA A CONTAGEM PROGRESSIVA ");	
    scanf("%d",&n);
	for(i=0; i< n;i++)
        {
            printf("%d",i);
        }	
	printf("FIM!");
	system("pause");  
	return 0;
}