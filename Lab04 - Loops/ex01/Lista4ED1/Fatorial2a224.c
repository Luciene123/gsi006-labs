
#include<stdio.h>
#include<stdlib.h>
int main()
{   /*(22)fatorial de 10! a 15!. O fatorial de 10! foi calculado primeiro,
    em seguida foi usado o seu resultado para calcular o fatorial de  15! */
    int fat = 1;
    int fat10,fat15;
	int i = 1;
    //calculando 
	while (i <= 10)
	{
    		fat10= fat * i;
    		i++;
		
	}

	while ((i > 10) && (i <= 15))
	{
    		fat15 = fat10 * i;
    		i++;
	}
printf ("O fatorial de %d e %d\n",i, fat );
system("PAUSE");
return 0;
}
/*Resposta: O fatorial de 10! foi calculado primeiro,
 em seguida usa o seu resultado para calcular o fatorial de  15!
*/