/*23) Calcula o número neperiano.Usuário entraa com o número de termos que serão 
somados (note que, quanto maior o número, a resposta estará mais próxima do valor e).*/

#include <stdio.h>
#include<stdlib.h>
int main() 
{

 	int n=1,ex,term,cont=1;  // termos da série de taylor
 	double y, aux = 1;//auxiliar
 	printf("Digite a quantidade de termos da série, para o calculo do número neperiano");
	scanf("%d",&term);
 	do {
      		y = (1 + (1 / n));
     	 	while (ex <= cont)
        	{
       		 aux = y * aux;
        		ex++;
      		}

      		ex = 1;
     	 	printf(" %.100lf \n ", aux);
      		cont++;
      		aux = 1;
     		 n++;

    	} while (cont<= term);

	system("PAUSE");
  	return 0;
  }
