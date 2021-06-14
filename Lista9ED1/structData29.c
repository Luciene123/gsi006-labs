#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
#include <ctype.h> 
/*(4a.2) Estrutura chamada data que cadastre 3 datas e mostra o maiora ano cadastrado.*/
struct Data{
    char dia[3];
    char mes[3];
    char ano[5];
};

int main()
{   struct Data data1, data2, data3;
    int maior1, maior2,maior3,maior4;
    strcpy(data1.dia,"01");
    strcpy(data1.mes,"01");
    strcpy(data1.ano,"2017");
    strcpy(data2.dia,"02");
    strcpy(data2.mes,"01");
    strcpy(data2.ano,"2018");
    strcpy(data3.dia,"03");
    strcpy(data3.mes,"01");
    strcpy(data3.ano,"2019");
    printf("\nTelefone1:%c/t%c/t%c\n",data1.dia,data1.mes,data1.ano);
    printf("\nTelefone2:(%c)/t%c/t%c\n",data2.dia,data2.mes,data2.ano);
    printf("\nTelefone3:(%c)/t%c/t%c\n",data3.dia,data2.mes,data2.ano);
    maior1=strcmp(data1.ano,data2.ano);
    maior2=strcmp(data2.ano,data3.ano);
    maior3=strcmp(data1.ano,data3.ano);
    maior4=strcmp(data3.ano,data1.ano);
    if(maior1 > 0 && maior3 > 0 )
         printf("Maior data conforme critério asc é %c:\n",data1.ano);
    if(maior2 > 0 && maior3 > 0)
         printf("Maior data conforme critério asc é %c:\n",data2.ano);
    if(maior4 > 0 && maior3 < 0)
         printf("Maior data conforme critério asc é %c:\n",data3.ano);
system("pause");
return 0;
}