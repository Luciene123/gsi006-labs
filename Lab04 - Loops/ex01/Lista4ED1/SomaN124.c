#include<stdio.h>
#include<stdlib.h>
//ex(12) Dado um número inteiro positivo n, calcular a soma dos n primeiros números naturais (uilizando comando for) . 
int main()
{
	int n;
	printf("<< Soma de n valores naturais >>\n") ;
	printf("Quantos números deseja somar? \n");
	scanf("%d",&n);
	int i,soma=0;
	for(i = 0; i <=n;i++)
        {
		soma+=i;
         }
	printf("A soma dos N primeiros números naturais é :%d",soma);
	system("pause");
	return 0;
}