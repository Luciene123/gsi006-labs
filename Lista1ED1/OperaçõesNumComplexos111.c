#include <stdio.h>
#include <stdlib.h>
int main()
 {
   float respartereal,resparteImaginaria, a1,b1,a2,b2; 
   int op;
   printf (" NUMEROS COMPLEXOS \n\n");
   /*Os números complexos são números compostos por uma parte real e uma imaginária.*/
   printf (" NUMEROS COMPLEXOS \n\n");
   printf("Insira o primeiro coeficiente real \n");
      scanf("%lg",&a1);
   printf("Insira o primeiro coeficiente imaginario \n");
      scanf("%lg",&b1);
   printf("Insira o segundo coeficiente real \n");
      scanf("%lg",&a2);     
   printf("Insira o segundo coeficiente imaginario \n");
      scanf("%lg",&b2);   
   system ("clear");
   printf (" Escolha uma operacao:  \n\n");
   printf (" [1] Soma de numeros complexos \n");
   printf (" [2] Subtracao de numeros complexos \n");
   printf (" [3] Multiplicacao de complexo por Escalar \n");      
   scanf("%d",&op);
   switch (op)
   {
        case '1':
         {        //Adição Z1 + Z2 = (a1 + ib1, a2 + ib2)  = (a1 + a2) + i(b1 + b2)
               respartereal=(a1 + a2); 
               printf(" A parte real do número complexo resultante eh: %f \n",respartereal );
               resparteImaginaria=(b1 + b2);
               printf(" A parte imaginaria do número complexo resultante eh: i.%f \n",resparteImaginaria);
               printf("Numero complexo: %f + i.%f\n",respartereal,resparteImaginaria);     
        }
        break;
        case '2':
        {
               //Subtração   Z1 + Z2 = (a1 + ib1, a2 + ib2) = Na forma algébrica, temos: (a1 + ib1) - (a2 + ib2) = (a1 - a2) - i(b1 - b2)
               respartereal=(a1 - a2); 
               printf(" A parte real do número complexo resultante eh: %f \n",respartereal );
               resparteImaginaria=(b1 - b2);
               printf(" A parte imaginaria do número complexo resultante eh: i.%f \n",resparteImaginaria);
               printf("Numero complexo: %f + i.%f\n",respartereal,resparteImaginaria);
                 
               
        }
        break;
        case '3': 
        {
               //Multiplicação de dois numeros complexos. Na forma algébrica, usamos a propriedade distributiva:(a + bi) . (c + di) = (ac – bd) + i (ad + bc)
               respartereal=(a1*b1 - a1*b2); 
               printf(" A parte real do número complexo resultante eh: %f \n",respartereal );
               resparteImaginaria=((a1*b2) + (a2*b1));
               printf(" A parte imaginaria do número complexo resultante eh: i.%f \n",resparteImaginaria);
               printf("Numero complexo: %f + i.%f\n",respartereal,resparteImaginaria);
        }   
        break;      
   
        default:
        {
                printf (" Opcao Invalida, voltando ao menu... \n");    
        }          
    } 
 system ("pause");
 return 0;
}