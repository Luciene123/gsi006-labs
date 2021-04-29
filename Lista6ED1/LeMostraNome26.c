#include<stdio.h>
#include<stdlib.h>
/*Ex(2)O programa que lê o nome de uma pessoa e,  mostra o nome lido. 
Utilizar getchar() para entrada dos dados .
 O nome pode ter no máximo 50 caracteres. Não usar as funções de string.h*/
int main()
{
    char nome[50]; //guarda o nome char c; 
    int i,c, p=0; // p guarda a posicão  atual no vetor 
    printf("<< Vetor de char>>\n");
    printf("Digite um nome:\n");       
    c = getchar(); // busca uma letra no buffer 
    while (c != '\n') 
    {  // fica no loop enquanto nao encontrar um ENTER        
        nome[p] = c; 
        p++;        
        c = getchar();    
    } 
    for (i=0; i < p; i++)
    { 
        printf("O nome digitado é:%c", nome[i]); 
    } 
}              