#include <stdio.h>
void trocaConteudo(int a,int b)
{
    float aux;
    aux=a;
    a=b;
    b=aux;
}

int main(){
    int A,B;
    printf("Digite o número A: ");
    scanf("%f",&A);
    printf("Digite o número B: ");
    scanf("%f",&B);
    trocaConteudo(A,B);
    printf("O número a:%f",A);
    printf("O número B:%f",B);
    return 0;
}

/*
=> Faça um procedimento “Troque”, que recebe duas variáveis reais A e B
e troca o valor delas (i.e., A recebe o valor de B e B recebe o valor de A).
Mostre no programa principal o resultado da troca. 


No programa principal, solicite ao usuário o número A e o número B.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o número A: 2
Digite o número B: 5
O número A eh: 5
O número B eh: 2
-------------------------------------------------------------------------------
*/