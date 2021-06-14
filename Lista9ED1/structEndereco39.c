#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
#include <ctype.h> 
/*(4a.3)Cadastra endereço.Cadastra 3 endereços, mostrea ao final
todos os dados dos endereços cadastrados que são do estado “MG”*/
struct Endereco{
    char cidade[15];
    char estado[15];
    char cep[15];
};
int main()
{   struct Endereco endereco1, endereco2,endereco3;
    int igual1,igual2,igual3;
    char est[3]="MG";
    strcpy(endereco1.cidade,"Uberlandia");
    strcpy(endereco1.estado,"MG");
    strcpy(endereco1.cep,"38412-444");
    strcpy(endereco2.cidade,"uberlandia");
    strcpy(endereco2.estado,"MG");
    strcpy(endereco2.cep,"38412-443");
    strcpy(endereco3.cidade,"São Paulo");
    strcpy(endereco3.estado,"São Paulo");
    strcpy(endereco3.cep,"04180-112");
    printf("\nEndereco1:%c/t%c/t%c\n",endereco1.cidade,endereco1.estado,endereco1.cep);
    printf("\nEndereco2:(%c)/t%c/t%c\n",endereco2.cidade,endereco2.estado,endereco2.cep);
    printf("\nEndereco3:(%c)/%c/%c\n",endereco3.cidade,endereco3.estado,endereco3.cep);
    igual1=strcmp(est,endereco1.estado);
    igual2=strcmp(est,endereco2.estado);
    igual3=strcmp(est,endereco2.estado);
    if(igual1==0)
        printf("Cidade:%c\tEstado:%c\tcep:%c\t",endereco1.cidade,endereco1.estado,endereco1.cep);
    if(igual2==0)
        printf("Cidade:%c\tEstado:%c\tcep:%c\t",endereco2.cidade,endereco2.estado,endereco2.cep);
    if(igual3==0)
        printf("Cidade:%c\tEstado:%c\tcep:%c\t",endereco3.cidade,endereco3.estado,endereco3.cep);
system("pause");
return 0;
}
