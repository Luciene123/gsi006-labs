//Bibliotecas 
#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("<< Guarda inteiros >>\n");    
    int *n;
    int i;
 
  // usando o comando malloc para alocar a memória
  n = (int *)malloc(5*sizeof(int));

  for   (i = 0; i < 5; i++){
    printf("Digite os números inteiros %d R$: ",i+1);
    scanf("%d", &n[i]);
  } 

  printf("\nNumero digitados\n" );
  for   (i = 0; i < n; i++)
  {
    printf("Numero(%d) eh %d\n" ,i+1,n[i]);
  }
  
  // Liberarando a memória
  free(n);
}

/*
2) Crie um programa que:
    (a) Aloque dinamicamente um array de 5 números inteiros, 
    (b) Peça para o usuário digitar os 5 números no espaço alocado, 
    (c) Mostre na tela os 5 números, 
    (d) Libere a memoria alocada.

Exemplo de saída:
<< Guarda inteiros >>
Digite o numero(1): 4
Digite o numero(2): 6
Digite o numero(3): 8
Digite o numero(4): 3
Digite o numero(5): 9 

O numero(1) eh 4
O numero(2) eh 6
O numero(3) eh 8
O numero(4) eh 3
O numero(5) eh 9
*/