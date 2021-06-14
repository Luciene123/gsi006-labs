/*(4a.5)Estrutura alunosGraduação.Formada por: matrícula do aluno, nome, nota1, nota2, nota3,média e faltas.
(a) Permite ao usuário entrar com os dados de 3 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior média geral.
(d) Encontre o aluno com menor média geral.
(e) Mostra a situação final do aluno.Para aprovar o aluno precisa ter nota média final maior ou igual a 60
e ter presença maior ou igual a 75% (considere um total de 72 aulas). No caso de reprovação,
 mostrar o motivo da mesma, isto é, caso o aluno foi reprovado por falta,
mostrar “Reprovado por falta”. Caso tenha sido reprovado por nota, mostrar “Reprovado por
nota”. Se um aluno foi reprovado por falta e por nota, prevalece, como motivo*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
#include <ctype.h> 
 struct AlunosG{
    char nome[30];
    char matricula[15];
    float nota1[3];
    float nota2[3];
    float nota3[3];
    float falta;
};

int main()
{   struct AlunosG aluno[3];
    
    float media1=0,media2=0,media3=0, maiornota=0,maiormedia=0, menormedia=0,soma1=0,soma2=0,soma3=0;
    for(int i = 0;i < 3;i++)
    {
        printf("Entre com o nome do aluno");
        gets(aluno[i].nome);
        printf("Entre com a matrícula do aluno");
        gets(aluno[i].matricula);
        printf("Entre com a nota da primeira prova do aluno");
        scanf("%f",&aluno[i].nota1);
        soma1 += *aluno[i].nota1;
        if( *aluno[i].nota1 > maiornota)
            maiornota=*aluno[i].nota1;
        printf("Entre com a nota da segunda prova do aluno");
        scanf("%f",&aluno[i].nota2);
        soma2+= *aluno[i].nota2;
        printf("Entre com a nota da terceira prova do aluno");
        scanf("%f",&aluno[i].nota3);
        soma3+= *aluno[i].nota3;
        printf("Entre com a falta do aluno");
        scanf("%f",&aluno[i].falta);
        
    }
    media1=soma1/3;
    media2=soma2/3;
    media3=soma3/3;
    if(media1 > media2 && media2 < media3)
       printf("Maior media é:",media1);
    if(media2 > media3 && media3 < media1)
        printf("Maior media é:",media2);
    if(media3 > media1 && media1 < media2)
        printf("Maior media é:",media3);
    if(media1 < media2 && media2 > media3)
        printf("Menor media é:",media1);
    if(media2 < media3 && media3 > media1)
        printf("Menor media é:",media2);
    if(media3 < media1 && media1 > media2)
        printf("Menor media é:",media3);
    
    for( int i = 0 ; i < 3; i++)
    {    if((media1 > (float)60) && ((aluno[i].falta) <= ((float)72*(float)75)/100))
        printf("Aluno %c aprovado.",aluno[i].nome);
    }

system("pause");
return 0;
}