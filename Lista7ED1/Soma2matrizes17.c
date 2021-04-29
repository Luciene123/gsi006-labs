#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h> 
 /*Ex(1)Faça um programa que realiza a soma de matrizes. O usuário deve entrar com duas matrizes 4x4. 
 Mostre o resultado da soma Exemplo de saída:*/
 int main()
  {     
        // cria uma matriz 4x4 e preenche com números aleatórios    
        // inteiros entre 0 e 100 
        int mat1[3][3];
        int mat2[3][3];  
        int i,j;    
        /* initialize random seed:*/ 
        srand (time(NULL)); 
        for (i = 0; i < 3; i++) 
        { 
            for (j = 0; j < 3; j++) 
            {         
                //scanf("%d",&mat[i][j]); - AO INVÉS DO SCANF, USE rand()        
                 mat1[i][j] = (rand()/(int)RAND_MAX)*100;       
                       
            }    
        }
        // cria uma matriz 4x4 e preenche com números aleatórios    
        // inteiros entre 0 e 100 
        for (i = 0; i < 3; i++) 
        { 
            for (j = 0; j < 3; j++) 
            {         
                //scanf("%d",&mat[i][j]); - AO INVÉS DO SCANF, USE rand()        
                 mat2[i][j] = (rand()/(double)RAND_MAX)*100;       
                       
            }    
        }
        for (i = 0; i < 3; i++) 
        { 
            for (j = 0; j < 3; j++) 
            {         
                 //Somando mat1 com mat2 e colocando a soma em mat2      
                 mat2[i][j] += mat1[i][j];
                 // usa o printf para mostrar resultado da soma em mat2       
                 printf("%d\n", mat2[i][j] ); 
                        
            }    
        } 
        system("pause");   
        return 0; 
    } 