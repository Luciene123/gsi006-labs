


#include <stdio.h>
#include <stdlib.h>
void desenhaLinha(int n){
    char c ='=';
    int i;
    for(i=0;i<n;i++)
    {
        printf("%c",c);
    }
}
int main(){
    int ni,n,i;
    printf("Digite a quantidade de linhas a serem impressas: ");
    scanf("%d",&ni);
    for(i=0;i<ni;i++)
    {
       desenhaLinha(n); 
    }
    

    return 0;
}

/*
=> Faça um procedimento chamado DesenhaLinha. Ele deve desenhar 
uma linha na tela usando vários caracteres "=" (Ex: ========). 
No programa principal execute várias chamadas a esse procedimento (use um loop).

Ex: DesenhaLinha(3) tem como saída:
    ========
    ========
    ======== 

No programa principal, solicite ao usuário quantas vezes a linha deverá ser desenhada.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite a quantidade de linhas a serem impressas: 3
========
========
========
-------------------------------------------------------------------------------
*/