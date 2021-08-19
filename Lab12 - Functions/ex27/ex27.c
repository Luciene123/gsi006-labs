#include <stdio.h>
typedef struct{
    int x;
    int y;
}Ponto;
void inicializa( int n)
{
    Ponto *p;
    int i;
    p=(int*)calloc(p,n*sizeof(int*));
    if(!p)
        exit(1);
    for(i=0;i<n;i++){
        p[i].x=0;
        p[i].y=0;
        printf("(%d,%d)",p->x,p->y);
        free(p);
    }
}
int main(){
    int n;
    printf("Digite quantos pontos(x,y) você deseja: ");
    scanf("%d",&n);
    inicializa(n);

    return 0;
}

/*
=> Crie uma função para alocar dinamicamente um vetor de n 
pontos e inicialize esses pontos como (0,0).

No programa principal, solicite ao usuário quantos pontos deseja.
-------------------------------------------------------------------------------
Exemplo de Saída:

Digite quantos pontos(x,y) você deseja: 2
(0,0) , (0,0) 
-------------------------------------------------------------------------------
*/