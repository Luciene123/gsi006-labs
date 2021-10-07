
#include "List.h"

typedef struct no no;
struct list
{ 
      no *head;
}; 
struct no{
    struct aluno data; 
    no *next;};

List* list_create()
{
    List *li;
    li=(List*)malloc(sizeof(List));
    if(!li)
        return OUT_OF_MEMORY;
    li->head=NULL;    
    return li;
}
int list_free(List *li)
{    
    free(li);
    if(!li) 
        return SUCCESS;
}

// insere o aluno no início da lista 
int list_push_front(List *li, struct aluno al)
{   
    no *new_no;
    if(!li)
     return -1;    
    new_no=(no*)malloc(sizeof(no));
    if(!new_no)
        return -2;
    new_no->data=al;
    if(new_no < new_no->next)
        new_no->next=li->head;
    li->head= new_no;       
        
    return  SUCCESS;
}
// insere o aluno no final da lista 
int list_push_back(List *li, struct aluno al)
{ 
    if(!li)
        return -1;
    no *new_no;
    new_no=(no*)malloc(sizeof(no));
    if(new_no==NULL) return 1;
    if(li->head==NULL)
    {
        li->head = new_no;
    }else
    {
        no *aux;
        aux =li-> head;
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
    
     return 0;
}
// insere o aluno na posição ‘pos’ – essa posição inicia em 1 
int list_insert(List *li, int pos, struct aluno al) 
{
    no *new_no;
    if(!li)
        return -1;
    new_no=li->head;    
    while(new_no->next!=pos)             
        new_no = new_no->next;     
    if(new_no->next > list_size(li)) 
            return ELEM_NOT_FOUND;
    new_no->data=al;
    return 0;
}

//ordem por matricula  na função que insere ordenado
int list_insert_sorted(List *li, struct aluno al)
{
    if(!li)
        return -1;
    no *new_no;
    new_no=malloc(sizeof(no));
    if(new_no==NULL)
        return -2;
    if (li->head== NULL)
        { //
            li->head = new_no;
        }
     else
    {
        if(new_no < new_no->next)
         {
           while(new_no->data.matricula!= al.matricula)
             new_no= new_no->next;
         }
         
    }

    new_no->data=al;    
    return 0;
}
// retorna o tamanho da lista (valores negativos em caso de erro) 
int list_size(List *li) 
{   int i;
    no *new_no;
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
 // retira da lista o aluno de matricula ‘mat’ 
int list_erase_data(List *li, int mat); 
 {   
    no *new_no;
    if(li->head == NULL)
        printf("\nA lista esta vazia");
    else
    {
        new_no =li-> head;
        while(new_no->data.matricula!=mat)
        {
            new_no= new_no->next;

        }
    }
    if(new_no->next==NULL)
            printf("\nA matrícula não encontrada.");

    free(new_no);
    
    return 0;
}

// retira da lista o aluno da posição ‘pos’ (posição inicia em 1) 
int list_erase_pos(List *li, int pos)
{   no *new_no;
    if(li->head == NULL)
        printf("\nA lista esta vazia");
    else
    {
        pos=1;
        new_no =li-> head;
        while(new_no->next!=pos)
        {
            new_no= new_no->next;

        }
    }
    if(new_no->next==NULL)
            printf("\nA matrícula não encontrada.");

    free(new_no);
    
    return 0;
}
// retira da lista o primeiro aluno 
int list_pop_front(List *li); 
{
    no *new_no;
    if(li->head == NULL)
        printf("\nA lista esta vazia");
    else
        new_no =li->head;
            
    free(new_no);    
    return SUCCESS;
}
// retira da lista o último aluno 
int list_pop_back(List *li)
{    
    no *new_no;
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

 int lista_vazia(List *li)
 {
    if(li == NULL)
        return -1;
        return (li->head == NULL);
 }

 // encontrar o aluno pelo número de matrícula 
int list_find_mat(List *li, int nmat, struct aluno *al) 
{   no *new_no;
    int pos=1;
    if(new_no==NULL)
        return -2;     
        if(new_no < new_no->next)
         {
           while(new_no->data.matricula!= nmat)
             new_no= new_no->next;
             
         }      
    return  SUCCESS;
}
// retornar o aluno que está no início da lista 
int list_front(List *li, struct aluno *al) 
{
    no *new_no;    
    new_no=li->head;    
    printf("Matricula:%d\nAluno:%s\nNota1:%f\nNota2:%f\nNota3:%f\n",
                                                new_no->data.matricula,
                                                new_no->data.nome,
                                                new_no->data.n1,
                                                new_no->data.n2,
                                                new_no->data.n3); 
       
   
   
}
// retornar o aluno que está no final da lista 
int list_back(List *li, struct aluno *al)
{ 
    no *new_no; 
    for(int i=1; i< new_no->next==NULL;i++)       
        if(new_no->next==list_size(li) )
        {
             printf ("Matricula:%d\nAluno:%s\nNota1:%f\nNota2:%f\nNota3:%f\n",
                                                new_no->data.matricula,
                                                new_no->data.nome,
                                                new_no->data.n1,
                                                new_no->data.n2,
                                                new_no->data.n3); 
        }   
  
   
}
// dado um número de matrícula, retornar a posição a lista 
int list_get_pos(List *li, int nmat, int *pos) 
 {   
     no *new_no;    
    if(new_no==NULL)
        return -2;     
        if(new_no < new_no->next)
         {
           while(new_no->data.matricula!=nmat)
             new_no= new_no->next;
             pos++;
         }      
    return pos;
}


int list_print(List *li)
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