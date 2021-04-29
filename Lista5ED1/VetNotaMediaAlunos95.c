/*(9)(Programa que calcula a média das notas dos alunos de uma turma. Note que
uma turma pode ter no máximo 100 alunos (mostrar uma msg de erro caso o número
escolhido seja maior que 100). Peça para o usuário entrar com o número de alunos e
ao final mostre a nota de todos os alunos.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{

    float Vet[100];
    int i, n = 0;
    float soma = 0;
    float media = 0;
    printf("Entre com o numero de notas de alunos %d:\n");
    scanf("%d",&n);
    if(n > 100)
        {
            printf("Erro,número maximo notas permitido é 100\n");
            exit(1);
        }

    for( i = 0; i < n ; i++ )
        {
            printf("Digite uma nota do aluno%d: ",i+1);
            scanf( "%f", &Vet[i] );
            soma += Vet[i];
        }
    media = soma/n;
    for(i=0;i<n;i++)
        {
            printf("A nota do aluno %d é: %f \n",i,Vet[i]);
        }
    printf("Media das notas digitadas é %f:\n",media );
}

