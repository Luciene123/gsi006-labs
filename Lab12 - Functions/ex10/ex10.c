#include <stdlib.h>
#include <stdio.h>
#include<math.h>
struct Ponto{
    float x;
    float y;
};
void imprimePonto(struct Ponto p)
{
    float x,y;
    print("O ponto digitado eh:(%f,%F)",p.x,p.y);
}

int main(){
    struct Ponto p;
    printf("Digite o valor de x: ");
    scanf("%f",&p.x);
    printf("Digite o valor de y: ");
    scanf("%f",&p.x);
    imprimePonto(p);
    return 0;
}

/*
Observação: Para os próximos exercícios, crie uma struct chamada ponto, que 
armazena dois números reais que representam coordenadas cartesianas.

=> Faça uma função chamada imprime_ponto, que recebe uma 
struct do tipo ponto e mostra na tela o ponto no seguinte formato 
(ponto.x, ponto.y)

Exemplo de chamada da função:
imprime_ponto(p)

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x: 10
Digite o valor de y: 5
O ponto digitado eh: (10,5)
-------------------------------------------------------------------------------
*/