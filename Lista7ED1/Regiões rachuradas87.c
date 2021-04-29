/*Program a que lê uma matriz M (6, 6) e calcula regiões*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h> 
#include <math.h>
int main()
{
	int i, j, mat[6][6],soma1=0, soma2=0,soma3=0,soma4=0,soma5=0,soma6=0,soma7=0,soma8=0;	
    srand (time(NULL));       
    // cria uma matriz 6x6 e preenche com números aleatórios    
    // inteiros entre 0 e 100 
    for (i = 0; i < 6; i++) 
    {    
        for (j=0; j < 6; j++)
        {                
        //scanf("%d",&mat[i][j]); - AO INVÉS DO SCANF, USE rand()        
         mat[i][j] = (rand()/(int)RAND_MAX)*100;       
        }               
    }     

	for(i=0; i < 6; i++)
    {
		for (j=0; j < 6; j++)
        {			
			// Elementos e soma dos elementos;
			if ((j>i) && !((j<1)&&(i==j))) 
            {
				soma1+=mat[i][j];
                 printf("Figura1:%d/t",mat[i][j]);                	
            }			
			if ((j<=6-i-2)&&!((j==6-i-1)&&(j>=6-i)))            
             {
			    soma2+=mat[i][j];
                printf("Figura2:\n %d/t",mat[i][j]);                
			 }
            if ((j<i) && !((j>i)&&(i==j)&&(j==6-i-1)))            
            {
			    soma3+=mat[i][j];
                printf("Figura3:\n %d/t",mat[i][j]);                
			}
            if((j<=6-i-2)&&!((i==j)&&(j>=6-i)&&(j==6-i-1)))
            {
                soma4+=mat[i][j];
                printf("Figura4:\n %d/t",mat[i][j]);                
            }            
			if((j<i)&& !((j > i)&&(i==j)&&(i==5)&&(j>=4)&(j==6-i-1)))
            {    
                soma5+=mat[i][j];
                printf("Figura:5\n %d/t",mat[i][j]);                
		    }
            if (((j>i)&&(j<1))&&!((j>=6-i)&&(j==6-i-1)&&(i==j)&&(i==5)&&(i==0))) 
            {
                soma6+=mat[i][j];
                printf("Figura6:\n %d/t",mat[i][j]);                        
	        }
             if(((j<i)&& (j > i))&&!((i==j)&&(j==6-i-1)&&(i==5)&&(i==0)&&(j==2)&&(j==3))) 
             {  soma7+=mat[i][j];
                printf("Figura7:\n %d/t",mat[i][j]);
                
             if(((j<i)&&(j > i))&&!((i==j)&&(j==6-i-1)&&(j==5) &&(j==0)&&(i==2)&&(i==3))) 
             {  
                 soma8+=mat[i][j];
                printf("Figura8:\n %d/t",mat[i][j]);
                
             }
   
       }
    } 

    printf("Soma:%d",soma1);	
    printf("Soma:%d",soma2);
	printf("Soma:%d",soma3);
	printf("Soma:%d",soma4);		
	printf("Soma:%d",soma5);
    printf("Soma:%d",soma6);    
	printf("Soma:%d",soma7); 
    printf("Soma:%d",soma8); 
    system("pause");
	return 0;
} 