/*Ex(10)Dado uma string, imprima se ela for palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade
de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.Ex: ovo, arara, Ana, Bob*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
#include <ctype.h> 
 int main()
 {  char str[50]; 
    int i,j;
    printf("<<Inverte palavra>>\n");
    printf("Digite uma palavra:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
        for(str[j]<'\0';j==0;j--)
            if(str[i]==str[j])
                printf("A palavra digitada é um palindromo:%c\n");
            else 
                printf("A palavra digitada não é um palindromo:%c\n");   
    system("PAUSE");
    return 0;
 }
 