#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h> 
 /*Ex(3)Faça um programa para multiplicar uma matriz 3x4 por uma 4x5. O usuário deve entrar com 0s dados. 
 Mostre o resultado da soma Exemplo de saída:*/
 int main()
  {     
        // cria uma matriz 3x4 e preenche com números aleatórios    
        // inteiros entre 0 e 100 
        int mat1[3][4];
        int mat2[4][5];  
        int i,j;           
        srand (time(NULL));       
        // cria uma matriz 4x5 e preenche com números aleatórios    
        // inteiros entre 0 e 100 
        for (i = 0; i < 4; i++) 
        { 
            for (j = 0; j < 5; j++) 
            {         
                //scanf("%d",&mat[i][j]); - AO INVÉS DO SCANF, USE rand()        
                 mat2[i][j] = (rand()/(int)RAND_MAX)*100;       
                       
            }    
        }
        for (i = 0; i < 4; i++) 
        { 
            for (j = 0; j < 5; j++) 
            {         
                //Multiplicando mat1 com mat2 e colocando resultado em mat2       
                 mat2[i][j] *= mat1[i][j];      
                 printf("%d\n", mat2[i][j] ); 
                  // use o printf só para conferir       
            }    
        } 
        system("pause");   
        return 0; 
    } 