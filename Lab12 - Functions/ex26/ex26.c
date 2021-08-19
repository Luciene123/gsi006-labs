#include <stdio.h>
void  imprime_vet_double(double *vetor,int n){   
    int i;
    for(i = 0; i < n; i++){
        printf("O números inteiros %d R$:%lf ",i+1,vetor[i]);
    }
}
void to_double(int *vet, int n ){
int i;
double *vetD;
for(i = 0; i < n; i++){ 
   vetD[i]=vet[i];   }
}
int main(){
    double *vet;
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    vet=(double*)calloc(vet,sizeof(double*));
    for(i = 1; i < n; i++){ 
        printf("Digite o valor %d do vetor: ", i+1);        
        scanf("%lf",vet[i]);  
    }
    imprime_vet_double(vet,n);
    free(vet);
    return 0;
}

/*
=> Faça a função to_double, que recebe um vetor de inteiro e 
retorna um vetor com o mesmo conteúdo, mas convertido para 
double.

Chamada:
vet_double = to_double(vet_int,n);

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 4
Digite o valor 1: 1
Digite o valor 2: 3
Digite o valor 3: 5
Digite o valor 4: 4

O vetor de origem eh: 1, 3, 5, 4
O vetor convertido para double eh: 1.00, 3.00, 5.00, 4.00
-------------------------------------------------------------------------------
*/