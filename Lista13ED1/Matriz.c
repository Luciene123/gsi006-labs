#include <stdio.h>
#include <stdlib.h>
#include "TadMatriz.h"
int main()
{
    float a,b,c,d,f,fa, escalae, traco;
    int i,j,op,escolha, linha, coluna;
    TadMatriz *M,*M1,*M2;
    float v1[12],v2[12],v3[i];
    do{
        printf("Escolha uma opção");    
        printf("Criar matriz:----------------------------------(1)");
        printf("Inserir elemeto:-------------------------------(2)");
        print("Acessar elemento:-------------------------------(3)");        
        printf("Somar uma Linha:-------------------------------(4)");
        printf("Somar uma coluna:------------------------------(5)");
        print("Somar duas matrizes:----------------------------(6)");
        print("Multiplicar duas matrizes:----------------------(7)");
        print("Multiplicar matrizes por um numero(escalar):----(8)");
        printf("Soma da diagonal principal(Calculo do traço):--(9)");
        printf("Para sair so programa:--------------------------(0)");
        scanf("%d", &op);
    }while(op==1||op==2||op==3||op==4||op==5||op==6||op==7||op==8||op==9||op!=0);
        switch(op)
        {
            case 1: 
            {   printf("---------------------------Criando Matrizes---------------------------");
                    // criação de 3 matrizes com 12 linhas e 12 colunas
                    *M =cria(12,12);
                    *M1=cria(12,12);
                    *M2=cria(12,12);
                    if (!M||M1||M2) 
                    {
                        printf("Memória insuficiente!\n");
                        return -1;
                        
                     } 
            )break;

            case 2:
            {   printf("---------------------------Insere um elemento na Matriz---------------------------");
                    // inserção de valores na matriz
                    printf(" Digite  o valor a ser inserido na Matriz");
                    scanf("%f",&f); 
                    if(insereElemento(*M,i,j,f))                      
                        printf("Elemento inserido com sucesso");
                    else
                        printf("Erro: o Elemento não foi inserido ");

            }break;

            case 3: 
            {       printf("------------------------Acessa um elemento da Matriz---------------------------"); 
                    // Acessa elemento da matriz
                    printf("Digite o valor a ser buscado");
                    scanf("%f", &fa); 
                    if(acessaElemento(*M,i,j,fa))
                        printf("O elemento foi encontrado" );
                    else
                        printf("Erro:O elemento não foi encontrado" );
            } break;  

            case 4:
            {   printf("---------------------------Soma de uma linha da uma matriz----------------------------");
                // Inserção de valores na matriz1
                for(i=0; i < 12; i++)
                {
                    for(j=0; i < 12; j++)
                    {
                        //printf(" Digite os valores a serem inseridos na matriz1 
                        if(insereElemento(*M,i,j,f))
                            printf("Elemento inserido com sucesso"); 
                        else
                            printf("Erro: o Elemento não foi inserido ");                                 
                    }
                    printf("O valor das soma das linhas da matriz eh:%f",somalinhas(*M,linha)); 
            }break; 

            case 5:
            {   printf("---------------------------------Soma de uma coluna de uma da matriz--------------------------");       
                // Inserção de valores na matriz1
                for(i=0; i < 12; i++)
                {
                    for(j=0; i < 12; j++)
                        {
                            //printf(" Digite os valores a serem inseridos na matriz1 
                            if(insereElemento(M,i,j,f))
                                printf("Elemento inserido com sucesso"); 
                            else
                                 printf("Erro: o Elemento não foi inserido ");
                        }
                    }
                printf("O valor das soma das coluna da matriz eh:%f",somacolunas(*M,coluna)); 
            }break;
                
            case 6:
            {   printf("-------------------------- Soma de duas matrizes----------------------------------- ");
                // Inserção de valores na matriz1
                for(i=0; i < 12; i++)
                {
                    for(j=0; i < 12; j++)
                    {
                        //printf(" Digite os valores a serem inseridos na matriz1 
                        if(insereElemento(*M1,i,j,f)
                            printf("Elemento inserido com sucesso");
                        else
                            printf("Erro: o Elemento não foi inserido ");                         
                    }                  
                // Inserção de valores na matriz2
                for(i=0; i < 12; i++)
                {
                    for(J=0; i < 12; j++)
                    {                   
                        //printf(" Digite os valores a serem inseridos na matriz2 
                        if(insereElemento(*M2,i,j,fa))
                            printf("Elemento inserido com sucesso"); 
                        else
                            printf("Erro: o Elemento não foi inserido");                       
                    } 
                }                   
                printf(" A soma das duas matrizes eh:%f",soma2matrizes(*M,*M1,*M2));                     
            }break;

            case 7 :
            {   printf("--------------------------------Produto de duas matrizes-------------------------------------");
                // Inserção de valores na matriz1
                for(i=0; i < 12; i++)
                {
                    for(j=0; i < 12; j++)
                    {
                        //printf(" Digite os valores a serem inseridos na matriz1 
                        if(insereElemento(*M,i,j,f))
                            printf("Elemento inserido com sucesso"); 
                        else
                            printf("Erro: o Elemento não foi inserido ");                        
                    }
                }          
                // Inserção de valores na matriz2
                for(i=0; i < 12; i++)
                {
                    for(J=0; i < 12; j++)
                    {                   
                        //printf(" Digite os valores a serem inseridos na matriz2 
                        if(insereElemento(M2,i,j,fa))
                            printf("Elemento inserido com sucesso"); 
                        else
                            printf("Erro: o Elemento não foi inserido ");                        
                    }
                }
                printf(" O produto das matrizes eh:%f",mult2matrizes(*M,*M1,*M2));
            }break;                
                
            case 8:
            {   printf("--------------------------Produto de um escalar por uma  matriz-------------------------------------");
                    
                    / Inserção de valores na matriz1
                    for(i=0; i < 12; i++)
                    {
                        for(j=0; i < 12; j++)
                        {
                            //printf(" Digite os valores a serem inseridos na matriz1 
                            if(insereElemento(*M,i,j,f))
                                printf("Elemento inserido com sucesso"); 
                            else
                                 printf("Erro: o Elemento não foi inserido ");
                        }
                    }
                    printf("O valor do traço(soma dos valores diagonal) da matriz eh:%f",mult_matriz_escalar(*M,*M1,escalar));
            }break;

           case 9:
            {   printf("--------------------------Traço de uma  matriz(soma da diagonal)-------------------------------------");
                    
                    / Inserção de valores na matriz1
                    for(i=0; i < 12; i++)
                    {
                        for(j=0; i < 12; j++)
                        {
                            //printf("Digite os valores a serem inseridos na matriz");
                            if(insereElemento(*M,i,j,f))
                                printf("Elemento inserido com sucesso"); 
                            else
                                 printf("Erro: o Elemento não foi inserido ");
                        }
                    }
                    printf("O valor do traço(soma dos valores diagonal) da matriz eh:%f",Tracomatrizes(*M,traco));         
            }break;

             default:{printf ("Valor invalido!\n");}    
        }    
 
libera(M);
libera(M1);
libera(M1);
if(M||M1||M2)
    return -1;
system("pause");
return 0;        
}
© 2021 GitHub, Inc.
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
