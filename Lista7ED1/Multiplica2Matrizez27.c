#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h> 
 /*Ex(2)O programa multiplica duas matrizes 3x3. O usuário deve entrar com os dados. 
 Mostra o resultado da soma.*/
 int main()
  {     
        // cria  matriz 3x3 e preenche com números aleatórios    
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
        // cria uma matriz 3x3 e preenche com números aleatórios    
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
                //multiplica mat1 e mat2 e coloca resultado em mat2                 
                mat2[i][j] *= mat1[i][j]; 
                 // use o printf para mostrar resultado em mat2       
                printf("%d\n", mat2[i][j] ); 
                      
            }    
        }    
        return 0; 
    } 