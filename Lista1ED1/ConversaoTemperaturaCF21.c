#include <stdio.h>
#include <stdlib.h>
/*Ex2:Recebe uma temperatura em graus Celsius e a converte em graus Fahrenheit.
Segundo: F = C ∗ (9.0/5.0)+ 32.0, com F sendo as temperaturas: F, Fahrenheit e C,  Celsius;*/
int main(){
    printf("<<Converte graus Celsius em graus Fahrenheit>>\n");
    float F, C;    
    printf("Digite uma temperatura em graus Celsius\n");    
    scanf("%f", &C);
     F = C*(9.0/5.0)+ 32.0;
     printf("%f graus Celsius correspondem a %f Fahrenheit\n",C,F);
    return 0;
}
