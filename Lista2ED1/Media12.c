
#include <stdio.h>
#include <stdlib.h>
int main(){
    //Algoritmo que calcula a média das notas de 2 provas
    printf("<< Cálculo da Média >>");
    float a1,a2,media;    
    printf("Digite a 1a nota:");    
    scanf("%f", &a1);
    printf("Digite a 2a nota:");    
    scanf("%f", &a2);   
    media=(a1+a2)/2;   
    printf("Nota media:\n",media);
    system("pause");
    return 0 ;
}

