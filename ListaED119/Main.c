#include <stdio.h>
#include <stdlib.h>
#include "TADListCir.h"
int main()
{
    struct aluno *a;    
    CircList *li;
    int mat;

    //Cria uma lista
    li = list_create();
    
    //busca sequencial
    find_aux(li,mat,a);

    //insere ordenado um aluno único
    list_insert(li,a);

    //exclui um aluno 
    list_find_mat(li,mat,a); 

    //Mostra a quantidade de alunos cadastrados
    list_size(li);

    //Imprime todos alunos da lista
    list_print(li);
    printf("\n\n\n\n");

    //Remove todos os alunos da lista e depois a deleta a lista
    list_free(li);
   
    system("pause");
    return 0;

    
}