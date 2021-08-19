#include <stdlib.h>
#include <stdio.h>
#include<math.h>
struct Ponto{
    float x;
    float y;
};
float soma_ponto(struct Ponto p,struct Ponto p1)
{
    float x,y;
    struct Ponto p3;    
    p3.x=p.x + p1.x;
    p3.y=p.y + p1.y;    
}
float imprimePonto(struct Ponto p,struct Ponto p1){
      
    printf("Soma de (%f,%f) e (%f,%f) eh (%f,%F)",p.x,p.y,p1.x,soma_ponto(p,p1));
}

int main(){
    struct Ponto p,p1;
    int x,y;
    printf("Digite o valor de x1: ");
    scanf("%f",&p.x);
    printf("Digite o valor de y1: ");
    scanf("%f",&p.y);
    printf("Digite o valor de x2: ");
    scanf("%f",&p1.x);
    printf("Digite o valor de y2: ");
    scanf("%f",&p1.y);
    soma_ponto(p,p1); 
    imprimePonto(p1,p1);
    return 0;
}

/*
Observação: Lembre-se de utilizar a struct chamada ponto, que 
armazena dois números reais que representam coordenadas cartesianas.

=> Faca uma função que some dois pontos e retorne o resultado 
da soma. Mostre os 3 pontos usando a função imprime_ponto.

Exemplo:
ponto p1, p2, p3;
p3= soma_ponto(p1,p2);

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x1: 1
Digite o valor de y1: 2
Digite o valor de x2: 3
Digite o valor de y2: 4
A soma de (1,2) com (3,4) eh (4,6)
-------------------------------------------------------------------------------
*/