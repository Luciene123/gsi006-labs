#include<stdio.h>
#include<stdlib.h>
/*Ex(6) O programa recebe o nome e sobrenome de uma pessoa (máximo 40 caracteres),
 copie o nome para um vetor e o sobrenome para outro. Mostre os dois vetores copiados.*/
int main()
{
    char nome[40]; //guarda o nome char c; 
    char nome1[25];
    int i,p=0,p1=0; // p guarda a posicão  atual no vetor 
    char c, c1;
    printf("<< Junta estrings>>\n");
    printf("Digite primero nome:\n");       
    c = getchar(); // busca uma letra no buffer 
    while (c != '\n') 
    {  // fica no loop enquanto nao encontrar um ENTER        
        nome[p] = c; 
        p++;        
        c = getchar();    
    } 
    printf("Digite segundo nome:\n");       
    c1 = getchar(); // busca uma letra no buffer 
    while (c1 != '\n') 
    {  // fica no loop enquanto nao encontrar um ENTER        
        nome1[p1] = c1; 
        p1++;        
        c1 = getchar();    
    } 
    //Copia vetor nome1=sobrenome para vetor nome=nome
    for (i = 0; nome[i] == '\0' && nome1[i] != '\0'; i++)
    {          
        nome[i]= nome1[i];        
    }
    //Mostra vetor nome= nome + sobrenome
    for (i=0; i < p; i++)
    { 
        printf("O nome digitado é:%c", nome[i]); 
    } 
}   
