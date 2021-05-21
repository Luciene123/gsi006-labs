//Ex1-a
#define NUUl -3
int list_erase_zeros(List *li){
  if (!li){
        return -1;
  } else {
    // teste se lista vazia
    if ((li->size==0)) {
      return -2;
    } else {
      DLNode *p;
      // teste se existe somente um elemento
      if (li->size == 1 && (p->data.n1==0) && (p->data.n2==0) &&(p->data.n3==0) ){
        free(li->begin);
        li->begin = NULL;
        li->end = NULL;
        li->size = 0;
      } else {
        // sabendo que tem mais de um elemento, verifica
        // se é o primeiro ou o último
        if (li->size== 1 && (p->data.n1==0) && (p->data.n2==0) &&(p->data.n3==0)){
          p=li->begin;
          li->begin = li->begin->next;
          li->begin->prev = NULL;
          li->size = li->size - 1;
          free(p);
        } else {
          // se for o último elemento
          if ((li->size==li->end) && (p->data.n1==0) && (p->data.n2==0) &&(p->data.n3==0)){
            p = li->end;
            li->end = li->end->prev;
            li->end->next = NULL;
            li->size = li->size - 1;
            free(p);
          } else {
            // o elemento está no 'miolo' da lista
            int i = 1;
            p=li->begin;
            // buscando o ponteiro para o elemento
            while ((i < li->size)&& (p->data.n1==0) && (p->data.n2==0) &&(p->data.n3==0)) {
              i++;
              p = p->next;
            }
            p->prev->next = p->next;
            p->next->prev = p->prev;
            free(p);
            li->size = li->size -1;
          }
        }
      }
    }
  }
}
//Ex1-b
int list_splice(List *dest, List *source, int pos);
{
if (li == NULL){
     return INVALID_NULL_POINTER;
   } else {
       if (li->size == 0){
          return ELEM_NOT_FOUND;
       } else {
           DLNode *p 
           Dlnode *p1;
           p = li->begin;

           while (p!= NULL && li->size!= pos){
             p = p->next;
           } //end while

           if (li->size == NULL)
             return ELEM_NOT_FOUND;
           else{
                while(p!= NULL && p1 <=li->size) 
                 p->data=p1->data1;}
                return SUCCESS;
          } // endif(p null)
       } //endif(Size)
   }// endif (li null)
   free(li->p);
   free(p);
}
//Ex2-b
//mostra a pilha reversa
int stach_print(Stack *li)
{
   no *new_no;
   for(int i=li->size;i<=li->head;i--)   
     {
        printf ("Matricula:%d\nAluno:%s\nNota1:%f\nNota2:%f\nNota3:%f\n",
                                                new_no->data.matricula,
                                                new_no->data.nome,
                                                new_no->data.n1,
                                                new_no->data.n2,
                                                new_no->data.n3);
     }

}