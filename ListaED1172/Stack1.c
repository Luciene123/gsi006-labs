#include <stdio.h>
#include <stdlib.h>
#include "Stack1.h"

typedef struct no no;
struct stach
{ 
      no *head;
}; 
struct no{
    struct aluno data; 
    no *next;};
//Cria a stach
Stack *stack_create(){
  Stack *li;
li=(Stach*)malloc(sizeof(Stach));
    if(!li)
        return OUT_OF_MEMORY;
    li->head=NULL;    
    return li;
};
//Destroi a stach
void stack_free(Stack *li){
   if (li != NULL){
    free(li);
   }
}
// insere o aluno no final da stach 
int stack_push(Stack *li, struct aluno al){
   if(!li)
        return -1;
    no *new_no;
    new_no=(no*)malloc(sizeof(no));
    if(!new_no) 
    return INVALID_NULL_POINTER;
    if(li->head)
    {
        li->head = new_no;
    }else
    {
        no *aux;
        aux =li->head;
        if(new_no < new_no->next)
        {
                while(aux->next!= NULL)
                {
                    aux = aux->next;
                }
                new_no->data=al;
                new_no->next=aux;
                
        }
       free(aux);
    }
// retira da stach o último aluno 
int stack_pop(Stack *li)
{
     if(li->head == NULL)
        printf("\nA lista esta vazia");
    else
    {
        new_no = li->head;
        while(new_no->next!= NULL)
        {
            new_no=new_no->next;
        }
    }

    free(new_no->next);
    
    return SUCCESS;

}
//Retorna o numero de matricula do último elemento da pilha
int stack_top(Stack *li, struct aluno *al)
{  
     
  if (!li)
  {
    return INVALID_NULL_POINTER;
  } 
  if (new_no->next==NULL)
  {          
        al.matricula=data.matricula;
        return al.matricula;
  }
}

//verifica se a stach está vazia
int stack_empty(Stack *li){
  
  if (li == NULL){
    return -1;
  } else {
      if (stack_size(li))
        return 1;
      else
        return 0;
  }
  if(li == NULL)
        return -1;
        return (li->head == NULL);
}
int stack_size(Stack *li)
{
  int i;  
  if(li->head == NULL)
        return -1;
  else
  {
    while(new_no->next!=NULL)
    {
      new_no = new_no->next;
      i++;
    }
  }
     return i;
}
//mostra a pilha
int stach_print(Stack *li)
{
   no *new_no;
   while(new_no->next!= NULL)
     {
        printf ("Matricula:%d\nAluno:%s\nNota1:%f\nNota2:%f\nNota3:%f\n",
                                                new_no->data.matricula,
                                                new_no->data.nome,
                                                new_no->data.n1,
                                                new_no->data.n2,
                                                new_no->data.n3);
     }

}
