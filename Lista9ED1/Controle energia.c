/*(4a.6)Programa que controla o consumo de energia dos eletrodomésticos de uma casa.
• Cria e lê as informações de 5 eletrodomésticos: o nome (máximo 15 letras), potencia (real,
em kW) e tempo ativo por dia (real, em horas).
• Leia um valor de tempo t (em dias), calcule e mostre o consumo total na casa e o consumo
relativo de cada eletrodoméstico (consumo/consumo total) nesse período de tempo.
Apresente este ultimo dado em porcentagem.*/
typedef struct controleEnergia{
    char nome[15];
    float potencial;
    float horas,
    int dia;

}Controle[5];
int main()
{
    Controle controle;
    float consumo, consumo total;
    for(int i = 0;i < 5; i++)
    {
        printf("Digite o nome do eletrodoméstico ");
        gets(controle[i].nome);
        printf("Digite o potencial ");
        scanf("%f",&aluno[i].nota1);
        printf("Digite as horas ");
    }
    printf("Digite as horas ")


}

