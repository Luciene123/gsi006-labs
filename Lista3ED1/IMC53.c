#include <stdio.h>
#include <stdlib.h>
int main(){
    //Ex(5)Calcula IMC de uma pessoa, a partir do peso e altura digitados pelo usuário.
    //Retorna a classificação, determinado pela formula,conforme indices de gordura e recomendação da OMS.
    //OMS(Organização Mundial da Saúde)
    printf("<< IMC\tClassificação >>\n");
    float peso,altura,IMC ;
    printf("Digite a sua altura\n");    
    scanf(" %f", &altura);
    printf("Digite a seu peso\n");    
    scanf(" %f", &peso); 
    IMC=peso/(altura*altura);     
    if(IMC < 18.5)          
        printf("Magreza\n");
    if(IMC >= 18.5 && IMC<= 24.9)                         
        printf("Saúdavel\n"); 
    if(IMC >= 25.0 && IMC<= 29.9)       
        printf("Sobrepeso\n");                     
    if(IMC >= 30.0 && IMC<= 34.9)             
        printf("Obesidade grau 1\n"); 
    if(IMC >= 35.0 && IMC<= 39.9)             
        printf("Obesidade grau 2(SEVERA)\n"); 
    if(IMC >= 40.0)             
         printf("Obesidade grau 3(mORBIDA)\n");       
    system("pause");                                   
    return 0;          
}                    
                    
    

          


