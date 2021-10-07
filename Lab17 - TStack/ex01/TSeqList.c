// .c
#include <stdio.h>
#include "TLinkedList.h"
#include <stdlib.h>

typedef struct list_node list_node;

struct list_node
{
    struct aluno data;
    list_node *next;
};

struct TLinkedList
{
    list_node *head;
};

TLinkedList *list_create()
{
    TLinkedList *list;
    list = malloc(sizeof(TLinkedList));
    if (list != NULL)
    {
        list->head = NULL;
    }
    return list;
}
int list_free(TLinkedList *list)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *aux;
        aux = list->head;

        while (aux != NULL)
        {
            list->head = aux->next;
            // list->head = list->head->next;  (outra opção)
            free(aux);
            aux = list->head;
        }
        // segunda forma
        // while (list->head != NULL)
        // {
        //     aux = list->head;
        //     list->head = list->head->next;
        //     free(aux);
        // }

        free(list);
        return SUCCESS;
    }
int list_push_back(TLinkedList *list, struct aluno al)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *node;
        node = malloc(sizeof(list_node));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = al;
        node->next = NULL;

        if (list->head == NULL)
        {
            list->head = node;
        }
        else
        {
            list_node *aux;
            aux = list->head;
            while (aux->next != NULL)
            {
                aux = aux->next;
            }
            aux->next = node;
        }
        return SUCCESS;
    }
}



    // retira da lista o último aluno 
int list_pop_back(TLinkedList  *li)
{    
    list_node *node;
    if(li->head == NULL)
        printf("\nA lista esta vazia");
    else
    {
        node = li->head;
        while(new_no->next!= NULL)
        {
            new_no=new_no->next;
        }
    }

    free(new_no->next);
    
    return SUCCESS;
}
 

int list_empty(TLinked *List){
     if (list == NULL)
    
        return INVALID_NULL_POINTER;
    
    else if(list->read==NUUL)
        return SUCCESS
}

int list_full(TLinked *list){
     if (list == NULL)    
        return INVALID_NULL_POINTER;
    
    else if(list->read==NUUL && list->nodo->next > list_size(list))
         return SUCCESS
}

int list_print(TLinkedList *list)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *aux;
        aux = list->head;
        printf("\nImprimindo a lista\n");
        while (aux != NULL)
        {
            printf("\n------------------\n");
            printf("Matricula: %d\n", aux->data.matricula);
            printf("Nome: %s\n", aux->data.nome);
            printf("Notas: %f; %f; %f;\n", aux->data.n1, aux->data.n2, aux->data.n3);

            aux = aux->next;
        }
        printf("\nFim da lista \n");
        return SUCCESS;
    }
}