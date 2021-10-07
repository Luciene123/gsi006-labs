#include <stdio.h>
#include "TStack.h"

int main(){
    struct aluno a;
    TStack *st;
    //empilha
    stack_push(st, a);
    //desempilha
    stack_pop(st);
    //retorna o aluno que está no topo da pilha
    stack_top(st, a);
    //Pilha vazia
    stack_empty(st);
    //Pilha cheia
    stack_full(st);
    //Iprime pilha
     stack_print(st)
    return 0;
}
