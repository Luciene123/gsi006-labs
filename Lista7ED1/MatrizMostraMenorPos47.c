
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h> 
//Ex(4)O algoritmo para ler uma matriz 5x8 e mostrar o menor valor e a sua posição(linha, coluna) 
int main()
{     
        // cria uma matriz 4x4 e preenche com números aleatórios    
        // inteiros entre 0 e 100 
        int mat1[5][8];
        int menor=0,i,j;    
        /* initialize random seed:*/ 
        srand (time(NULL)); 
        for (i = 0; i < 3; i++) 
        { 
            for (j = 0; j < 4; j++) 
            {         
                //scanf("%d",&mat[i][j]); - AO INVÉS DO SCANF, USE rand()        
                 mat1[i][j] = (rand()/(int)RAND_MAX)*100;  
                if(mat1[i][j] < mat1[i+1][j+1])
                {    menor=mat1[i][j];
                    
                }      
            }    
        }
        printf("Maior valor da posição;%c da matriz 5x8:%d",&mat1[i][j],mat1[i][j]);
        system("pause");
        return 0; 
} 