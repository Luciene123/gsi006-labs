#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int main() {
    //Ex(5)Conversor de número binário de 4 bits, para decimal (inteiro). 
    //Digitar do bit mais significativo para os menos.
    // Mostra na resposta, o número binário e o número decimal.
    printf(" == Conversor de números binários ==");
    int bit1, resto1, decimal1 = 0;
    int bit2, resto2,decimal2 = 0;
    int bit3, resto3,decimal3 = 0;
    int bit4, resto4, decimal4 = 0;    
    
    //Dite os Dígitos do número binario(4 bits) da esquerda para a direita

    printf("Digite o  1o bit:");    
    scanf("%i", &bit1);
    resto1 = bit1 - (( bit1 / 10)*10);		
	bit1 =  bit1 / 10;
	decimal1 += resto1 * pow(2,0);

    printf("Digite o  2o bit:");    
    scanf("%i", &bit2);
    resto2 = bit1 - (( bit2 / 10)*10);		
	bit2 =  bit2 / 10;
	decimal2 =decimal1 + (resto2 * pow(2,1));

    printf("Digite o  3o bit:");    
    scanf("%i", &bit3);
    resto3 = bit3 - (( bit3 / 10)*10);		
	bit3 =  bit3 / 10;
	decimal3 = decimal2 + (resto3 * pow(2,2));

    printf("Digite o  4o bit:");    
    scanf("%i", &bit4);
    resto4 = bit4 - (( bit4 / 10)*10);		
	bit4 =  bit4 / 10;
	decimal4 = decimal3 +(resto4 * pow(2,3));    
    
    printf("Decimal convertido: %d; dos Bits: %i%i%i%i\n",decimal4,bit1,bit2,bit3,bit4 );    
    system("pause");
    return 0;	
	
}


