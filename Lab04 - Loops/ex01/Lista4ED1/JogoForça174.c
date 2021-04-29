#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*Ex(17)Programa semelhante ao jogo de forca, mas com uma única letra.
O usuário adivinhar deve ser definida no código do programa. O usuário tem 5 chances de acertar a letra.
A execução termina quando o usuário acerta a letra ou quando acabam suas chances.*/
int main()
{
    char certo='q',tentativa;
    int vezes=5;
	printf("<<Forca de uma letra só>>\n");

	do{
		printf("Qual a letra?\n ");
		scanf("%c",&tentativa);
		if(certo==tentativa)
			printf("ACERTOU!\n ");
		else{
			vezes--;
			printf("Errado! Você tem mais %d chances\n",vezes);
		}	
	}while((certo==tentativa) ||(vezes > 0));

	printf("Acabaram suas chances. A letra correta é 'q'"); 
 	system("pause");
   	return 0;
} 