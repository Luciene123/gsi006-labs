//Ex(2)Utiliza comando do..while para mostrar uma contagem regressiva na tela(10 a 0) e uma mensagem “FIM!” após a contagem.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int d=10;
	do{
        	printf("%d..",d);
        	d--;
    	}while(d>=0);

	printf("FIM!");
 	system("pause");   
	return 0;
}