/*(8)Calcula a média e o desvio padrão dos  números informados pelo usuário.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float media( float som[5], int n )
{
    float soma = 0.0;
    int i = 0;

    for( i = 0; i < 5; i++ )
        soma += som[i];

    return soma/n;
}

float variancia( float som[5], int n )
{
    float soma = 0.0;
    float desvio = 0.0;
    float mediav= 0.0 ;
    int i = 0;

    for( i = 0; i < 5; i++ )
    {
        desvio = som[i] - mediav;
        soma += (desvio * desvio);
    }

    return soma / n;
}

float desvio_padrao( float som[5], int n  )
{
    float variancia ;
    return sqrt( variancia );
}

int main()
{

    float vetor[5];
    int  i;
    

    for( i = 0; i < 5; i++ )
    {
        printf("Digite um numero: ");
        scanf( "%f", &vetor[i] );              
    }
    
    printf("Media = %g\n", media( vetor, 5 ) );
    printf("Variancia = %g\n", variancia( vetor, 5 ) );
    printf("Desvio Padrao = %g\n", desvio_padrao( vetor, 5 ));
}

