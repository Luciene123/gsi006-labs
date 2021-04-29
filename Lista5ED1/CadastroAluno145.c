/* 14)o programa que armazene informações sobre os alunos de uma universidade. 
O número máximo de alunos que o sistema pode cadastrar é 10000. Os dados a serem
armazenados são: número de matricula (inteiro); classe social (A, B, C, D ou E); CRA
(real). Ao iniciar o programa, informe quantos usuários serão cadastrados. Depois de
realizado o cadastro, mostra todos os dados lidos. */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Matricula{
    int matr;
    char classeSocial;
    float CRA;};

int main()
{   struct Matricula *a;
    int i,n;    
    printf("<<Cadastro de Alunos>>\n");
    printf("Digite a quantidade decadastro:\n ");
    scanf( "%d", &n);
    if(n > 10000)
        exit(1);
        else
        for(i=0;i<n;i++)
        {
            printf("Digite a matricula:\n ");
            scanf( "%d", &a[i].matr);
            printf("Digite a classe social:\n ");        
            scanf( "%c", &a[i].classeSocial);
            printf("Digite o CRA:\n ");        
            scanf( "%f", &a[i].CRA); 
        }
        //Mostra cadastros aluno
         printf("----------Alunos cadastrados.----------\n ");
        for(i=0;i<n;i++)
        { 
            printf("Matricula:%d\n",a[i].matr);            
            printf("Digite a classe social:\n",a[i].classeSocial);           
            printf("CRA:\n",a[i].CRA);        
        }           
            
 }
 