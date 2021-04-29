#include <stdio.h>
#include <stdlib.h>
#include <time.h>
Ex(5)O algoritmo calcula a soma da diagonal principal de uma matriz 5x5
int main(){

    int matriz[5][5];
    int i, x, j, p;
    int soma=0;   
    //Matriz 5X5 gerada pela função rand()
    srand(time(NULL));
    for(i=0; i<5; i++){
        printf("\n");
            for(j=0; j<5; j++){
                x=5+(rand()%5);
                //Mostra valor da posição(i,j) da matriz
                printf("%d", x);
                //Condição para soma da diagonal               
                if(i==j){
                    //Laço da soma da diagonal
                    for(p=0; p<5; p++){
                        soma+=matriz[i][j];
                    }
                }
            }
    }
    printf("\n");
    printf("Soma da diagonal principal: %d", soma);
    System("pause");
    return 0;
}
