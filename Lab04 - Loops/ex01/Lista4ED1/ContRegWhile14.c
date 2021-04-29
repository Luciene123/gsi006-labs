/*1) Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela,iniciando em 10 e terminando em 0. 
Mostrar uma mensagem “FIM!” após a contagem.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{ 
 	int w=10;
   	 while(w>=0)
    	{
            printf("%d..",w);
            w--;
    	}
 	printf("FIM!");
 	system("pause");  
 	return 0;
}