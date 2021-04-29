#include<stdlib.h>
#include <stdio.h>
/*Ex(14) Dado um inteiro positivo p, verificar se p é primo.
Um numero inteiro maior que 1 eh primo se seus unicos divisores sao ele mesmo e 1.*/
int main()
{
  	int n,/* número a vericar se é primo*/ div; /* vericar se é divisor de n*/
  	int ct;   // conta o numero de divisores positivos de n 
  	printf("<< Números primos >>\n");
  	printf("\nDigite um inteiro positivo: ");
  	scanf("%d", &n);
    	// inicializando o contador 
  	ct = 0;
  	/* os candidatos a divisores positivos de n sao 1,2,...,n */
  	for (div = 1; div <= n; div++)
    	{
     	 	if (n % div == 0)
      	  	{
            		ct++;
      	  	}
    	}
  	if (ct == 2)
    	{
      		printf("O inteiro %d é primo\n");
    	}
  	else
    	{
      		printf("O inteiro %d nao e' primo\n");
	}
	system("pause");
	return 0;
}