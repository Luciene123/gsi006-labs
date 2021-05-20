#include <stdlib.h>
#include <stdio.h>
#include "Stack1.h"
#include "Aluno.h"
int main()
{
    Stack *li = stack_create();
    struct aluno a;     
    Stach_push_front(li,a);
    Stach_print(li);
    printf("\n\n\n\n");    
    Stach_free(li);   
    system("pause");
    return 0;
}
