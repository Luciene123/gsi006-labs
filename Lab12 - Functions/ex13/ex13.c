#include <stdlib.h>
#include <stdio.h>
#include<math.h>
struct Ponto{
    float x;
    float y;
};
float calc_area(struct Ponto p,struct Ponto p1)
{
    float x,y;
    float area=(p1.x - p.x)*(p1.y-p.y);
    print("Soma de (%f,%f) e (%f,%f) eh (%f,%F)",p.x,p.y,p1.x,p1.y,p.x + p1.x,p.y+p1.y);
    return area;
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
    imprimePonto(p1,p1);
    return 0;
}

/*
Observação: Lembre-se de utilizar a struct chamada ponto, que 
armazena dois números reais que representam coordenadas cartesianas.

=> Faça uma função que calcule a área do retângulo definido por 
dois pontos. 

Cabeçalho: area = calc_area(p1,p2)


-------------------------------------------------------------------------------
Exemplo de Saída:

<< Calculo de Area >>
Digite a coordenada x do ponto 1: 1
Digite a coordenada y do ponto 1: 4
Digite a coordenada x do ponto 2: 4
Digite a coordenada y do ponto 2: 2

A area do retangulo definido por (1.00, 4.00) e (4.00, 2.00) eh 6.00
-------------------------------------------------------------------------------
*/
