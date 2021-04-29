#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*Ex(16) Mostra qual a quantidade de bits( 1, 2, 4, 8, 16, 32, 64 e 128), máxima de endereços de memória que um computador 
  pode representar.Contem um loop e uma variável. Usa a função pow() de math.h*/
int main(void)
{
	double bits=2; 
	for(int i =0; i < 8; i++ )
	{  
		if(i%2!=0)
		{  
     			i++; 
		}         
 		printf("Com %f bits é possível endereçar %f posições de memória\n.",i,bits);
		bits=(pow(2,bits))/2;
  	}
  	system("pause");
    	return 0;
} 
