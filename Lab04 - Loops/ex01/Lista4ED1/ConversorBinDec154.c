#include<stdio.h>
#include<string.h>
#include<math.h>
/*Ex(15)Conversor binário – decimal. O usuário deve digitar o número de bits do número
binário e um bit deve ser lido por vez*/
int main()
{
   	char bin[100];//string que recebe o número binário
   	int dec= 0;//número decimal resultante da conversão do binário.
   	int i = 0;
   	int s,n;
   	printf("<< Conversor binário-decimal >> "); 
   	printf("Entre com o número de bits:   "); 
   	scanf("%d",&n);   
   	for(int j=0; j < n;j++)
   	{
   		printf("\nEntre com oNúmero Binario  %d : \t", i+1);    
    		fgets( bin, sizeof(bin), stdin);
   	}
    s = strlen( bin );
   	while( s-- ) 
	{
        if( bin[s] == '0' || bin[s] == '1' ) 
		{
            dec = dec + pow(2, i++) * (bin[s] - '0');
        }
    }
 	printf("O número binário %u em decimal é %d \n",bin, dec);    
    return 0;
}