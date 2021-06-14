/*EX(1)Estrutura chamada telefone, que armazena o DDD e o telefone.
 Cadastra  3 telefones e mostra na tela os telefones cadastrados.*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
#include <ctype.h> 
struct Telefone{
    char DDD[4];
    char telefone[15];
};
int main()
{   struct Telefone fone1, fone2, fone3;
    strcpy(fone1.DDD,"034");
    strcpy(fone1.telefone,"98888-4444");
    strcpy(fone2.DDD,"034");
    strcpy(fone2.telefone,"97777-1414");
    strcpy(fone3.DDD,"034");
    strcpy(fone3.telefone,"96666-1212");
    printf("Telefone1:(%c)/t%c",fone1.DDD,fone1.telefone);
    printf("Telefone2:(%c)/t%c",fone2.DDD,fone2.telefone);
    printf("Telefone3:(%c)/t%c",fone3.DDD,fone3.telefone);
    system("pause");
return 0;
}