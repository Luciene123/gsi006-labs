/*(4a.6)Programa que controla o consumo de energia dos eletrodomésticos de uma casa.
• Cria e lê as informações de 5 eletrodomésticos: o nome (máximo 15 letras), potencia (real,
em kW) e tempo ativo por dia (real, em horas).
• Leia um valor de tempo t (em dias), calcule e mostre o consumo total na casa e o consumo
relativo de cada eletrodoméstico (consumo/consumo total) nesse período de tempo.
Apresente este ultimo dado em porcentagem.*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
 struct controleEnergia{
    char nome[15];
    float potencial;
    float horasDia;
};
int main()
{
    struct controleEnergia controle[5];
    float consumo,consumot,totalH;
    for(int i = 0;i < 5; i++)
    {
        printf("----------------Controle de Energia--------------------");
        printf("Digite o nome do eletrodoméstico ");
        gets(controle[i].nome);
        printf("Digite o potencial ");
        scanf("%f",&controle[i].potencial);
        printf("Digite as horas ");
        scanf("%f",&controle[i].horasDia);
        consumot += controle[i].potencial;
        totalH+=controle[i].horasDia;
    }
        printf("Donsumo relativo %c:%f f\n" ,controle[0].nome,(controle[0].potencial/consumot),totalH);
        printf("Donsumo relativo %c:%f\n" ,controle[1].nome,(controle[1].potencial/consumot),totalH);
        printf("Donsumo relativo %c:%f\n" ,controle[2].nome,(controle[2].potencial/consumot),totalH);
        printf("Donsumo relativo %c:%f\n" ,controle[3].nome,(controle[3].potencial/consumot),totalH);
        printf("Donsumo relativo %c;%f\n" ,controle[4].nome,(controle[4].potencial/consumot),totalH);
        printf("Consumo total:%f em %f horas",consumot,totalH);

        system("pause");
        return 0;
}




   
    