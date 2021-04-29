
/*Ex(4)utilizando comando while que mostra uma contagem regressiva na tela,
iniciando com valor que o usuário digita, terminando em 0. Mostrar uma mensagem “FIM!”após a contagem.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{ 
	int u;
	printf("DIGITE UM VALOR INTEIRO INICIAL PARA A CONTAGEM REGRESSIVA ");
	scanf("d",&u);
	while(u>=0)
    	{
        	printf("%d..",u);
		u--;
    	}
	printf("FIM!");
	system("pause");    
	return 0;
}