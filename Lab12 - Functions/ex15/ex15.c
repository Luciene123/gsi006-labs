#include <stdio.h>
#include <stdlib.h>
//Bibliotecas
typedef struct{
    int x;
    int y;
} Ponto;
int inc_dir(Ponto *p, char op){ 
    char o,s,n,l,op;     
    if(op='n')
    {  
        p->y=p->y+1;
    }
    else if(op='s')
    { 
        p->y=p->y-1;
    }
    else if(op='o')
    {
         p->x=p->x-1;         
    }
    else if(op='l')
    {
         p->x=p->x+1;
    }

}
int main(){
    Ponto *p;
    char o,s,n,l,op; 
    printf("<< Vetor de pontos alocados dinamicamente >>");    
    printf("Entre com a coordenada x do ponto");
        scanf("%d",p->x);                   
    printf("Entre com a coordenada x do ponto");
            scanf("%d",p->y);
    printf("Digite 'n'norte,'s'para sul,'o' para oeste,'l'para leste");  
    gets(op);
    if(op='n'){
        printf("Norte(%d,%d)",inc_dir(p,'n')); 
        
    }
    else if(op='s'){
        printf("Sul(%d,%d)",inc_dir(p,'s')); 
        
    }
    else if(op='o'){
        printf("Oeste(%d,%d)",inc_dir(p,'0')); 
        
    }          
    else if(op='l'){
    
        printf("Oeste(%d,%d)",inc_dir(p,'l')); 
        
    }                
    else             
         printf("Dado inválido");       
    
    free(p);    
    return 0;
}

/*
=> Faça um procedimento chamado inc_dir, que faz o ponto 
andar uma unidade para leste, oeste, norte, sul (passar como 
referência e retorno void)

Exemplo de chamada:
inc_dir(p,'l'); // anda uma unidade para o leste (incrementa x)
inc_dir(p,'o'); // anda uma unidade para o oeste (decrementa x)

-------------------------------------------------------------------------------
Exemplo de Saída:

(1,3) norte => (1,4)
(2,4) leste => (3,4)
-------------------------------------------------------------------------------
*/