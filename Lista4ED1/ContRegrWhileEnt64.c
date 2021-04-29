#include<stdio.h>
#include<stdlib.h>
/*Ex(4)utilizando comando for que mostra uma contagem regressiva na tela,
iniciando com valor que o usuário digita, terminando em 0. Mostrar uma mensagem “FIM!”após a contagem.*/
int main()
{ 
	int ui;
	printf("DIGITE UM VALOR INTEIRO INICIAL PARA A CONTAGEM REGRESSIVA ");
	scanf("%d",&ui);
    	for(; ui >= 0;ui--)
        {
            printf("%d..", ui);
        }
	printf("FIM!");
	system("pause");
	return 0;
}