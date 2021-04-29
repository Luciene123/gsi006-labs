
#include<stdio.h>
#include<stdlib.h>
/*Ex(7)utilizando comando while que mostra uma contagem progressiva na tela,
iniciando com valor que o usuário digita, terminando em 0. Mostrar uma mensagem “FIM!”após a contagem.*/
int main()
{ 
	int u=0,n;
	printf("DIGITE UM VALOR INTEIRO NEGATIVO INICIAL PARA A CONTAGEM PROGRESSIVA ");
	scanf("%d",&n);
 	u=n;
 	while(u<=0)
    	{
        	printf("%d..",u);
        	u++;
    	}
	printf("FIM!");
	system("pause");   
	return 0;
}