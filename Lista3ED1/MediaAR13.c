#include <stdio.h>
#include <stdlib.h>
int main(){
    //Ex(1)Usuário entra com a letra inicial do nome do aluno, depois com as notas das 3 provas. 
    //Peso provas:primeira(1),segunda(1),terceira((mais 2).
    //calcula a média ponderada das notas das 3 provas.    
    // Mostra juntamente, o nome do aluno e se foi aprovado ou reprovado.
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
    if(media>=60)
         printf("Nota media do aluno %c:%2f =>APROVADO\n",c,media);
    else
        printf("Nota media do aluno %c: %2f =>REPROVADO\n",c,media);
    system("pause");
    return 0 ;
}