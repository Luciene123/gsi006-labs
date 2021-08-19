#include <stdio.h>
#include <stdio.h>
#include<math.h>
void copiarvet(int vet_origem[],int vet_destino[],int n){
    int i;
    for(i = 1; i < n; i++){
       vet_destino[i]= vet_origem[i];
        
    }     
}
void  imprime_vet_int(int vetor[],int n){   
    int i;
    for(i = 0; i < n; i++){
        printf("O números inteiros %d R$:%d ",i+1,vetor[i]);
    }
}
int main(){
    int vet_origem[]={1,2,3,4,5};
    int vet_destino[]={1,2,3,4,6};    
    printf("O vetor de origem eh: ");
    imprime_vet_int(vet_origem,5);
    printf("O vetor de destino eh: ");
    imprime_vet_int(vet_destino,5);
    printf("O vetor de destino apos a copia eh: ");
    copiarvet(vet_origem,vet_destino,5);
    imprime_vet_int(vet_destino,5);

    return 0;
}

/*
=> Faça uma função para copiar um vetor inteiro para outro 
vetor. Ambos vetores devem ter o mesmo tamanho. Mostre no 
programa principal os dois vetores.

Chamada:
copiarvet(vet_origem, vet_destino, n);


Os valores são definidos na função principal.
-------------------------------------------------------------------------------
Exemplo de Saída:

O vetor de origem eh: 1, 2, 3, 4, 5
O vetor de destino eh: 1, 2, 3, 3, 6
O vetor de destino apos a copia eh: 1, 2, 3, 4, 5
-------------------------------------------------------------------------------
*/