//Ex(21)Mostre o valor de 1!, 2!, 3!, até 10!. Utilize somente variáveis inteiras

#include<stdio.h>
#include<stdlib.h>
int main()
{ 
	int fat = 1;
	int i = 1;
	while (i <= 10)
	{
    		fat = fat * i;
    		i++;
		printf ("O fatorial de %d e %d\n",i, fat );
	}

	system("PAUSE");
	return 0;
}
