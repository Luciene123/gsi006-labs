#define SUCCESS 0 
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2 
#define OUT_OF_RANGE -3 
#define ELEM_NOT_FOUND -4
#include "Aluno.h"
typedef struct aluno Aluno;
typedef struct stacK StacK;
//Cria Pilha
StacK *stack_create();
//Destroi Pilha
int stack_free(Stack *li);
//Esvazia Pilha 
int stackElemNull(Stack* li);
//Pilha Empilha
int stack_push(Stack *li, struct Aluno al);
//Pilha Desempilha
int stack_pop(Stack *li,struct Aluno *al);
//Tamanho Pilha
int stack_size(Stack *li);
//Pilha Imprime 
int print_stack(Stack *li);
