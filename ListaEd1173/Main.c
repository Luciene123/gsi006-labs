#include <stdlib.h>
#include <stdio.h>
#include "Stack3.h"

int main()
{
    Stack *li = stack_create();
    char a; 
    int MAX;
    printf("Digite o tamanho da Pilha");
    scanf("%d",&MAX);
    stack_pop(li,a,MAX);    
    Stach_push_front(li,a,MAX);
    Stach_print(li);
    printf("\n\n\n\n");    
    Stach_free(li);   
    system("pause");
    return 0;
}
