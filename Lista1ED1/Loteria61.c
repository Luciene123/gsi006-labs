#include <stdio.h>
#include <stdlib.h>
int main(){
    //Ex(6) Calcula e imprime para cada ganhador:R$ 780.000,00 será dividido entre três ganhadores de um concurso:
    // O primeiro ganhador receberá 46%;O segundo receberá 32%; O terceiro receberá o restante;
    printf("<<Loteria >>\n");
    int g1,g2,g3;     
    g1=(780000*46)/100;
    g2=(780000*32)/100;
    g3=(780000*22)/100;
    printf(" Primeiro vencedor R$:%d\n", g1);  
    printf(" Segundo vencedor R$:%d\n", g2);
    printf(" Terceiro vencedor R$:%d\n", g3); 
    system("pause");   
    return 0;
}
