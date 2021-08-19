#include <stdio.h>
#include <stdio.h>
#include<math.h>
#define N 10
void  imprime_vet_int(int vetor[],int n){   
    int i;
    for(i = 0; i < n; i++){
        printf("O números inteiros %d R$:%d ",i+1,vetor[i]);
    
  } 
}
void  imprime_vet_double(double vetor[],int n){   
    int i;
    for(i = 0; i < n; i++){
        printf("O números double %d R$:%lf ",i+1,vetor[i]);
  } 

}
void  imprime_vet_float(float vetor[],int n){   
    int i;
    for(i = 0; i < n; i++){
        printf("O numero float %d R$:%f ",i+1,vetor[i]);
  } 
}
int main(){
    int i,n=N;
    int vetI[N];
    float vetF[N];
    double vetD[N];
    for(i = 0; i < N; i++){
        printf("Digite os números inteiros %d R$: ",i+1);
        scanf("%d",&vetI[i]);
    } 
    printf("Os valores inseridos neste vetor de inteiros eh: ");
    imprime_vet_int(vetI,n);

    for(i = 0; i < N; i++){
        printf("Digite os números float %d R$: ",i+1);
        scanf("%d", &vetF[i]);
    } 
    printf("Os valores inseridos neste vetor de float eh: ");
    imprime_vet_float(vetF,n);

    for(i = 0; i < N; i++){
        printf("Digite os números double %d R$: ",i+1);
        scanf("%d", &vetD[i]);
    } 
    printf("Os valores inseridos neste vetor de double eh: ");
    imprime_vet_double(vetD,n);

    return 0;
}

/*
=> Crie três funções chamadas imprime_vet_int, 
imprime_vet_double, imprime_vet_float que mostra o conteúdo de 
um vetor de inteiros, double, e float, respectivamente. Use essas 
funções sempre que precisar mostrar um vetor.


Exemplo de Chamada:

    imprime_vet_int(vetori,n);
    imprime_vet_double(vetord,n);
    imprime_vet_float(vetorf,n);

-------------------------------------------------------------------------------
Exemplo de Saída:

Os valores inseridos neste vetor de inteiros eh: 1 2 3 4 5 
Os valores inseridos neste vetor de float eh: 1.20 2.30 3.40 4.50 5.50 
Os valores inseridos neste vetor de double eh: 1.20 2.30 3.40 4.50 5.50 
-------------------------------------------------------------------------------
*/