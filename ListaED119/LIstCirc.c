#include <stdio.h>
#include <stdlib.h>
#include "TADListCir.h"

typedef struct clistnode CList_node;
struct circlist{
    CList_node*end;
    };

    struct clistnode
    {
        struct aluno dado;
        CList_node*prox;
    };

CircList* list_create()
{
    CircList *li;
    li->end =malloc(sizeof(CircList);
    if (li != NULL)
    {
            li->end->prox = li->end;
    }  
    return li;
}
//auxiliar de busca e exclusão sequencial
int find_aux(CircList *li,int mat,struct aluno *al)
{
    CList_node *c;
    al = li->end;
    li->end = li->end->prox;
    li->end->dado.matricula = mat;
    while (li->end->dado.matricula<ch)
    { 
        al= c->prox;
    }
    if (al!= li->end && c->prox->dado.matricula == ch) 
    return al;

    return NULL;
}
//insere ordenado com auxiliar de busca 
void list_insert(CircList *li,struct aluno *al)
{
    CList_node *c;
    c = buscaSeqExc(li,c->prox->dado.matricula, &c);
    if (c!= NULL) return -1;
    c = malloc(sizeof(c));
    c->prox= al;
    c->prox = li->end->prox;
    li->end->prox = c;
    return 0;
}
//exclui com auxiliar de busca 
void list_find_mat(CircList *li, int mat,struct aluno *al) 
{
    CList_node *c;    
    c= buscaSeqExc(li,mat,&c);
    if (c == NULL) 
        return -1;
    li->end->prox = c->prox;
    free(c);
    return 0;
}
//Imprime todos os valores dos nós da lista
void list_print(CircList *li)
{
CList_node *c= li->end->prox;
printf("Lista: \" ");
while (c->prox != li->end) {
printf(" %i, %i,%i,%i\n",c->dado.matricula,
                                c->dado.n1,
                                c->dado.n2,
                                c->dado.n3);
c = c->prox;
}
printf("\"\n");
}

int list_size(CircList *li)
{
    CList_node *c= li->end->prox;
    int size = 0;
    while (c!= li->end) 
    {
        size++; 
        c= c->prox;
    }
    return size;
}
//Remove todos os nós da lista e depois a deleta
void list_free(CircList *li)
{
    CList_node *c= li->end->prox;
    CList_node *aux;
    while (c != li->end)
    {    
        aux = c->prox;
        free(aux);
    }
    li->end->prox = li->end;
}

