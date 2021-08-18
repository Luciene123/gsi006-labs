#include <stdlib.h>
#include <stdio.h>
#include<math.h>
void alteraConteudo(float *x, float i)
{   
    float *y;
    y=x;
    if(*x<0)    
        *x= *x-((*x*i)/100);
    else 
        *x= *x+(*x*(i)/100);
}
int main(){
    float *y,x,*y1;
    y1=y;
    printf("Digite o valor de y: ");
    scanf("%f",y);
    printf("Digite o percentual de alteração x: ");
    scanf("%f",&x);
    alteraConteudo(y1,x);
    printf("O valor alterado eh:%f",*y);
    return 0;
}
/*
=> Faça uma função que altere um valor de um número real em x%. 
Se o valor de x for negativo ele deve ser decrementado, se for
positivo aumente. O valor da variável deve ser passada por parâmetro,
ou seja, o retorno deve  ser void.


-------------------------------------------------------------------------------
Exemplo de Saída 1:

Digite o valor de y: 100
Digite o percentual de alteracao: 0.10 // 0.10 equivale a 10%
O valor alterado eh: 110
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
Exemplo de Saída 2:

Digite o valor de y: -100
Digite o percentual de alteração: .10
O valor alterado eh: -110
-------------------------------------------------------------------------------
*/