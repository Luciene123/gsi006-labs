#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   //Ex(7)Le o comprimento dos três lados de um triângulo (A,B,C), digitados pelo usuário.
    //Caso um número negativo seja digitado, mostrar uma mensagem de erro    
    // Determinar o tipo de triângulo,com base nos seguintes casos:
    //(i)Se algum dos lados for maior que a soma dos outros dois, nenhum triângulo é formado
    //(ii)Se A2 = B2 + C2 é formando um triângulo retângulo
    //(iii)Se A2 > B2 + C2 é formando um triangulo obtusângulo
    //(iv)Se A2 < B2 + C2 é formando um triangulo acutângulo
    
    printf("<< Tipo de triangulo>>");
    float A,B,C;

    printf("Digite o lado A:\n"); 
    scanf("%f", &A);
    
    if(A < 0) 
    {  
        printf("Numero negativo:\n ");
        exit(1);
    }  

    printf("Digite o lado B:\n ");
    scanf("%f", &B); 
    if(B<0) 
     { 
         printf("Numero negativo:\n ");
         exit(1);
     }        

    printf("Digite o lado C:\n ");
    scanf("%f", &C);
    if(B<0) 
     { 
         printf("Numero negativo:\n ");
         exit(1);
     }        
    if((A>(B+C))||(B>(A+C))||(C>(B+A)))
    {    printf("Nenhum triângulo é formado");
         exit(1);
    }
    if(pow(A,2) == (pow(B,2) + pow(C,2)))
     
        printf(" Os lados %f, %f, %f formam um Triangulo retangulo:\n",A,B,C);
     
    if(pow(A,2) > (pow(B,2) + pow(C,2)))
     
        printf(" Os lados %f, %f, %f formam um Triangulo obtusangulo:\n",A,B,C);
       
    
    if(pow(A,2) < (pow(B,2) + pow(C,2)))
    
        printf(" Os lados %f, %f, %f formam um Triangulo acutângulo:\n",A,B,C);
    
    
    system("pause");    
    return 0;
}