#include<stdio.h>
#include<stdlib.h>
//10) Dado um número inteiro positivo n, calcular a soma dos n primeiros números naturais (uilizando comando do.. while) . 
int main()
{
    int n;
	printf("<< Soma de n valores naturais >>\n") ;
	printf("Quantos números deseja somar? \n");
	scanf("%d",&n);
	int i,soma=0;
	do {
		soma+=i;
		i++;
         }while(i<=n);

	printf("A soma dos n primeiros números naturais é :%d",soma);
	system("pause");
	return 0;
}