#include <stdio.h>
#include <stdlib.h>
//lembre-se de incluir as bibliotecas adequadas
typedef struct{
    int x;
    int y;
} Ponto;
 
int main(){
    printf("<< Vetor de pontos alocados dinamicamente >>");
    int n,i,j;        
    Ponto *p,*mesq,*madir,*macima,*mabaixo;
    printf("Quantos pontos deseja digitar: ");
    scanf("%d",&n);
    p = (Ponto*)malloc(n*sizeof(Ponto));
    mesq= (Ponto*)malloc(n*sizeof(Ponto));
    madir= (Ponto*)malloc(n*sizeof(Ponto));
    macima= (Ponto*)malloc(n*sizeof(Ponto));
    mabaixo= (Ponto*)malloc(n*sizeof(Ponto));
    for(i=0;i<n;i++)
    {   for(j=0;j<n;j++)
        {   printf("Entre com a coordenada x do ponto %d:",i+1);
            scanf("%d",&p[i].x);                   
            printf("Entre com a coordenada x do ponto %d:",i+1);
            scanf("%d",&p[j].y);        
        }
    }
    for(i=0;i<n;i++)
    {     for(j=0;j<n;j++)
          {  
              printf("Pontos digitados:(%d,%d),\t",p[i].x,p[j].y); 
          }
    }
    for(i=0;i<n;i++)
    {     for(j=0;j<n;j++)
          {   if((p[i].x && p[j].y) > (p[i+1].x && p[j+1].y))
              {  macima->x, macima->y;
                printf("Pontos mais acima :(%d,%d),\t",macima[i].x,macima[j].y); 
              }
          
          
            else if((p[i].x && p[j].y) < (p[i+1].x && p[j+1].y))
              {  mabaixo->x, mabaixo->y;
                printf("Pontos mais abaixo:(%d,%d),\t",mabaixo[i].x,mabaixo[j].y); 
              }
          
          
          else   if((p[j].y) < (p[j+1].y))
              {  mesq->x, mesq->y;
                printf("Pontos mais esquerda :(%d,%d),\t",mesq[i].x,mesq[j].y); 
              }
          
          
             else((p[j].y) > (p[j+1].y))
              {  madir->x, madir->y;
                printf("Pontos mais a direita:(%d,%d),\t",madir[i].x,madir[j].y); 
              }
          }
    
    free(p);
    free(mesq);
    free(madir); 
    free(macima);
    free(mabaixo);
    return 0;
}

/*
5) Modifique o programa anterior incluindo quatro ponteiros, que apontarão para
os seguintes pontos: mais a esquerda, mais a direita, mais acima, mais abaixo.
Mostre quem são esses pontos utilizando esses ponteiros.

Exemplo de saída:
<< Vetor de pontos alocados dinamicamente >>
Digite a quantidade de pontos a serem armazenados: 5

Digite o valor da coordenada x do ponto 1: 2
Digite o valor da coordenada y do ponto 1: 5

Digite o valor da coordenada x do ponto 2: 4
Digite o valor da coordenada y do ponto 2: 8

Digite o valor da coordenada x do ponto 3: 3
Digite o valor da coordenada y do ponto 3: 4

Digite o valor da coordenada x do ponto 4: 6
Digite o valor da coordenada y do ponto 4: 7

Digite o valor da coordenada x do ponto 5: 23
Digite o valor da coordenada y do ponto 5: 25


Os pontos digitados sao: (2,5); (4,8); (3,4); (6,7); (23,25)

Ponto mais a esquerda: (2,5)
Ponto mais a direita: (23,25)
Ponto mais acima: (23,25)
Ponto mais abaixo: (3,4)

*/