#include <stdio.h>
#include <stdlib.h>
int main(){
    //Ex(6)Algoritmo que le o valor de duas variáveis A e B e troque os valores dessas variáveis.
    printf("== Troca do conteúdo de variáveis ==");
    float n1,n2, auxiliar;    
    printf("Digite um numero real");
    scanf("%f", &n1);
    printf("Digite um numero real");
    scanf("%f", &n2);
    auxiliar=n1;
    n1=n2;
    n2=auxiliar;    
    return 0;
}
