#define OUT_OF_MEMORY -2 
#define OUT_OF_RANGE -3 
#define ELEM_NOT_FOUND -4

typedef struct stacK StacK;
//Cria Pilha
StacK *stack_create();
//Destroi Pilha
int stack_free(Stack *li);
//Esvazia Pilha 
int stackElemNull(Stack* li);
//Pilha Empilha
int stack_push(Stack *li, char i, int MAX);
//Pilha Desempilha
int stack_pop(Stack *li,char i, int Max);
//Tamanho Pilha
int stack_size(Stack *li);
//Pilha Imprime 
int print_stack(Stack *li);
