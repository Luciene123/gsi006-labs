#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include "List.h"
int main()
{

    struct aluno a;
    List *li;
    li = list_create();
    int mat ;
    list_push_front(li,a);
    list_print(li);
    printf("\n\n\n\n");
    list_erase_data(li,mat);
    list_free(li);
   
    system("pause");
    return 0;
}