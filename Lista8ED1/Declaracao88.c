#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
#include <ctype.h>
int main()
{   char str1[100];
    char str2[85];
    char str3[70];
    char str4[55];
    char str5[40];
    char str6[25];
    char str7[15];
    char str[2]={','};         
    printf("                 D  E  C  L  A  R  A  Ç  Ã  O                  \n");
    printf("Digite seu  nome:\n");
    gets(str1);
    printf("Digite seu CPF:\n");
    gets(str2);    
    printf("Digite seu RG:\n");
    gets(str3);
    printf("Digite seu endereço:\n");    
    gets(str4);
    printf("Digite sua cidade :\n");
    gets(str5);    
    printf("Digite seu estado:\n");
    gets(str6);
    printf("Digite seu CEP:\n");    
    gets(str7);
    //Junta  todas as strings e mostra o resultado  
    strcat (str1, str2);
    strcat (str1,str);
    strcat (str1, str3);
    strcat (str1,str);
    strcat (str1, str4);
    strcat (str1,str);
    strcat (str1, str5);
    strcat (str1,str);
    strcat (str1, str6);
    strcat (str1,str);
    strcat (str1, str7);     
    printf ("%s",str1);
    printf ("venho por meio desta declarar que vou estudar para a prova.\n");
    system("PAUSE");
    return 0;
 }