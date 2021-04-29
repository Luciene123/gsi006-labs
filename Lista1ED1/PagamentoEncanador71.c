
#include <stdio.h>
#include <stdlib.h>
int main(){
    //Ex(7)Calcula salario de um encanador: solicitando número de dias trabalhados e multiplicando por R$ 30,00, por dia .
   // Imprime o valor bruto,imposto de renda,ISS e a quantia líquida:descontados 8% para imposto de renda e 4% de ISS.
    printf("<<Pagamento encanador>>\n");
    float n,salB,salL, IR, ISS;    
    printf(" Digite os dias trabalhados R$:\n");
    scanf("%f",&n);
    salB=n*30;
    IR=(n*8)/100;
    ISS=(n*4)/100;
    salL= n-(IR+ISS);
    printf("Salario bruto de %f dias trabalhados R$: %f\n",n,salB); 
    printf("Desconto de 8%% do IR: R$:- %f",IR);
    printf("Desconto de  4%% do ISS R$:- %f",salL);
     printf("Salario liquido em R$: %f\n",salL); 
    system("pause");
    return 0;
}

