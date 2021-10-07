#include <stdio.h>
#include <stdlib.h>
#include "ListDupla.h" 
     
typedef struct DLNode DLNode; 
struct TadListD 
{ 
    DLNode *begin; 
    DLNode *end; 
    int size; 
}; 

struct DLNode 
{                
    struct aluno data;   
    DLNode *next;   
    DLNode *prev;
}; 

List* list_create(){
    List *li;
    li = malloc(sizeof(List));
    if (li != NULL) {
       li->begin = NULL;
       li->end = NULL;
       li->size = 0;
    }
    return li;
};

int list_free(List *li){
   if (li == NULL){
      return INVALID_NULL_POINTER;
   } else {
       DLNode *p;
       p = li->begin;
       while (p != NULL){
            li->begin = p->next;
            free(p);
            p = li->begin;
        }
        free(li);
        return 0;
   }
};

int list_push_front(List *li, struct aluno al){
    if (li == NULL){
        return INVALID_NULL_POINTER;
    } else {

       DLNode *node;
       node = malloc(sizeof(DLNode));
       if (node == NULL){
          return -1;
       } else {
         node->data = al;
         node->prev = NULL;
         node->next = li->begin;
       }

       if (li->begin == NULL){
            li->begin = node;
            li->end = node;
            li->size = li->size + 1;
       } else {
           li->begin->prev = node;
           li->begin = node;
           li->size = li->size + 1;
       }
       return 0;
    }
};

int list_push_back(List *li, struct aluno al){
    if (li == NULL){
        return INVALID_NULL_POINTER;
    } else {
       DLNode *node;
       node = malloc(sizeof(DLNode));
       if (node == NULL){
          return -1;
       } else {
        node->data = al;
        node->next = NULL;
        node->prev = li->end;
        if (li->begin == NULL) {
          li->begin = node;
          li->end = node;
        } else {
          li->end->next = node;
          li->end = node;
        }
        li->size = li->size + 1;
        return 0;
       }
    }
}

int list_size(List *li){
    if (li == NULL) {
        return INVALID_NULL_POINTER;
    } else {
        return li->size;
    }
}


int list_pop_front(List *li)
{
    if (li == NULL){
        return INVALID_NULL_POINTER;
    } else {
        if (li->size==0){
            return -2;
        } else {
          if (li->size == 1){
            free(li->begin);
            li->begin = NULL;
            li->end = NULL;
            li->size = li->size -1;
          } else {
              DLNode *p;
              p = li->begin;
              li->begin = p->next;
              free(p);
              li->begin->prev = NULL;
              li->size = li->size -1;
          }
          return 0;
        }
    }
};



int list_pop_back(List *li)
{
    if (li == NULL){
        return INVALID_NULL_POINTER;
    } else {
        if (li->size==0){
            return -2;
        } else {
          if (li->end==NULL){
            free(li->end);            
            li->size = li->size -1;
        } else {
              DLNode *p;
              p = li->end;
              li->end = p->prev;
              free(p);
              li->end = NULL;
              li->size = li->size -1;
          }
          return 0;
        }
    }   

}

// list_erase
// Entrada:
//    List * => lista
//    int pos => posição do elemento a ser apagado
int list_erase(List *li, int pos){
  if (li == NULL){
        return INVALID_NULL_POINTER;
  } else {
    // teste se lista vazia
    if ((pos <= 0 ) || (pos > li->size)) {
      return OUT_OF_RANGE;
    } else {
      DLNode *p;
      // teste se existe somente um elemento
      if (li->size == 1){
        free(li->begin);
        li->begin = NULL;
        li->end = NULL;
        li->size = 0;
      } else {
        // sabendo que tem mais de um elemento, verifica
        // se é o primeiro ou o último
        if (pos == 1){
          p=li->begin;
          li->begin = li->begin->next;
          li->begin->prev = NULL;
          li->size = li->size - 1;
          free(p);
        } else {
          // se for o último elemento
          if (pos == li->size){
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
            while (i < pos) {
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


// list_erase
// Entrada:
//    List * => lista
//    int pos => posição do elemento a ser apagado
int list_erase_short_version(List *li, int pos){
  if (li == NULL){
        return INVALID_NULL_POINTER;
  } else {
    // teste se lista vazia
    if ((pos <= 0 ) || (pos > li->size)) {
      return OUT_OF_RANGE;
    } else {
      DLNode *p;
      p = li->begin;

      int i = 1;
      while (i < pos) {
        i++;
        p = p->next;
      }

      // p é o primeiro elemento
      if (p->prev == NULL){
        li->begin = p->next;
      }

      // p é o úlitmo elemento
      if (p->next == NULL){
        li->end = p->prev;
      }

      // verificando se p não é o primeiro
      if (p->prev)
        p->prev->next = p->next;

      // verificando se p não é o último
      if (p->next)
        p->next->prev = p->prev;

      free(p);
      li->size = li->size - 1;
    }
  }
}


// list_find_pos
// Entrada:
//    List * => lista
//    int pos => posição do elemento desejado
// Saída:
//    struct aluno* => referência para o aluno
//                     (já alocado na chamada)
//                parâmetro por referência
int list_find_pos(List *li, int pos, struct aluno *al){
if (li == NULL){
     return INVALID_NULL_POINTER;
   } else {
       if (li->size == 0){
          return ELEM_NOT_FOUND;
       } else {
           DLNode *p;
           p = li->begin;

           while (p!= NULL && li->size!= pos){
             p = p->next;
           } //end while

           if (li->size == NULL){
             return ELEM_NOT_FOUND;
           } else {
             *al = p->data;
             return SUCCESS;
          } // endif(p null)
       } //endif(Size)
   }// endif (li null)
}

// list_find_mat
// Entrada:
//    List * => lista
//    int nmat => número de matricula procurado
// Saída:
//    struct aluno* => referência para o aluno nmat
//                     (já alocado na chamada)
//                parâmetro por referência
int list_find_mat(List *li, int nmat, struct aluno *al){
   if (li == NULL){
     return INVALID_NULL_POINTER;
   } else {
       if (li->size == 0){
          return ELEM_NOT_FOUND;
       } else {
           DLNode *p;
           p = li->begin;

           while (p!= NULL && p->data.matricula != nmat){
             p = p->next;
           } //end while

           if (p == NULL){
             return ELEM_NOT_FOUND;
           } else {
             *al = p->data;
             return SUCCESS;
          } // endif(p null)
       } //endif(Size)
   }// endif (li null)
}



// list_front
// Entrada:
//    List * => lista
// Saída:
//    struct aluno* => referência para o primeiro aluno
//                     (já alocado na chamada)
//                parâmetro por referência
int list_front(List *li, struct aluno *al){
}

// list_back
// Entrada:
//    List * => lista
// Saída:
//    struct aluno* => referência para o último aluno
//                     (já alocado na chamada)
//                parâmetro por referência
int list_back(List *li, struct aluno *al){
}

// list_get_pos
// Entrada:
//    List * => lista
//    int nmat => num. matriculo do aluno
//                procurado
// Saída:
//    int *pos => posição do aluno nmat na lista
//                deve estar alocado na chamada
//                parâmetro por referência
int list_get_pos(List *li, int nmat, int *pos){
}



int list_print_forward(List *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    DLNode *p = li->begin;
    while(p != NULL){
        printf("Matricula: %d\n",p->data.matricula);
        printf("Nome: %s\n",p->data.nome);
        printf("Notas: %f %f %f\n",p->data.n1,
                                   p->data.n2,
                                   p->data.n3);
        printf("-------------------------------\n");

        p = p->next;
    }
}


