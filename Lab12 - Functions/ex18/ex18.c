#include <stdio.h>
#include <stdio.h>
#include<math.h>
void maiorMenor(float *vet, int n, float *menor, float *maior){
    int i;
    *menor = *vet;//Posição vet[0] de vet
    *menor = *vet;//Posição vet[0] de vet
    *maior = *vet;
    for(i = 1; i < n; i++){
        if(*menor > *(vet + i))
            *menor = *(vet + i);
        else if(*maior < *(vet + i))
            *maior = *(vet + i);
    print("Maior valor do vetor%d",*menor);      
    print("Maior valor do vetor%d",*maior);
           
    }
}
void  imprime_vet_float(float vetor[],int n){   
    int i;
    for(i = 0; i < n; i++){
        printf("O numero float %d R$: ",i+1,vetor[i]);
  } 
}

int main(){
    float *menor, *maior, vet[4] = {1,2,3,4};
    printf("Os valores inseridos neste vetor de inteiros eh: ");
    imprime_vet_int(vet,4);
    maiorMenor(vet,4,menor,maior);
    return 0;
}
/*
=> Crie um procedimento que recebe um vetor de double como 
entrada e devolve o maior e o menor elemento do vetor. Mostre no 
programa principal o vetor, o maior e o menor elemento.


No programa principal, solicite ao usuário o tamanho do vetor, e os
valores a serem computados.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 3
Digite o valor 1: -1
Digite o valor 2: 0.02
Digite o valor 3: 3

O vetor principal eh: -1.00, 0.02, 3.00
O maior valor eh 3.00
O menor valor eh -1.00
-------------------------------------------------------------------------------
Obs: note que para este caso, foram consideradas duas casas após o ponto. 
*/