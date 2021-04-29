
//12)Mostra a probabilidade de em umma piscina de bolinhas ocorrer bolas azuis, verdes, amarelas e vermelhas,
//e a maior probabilidade de ocorrer entre elas. Digite a quantidade de bolinhas de cada cor.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,maior=0,id,soma;
    int n1[4],p[4];
    printf("<<Probalidade de ocorrer bolinhas em uma piscina>>\n");
    printf("Digite a quantidade de bolinhas Amarelas:\n ");
    scanf( "%d", &n1[0]);
    printf("Digite a quantidade de bolinhas Azul:\n ");
    scanf( "%d", &n1[1]);
    printf("Digite a quantidade de bolinhas vermelhas:\n ");        
    scanf( "%d", &n1[2]);
    printf("Digite a quantidade de bolinhas verde:\n ");        
    scanf( "%d", &n1[3]);
    //Soma todas as bolinhas
    for(i=0;i<4;i++)
        soma+=n1[i];
     //Calcula as probalidades      
    for(i=0;i<4;i++)
    {    p[i]=n1[i]/soma;
        printf("Probalidade das bolinhas:%d",p[i]);
        if(p[i]<p[i+1])
        {
            maior=p[i+1];
            id=n1[i+1];
        }
        else 
        {    maior=p[i];
            id=n1[i];
         }
    }
     printf("Maior probalidade:%d, tipo de bolinha:%d\n",maior,id);
        
 }