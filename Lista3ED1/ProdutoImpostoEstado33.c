#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Ex(3)Uma empresa vende o mesmo produto para quatro diferentes estados. 
    //Cada estado possui uma taxa diferente de imposto sobre o produto (1-MG 7%; 2-SP 12%; 3-RJ 15%; 4-MS 8%).
    //O usuário escolhe o código do estado, de destino do produto. Se o código digitado não for válido, mostrar uma mensagem de erro.
    // O usuario, em seguida, digita o valor do produto.   
    //O programa retorna o preço final do produto acrescido do imposto do estado em que ele será vendido.
    printf("<<  Valor do Produto com imposto >>\n");
    float MG,SP,RJ,MS,imposto1,imposto2,imposto3,imposto4;   
    int codigo;    
    printf(" Digite codigo do estado, para MG (1), par SP (2), para RJ (3), para MS (4)\n");
    scanf("%d",&codigo);
    switch(codigo)
    {  case 1:      
        {   
            printf("Digite o valor do produto\n");    
            scanf(" %f", &MG);
            imposto1= (MG*7)/100;
            MG+=imposto1;
            printf("%Valor final do produto: R$%2F.Valor dos impostos: R$%2F \n",MG,imposto1);
            }
        break;
    
        case 2:    
        {
            printf("Digite o valor do produto\n");    
            scanf(" %f", &SP);
            imposto2= (SP*12)/100;
            SP+=imposto2;
            printf("Valor final: R$%2F. Valor dos impostos: R$%2F\n",SP,imposto2);  
        } 
        break;

        case 3:    
        {
            printf("Digite o valor do produto\n");    
            scanf(" %f", &RJ);
            imposto3= (RJ*15)/100;
            RJ+=imposto3;
            printf("Valor final do produto:R$%2F.Valor dos impostos: R$: %2F\n",RJ,imposto3);  
        } 
        break;
        case 4:    
        {
            printf("Digite o valor do produto\n");    
            scanf(" %f", &MS);
            imposto4= (MS*8)/100;
            MS+=imposto4;
            printf("Valor final do produto:R$%2F.Valor dos impostos:R$%2F\n",MS,imposto4);  
        } 
        break;


        default :
            printf ("Valor invalido!\n");
    }
    
    return 0;
}
