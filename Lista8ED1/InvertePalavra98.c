//9)Receba uma palavra e imprima de trás-para-frente
#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
#include <ctype.h> 
 int main()
 {  char str[50]; 
    int i;
    printf("<<Inverte palavra>>\n");
    printf("Digite uma palavra:\n");
    gets(str);
    for(str[i]<'\0';i==0;i--)
            printf("Palavra invertida:%c\n",str[i]);    
    system("PAUSE");
    return 0;
 }
 