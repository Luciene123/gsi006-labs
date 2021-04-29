
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
   //Ex(8)Determina as raízes, reais ou complexas, de uma equação de segundo grau.
   double a,b,c,delta,sqrtdelta, raiz1,raiz2;  
   int i;   
   system ("clear"); 
   printf(" Raizes reais e complexas de numeros complexos \n\n");
   //Parte real de um numero complexo
   printf("Forma  de um complexo: a1 + a2*i\n\n");
   //Uma equação do 2o grau só é válida se 'a' for diferente de 0
   printf("Digite o coeficiente a: %i \n");
   scanf("%lf",&a);
   if(a!=0)
    {
        printf("Digite o coeficiente b %i \n");
        scanf("%lf",&b);          
        printf("Digite o coeficiente c %i \n");
        scanf("%lf",&c);               
                  
        //Determinando o valor de delta: delta = b² - 4ac
        //Determinando a raiz quadrada de delta: sqrtdelta = sqrt(delta);
        delta = pow(b,2) - (4*a*c);
        sqrtdelta= sqrt(delta);               
        //Se delta for maior ou igual a zero, as raízes são dadas por:
        if(sqrtdelta>=0)
        { 
            raiz1 = (((-b) + (sqrtdelta)) / (2*a));
            raiz2 = (((-b) - (sqrtdelta)) / (2*a)); 
            printf("Raizes Reais:  raiz1:%lf, raiz2:i%lf do número complexo resultante eh: %lg \n",raiz1,raiz2);
        }
        //Se delta for menor que zero, suas raízes serão complexas e as raízes serão da forma:
         else
        {
                  raiz1 = (((-b) + (-1*(sqrt(-delta))))/(2*a));
                  raiz2 = (((-b) - (-1*(sqrt(-delta)))/(2*a)));
                  printf("Raizes Complexas:raiz1:%lf, raiz2:i%lf do número complexo resultante eh: %lg \n",raiz1,raiz2);
        }
    }
           
}


           


