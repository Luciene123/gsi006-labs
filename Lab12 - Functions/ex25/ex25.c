#include <stdio.h>
#include <stdio.h>
void  imprime_vet_double(double *vetor,int n){   
    int i;
    for(i = 0; i < n; i++){
        printf("O números inteiros %d R$:%lf ",i+1,vetor[i]);
    }
}
void copiarvet(double *vet,int n){
    int i;
    double *vet_destino;
    vet_destino=(double*)calloc(vet_destino,sizeof(double*));
    for(i = 1; i < n; i++){ 
        printf("Digite o valor %d do vetor: ", i+1);        
        scanf("%lf",vet_destino[i]);
    }    
    for(i = 1; i < n; i++){
       vet_destino[i]= vet[i];        
    }     
}
int main(){
    int n,i;
    double *vet;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",vet[i]);
    vet=(double*)calloc(vet,sizeof(double*));
    for(i = 1; i < n; i++){ 
        printf("Digite o valor %d do vetor: ", i+1);        
        scanf("%lf",vet[i]);  
    }
    imprime_vet_double(vet,n);
    printf("O vetor de origem eh: ");
    copiarvet(vet,n);
    printf("O vetor de destino eh: ");
    imprime_vet_double(vet,n);
    free(vet);
    return 0;
}

/*
=> Faça uma função que copia um vetor de double para um 
outro vetor. Esse outro vetor é alocado dentro da função que faz a 
cópia. Mostre os dois vetores.

Chamada:
vet_destino  = copiarvet(vet_origem,  n);

-------------------------------------------------------------------------------
Exemplo de Saída:

O vetor de origem eh: 1.20, 2.00, 3.20, 4.00, 5.10
O vetor de destino eh: 1.20, 2.00, 3.20, 4.00, 5.10
-------------------------------------------------------------------------------
*/