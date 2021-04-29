#include<stdlib.h>
#include <stdio.h>
/*13) Dados n e dois números inteiros positivos i e j diferentes de 0,
imprimir em ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos.*/
int main()
{   /* dados de entrada*/
  	int i,j,n,mt,ct; 
  	printf("<< Múltiplos  dois números naturais>>\n");
  	printf("Entre com o valor de n:\n");
 	scanf("%d",&n);
  	printf("Entre com o valor de i: ");
  	scanf("%d",&i);
  	printf("Entre com o valor de j: ");
  	scanf("%d",&j);
  	// inicializando variáveis de controle
  	mt = 0;
  	ct = 0;
  	while (ct < n)
   	 {
      		/* verifica se mt eh multiplo de i ou j */
        	if (mt%i == 0 || mt%j == 0)
       	 	{
            		printf("Os múltiplos de i ou j são: %d,", mt);
            		ct = ct + 1;;
       	 	}
    	//atualiza multiplo
        mt++;
    	}
 	system("pause");
	return 0;
}
