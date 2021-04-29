#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    //Ex(6) Retorna se um número inteiro é um quadrado perfeito, exibindo, nos casos afirmativos, sua raiz quadrada 
    printf("<< Quadrado Perfeito de n>>");
    int n, quadper;    
    printf("Digite um numero ");
    scanf("%d", &n);
    if(n % 2 == 0)
    {   quadper=sqrt(n);
        printf("O numero: %d eh quadrado perfeito, sua raiz quadrada eh:%d", n,quadper);
    }
    else
        printf("O numero: %d não eh quadrado perfeito", n);
    system("pause");    
    return 0;
}