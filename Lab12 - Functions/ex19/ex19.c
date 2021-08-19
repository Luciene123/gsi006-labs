#include <stdio.h>
#include <stdio.h>
#include<math.h>
float negativos(float vet[], int n){
    int i,cont=0;
    for(i = 1; i < n; i++){
        if(vet[i] < 0)
            cont++;
    } 
    return cont;
}
void  imprime_vet_float(float vet[],int n){   
    int i;
    for(i = 0; i < n; i++){
        printf("O numero float %d R$:%f ",i+1,vet[i]);
  } 
}
int main(){
    float vet[4];
    int i;     
    for(i = 0; i < 4; i++){
        printf("Digite o números float %d: ",i+1);
        scanf("%d", &vet[i]);
    }     
    printf("Os valores inseridos neste vetor de inteiros eh: ");
    imprime_vet_float(vet,n);
    printf("O vetor tem %d numero(s)", negativos(vet,n));
    return 0;
}

/*
=> Implemente uma função que receba como parâmetro um 
vetor de n números reais (VET) de tamanho N e retorne quantos 
números negativos há a nesse vetor. Use o seguinte protótipo:

int negativos(float *vet, int N); 

No programa principal, solicite ao usuário o tamanho do vetor, e os
valores a serem computados.
-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 3
Digite o valor 1: -1
Digite o valor 2: 3
Digite o valor 3: -2

O vetor principal eh: -1.00, 3.00, -2.00
O vetor tem 2 numero(s) negativo(s)
-------------------------------------------------------------------------------
*/