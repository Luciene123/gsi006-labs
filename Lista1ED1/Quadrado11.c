#include <stdio.h>
#include <stdlib.h>
//Faz a leitura de um número real e apresentar o resultado do quadrado do mesmo 
número
int main(){
    printf("<< Cálculo da Quadrado de n>>");
    float n, quadrado;    
    printf("Digite um numero real");
    scanf("%f", &n);
    quadrado=n*n;
    return 0;
}