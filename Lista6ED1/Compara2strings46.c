
#include<stdio.h>
#include<stdlib.h>
/*Ex(4)O programa que lê o nome de duas pessoas e informa se os nomes  são iguais, mostra o nome lido. 
Utilizar getchar() para entrada dos dados. O nome pode ter no máximo 50 caracteres. 
A string eh tranformado e mostrado em letras maiúsculas( Para evitar diferênciação entre miúsculas e minúsculas
entre os valores dos caracteres minúsculos e maiúsculos na tabela ASCII).*/
int main()
{
    char nome[50]; //guarda o nome char c; 
    char nome1[50];
    int i,p=0,p1=0; // p guarda a posicão  atual no vetor 
    char c, c1;
    printf("<< Compara nomes>>\n");
    printf("Digite um nome:\n");       
    c = getchar(); // busca uma letra no buffer 
    while (c != '\n') 
    {  // fica no loop enquanto nao encontrar um ENTER        
        nome[p] = c; 
        p++;        
        c = getchar();    
    } 
    printf("Digite outro nome:\n");       
    c1 = getchar(); // busca uma letra no buffer 
    while (c1 != '\n') 
    {  // fica no loop enquanto nao encontrar um ENTER        
        nome1[p1] = c1; 
        p1++;        
        c1 = getchar();    
    } 
    /* transforma as minúsculas em maiúsculas da string a */ 
    while (nome[p] != 0 )
    /* verifica se nome[p] é minúscula */
        if (nome[p] >= 'a' && nome[p] <= 'z')
        /* transforma em maiúscula */
             nome[p] = nome[p] - 'a' + 'A';  
    while (nome1[p1] != 0 )
    /* verifica se nome1[p1] é minúscula */
        if (nome1[p1] >= 'a' && nome1[p1] <= 'z')
        /* transforma em maiúscula */
             nome1[p1] = nome1[p1] - 'a' + 'A';      

    for (i = 0; nome[i] != '\0' && nome1[i] != '\0'; i++){
        //assim que uma letra for diferente
        if (nome[i] != nome1[i])
        { 
            printf("As duas strings são diferentes");
        }
    }
    //Se as duas acabaram, são iguais.   
    printf("As duas strings são iguais");
}