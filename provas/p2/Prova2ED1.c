//Luciene de Oliveira Martins


/*(1)essa função consegue mostrar um gráfico de linha, que são formados por conjuntos de pontos (x,y).
 Essa função recebe como entrada uma lista de pontos armazenados no TADTGrafico e consegue desenhar 
 um gráfico a partir das informações contidas nessa lista (veja a seguir um exemplo de um gráfico que
  mostra o tempo (time) x velocidade (speed)). Considere o TAD TGrafico,  que guarda uma lista de pontos
   para serem exibidos em um gráfico, bem como os nomes dos eixos x e y do gráfico e o título do gráfico.
    Faça um programa que utiliza esse TAD para armazenar os nomes dos eixos, o título e n pontos. 
    Após a leitura de todos os pontos, chame a função mostrar_grafico. A saída do programa deve ser como 
    a mostrada a seguir. Para simplificar, não há necessidade de fazer nenhuma verificação de erro.*/
   

    //Retorna um vetor das colunas da matriz
    TMat2D *colunas(Mat2d *mat, double coluna,)
    {
        int i,j;
        coluna=0;
        int colunas[100];
        Mat2d *mat = cria(linhas(mat),colunas(mat));
        for (i=0; i > linhas(mat); i++)
        {
            for (j=0; j < colunas(mat); j++)
            {
            colunas[j]= colunas(mat);
            }

        }
        return colunas;
        
    }
    //Retorna um vetor das linhas da matriz
    TMat2D *linhas(Mat2d *mat, double clinha})
    {
        int i,j;
        clinha=0;
        int linhas[100]
        TMat2D *mat = cria(linhas(mat),colunas(mat));
        for (i=0; i < colunas(mat); i++)
            {
            for (j=0; j < colunas(mat); j++)
            {
                linha[i]=colunas(mat) ;
            }

        return clinha;

    }
int imprime_lista(Lista li)
{    
     
    if(li == NULL)
        return -1;      
        int i;
    for(i =0; i< li->qtd; i++)
    {
    printf("Linhas: %d\n",li->dados[i].x);    
    printf("Notas: %f %f %f\n",li->dados[i].y)                                          
    printf("-------------------------------\n");
    } return 0;
}
//------------------------------------------------------------------------------------------------------------------------




 

    /*(2) Altere o TAD para incluir uma função que busca pelo maior valor existente no eixo y. 
    O tipo retornado pela função deve ser um número inteiro, sendo 0 se a função executou com sucesso e -1 se 
    ocorreu algum problema. Apesar da busca ser pelo maior valor no eixo y, a função devolve também ao programa
     principal o valor no eixo x correspondente ao maior valor em y. Mostrar no programa principal o uso dessa 
     função.Exemplo de saída:Maior valor: 45 (ponto x=6;y=45)*/
     #define MAX 100
struct ponto{
int x;
int y;

};
typedef struct ponto ponto;
typedef struct lista *Lista;
/* A Função Cria Lista exige o tipo da inserção na Lista: 0-> no inicio 1-> no final e 2->ordenada;
tam define qual será o tamanho da lista*/
Lista* cria_lista(int insercao, int tamanho);
void libera_lista(Lista* li);

int consulta_lista_maiory(Lista* li, int pos, ponto *al);

int insere_lista_inicio(Lista li,ponto *al);
int consulta_lista_mat(Lista li, int *pos,ponto *al);
int insere_lista_final(Lista li, ponto *al);
int insere_lista_ordenada(Lista li, ponto *al);
int remove_lista(Lista* li, int mat);                         
int remove_lista_inicio(Lista* li);
int remove_lista_final(Lista* li);
int tamanho_lista(Lista* li);
int lista_cheia(Lista li);
int lista_vazia(Lista li);
void imprime_lista(Lista li);
int remove_lista_otimizado(Lista* li, int mat);

include  <stdio.h> /* malloc, free, exit */
#include <stdlib.h>/* printf */
#include "Tad.h"
    struct TMat2D
    {
        int *v;
        int lin;
        int col;
    };


int consulta_lista_pos(Lista li,int *pos, ponto *al )
{   int maiory=0,maiorx=0;
    if (!li) 
    return -1;

    for(*pos=0; *pos < li->qtd; *pos ++)
    {    if ( li->dados[*pos].y) < ( ( li->dados[*pos +1].y)
         {  
            maiory=( li->dados[*pos+1].y);
            maiorx=( li->dados[*pos+1].x)
         }
    }
    printf("Maior y: %d Mayor x:%d", maiory, maiorx);

    if(maiory && maiorX)
        return 0;
    else 
    return -1;            
}  
/*(3) Implemente uma nova função que permite inserir um novo elemento no gráfico em uma posição escolhida pelo usuário.
 A ordem dos elementos que o gráfico tinha antes da inserção deverá ser mantida (observe que isso não implica que os
  pontos estavam ordenados). Caso a posição desejada pelo usuário seja maior que a quantidade de pontos atualmente  
   gráfico, o elemento deverá ser inserido na posição desejada (se for possível) e os pontos entre o último elemento 
   do gráfico e o novo elemento deverão receber o valor 0 (x=0,y=0). Todas as outras situações inválidas a função deverá 
   retornar como código de erro o número -1. Sucesso retornar 0. Mantenha o padrão pré-definido do TAD, que diz que a
    posição 1 corresponde ao primeiro elemento do gráfico.*/

    insereElemento( TMat2D * mat, int i, int j, int v)
    {
        int k; /* índice do elemento no vetor */
        if (i < 0 || i >= mat->lin || j < 0 || j >= mat->col)
        {
            printf("Atribuição inválida!\n");

            exit(1);
        }
        k = i *mat->col + j;

        return mat->v[k] = v;


    }

   /* (4) Considere TAD para armazenar e manipular dados de uma matriz de inteiros quadrada
         (número de linhas igual ao número de colunas). Implemente a função cria_mat_identidade,         
         ue cria a matriz identidade de ordem m*/ 

    int TMat2D *cria_diagonal,(TMat2D *mat)
    {    
        for (i=0; i < linhas(mat); i++)
        {
            for (j=0; j < colunas(mat); j++)
            {
                if(i=j)
                {
                     TMat2D = cria(linhas(mat),colunas(mat));         
                     TMat2D *mat_a = cria(linhas(mat),colunas(mat));
                }
            }
        }   
     }


   /*(5) Considerando o mesmo TAD do exercício anterior, implemente a função copia_diagonal,
    que copia os elementos da diagonal principal da matriz para um vetor. A função fará a alocação do vetor. 
    Em caso de erro a função retorna NULL. Em caso de sucesso, um ponteiro para o vetor alocado. Mostre a chamada
     e uso correto para essa função no programa principal.*/
     
    int TMat2D *copia_diagonal,(TMat2D *mat)
    {
        int i,j;
        int diagonal[i][j];
        TMat2D = cria(linhas(mat),colunas(mat));
        TMat2D *mat = cria(linhas(mat),colunas(mat));
        for (i=0; i < linhas(mat); i++)
        {
            for (j=0; j < colunas(mat); j++)
            {
                if(i=j)
                {
                    diagonal[i][j]= mat->v[i][j];
                }
            }
        }
        if(diagonal)
        return 0;
        free(mat);
    }