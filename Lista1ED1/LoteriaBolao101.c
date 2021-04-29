#include <stdio.h>
#include <stdlib.h>
int main(){
    //Ex(10)Jogo de loteria tipo bolão,lê o valor do prêmio,lê quanto cada apostador investiu.     
    //Mostra quanto cada um ganharia.O prêmio deve ser repartido, proporcionalmente, ao valor pago na aposta. 
    //
    printf("<<Loteria >>\n");
    float g1,g2,g3, premio;  
    printf("Contribuicão do primeiro jogador R$:%d\n", g1); 
    scanf("%f", &g1); 
    printf("Contribuicão do segundo jogador R$:%d\n", g2); 
    scanf("%f", &g2); 
    printf("Contribuicão do terceiro jogador R$:%d\n", g1); 
    scanf("%f", &g3);   
    printf("Informe o valor do prêmio: R$:%d\n"); 
    scanf("%f", &premio);   
    g1=(premio*(g1*10)/100);
    g2=(premio*(g2*10)/100);
    g3=(premio*(g3*10)/100);
    printf("Valor premio Primeiro vencedor R$:%d\n", g1);  
    printf("Valor premio Segundo vencedor R$:%d\n", g2);
    printf("Valor premio Terceiro vencedor R$:%d\n", g3); 
    system("pause");   
    return 0;
}

