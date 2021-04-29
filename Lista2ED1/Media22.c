#include <stdio.h>
#include <stdlib.h>
int main(){
    //Ex(2) Usuário entrar com as notas do aluno,com a inicial do nome do aluno.
    //Mostrar a inicial do nome do aluno juntamente com a sua média.
    printf("<< Cálculo da Média >>");
    float a1,a2,media;
    char c; 
    printf("Digite a letra inicial do nome do aluno nota:");    
    scanf("%c", &c);   
    printf("Digite a 1a nota:");    
    scanf("%f", &a1);
    printf("Digite a 2a nota:");    
    scanf("%f", &a2);   
    media=(a1+a2)/2;   
    printf("Nota media do aluno %c:%f\n",c,media);
    system("pause");
    return 0 ;
}


