#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4
#ifndef _tstackh_
#define _tstackh_
#include "aluno.h"

typedef struct TStack TStack;

TStack *stack_create();
int stack_free(TStack *st);
//empilhar
int stack_push(TStack *st, struct aluno al);
//desempilha
int stack_pop(TStack *st);//desempilha
//retorna o aluno que está no topo da pilha
int stack_top(TStack *st, struct aluno *al);
//Pilha vazia
int stack_empty(TStack *st);
//Pilha cheia
int stack_full(TStack *st);
//Iprime pilha
int stack_print(TStack *st);

#endif