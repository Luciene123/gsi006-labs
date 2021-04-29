/*Ex(7)O especificador de tipo %s pode ser usado para mostrar strings (vetores de caracteres).
  O programa abaixo mostra um texto na tela com a palavra “Brasil”.   
  Modifique o programa abaixo para exibir o mesmo vetor usando %c e %s. 
   A saída deve ser como a indicada mais abaixo (obrigatório uma saída com %c e outra com %s).*/
   #include<stdio.h>
   #include<stdlib.h> 
   int main(void) 
   {  
        char nome[10] = "Brasil";  
        nome[0] = 'B';  
        nome[1] = 'r';  
        nome[2] = 'a'; 
        nome[3] = 's';  
        nome[4] = 'i';  
        nome[5] = 'l';  
        int i,tamanho = 6;  
        for (i=0; i < tamanho; i++)
        {    
           printf("%c",nome[i]);
          
        } 
        printf("\n"); 
        printf("%s",nome); 
        system("pause"); 
        return 0;
   }