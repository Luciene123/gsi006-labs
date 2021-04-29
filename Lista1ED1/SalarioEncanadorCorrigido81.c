#include <stdio.h>
#include <stdlib.h>
int main(){
    //Ex(8)Refaz o programa anterior,corrigindo o salário liquido do encanador.calcula o ISS sobre o salario bruto, 
    //descontando o valor do ISS do salario bruto, no calculo do IR.
    float n,salB,salL, IR, ISS;    
    printf(" Digite os dias trabalhados R$:\n");
    scanf("%f",&n);
    salB=n*30;   
    ISS=(salB*4)/100;
    IR=((salB-ISS)*8)/100;
    salL= salB-(ISS+IR);
    printf("Salario bruto de %f dias trabalhados R$: %f\n",n,salB); 
    printf("Desconto de 4%% do ISS: R$:- %f",ISS);
    printf("Desconto do ISS de 8%%, sobre:(salario bruto R$: %f - IR R$: %f)  R$:- %f",salB, IR);
     printf("Salario liquido em R$: %f\n",salL); 
    system("pause");
    return 0;
}

