#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
/*Ex(7)O algoritmo onde é dada uma matriz 3x3,calcula a soma de cada linha e a soma de cada coluna. 
Mostra a matriz e o resultado das somas.*/
//Função que define condição de simetria
int simetrica(int mat1[3][3],3)
{
    int i = 1, j, sim = TRUE; 
    while (sim && i < 3)
    {
        j = 0;
        while (sim && j < 3)
        {
            sim = mat1[i][j] == mat1[j][i];
               j = j + 1;
        }
        i = i + 1;
    }
       return sim;        
}
int main()
{     
     // cria uma matriz 3x3 de números inteiros       
    float mat1[3][3];
    int i,j;           
    for (int i = 0; i < 3; i++) {
        for (int j = 0;j < 3; j++)
        {
            printf("\nDigite o %d valor para a %d linha: ",i + 1,j + 1);
            scanf("%f", &mat1[i][i]); 
            if (simetrica(mat, 3)) 
                printf("Sim, eh simetrica\n");
            else printf("Não, não eh simetrica\n");    
        }
    }        
    system("pause");
    return 0;      
   }