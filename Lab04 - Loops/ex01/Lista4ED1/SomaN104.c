
#include<stdio.h>
#include<stdlib.h>
//Ex(10) Dado um número inteiro positivo n, calcular a soma dos n primeiros números naturais (uilizando comando while) . 

int main()
{
	int n;
	printf("<< Soma de n valores naturais >>\n") ;
	printf("Quantos números deseja somar? \n");
	scanf("%d",&n);
	int i=0,soma;
	while(i<=n)
        {
		soma+=i;
		i++;
         }
	printf("A soma dos N primeiros números naturais é :%d",soma);
	system("pause");
	return 0;
}