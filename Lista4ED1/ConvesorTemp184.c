/*#x(18)Converte uma velocidade expressa em km/h para m/s e vice versa. 
O menu comntem duas opções de conversão e com uma opção para finalizar o programa. 
O usuário poderá fazer quantas conversões desejar, sendo que o programa só será finalizado quando a
opção de finalizar for escolhida (no caso, caso ele escolha a opção 3.*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{   
	float k_h,m_s, valor;
	int op;
    
	    printf("<< Conversor  de velocidade escalar>>"); 
	    printf("Digite uma opção"); 
	    printf("opção 1 - para converter de km/h para m/s\n"); 
	    printf("opção  2 - para converter de m/s para hm/h\n"); 
	    printf("opção  3 - para sair\n"); 
        do{
            printf("Opcao: ");
            scanf("%d",&op);
        }while((op!=1)&&(op!=2)&&(op!=3));	   
        
	        switch (op)
	        {
          	    case 1:  	
                {   
                    printf("Digite a velocidade em Km/h\n");
	   			    scanf("%d",&valor);
				    m_s=valor / 3.6;
				    printf("O valor em m/s:%f\n", m_s);
                }    
		 	    break;	
	
          	    case 2:
                 {  	    
                     printf("Digite a velocidade  em m/s\n");
	   			    scanf("%d",&valor);
				    k_h=valor *3.6;
				    printf("O valor em km/h:%f\n",k_h); 
                 }
                break;
                case 3 : {printf("Obrigado por utilizar o Conversor.");}
                break;  
            }                      
       
 	system("pause");
   	return 0;
} 