#include <stdio.h>
#include <stdlib.h>
int main(){
    //Mostra o funcionamento dos operadores lógicos.O usuário entra com dois valores inteiros,
    //onde 0 implica em FALSO e qualquer outro número implica em VERDADEIRO.
    printf("== Operadores Booleanos ==\n");
    int op, a1,a2 ;    
    printf("Digite o primeiro valor (A):\n");    
    scanf("%f", &a1);
    printf("Digite o segundo valor (B):\n");    
    scanf("%f", &a2);
    printf("Digite 0 para falso e 1 para verdadeiroEntre :");    
    scanf("%f", &op);
    //verdadeiro=1; falso==0
    if(a1==1 && a2==1)
         printf("A and B: \n", 1);
    else
        printf("A and B: \n", 0);      

    if(a1==0 && a2==0)
         printf("A or B: \n", 0);
     else    
         printf("A or B: \n", 1);     
     
    if(a1 != a2)
         printf("A xor B: \n", 1);
      else 
        printf("A xor B: \n", 0);    
    
    if(op==0)
         printf("notA: \n", 1);
    else
        printf("notA: \n", 0);
   
    system("pause");
    return 0 ;
}


 