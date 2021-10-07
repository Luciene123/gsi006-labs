#ifndef _tseqlisth_
#define _tseqlisth_

#include "aluno.h"

#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

typedef struct TLinkedList TLinkedList;

TLinkedList *list_create();
int list_free(TLinkedList *list);
// insere o aluno no final da lista 
int list_push_back(TLinkedList *list, struct aluno al); 
// retira da lista o último aluno 
int list_pop_back(TLinkedList *li);
// retornar o aluno que está no final da lista 
int list_back(List *li, struct aluno *al);
//Lista vazia
int list_empty(TLinked *List)
//Lista cheia
int list_full(TLinked *List)
//imprime lista
int list_print(TLinkedList *list);

#endif
