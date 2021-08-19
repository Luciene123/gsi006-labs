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
float negativos(float *vet, int n){
    int i,cont=0;
    for(i = 1; i < n; i++){
        if(vet[i] < 0)
            cont++;
    } 
    return cont;
}
void abs_vet(float *vet){
    int i,n;
    for(i = 1; i < n; i++){
        vet[i]=  abs(vet[i]);       
    }
}
void copiarvet(float *vet,float *vet_destino,int n){
    int i;
    for(i = 1; i < n; i++){
       vet_destino[i]= vet[i];
        
    }     
}
void multvet(float vet[],int n,float escalar){
    int i;
    for(i = 1; i < n; i++){
        vet[i]= vet[i]*escalar;        
    }
}
void  imprime_vet_float(float *vetor,int n){   
    int i;
    for(i = 0; i < n; i++){
        printf("O números inteiros %d R$:%d ",i+1,vetor[i]);
    }
}
int main(){
    float *menor, *maior, *vet, *vet_destino;
    int n,i;
    float esc;
    maior=(float*)malloc(sizeof(float*));
    if(!maior)
        exit(1);
    menor=(float*)malloc(sizeof(float*));
    if(!menor)    
        exit(1);
    vet=(float*)malloc(sizeof(float*));
    if(!vet)
        exit(1);
    vet_destino=(float*)malloc(sizeof(float*));
    if(!vet_destino)
        exit(1);        
    maiorMenor(vet,n,menor,maior);
    printf("Digite o tamanho do vetor: "); 
    scanf("%f",&n); 
    printf("Digite o valor do escalar: ");
    scanf("%f",&esc);
    for(i = 1; i < n; i++){ 
        printf("Digite o valor %d do vetor: ", i+1);        
        scanf("%f",vet[i]);
    } 
    maiorMenor(vet,n,menor,maior);
    printf("O vetor tem %d numero(s)", negativos(vet,n));   
    printf("O vetor inicial eh: ");
    imprime_vet_float(vet,n);
    printf("O vetor final eh: ");
    multvet(vet,n,esc);
    imprime_vet_float(vet,n);
    abs_vet(vet);
    imprime_vet_int(vet,n);
    for(i = 1; i < n; i++){ 
        printf("Digite o valor %d do vetor: ", i+1);        
        scanf("%f",vet_destino[i]);
    } 
    imprime_vet_int(vet_destino,n);
    printf("O vetor de destino apos a copia eh: ");
    copiarvet(vet,vet_destino,5);
    imprime_vet_int(vet_destino,5);
    free(maior);
    free(menor);
    free(vet);
    free(vet_destino);
    return 0;
}

/*
=> Use as funções criadas nos exercícios anteriores em um único 
programa, mas agora trabalhe com vetores alocados 
dinamicamente no programa principal. Lembre-se de liberar a 
memória depois de usar os vetores.


No programa principal, solicite ao usuário o tamanho do vetor, os valores
a serem computados e posteriormente, o valor escalar para multiplicação do vetor.

-------------------------------------------------------------------------------
Exemplo de Saída:

Entre com o tamanho do vetor: 4
Entre com o elemento 1: 50
Entre com o elemento 2: 20
Entre com o elemento 3: 10
Entre com o elemento 4: -30

Vetor: 50, 20, 10, -30
Maior: 50   Menor: -30
Numero de negativos: 1
Vetor absoluto: 50, 20, 10, 30

Copiando para outro vetor (alocado dinamicamente)

Vetor original: 50, 20, 10, -30
Vetor copiado: 50, 20, 10, -30

Entre com o valor escalar para multiplicar o vetor original: 10

Vetor original: 500, 200, 100, -300
Vetor copiado: 50, 20, 10, -30
-------------------------------------------------------------------------------
*/