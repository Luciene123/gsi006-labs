#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int verQuadPerf(int n)
{   
        //Um número será quadrado perfeito quando respeitar a regra de formação: n^2= a. 
        //Nessa regra, n é qualquer número inteiro positivo e a é o número quadrado perfeito.
        int y;
        y = sqrt(n);        
        if(pow(y,2) == n)
          return 0; 
        else
          return 1 ; 
} 

int main(){
    int n;
    printf("Digite o valor de n: ");
    scanf("%d",&n);
    if (verQuadPerf(n)==0)
     {
        printf("Eh quadrado perfeito");
    }
    else{
        printf("Nao eh quadrado perfeito");
    }
    return 0;
}

/*
=> Faça uma função para verificar se um número 
é um quadrado perfeito (retorne Verdadeiro caso seja).   

Ex: QuadradoPerfeito(4) retorna verdadeiro; 
    QuadradoPerfeito(10) retorna falso; 

obs: Pode-se retornar os valores 0 (para verdadeiro) e 1 (para falso).

No programa principal, solicite ao usuário o valor de n.

-------------------------------------------------------------------------------
Exemplo de Saída 1:

Digite o valor de n: 4
O numero 4 eh um quadrado perfeito
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
Exemplo de Saída 2:

Digite o valor de n: 10
O numero 10 não eh um quadrado perfeito
-------------------------------------------------------------------------------
*/
