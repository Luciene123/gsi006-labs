
#include <stdio.h>
#include <stdlib.h>
int main(){
    //Ex(3)Calcula a média ponderada das notas de 3 provas.Pesos das notas: primeira(1), segunda(1), terceira(2).
     //Primeiro,o usuário entra a letra inicial do nome do aluno, depois com as notas do aluno.
     //Depois mostrar o a letra inicial do nome do aluno juntamente com a sua média.
    printf("<< Cálculo da Média >>");
    float a1,a2,a3,media;
    char c; 
    printf("Digite a letra inicial do nome do aluno nota:");    
    scanf("%c", &c);   
    printf("Digite a 1a nota:");    
    scanf("%f", &a1);
    printf("Digite a 2a nota:");    
    scanf("%f", &a2); 
    printf("Digite a 3a nota:");    
    scanf("%f", &a3);      
    media = (1*a1 + 1*a2 + 2*a3)/4; 
    printf("Nota media do aluno %c:%f\n",c,media);
    system("pause");
    return 0 ;
}


 