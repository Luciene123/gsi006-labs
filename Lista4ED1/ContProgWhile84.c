

#include<stdio.h>
#include<stdlib.h>
/*Ex(8)utilizando comando do..while  que mostra uma contagem progressiva na tela,
iniciando com valor que o usuário digita, terminando em 0. Mostrar uma mensagem “FIM*/
int main()
{ 
	int ud=0,n;
	printf("DIGITE UM VALOR INTEIRO NEGATIVO INICIAL PARA A CONTAGEM PROGRESSIVA ");
 	scanf("%d",&n);
      ud=n;
 	do{
            	printf(" %d",ud);
            	ud++;
        } while(ud <=0);
	printf("FIM!");
	system("pause"); 
	return 0;
}