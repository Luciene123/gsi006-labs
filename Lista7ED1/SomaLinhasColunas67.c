#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
/*Ex(6)O algoritmo ond é dada uma matriz 3x3,calcula a soma de cada linha e a soma de cada coluna. 
Mostra a matriz e o resultado das somas.*/
int main()
{     
     // cria uma matriz 3x3 de float       
    float mat1[3][3];           
    float soma = 0;
    float somaLinha[3];
    float somaColuna[3];
    memset(somaLinha, 0, sizeof(somaLinha));
    memset(somaColuna, 0, sizeof(somaColuna));            
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            printf("\nDigite o %d valor para a %d linha: ", coluna + 1, linha + 1);
            scanf("%f", &mat1[linha][coluna]);                  
            somaLinha[linha]+=mat1[linha][coluna];
            somaColuna[coluna]+=mat1[linha][coluna];
        }
    }
    printf("\n");
    //Mostra Matriz 3X3
    for (int linha = 0; linha < 3; linha++) 
    {
        for (int coluna = 0; coluna < 3; coluna++) 
            printf("%5.2f ",mat1[linha][coluna]);
            printf("\n");
        }
    //Mostra a soma de cada linha
    for (int linha = 0; linha < 3; linha++)
        printf("\nA soma da linha %d eh %5.2f", linha, somaLinha[linha]);            
    //Mostra a soma de cada coluna    
    for (int coluna = 0; coluna < 3; coluna++)
        printf("\nA soma da coluna %d eh %5.2f", coluna, somaColuna[coluna]);      
    system("pause");
    return 0; 
} 