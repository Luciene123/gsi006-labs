#include <stdio.h>
#include <stdlib.h>
int main(){
    //Ex(2)Faz Conversão entre de graus Celsius para Fahrenheit e vice-versa.
    // O usuario escolher a opção de unidade a ser convertida, se não for válida, mostrar uma mensagem de erro. 
    //Em seguida, o usuário digita o valor da temperatura e a unidade de medida a usada. 
    // A converção de uma unidade para outra e feita,a partir da opção e dos dados digitados.
    // O programa retorna o tipo de unidade resultante e o seu valor.
   
    printf("<< Conversor de Temperatura >>\n");
    float F, C; 
    int op;
    printf("Para Celsius->Fahrenheit, digite (1) ou para Fahrenheit->Celsius digite (2)\n");
    scanf(" %d",&op); 
    switch(op)
    {  case 1:      
        {   
            printf("Digite uma temperatura em graus Celsius\n");    
            scanf(" %f", &C);
            F = C*(9.0/5.0)+ 32.0;
             printf("%f graus Celsius correspondem a %f Fahrenheit\n",C,F);
            }
        break;
    
        case 2:    
        {
            printf("Digite uma temperatura em graus Celsius\n");    
            scanf("%f", &F);
             C =(F-32.0)*(5.0/9.0);
             printf("%f graus  Fahrenheit correspondem a Celsius: %f\n",F,C);        
        } 
        break;

        default :
            printf ("Valor invalido!\n");
    }
    
    return 0;
}