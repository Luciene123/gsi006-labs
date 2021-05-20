#include <stdio.h>
#include <stdlib.h>
#include "Stack3.h"

struct item {
  char a;
}
struct stack {
   struct item Item;
   int size;
};

Stack *stack_create(){
   Stack *li;
   li = malloc(sizeof(Stack));
   if (!li){
     li->size = 0;
   }
   return li;
};
int stack_free(Stack *li){
   if (li){
    free(li);
   }
}
int stackElemNull(Stack* li)
{
     return (li->size==0);
}

int stack_push(Stack *li, char a,int MAX)
{
  if (!li){
    return INVALID_NULL_POINTER;
  } else {
      if (li->size == MAX)
      {
        return INVALID_NULL_POINTER;
      } else 
      } else {
        li->item[li->size] = a;
        li->size++;
        
      }
  }
}
int stack_pop(Stack *li,char a,int MAX)
{
   if (!li){
    return INVALID_NULL_POINTER;
  } else {
      if (li->size == MAX)
      {
        return INVALID_NULL_POINTER;
      } else 
      {
       *a=li->al[li->size-1];
       li->size--; 
      }
  }

}

int stack_size(Stack *li)
{
  if (!li)
  {
    return -1;
  } else
   {
      return li->size;
    }
}
int print_stack(Stach *li)
{
    int i;
    printf ("Imprime Pilha Estatica: \n");
    for (i =0; i < li->size;i ++)
{
     printf ("%d\n",li->item[i].a,
                  
}
