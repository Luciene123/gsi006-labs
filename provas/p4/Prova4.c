
Luciene de Oliveira Martins

1) Qual o motivo de utilizar um vetor de acesso circular na implementação de uma fila estática?
 O acesso circular permite a manipulação dos dados nos dois extremos, em uma estrutura estática,
Servinso assim para aproveitar ao máximo o vetor,eliminado possíveis espaços não ocupados pelos elementos do vetor. 
2) Uma das utilidades das listas circulares dinâmicas é a possibilidade de percorrer todos os elementos por diversas vezes em um loop.
 Modifique o TAD para incluir uma função que retornará sempre o próximo elemento. 
 Por exemplo, se a lista não foi percorrida ainda, o próximo elemento é a cabeça. 
 Depois, ao chamar a função novamente, será devolvido o segundo elemento, e assim sucessivamente.
struct aluno
{
    int matricula;
    char nome  [30]; 
    float n1,n2,  n3; 
};
(a) mostrar como fica a estrutura do TAD
typedef struct circlist CircList;

//Cria uma nova lista circular ;
CircList *list_create();

//Busca sempre o proxímo emento depois de mat
int find_aux(CircList *li,int mat,struct aluno *al);
//Função que usa a função de busca para encontrar uma matrícula determinada e mostrar a próxima matricula 


//Insere um nó em determinada posicao da lista com auxiliar de busca
void list_insert(CircList *l,struct aluno *al);

//Remove os nós que contém determinado valor da lista
void list_find_mat(CircList *li, int mat, struct aluno *al);

//Imprime todos os valores dos nós da lista
void list_print(CircList *l);

//retorna tamanho da lista
int list_size(CircList *li); 

//Remove todos os nós da lista e depois a deleta 
void list_free(CircList *l);

(b) mostrar a função que retorna o próximo elemento depois de mat se não encontrar retorna NULL
int find_aux(CircList *li,int mat,struct aluno *al)
{
    CList_node *c;
    al = li->end;
    li->end = li->end->prox;
    li->end->dado.matricula = mat;
    while (li->end->dado.matricula<mat)
    { 
        al= c->prox;
    }
    if (al!= li->end && c->prox->dado.matricula ==mat) 
    return c->prox;

    return NULL;
}

*Não é necessário mostrar as outras funções afetadas pela modificação proposta

3)Crie uma função que faz a junção de duas strings. A função deve ter como entrada as duas strings e a string resultante da junção.
 A alocação de espaço necessário para a string concatenada deve ser feita dentro da função. A função deve retornar um valor inteiro:
 (0 - zero) se a junção ocorreu de forma corretam; (-1) em caso de erro. Mostre o uso da função no programa principal. Não é permitido
 criar novos tipos de dados para a solução do exercício (ou seja, sem uso de structs).
Digite a string 1: Oi,
Digite a string 2: Como vai?
Texto concatenado: Oi, Como vai?
void contatena(char str1[40], char str2[25];)
{
    //Junta sobrenome no final de nome e mostra o resultado    
    printf("<< Vetor de Char>>\n");
    printf("Digite um nome:\n");
    gets(str1);
    printf("Digite o sobrenome2:\n");
    gets(str1);
    int i,j;
    
    for (i = 0; str1[i] != '\0'; ++i)
      {  for (j = 0; str2[j]!= '\0'; ++j)
         {
            str1[i] = sstr2[j];
         }
      }
    s1[i] = '\0';
}
    printf ("Nomes + sobrenome :%s\n",concatena (str1, str2));
   
 }

4)Mostre como uma pilha pode ser usada para resolver a expressão matemática abaixo

Cada número e operador é lido em um passo. Para cada passo, mostre o estado da pilha 
Exemplo de como mostrar a pilha 
2 2 <topo  // o número 2 está no topo
2 3 4 <topo // o número 4 está no topo

Expressão: 

(((4 -1 6) -) (* 5)) +)
push(4);
push(16);
push(pop() - pop());

