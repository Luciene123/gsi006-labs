/*Prática listas circulares
1) Implemente o TAD de lista circular dinâmica
2) Uma das utilidades das listas circulares dinâmicas é a possibilide de percorrer todos os
elementos por diversas vezes em um loop. Modifique o TAD para incluir uma função que
retornará sempre o próximo elemento. Por exemplo, se a lista não foi percorrida ainda, o
próximo elemento é a cabeça. Depois, ao chamar a função novamente, será devolvido o
segundo elemento, e assim sucessivamente. Fique atento às funções de remoção, pois se
um nó for removido ele não poderá ser mostrado.
3) Elabore um pequeno programa que use a lista circular.*/

#define SUCCESS 0
#define INVALID_NULL_POINTER -1 
#define OUT_OF_MEMORY -2 
#define OUT_OF_RANGE -3 
#define ELEM_NOT_FOUND -4 

struct aluno
{
    int matricula;
    char nome  [30]; 
    float n1,n2,  n3; 
};

typedef struct circlist CircList;

//Cria uma nova lista circular ;
CircList *list_create();

//auxiliar de busca e exclusão sequencial
int find_aux(CircList *li,int mat,struct aluno *al);

//Insere um nó em determinada posicao da listaauxiliar de busca
void list_insert(CircList *l,struct aluno *al);

//Remove os nós que contém determinado valor da lista
void list_find_mat(CircList *li, int mat, struct aluno *al);

//Imprime todos os valores dos nós da lista
void list_print(CircList *l);

//retorna tamanho da lista
int list_size(CircList *li); 

//Remove todos os nós da lista e depois a deleta 
void list_free(CircList *l);




