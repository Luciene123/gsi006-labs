/*EX(2)UM nome digitado é mostrado em letras maiúsculas e também em minúsculas.
Usa funções de string.h*/ 
#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
#include <ctype.h>
int main()
{  char str[50]; 
    printf("<< Vetor de Char>>\n");
    printf("Digite um nome:\n");
    gets(str);
    //A função strupr converte uma string para maiúsculas
    printf ("O nome digitado eh:%s\n",strupr(str));
    //A função converte uma string para minúsculas. 
    printf ("O nome digitado eh:%s\n",strlwr(str));     
    system("PAUSE");
    return 0;
 }
 