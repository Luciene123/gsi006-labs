#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("<< Média aritmética>>");
    float a1,a2,a3,a4,media;    
    printf("Digite a 1a nota:");    
    scanf("%f", &a1);
    printf("Digite a 2a nota:");    
    scanf("%f", &a2);
    printf("Digite a 3a nota:");    
    scanf("%f", &a3);
    printf("Digite a 4a nota:");    
    scanf("%f", &a4);
    media=(a1+a2+a3+a4)/4.0;
    printf("===Notas== \n");
    printf("Nota 1: %f; Nota 2: %f; Nota 3: %f; Nota 4: %f\n",a1,a2,a3,a4 );
    printf("Media== \n",media);
    system("pause");
    return 0 ;
}

