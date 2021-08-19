#include <stdio.h>
#include <stdio.h>
#include<math.h>
void multvet(float vet[],int n,int escalar){
    int i;
    for(i = 1; i < n; i++){
        vet[i]= vet[i]*escalar;
        
}
void  imprime_vet_float(float vetor[],int n){   
    int i;
    for(i = 0; i < n; i++){
        printf("O numero float %d R$: ",i+1,vetor[i]);
  } 
}

int main(){
    float vet[];
    int n,esc; 
    printf("Digite o tamanho do vetor: "); 
    scanf("%f",&n); 
    printf("Digite o valor do escalar: ")
    scanf("%f",&esc);
    for(i = 1; i < n; i++){ 
        printf("Digite o valor %d do vetor: ", i+1);        
        scanf("%f",&vet[i]);
    }    
    printf("O vetor inicial eh: ");
    imprime_vet_int(vet,n);
    printf("O vetor final eh: ");
    multvet(vet,n,esc);
    imprime_vet_float(vet,n);

    return 0;
}

/*
=> Faça uma função para multiplicar um vetor por um escalar 
(um número). Mostre, no programa principal, o vetor antes e depois 
da multiplicação.

Chamada:
multvet(vetor, n, escalar);


No programa principal, solicite ao usuário o tamanho do vetor, os valores
a serem computados e o valor do escalar.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 5
Digite o valor 1: 2
Digite o valor 2: 4
Digite o valor 3: 10
Digite o valor 4: 6
Digite o valor 5: 5
Digite o valor do escalar: 3

O vetor de origem eh: 2, 4, 10, 6, 5
O vetor final eh: 6, 12, 30, 18, 15
-------------------------------------------------------------------------------
*/