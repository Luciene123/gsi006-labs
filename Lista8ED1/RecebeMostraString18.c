/*Ex(1)Utilizando strings,o programa que lê o nome de uma pessoa e, em seguida, mostra o nome lido.
 O nome tem no máximo 50 caracteres. Usa a função gets() para efetuar a leitura.*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
#include <ctype.h> 

 int main()
 {  char str[50]; 
    printf("<< Vetor de Char>>\n");
    printf("Digite um nome:\n");
    gets(str);
    printf ("O nome digitado eh:%s\n",str);
    system("PAUSE");
    return 0;
 }
 