
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ListaSequencial.h"
//Definição do tipolista  
struct lista{     
    int qtd,size, insercao,tamanho;
    struct aluno *dados;     
    char ArqLista[MAX];
};
   Lista *criaLista(int insercao, int tamanho)
{
    Lista aux;
    struct aluno *vetAux;

    if (tamanho < 1) 
        return -1;

    aux = (struct lista*) malloc(sizeof(struct lista));
    if (!aux) 
       return -1;
    vetAux = (struct aluno*)malloc(sizeof(struct aluno*)*tamanho);
    if (!vetAux)
    {
        free(aux);
        return -1;
    }
    aux->dados = vetAux;
    aux->qtd = 0;
    aux->size = tamanho;
    aux->insercao = insercao;
    return (aux);
} 

void libera_lista(Lista* li)
{      
    free((*li)->dados);
    free(*li);
}

int insere_lista_final(Lista li , Aluno *al)
{     
     if(li == NULL)          
        return -1;      
     if(li ->qtd == MAX)
     // listacheia          
        return -1;      
    li->dados[li->qtd++] = *al;          
    return 0;
}

int insere_lista_inicio(Lista li, Aluno *al)
{      
    if(li == NULL)
        return -1;      
    if(li ->qtd == MAX) // listacheia          
    return -1;      
    int i;          
    for(i = li->qtd; i >= 0; i--)
    {          
        li->dados[i] = li->dados[i-1];
    }    
    li->dados[0]=*al;      
    li->qtd++;      
    return 0;
}
int consulta_lista_pos(Lista li,int *pos, Aluno *al )
{      
    if (!li) 
    return -1;

    for(*pos=0; *pos < li->qtd; *pos ++)
        if (strcmp(al, li->dados[*pos].nome)==0)
           return 0;
        else
           { *pos = -1;            
            return -1;
            }
} 

int insere_lista_ordenada(Lista li, Aluno *al)
{   
    if(!li)         
        return -1;
    if(li->qtd == MAX)// lista cheia
        return -1;      
    int i = 0;
     for (i=li->qtd; i>0; i--)
    {
        if(strcmp(al->nome, li->dados[i-1].nome)>=0)
           break;

        li->dados[i]=li->dados[i-1];
    } 

    li->dados[i] = *al;      
    li->qtd++;      
    return 0;
}
int remove_lista_inicio (Lista li)
{    int k;  
    for(k=0; k< li->qtd-1; k++)          
        li->dados[k] = li->dados[k+1];      
        li->qtd--;
        k = 0;
}
int remove_lista_final(Lista li  )
{      
    if(li == NULL)
        return -1;
    if(li ->qtd == 0)
        return -1;
    li->qtd--;      
        return 0;
}

int remove_lista(Lista li, int mat  )
{
    if(li == NULL)
        return -1;
    if(li ->qtd == 0)
        return -1;
    int k,i  = 0;      
    while(i < li->qtd && li->dados[i].matricula != mat)
        i++;      
    if(i  == li->qtd)//elemento nao encontrado          
        return 0;      
    for(k =i; i < li->qtd-1; k++)          
        li->dados[k] = li->dados[k+1];      
    li->qtd--;      
        return 0;  
}

int remove_lista_otimizado(Lista li, int mat)
{      
    if(li == NULL)          
        return -1;
    if(li ->qtd == 0)
        return -1;
    int i= 0;
    while(i < li->qtd && li->dados[i].matricula != mat)
              i++;
    if(i  == li->qtd)//elemento nao encontrado          
        return 0;
    li->qtd--;
    li->dados[i] = li->dados[li->qtd];
        return 0;
}

int remove_lista_inicio(Lista li)
{      
    if(!li)
        return -1;  
    if(li->qtd == 0)
        return -1;
    int k = 0;
    for(k =0; k < li->qtd-1; k++)
        li->dados[k] = li->dados[k+1];
    li->qtd--;
        return 0;
}

int tamanho_lista(Lista li)
{
    if(li == NULL)
        return -1;
    else
        return 
        li->qtd;
}
int lista_cheia(Lista li)
{
    if(li == NULL)
        return -1;        
    return (li->qtd == MAX);
}  
int lista_vazia(Lista li)
{
    if(li == NULL)
        return -1;
    return (li->qtd == 0 );
}

int imprime_lista(Lista li)
{    
     
    if(li == NULL)
        return -1;      
        int i;
    for(i =0; i< li->qtd; i++)
    {
    printf("Matricula: %d\n",li->dados[i].matricula);
    printf("Nome: %s\n",        li->dados[i].nome);
    printf("Notas: %f %f %f\n",li->dados[i].n1,  
                                li->dados[i].n2,                          
                                li->dados[i].n3);          
    printf("-------------------------------\n");
    } return 0;
}
