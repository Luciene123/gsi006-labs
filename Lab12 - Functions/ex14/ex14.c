#include <stdlib.h>
#include <stdio.h>
#include<math.h>
struct Ponto{
    float x;
    float y;
};
typedef struct Ponto *p;
void multPontoCons(struct Ponto *p,float c)
{
    float x,y; 
    struct Ponto *p1;     
    p1->x=p->x*c;     
    p1->y=p->x*c ; 
    print("Resultado: (%f,%f) * %f = (%f,%F)",p->x,p->y,p1->y);   
}
void imprimePonto(struct Ponto p)
{
    float x,y;
    
}

int main(){
    struct Ponto *p; 

    float x,y,c;
    printf("Digite o valor de x: ");
    scanf("%f",&p->x);
    printf("Digite o valor de y: ");
    scanf("%f",&p->y);
    printf("Digite a constante: ");
    scanf("%f",&c);
    multPontoCons(p,c);
    return 0;
}
    

    
/*
=> Faça um procedimento que multiplique o valor de um ponto 
por uma constante e altere o valor do ponto. Deve ser usada 
passagem por referência e retorno void.


-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o ponto: 1,2
Digite a constante: 5
Resultado: (1,2) * 5 = (5,10)
-------------------------------------------------------------------------------
*/