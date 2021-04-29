
/*Programa recebe o nome e sobrenome de uma pessoa (máximo 40 caracteres), 
copia o nome para um vetor e o sobrenome para outro. Mostra os dois vetores copiados, juntos.*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
#include <ctype.h>
int main()
{   char str1[40];
    char str2[25];        
    printf("<< Vetor de Char>>\n");
    printf("Digite um nome:\n");
    gets(str1);
    printf("Digite o sobrenome2:\n");
    gets(str1);
    //Junta sobrenome no final de nome e mostra o resultado       
    printf ("Nomes + sobrenome :%s\n",strcat (str1, str2));
    system("PAUSE");
    return 0;
 }










