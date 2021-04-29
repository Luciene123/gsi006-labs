#include <stdlib.h>
#include <stdio.h>
int main(){
    //EX(4)Entrada das iniciais do nome de três alunos e suas respectivas notas. 
    //Retorna: o nome e a nota do aluno que tirou a maior nota,
    // e o nome e a nota do aluno que tirou a menor nota (em caso de notas iguais mostrar somente um nome)
    printf("<< Cálculo da Média >>");
    float a1,a2,a3,maior=0, menor=0;
    char c1,c2,c3,alunomaior,alunomenor; 
    printf("Digite a letra inicial do nome do aluno #1:"); 
    scanf("%c", &c1);   
    printf("Digite a #1a nota:");     
    scanf("%f", &a1); 
    if(a1 >= maior)
    { 
        maior=a1;
        alunomaior=c1;
    }
    else
    {
        menor=a1;
        alunomenor=c1;
    }
    printf("Digite a letra inicial do nome do aluno #2 :");
    scanf("%c", &c2);      
    printf("Digite a #2a nota:");    
    scanf("%f", &a2); 
    if(a2 >= maior)
    { 
        maior=a2;
        alunomaior=c2;
    }    
    else
    { 
            menor=a2; 
            alunomenor=c2; 
    }        
    printf("Digite a letra inicial do nome do aluno #3 :");
    scanf("%c", &c3);    
    printf("Digite a #3a nota:");    
    scanf("%f", &a3); 
    if(a3 >= maior)
    { 
        maior=a3;
       alunomaior=c3;
    }
    else 
    {      
        menor=a3;  
        alunomenor=c3;
    }    
    if(maior == menor) 
       printf("Maior nota: (%2f) e J. a menor (%2f)\n",alunomaior,maior);
    else               
        printf("%c. tem a maior nota (%2f) e %C. a menor nota (%2f)\n",alunomaior,maior, alunomenor,menor);
        
        system("pause");

    return 0 ;
}

