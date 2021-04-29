/*3)Programa em que o usuário digita dois nomes, e retorna os dois nomes são iguais. 
Use strcmp de string.h*/ 
#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
#include <ctype.h>
#define True 0
int main()
{   char str1[50];
    char str2[50];
    int r;     
    printf("<< Vetor de Char>>\n");
    printf("Digite um nome1:\n");
    gets(str1);
    printf("Digite um nome2:\n");
    gets(str1);
    //Compara duas strings e retorna 0 se iguais, ou não zero, se forem diferentes   
    r = strcmp(str1,str2);
    if(r==True)   
        printf ("Os nomes digitado são iguais:%s\n");
    else 
        printf ("Os nomes digitados são diferentes:%s\n");
    system("PAUSE");
    return 0;
 }
 