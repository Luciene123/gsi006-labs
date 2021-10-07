#include <stdio.h>
#include <stdlib.h>
#include "TadMatriz.h"
struct matriz
{
    int  nrows;// número de linhas
    int ncolumns; // número de colunas
    double *data; // ponteiro para os dados da matriz
};

TMat2D *mat2D_create(int nrows, int ncolumns){
    TMat2D *mat;
    mat = malloc(sizeof(TMat2D));
    if (mat != NULL){
        mat->data = malloc(nrows*ncolumns*sizeof(double));
        if (mat->data != NULL){
            mat->ncolumns = ncolumns;
            mat->nrows = nrows;
        } else {
            free(mat);
            return NULL;
        }
    }
    return mat;
}

int mat2D_free(TMat2D *mat)
{
    free(mat->data);
    free(mat);
}
int mat2D_set_value(TMat2D *mat, int i, int j, double val);
{
    int k; /* índice do elemento no vetor */
    if(i < 0 ||i >= mat->nrows || j < 0 ||j >= mat->col)
    {
        printf("Acesso inválido!\n");
        exit(1);
    }
    k = i*mat->col + j;
    mat->v[k] = v;
    k = i * mat->col + j; /*armazenamento por linha*/
    return mat->data[k];
}

void atribui_set_value (Matriz* mat, int i, int j)
{
    int k; /* índice do elemento no vetor */
    if(i<0 || i>=mat->nrows || j<0 || j>=mat->ncolumns)
    {
        printf("Atribuição inválida!\n");
        exit(1);
    }

    /* initialize random seed: */
    srand (time(NULL));
    i*mat->ncolumns + j=(rand()/(double)RAND_MAX)*100;
    k = i*mat->ncolumns + j;
    mat->dados[k] = dados;
    }
int mat2D_get_value(TMat2D *mat, int i, int j, double *val)
}
 int k; /* índice do elemento no vetor */
    if(i < 0 ||i >= mat->nrows || j < 0 ||j >= mat->col)
    {
        printf("Acesso inválido!\n");
        exit(1);
    }
    i * mat->col + j= *k;
    return mat->data[k];
}

Criar um TAD para manipular matrizes de double. Crie um programa que utiliza todas as funções
do TAD. A alocação interna da matriz deverá ser feita na forma de um vetor (array)
unidimensional. Por exemplo, para armazenar uma matriz de tamanho 3x4, deve-se usar um array
de tamanho 12.
Operações:
• Criar/destruir o TAD
• Escrever elemento i,j
• Acessar elemento i,j
• Preencher com números aleatórios entre um valor mínimo e máximo
• Somar duas matrizes
• Multiplicar duas matrizes
• Multiplicar uma matriz por um valor escalar
• Calcular o Traço da matriz
• Retornar um vetor com a soma das linhas
• Retornar um vetor com a soma das colunas
• Retornar o número de linhas da matriz
• Retornar o número de colunas da matriz
Observações:
• Em caso de sucesso, a operação deverá retornar 0 para indicar o sucesso. -1 em caso de
erro ou algum outro código que você definir.
• Não colocar comandos de entrada/saída na TAD. Toda mensagem (de sucesso ou erro)
deverá ser apresentada no programa principal. Exceção: É permitido ter a função para
imprimir toda a matriz dentro do TA

int linhas(TMat2D* mat)
{
    retur mat->lin;
}
int colunas(TMat2D *mat)
{
    return mat->col;
}
