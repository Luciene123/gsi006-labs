
#include <stdio.h>
#include <stdlib.h>
//EX(3) Ler um número e retorne seu antecessor e seu sucessor.

int main(){
    printf("<< Le um número e retorna seu antecessor e seu sucessor>>");
    float n, antecessor, sucessor;    
    printf("Digite um numero real");    
    scanf("%f", &n);
    antecessor=n+1;
    sucessor=n-1;
    printf("<<Número:%f, seu antecessor:%f, e seu sucessor:%f>>",n,antecessor,sucessor);
    return 0;
}