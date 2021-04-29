/*(11)Lê 5 números inteiros e armazena em um vetor v. Cria dois novos vetores v1 e v2.
Copia os valores ímpares de v para v1, e os valores pares de v para v2. Cada
um dos vetores v1 e v2 tem no máximo 5 elementos, mas nem todos os elementos são
utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{

    int v1[5];
    int v2[5];
    int v[5];
    int i,j,k;
    printf("<<Pares e ímpares\n");

    for( i = 0, j = 0, k = 1; i < 5, j < 5, k < 6 ; i++, j++,k++ )
    {
            printf("Digite o valor%d de 1:\n ",i++);
            scanf( "%d", &v[i] );
            if( v[i] % 2 == 0)
                v2[j]=v[1];
            else
                v1[k]=v[i];
    }

    for(  j = 0, k = 0; j < 5, k < 5 ; j++,k++ )
    {
        printf("ímpares:%d\n ", v1[k]);
        printf("pares:%d\n ", v2[j]);

    }

 }