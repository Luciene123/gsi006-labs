#define SUCCESS 0 
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2 
#define OUT_OF_RANGE -3 
#define ELEM_NOT_FOUND -4
#define NULL -5 
struct aluno
{
    int matricula;
    char nome[30];float n1,n2,n3;
};

typedef struct list List; 

List* list_create(); 
int list_free(List *li); 
// insere o aluno no início da lista 
int list_push_front(List *li, struct aluno al); 
// insere o aluno no final da lista 
int list_push_back(List *li, struct aluno al); 
// insere o aluno na posição ‘pos’ – essa posição inicia em 1 
int list_insert(List *li, int pos, struct aluno al); 
//ordem por matricula  na função que insere ordenado
int list_insert_sorted(List *li, struct aluno al);  
// retorna o tamanho da lista (valores negativos em caso de erro) 
int list_size(List *li); 
// retira da lista o primeiro aluno 
int list_pop_front(List *li); 
// retira da lista o último aluno 
int list_pop_back(List *li); 
// retira da lista o aluno de matricula ‘mat’ 
int list_erase_data(List *li, int mat); 
// retira da lista o aluno da posição ‘pos’ (posição inicia em 1) 
int list_erase_pos(List *li, int pos); 
// encontrar o aluno pela posição na lista (posição inicia em 1) 
int list_find_pos(List *li, int pos, struct aluno *al); 
// encontrar o aluno pelo número de matrícula 
int list_find_mat(List *li, int nmat, struct aluno *al); 
// retornar o aluno que está no início da lista 
int list_front(List *li, struct aluno *al); 
// retornar o aluno que está no final da lista 
int list_back(List *li, struct aluno *al); 
// dado um número de matrícula, retornar a posição a lista 
int list_get_pos(List *li, int nmat, int *pos); 
// imprime a lista (única função que permite printf!) 
int list_print(List *li);

