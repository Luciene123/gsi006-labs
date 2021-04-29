#include<stdio.h>
#include<stdlib.h>
/*Ex(5)utilizando comando do.. while que mostra uma contagem regressiva na tela,
iniciando com valor que o usuário digita, terminando em 0. Mostrar uma mensagem “FIM!”após a contagem.*/
int main()
{ 
	int ud=10;
	printf("DIGITE UM VALOR INTEIRO INICIAL PARA A CONTAGEM REGRESSIVA ");
	scanf("%d",&ud);
	do{
            	printf(" %d ..",ud);
            	ud--;
      	} while(ud >= 0);
	printf("FIM!");
	system("pause");  
	return 0;
}