#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    //Ex(9)Le as coordenadas x e y de pontos no R2 e calcule sua distância da origem (0,0), 
    //usando as funções pow() e sqrt() de math.h, para calcular,as raizes e distância, respectivamente.
    printf("<< Calculo da distancia entre dois pontos n>>\n");
    float Xa,Xb, Ya, Yb, distancia;     
    printf("Digite Xa:\n");
    scanf("%f", &Xa);
    printf("Digite Xb: \n");    
    scanf("%f", &Xb);
    printf("Digite Ya:\n"); 
    scanf("%f", &Ya);
    printf("Digite Yb:\n");      
    scanf("%f", &Yb);
    distancia = sqrt( pow(Xb-Xa, 2) + pow(Yb-Ya, 2) ); 
    printf("O valor de %f ao quadrado é %f",distancia);
    system("pause");
    return 0;
}
   