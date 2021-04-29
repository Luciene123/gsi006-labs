/*19)José possui no banco R$50.000,00 e Carlos R$ 25.000,00. Carlos poupa R$ 3.000,00 por
mês, enquanto que o José poupa R$800,00. Quantos anos levarão para que o Carlos fique
com mais dinheiro que o José? O algoritmo mostrar esse cálculo.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	float saldox; //Saldo_conta_carlos=25000;
 	float saldoy; // Saldo_conta_jose=50000;
	float depositox;  //deposito _mes_ jose=800;
	float depositoy; //deposito_mes_carlos= 3000;
	printf("<< Relações de valores e de  tempos de duas aplicações Bancárias>>"); 

	float compara= (saldox-saldoy)/(depositox-depositoy); 

	printf("O valor das aplicaçõe de carlos ultrapassarão a de josé em %f anos", compara); 
	system("pause");
 	return 0;
}