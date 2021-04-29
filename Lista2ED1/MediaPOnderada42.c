#include <stdio.h>
#include <stdlib.h>
int main()
{ 
     //O usuário entra a letra inicial do nome do aluno, com as notas do aluno e com os pesos da prova.
     //A média ponderada das notas de 3 provas é calculada.
     //Depois é mostrado o a letra inicial do nome do aluno juntamente com a sua média.
    printf("<< Cálculo da Média >>");
    float a1,a2,a3,media,p1,p2,p3;
    char c; 
    printf("Digite a letra inicial do nome do aluno nota:");    
    scanf("%c", &c);   
    printf("Digite a 1a nota:");    
    scanf("%f", &a1);
    printf("Digite a 2a nota:");    
    scanf("%f", &a2); 
    printf("Digite a 3a nota:");    
    scanf("%f", &a3); 
    printf("Digite o Peso1:");    
    scanf("%f", &p1);
    printf("Digite o Peso2:");    
    scanf("%f", &p2); 
    printf("Digite o Peso3:");    
    scanf("%f", &p3);            
    media = (p1*a1 + p2*a2 + p3*a3)/(p1 + p2 + p3); 
    printf("Nota media do aluno %c:%2f\n",c,media);
    system("pause");
    return 0 ;
}


 