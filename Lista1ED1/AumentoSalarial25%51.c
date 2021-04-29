#include <stdio.h>
#include <stdlib.h>
int main(){
    //5) Recebe o salário de um funcionário: calcula e mostrar seu novo salário, acrescido em 25%.
    printf("<< Aumento Salarial>>\n");
    float n,atual;    
    printf(" Digite o valor do salário R$:\n");
    scanf("%f",&n);
    atual= n + ((n*25)/100);
    printf("O valor do salario de: %f depois de corrigido em 25%% fica em: %f",n,atual);
    system("pause");
    return 0;
}





