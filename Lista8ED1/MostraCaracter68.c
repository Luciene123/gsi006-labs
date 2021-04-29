//Ex(6)Programa mostra as letras de uma string separadamente, usando laço for caracter parada '\0'
#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
#include <ctype.h> 
 int main()
 {  char str[50]; 
    int i;
    printf("<<Separa letra>>\n");
    printf("Digite um nome:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
            printf("d%a letra do nome:%c\n",i,str[i]);    
    system("PAUSE");
    return 0;
 }
 

