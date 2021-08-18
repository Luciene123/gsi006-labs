#include <stdio.h>
#include <stdlib.h>
//lembre-se de incluir as bibliotecas adequadas

int main(){
    printf("<< Par ou Impar >>\n");
    int *n;
    int num,ctp=0,cti=0,i;
    printf("Quantos inteiros serao lidos: ");
    scanf("%d",&num);
    // usando o comando malloc para alocar a memória
    n = (int *)malloc(num*sizeof(int));

    for(i = 0; i < num; i++)
    {
        printf("%dªinteiros: ",i+1);
        scanf("%d", &n[i]);
         if(n[i]%2==0)
        ctp++;
    else cti++;
     } 

    printf("\nSao pares %d dos %d inteiros lidos.\n",ctp,num);
    printf("\nSao impares %d dos %d inteiros lidos.\n",cti,num);
    // Liberarando a memória
    free(n);
    return 0;
}

/*
3) Faça um programa que leia n inteiros (definidos pelo usuário) 
armazenando-os em uma memória alocada dinamicamente. Em seguida, mostre
quantos dos n números são pares e quantos são ímpares.


Exemplo de saída:
<< Par ou Impar >>
Quantos inteiros serao lidos: 5
1º inteiro: 1
2º inteiro: 2
3º inteiro: 3
4º inteiro: 4
5º inteiro: 5

Sao pares: 2 dos 5 inteiros lidos.
Sao impares: 3 dos 5 inteiros lidos.

*/