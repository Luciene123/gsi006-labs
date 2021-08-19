#include <stdio.h>
#include <stdlib.h>
//Bibliotecas
typedef struct{
    int x;
    int y;
} Ponto;
 int inc_dir(Ponto *p, char op){ 
    char a; /*sudoeste*/
    char b; /*sudeste*/
    char c;/*nordeste*/
    char d; /*noroeste*/         
    if(op='a')
    {  
        p->y=p->y-1;
        p->x=p->x-1;
    }
    else if(op='b')
    { 
        p->x=p->x+1;
        p->y=p->y-1;
    }
    else if(op='c')
    {
         p->x=p->x-1;
         p->y=p->y+1;         
    }
    else if(op='d')
    {
        p->y=p->y+1;
        p->x=p->x+1;
    }

}
int main(){
    Ponto *p;
    char a,b,c,d,op; 
   
    printf("<< Vetor de pontos alocados dinamicamente >>");    
    printf("Entre com a coordenada x do ponto");
        scanf("%d",p->x);                   
    printf("Entre com a coordenada x do ponto");
            scanf("%d",p->y);
    printf("Digite 'a'sudoeste,'b'para sudeste,'c' para nordeste,'d'para noroeste");  
    gets(op);
    if(op='a'){
        printf("Ponto a sudoeste(%d,%d)",inc_dir(p,'a')); 
        
    }
    else if(op='b'){
        printf("Ponto a sudeste(%d,%d)",inc_dir(p,'b')); 
        
    }
    else if(op='c'){
        printf("Ponto a nordeste(%d,%d)",inc_dir(p,'c')); 
        
    }          
    else if(op='l'){
    
        printf("Ponto a noroeste(%d,%d)",inc_dir(p,'l')); 
        
    }                
    else             
         printf("Dado inválido");      
    
    free(p);    
    return 0;
/*
=> Crie um procedimento para andar na diagonal (sudeste, 
sudoeste, nordeste, noroeste). Use obrigatoriamente as funções do 
exercício anterior.

Exemplo de chamada:
ind_diag(p,"sudeste"); 
ind_diag(p,"sudoeste");

-------------------------------------------------------------------------------
Exemplo de Saída:

(1,3) sudeste => (2,2)
(2,4) sudoeste => (1,3)
-------------------------------------------------------------------------------
*/