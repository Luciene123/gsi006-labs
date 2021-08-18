#include <stdlib.h>
#include <stdio.h>
#include<math.h>
struct Ponto{
    float x;
    float y;
};
void imprimePonto(struct Ponto p,struct Ponto p1,struct Ponto p2)
{
    float x,y;
    p2.x=p.x + p1.x;
    p2.y=p.y + p1.y;
    print("Soma de (%f,%f) e (%f,%f) eh (%f,%F)",p.x,p.y,p1.x,p1.y,p2.x,p2.y);
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

=> Crie um procedimento idêntico ao exercício anterior, mas que 
agora retorne void e coloque o resultado da soma no terceiro 
argumento da função.


-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x1: 1
Digite o valor de y1: 2
Digite o valor de x2: 3
Digite o valor de y2: 4
A soma de (1,2) com (3,4) eh (4,6)
-------------------------------------------------------------------------------
*/