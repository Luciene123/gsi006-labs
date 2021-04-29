#define MAX 100
struct aluno{
int matricula;
char nome[30];
float n1,n2,n3;
};
typedef struct aluno Aluno;
typedef struct lista *Lista;
/* A Função Cria Lista exige o tipo da inserção na Lista: 0-> no inicio 1-> no final e 2->ordenada;
tam define qual será o tamanho da lista*/
Lista* cria_lista(int insercao, int tamanho);
void libera_lista(Lista* li);
int consulta_lista_pos(Lista* li, int pos, Aluno *al);
int insere_lista_inicio(Lista li,Aluno *al);
int consulta_lista_mat(Lista li, int *pos, Aluno *al);
int insere_lista_final(Lista li, Aluno *al);
int insere_lista_ordenada(Lista li, Aluno *al);
int remove_lista(Lista* li, int mat);                         
int remove_lista_inicio(Lista* li);
int remove_lista_final(Lista* li);
int tamanho_lista(Lista* li);
int lista_cheia(Lista li);
int lista_vazia(Lista li);
void imprime_lista(Lista li);
int remove_lista_otimizado(Lista* li, int mat);