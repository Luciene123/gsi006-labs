#include <stdio.h>
#include <stdlib.h>
int calculaFatorial(int n)
{   int i, fat=1;
    for(i=1;i<n-1;i++)
    {
        fat = fat *n;
    }
}
void desenhaLinha(int n1){
    char c ='=';
    int i;
    for(i=0;i<n1;i++)
    {
        printf("%c",c);
    }
}

int main(){
    int l, f;
    printf("Digite o tamanho da linha: ");
    scanf("%d", &l);
    printf("Digite o numero que deseja calcular o fatorial: ");
    scanf("%d",&f);
    desenhaLinha(l);
    printf("\nFatorial de %d eh %d",f, calculaFatorial(f));
    desenhaLinha(l);
    return 0;
}

/*
=> Faça uma função para calcular o fatorial de um número. Use essa função
para calcular o fatorial de um número que o usuário digitar.
Colocar todas as funções E/S (entrada e saída) no programa principal.
(use também a função DesenhaLinha – esta pode conter comandos de saída fora do programa principal). 

Ex: Fatorial(5) tem como saída 120 
    DesenhaLinha(10) tem  como saída ==========

No programa principal, solicite ao usuário o tamanho da linha a ser desenhada e o número que se
deseja calcular o fatorial.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho da linha: 10
Digite o numero que deseja calcular o fatorial: 5
==========
O fatorial de 5 eh 120
==========
-------------------------------------------------------------------------------
*/