#define SUCCESS 0 
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2 
#define OUT_OF_RANGE -3 
#define ELEM_NOT_FOUND -4
#define NULL -5 
#include "Aluno.h"

typedef struct stack Stack;

Stack *stack_create();
void stack_free(Stack *st);
int stack_push(Stack *st, struct aluno al);
int stack_pop(Stack *st);
int stack_top(Stack *st, struct aluno *al);
int stack_empty(Stack *st);
int stack_size(Stack *st);
int stach_print(Stack *li);
