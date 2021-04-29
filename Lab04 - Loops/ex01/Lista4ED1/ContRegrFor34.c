//Ex(3)Utiliza comando for para mostrar uma contagem regressiva na tela(10 a 0) e uma mensagem “FIM!” após a contagem.

#include<stdio.h>
#include<stdlib.h>
int main()
{ 
  	int i;
  	for(i=10;i >= 0;i--)
  	{
      		printf("%d..",i);
  	}
   	printf("FIM!");
 	system("pause");    
   	return 0;
}