#include <stdio.h>
#include <stdio.h>
#include<math.h>
void abs_vet(int vet[]){
    int i,n;
    for(i = 1; i < n; i++){
        vet[i]=  abs(vet[i]);       
    }
}
void  imprime_vet_int(int vetor[],int n){   
    int i;
    for(i = 0; i < n; i++){
        printf("O numero float %d R$: ",i+1,vetor[i]);
  } 
}

int main(){
    int n,i;
    int vet[n];     
    printf("Digite o tamanho do vetor: "); 
    scanf("%f",&n);    
    for(i = 1; i < n; i++){ 
        printf("Digite o valor %d do vetor: ", i+1);        
        scanf("%f",&vet[i]);
    }    
    printf("O vetor inicial eh: ");
    imprime_vet_int(vet,n);
    printf("O vetor final eh: ");
    abs_vet(vet);
    imprime_vet_int(vet,n);
    free(vet);
    return 0;
}
/*
=> Faça uma função para transformar os números de um vetor 
de inteiros em seu valor absoluto (use a função abs (math.h)).

Chamada:
    abs_vet(vet);

No programa principal, solicite ao usuário o tamanho do vetor e os valores
a serem computados. Imprima o vetor de origem e o vetor com valores absolutos.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 3
Digite o valor 1: 1
Digite o valor 2: -1
Digite o valor 3: 2

O vetor de origem eh: 1, -1, 2
O vetor com valores absolutos eh: 1, 1, 2
-------------------------------------------------------------------------------
*/