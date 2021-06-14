#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
#include <ctype.h> 

struct EnderecoRes{
    char cidade[15];
    char estado[15];
    char cep[15];    
};
struct EnderecoCom{
     char cidade1[15];
    char estado1[15];
    char cep1[15];
    
};
struct TelefoneRes{
    char DDD[15];
    char telefone[15];
   struct EnderecoRes ***er;
    
};
struct Telefone{
    char DDD1[15];
    char telefone1[15];
    struct EnderecoCom ***ec;
    
};
 struct DataNasc{
    char dia[3];
    char mes[3];
    int ano;
    struct TelefoneRes **tr;

};
struct DataIng{
    char dia1[3];
    char mes1[3];
    int ano1;
    struct Telefone **tl;
};     

struct Cadastro
{
    char nome[30];
    char CPF[15];
    char RG[15];
    char estadoCivil[10];
    char sexo[10];
    float salario;
    struct DataNasc *dn;
    struct DataIng *di;     
 };

int main()
{    
 
    struct Cadastro c1[5];
     
    int op,op1,i,j,k;
    
    printf("Cadastro de 0 a 4"); 
     
    
        printf("Nome:\n");
        strcpy(c1[0].nome," Laura");
        printf("CPF:\n");
        strcpy(c1[0].CPF," 12378911220");
        printf("RG:\n");
        strcpy(c1[0].RG," 789158");
        printf("Estado Civil:\n");              
        strcpy(c1[0].estadoCivil)," Casada");               
        printf("Sexo:\n");
        strcpy(c1[0].sexo)," feminino");         
        printf("Salario:\n");
        c1[0].salario=1000;
        printf("Dia nascimento:\n");
        strcpy(c1[0].dn.dia," 12");  
        printf("Mes nascimento:\n");    
        strcpy(c1[0].dn.mes," 12");  
        printf("Ano nascimento:\n");
        c1[0].dn.ano=1989;
        printf("Dia ingresso:\n");
        strcpy(c1[0].di.dia," 12");       
        printf("Mes ingresso:\n");         
        strcpy(c1[0].di.mes," 12"); 
        printf("Ano ingresso:\n");
        c1[0].di.ano1=2000;         
        printf("DDD residencial:\n");
        strcpy(c1[0].dn.tr.DDD," 12");       
        printf("Telefone residencial:\n");
        strcpy(c1[0].dn.tr.telefone," 984442356");        
        printf("DDD:\n");
        strcpy(c1[0].di.tl.DDD," 12");       
        printf("Telefone:\n");
        strcpy(c1[0].di.tl.telefone," 123456789");        
        printf("Endereco Residencial\n"); 
        printf("Cidade :\n");
        strcpy(c1[0].dn.tr.er.cidade," Uberândia");     
        printf("Estado:\n");    
        strcpy(c1[0].dn.tr.er.estado," MG");
        printf("CEP:\n");                
        strcpy(c1[0].di.tl.er.cep," MG");        
        printf("Endereco Comercial :"); 
        printf("Cidade :\n");
        strcpy(c1[0].di.tl.ec.cidade," Uberândia");     
        printf("Estado:\n");    
        strcpy(c1[0].di.tl.ec.estado," MG");
        printf("CEP:\n"); 
        strcpy(c1[0].di.tl.ec.cep," MG"); 

        printf("Nome:\n");
        strcpy(c1[1].nome," Laura");
        printf("CPF:\n");
        strcpy(c1[1].CPF," 12378911220");
        printf("RG:\n");
        strcpy(c1[1].RG," 789158");
        printf("Estado Civil:\n");              
        strcpy(c1[1].estadoCivil)," Casada");               
        printf("Sexo:\n");
        strcpy(c1[1].sexo)," feminino");         
        printf("Salario:\n");
        c1[1].salario=1000.0;
        printf("Dia nascimento:\n");
        strcpy(c1[1].dn.dia," 12");  
        printf("Mes nascimento:\n");    
        strcpy(c1[1].dn.mes," 12");  
        printf("Ano nascimento:\n");
        c1[1].dn.ano=1989;
        printf("Dia ingresso:\n");
        strcpy(c1[1].di.dia," 12");       
        printf("Mes ingresso:\n");         
        strcpy(c1[1].di.mes," 12"); 
        printf("Ano ingresso:\n");
        c1[1].di.ano1=2000;         
        printf("DDD residencial:\n");
        strcpy(c1[1].dn.tr.DDD," 12");       
        printf("Telefone residencial:\n");
        strcpy(c1[1].dn.tr.telefone," 984442356");        
        printf("DDD:\n");
        strcpy(c1[1].di.tl.DDD," 12");       
        printf("Telefone:\n");
        strcpy(c1[1].di.tl.telefone," 123456789");        
        printf("Endereco Residencial\n"); 
        printf("Cidade :\n");
        strcpy(c1[1].dn.tr.er.cidade," Uberândia");     
        printf("Estado:\n");    
        strcpy(c1[1].dn.tr.er.estado," MG");
        printf("CEP:\n");                
        strcpy(c1[1].di.tl.er.cep," MG");        
        printf("Endereco Comercial :"); 
        printf("Cidade :\n");
        strcpy(c1[1].di.tl.ec.cidade," Uberândia");     
        printf("Estado:\n");    
        strcpy(c1[1].di.tl.ec.estado," MG");
        printf("CEP:\n"); 
        strcpy(c1[1].di.tl.ec.cep," MG"); 

        printf("Nome:\n");
        strcpy(c1[2].nome," Laura");
        printf("CPF:\n");
        strcpy(c1[2].CPF," 12378911220");
        printf("RG:\n");
        strcpy(c1[2].RG," 789158");
        printf("Estado Civil:\n");              
        strcpy(c1[2].estadoCivil)," Casada");               
        printf("Sexo:\n");
        strcpy(c1[2].sexo)," feminino");         
        printf("Salario:\n");
        c1[2].salario=1000.0;
        printf("Dia nascimento:\n");
        strcpy(c1[2].dn.dia," 12");  
        printf("Mes nascimento:\n");    
        strcpy(c1[2].dn.mes," 12");  
        printf("Ano nascimento:\n");
        c1[2].dn.ano=1989;
        printf("Dia ingresso:\n");
        strcpy(c1[2].di.dia," 12");       
        printf("Mes ingresso:\n");         
        strcpy(c1[2].di.mes," 12"); 
        printf("Ano ingresso:\n");
        c1[2].di.ano1=2000;         
        printf("DDD residencial:\n");
        strcpy(c1[2].dn.tr.DDD," 12");       
        printf("Telefone residencial:\n");
        strcpy(c1[2].dn.tr.telefone," 984442356");        
        printf("DDD:\n");
        strcpy(c1[2].di.tl.DDD," 12");       
        printf("Telefone:\n");
        strcpy(c1[2].di.tl.telefone," 123456789");        
        printf("Endereco Residencial\n"); 
        printf("Cidade :\n");
        strcpy(c1[2].dn.tr.er.cidade," Uberândia");     
        printf("Estado:\n");    
        strcpy(c1[2].dn.tr.er.estado," MG");
        printf("CEP:\n");                
        strcpy(c1[2].di.tl.er.cep," MG");        
        printf("Endereco Comercial :"); 
        printf("Cidade :\n");
        strcpy(c1[2].di.tl.ec.cidade," Uberândia");     
        printf("Estado:\n");    
        strcpy(c1[2].di.tl.ec.estado," MG");
        printf("CEP:\n"); 
        strcpy(c1[2].di.tl.ec.cep," MG"); 

        printf("Nome:\n");
        strcpy(c1[3].nome," Laura");
        printf("CPF:\n");
        strcpy(c1[3].CPF," 12378911220");
        printf("RG:\n");
        strcpy(c1[3].RG," 789158");
        printf("Estado Civil:\n");              
        strcpy(c1[3].estadoCivil)," Casada");               
        printf("Sexo:\n");
        strcpy(c1[3].sexo)," feminino");         
        printf("Salario:\n");
        c1[3].salario=1000.0;
        printf("Dia nascimento:\n");
        strcpy(c1[3].dn.dia," 12");  
        printf("Mes nascimento:\n");    
        strcpy(c1[3].dn.mes," 12");  
        printf("Ano nascimento:\n");
        c1[3].dn.ano=1989;
        printf("Dia ingresso:\n");
        strcpy(c1[3].di.dia," 12");       
        printf("Mes ingresso:\n");         
        strcpy(c1[3].di.mes," 12"); 
        printf("Ano ingresso:\n");
        c1[3].di.ano1=2000;         
        printf("DDD residencial:\n");
        strcpy(c1[3].dn.tr.DDD," 12");       
        printf("Telefone residencial:\n");
        strcpy(c1[3].dn.tr.telefone," 984442356");        
        printf("DDD:\n");
        strcpy(c1[3].di.tl.DDD," 12");       
        printf("Telefone:\n");
        strcpy(c1[3].di.tl.telefone," 123456789");        
        printf("Endereco Residencial\n"); 
        printf("Cidade :\n");
        strcpy(c1[3].dn.tr.er.cidade," Uberândia");     
        printf("Estado:\n");    
        strcpy(c1[3].dn.tr.er.estado," MG");
        printf("CEP:\n");                
        strcpy(c1[3].di.tl.er.cep," MG");        
        printf("Endereco Comercial :"); 
        printf("Cidade :\n");
        strcpy(c1[3].di.tl.ec.cidade," Uberândia");     
        printf("Estado:\n");    
        strcpy(c1[3].di.tl.ec.estado," MG");
        printf("CEP:\n"); 
        strcpy(c1[3].di.tl.ec.cep," MG"); 

        printf("Nome:\n");
        strcpy(c1[4].nome," Laura");
        printf("CPF:\n");
        strcpy(c1[4].CPF," 12378911220");
        printf("RG:\n");
        strcpy(c1[4].RG," 789158");
        printf("Estado Civil:\n");              
        strcpy(c1[4].estadoCivil)," Casada");               
        printf("Sexo:\n");
        strcpy(c1[4].sexo)," feminino");         
        printf("Salario:\n");
        c1[4].salario=1000.0;
        printf("Dia nascimento:\n");
        strcpy(c1[4].dn.dia," 12");  
        printf("Mes nascimento:\n");    
        strcpy(c1[4].dn.mes," 12");  
        printf("Ano nascimento:\n");
        c1[4].dn.ano=1989;
        printf("Dia ingresso:\n");
        strcpy(c1[4].di.dia," 12");       
        printf("Mes ingresso:\n");         
        strcpy(c1[4].di.mes," 12"); 
        printf("Ano ingresso:\n");
        c1[4].di.ano1=2000;         
        printf("DDD residencial:\n");
        strcpy(c1[4].dn.tr.DDD," 12");       
        printf("Telefone residencial:\n");
        strcpy(c1[4].dn.tr.telefone," 984442356");        
        printf("DDD:\n");
        strcpy(c1[4].di.tl.DDD," 12");       
        printf("Telefone:\n");
        strcpy(c1[4].di.tl.telefone," 123456789");        
        printf("Endereco Residencial\n"); 
        printf("Cidade :\n");
        strcpy(c1[4].dn.tr.er.cidade," Uberândia");     
        printf("Estado:\n");    
        strcpy(c1[4].dn.tr.er.estado," MG");
        printf("CEP:\n");                
        strcpy(c1[4].di.tl.er.cep," MG");        
        printf("Endereco Comercial :"); 
        printf("Cidade :\n");
        strcpy(c1[4].di.tl.ec.cidade," Uberândia");     
        printf("Estado:\n");    
        strcpy(c1[4].di.tl.ec.estado," MG");
        printf("CEP:\n"); 
        strcpy(c1[4].di.tl.ec.cep," MG"); 

       
    printf("Mostra Cadastro");
    
    while(c1[i].dn.ano <=1990)
    {

        {printf("\nNome:%c/t",c1[i].nome);
        printf("\nCPF:%c/t",c1[i].CPF);
        printf("\nRG:%c/t",c1[i].RG);
        printf("\nEstado Civil:%c/t",c1[i].estadoCivil);
        printf("\nSexo:%c/t",c1[i].sexo);
        printf("\nsalario:%f/t",c1[i].salario);
        printf("\nDia nascimento:%c/t",c1[i].dn.dia);
        printf("\nMes nascimento:%c/t",c1[i].dn.mes);        
        printf("\nAnonascimento:%c/t",c1[i].dn.ano);
        printf("\nDia ingresso:%c/t",c1[i].di.dia1);
        printf("\nMes ingresso:%c/t",c1[i].di.mes1);
        printf("\nAno ingresso:%c/t",c1[i].di.ano1);
        printf("\nDDD Comercial:%c/t",c1[i].di.tl.DDD1);
        printf("\nTelefone Comercial:%c/t",c1[i].di.tl.telefone1);
        printf("\nDDD Residencial:%c/t",c1[i].dn.tr.DDD);
        printf("\nTelefone Residencial:%c/t",c1[i].dn.tr.telefone);
        printf("\nCidade Residencial:%c/t",c1[i].dn.tr.er.cidade);
        printf("\nEstado Residencial:%c/t",c1[i].dn.tr.er.estado);
        printf("\nCEP Residencial:%c/t",c1[i].dn.tr.er.cep);
        printf("\nCidade:%c/t",c1[i].di.t.ec.cidade1);
        printf("\nEstado:%c/t",c1[i].di.t.ec.estado1);
        printf("\nCEP:%c/t",c1[i].Dataing.TelefoneCom.EnderecoCom.cep1);
    }

    printf("Cadastrar/ Sobrescrever")
    printf("Escolha local(0,1,2,3 4) ou 5 para sair");
    scanf("%d",&op);
    while (op!=5); 
    {   
        if(c1[i]==op)
        { 
            printf("Nome:\n");
            strcpy(c1[i].nome," Laura");
            printf("CPF:\n");
            strcpy(c1[i].CPF," 12378911220");
            printf("RG:\n");
            (c1[i].RG," 789158");
            printf("Estado Civil:\n");              
            strcpy(c1[i].estadoCivil," Casada");               
            printf("Sexo:\n");
            strcpy(c1[i].sexo," feminino");         
            printf("Salario:\n");
            c1[i].salario=1000.0;
            printf("Dia nascimento:\n");
            strcpy(c1[i].dn.dia," 12");  
            printf("Mes nascimento:\n");    
            strcpy(c1[i].dn.mes," 12");  
            printf("Ano nascimento:\n");
            c1[i].dn.ano=1989;
            printf("Dia ingresso:\n");
            strcpy(c1[i].di.dia," 12");       
            printf("Mes ingresso:\n");         
            strcpy(c1[i].di.mes," 12"); 
            printf("Ano ingresso:\n");
            c1[i].di.ano1=2000;         
            printf("DDD residencial:\n");
            strcpy(c1[i].dn.tr.DDD," 12");       
            printf("Telefone residencial:\n");
            strcpy(c1[i].dn.tr.telefone," 984442356");        
            printf("DDD:\n");
            strcpy(c1[i].di.tl.DDD," 12");       
            printf("Telefone:\n");
            strcpy(c1[i].di.tl.telefone," 123456789");        
            printf("Endereco Residencial\n"); 
            printf("Cidade :\n");
            strcpy(c1[i].dn.tr.er.cidade," Uberândia");     
            printf("Estado:\n");    
            strcpy(c1[i].dn.tr.er.estado," MG");
            printf("CEP:\n");                
            strcpy(c1[i].di.tl.er.cep," MG");        
            printf("Endereco Comercial :"); 
            printf("Cidade :\n");
            strcpy(c1[i].di.tl.ec.cidade," Uberândia");     
            printf("Estado:\n");    
            strcpy(c1[i].di.tl.ec.estado," MG");
            printf("CEP:\n"); 
            strcpy(c1[i].di.tl.ec.cep," MG"); 
        }      
            
    } 
    
    int o,d;
    printf("Trocar conteudo de um cadastro para outro");
    printf("Escolha Origem(0,1,2,3 4) ou 5 para sair");
    get(o);
    printf("Escolha Destino(0,1,2,3 4) ou 5 para sair");
    get(d);
    for(i=0;i<4;i++)
    {
        if( c1[i]==o)
        {   
        
            printf("Nome:/t");
            c1[d].nome=c1[o].nome;
            printf("CPF:/t");
            c1[d].CPF=c1[o].CPF;
            printf("RG:/t");
            c1[d].RG=c1[o].RG;        
            printf("Estado Civil:/t");
            c1[d].estadoCivil=c1[o].estadoCivil;
            printf("Sexo:/t");
            c1[d].sexo=c1[o].sexo;
            printf("Salario:/t");
            c1[d].salario=c1[o].salario;
            printf("Dia nascimento:/t");
            c1[d].dn.dia=c1[o].dn.dia;
            printf("Mes nascimento:/t");    
            c1[d].dn.mes=c1[o].dn.mes;        
            printf("Ano nascimento:/t");
            c1[d].dn.ano=c1[o].dn.ano;
            printf("Dia ingresso:/t");
            c1[d].di.dia=c1[o].di.dia1;
            printf("Mes ingresso:/t");    
            c1[d].di.mes=c1[o].di.mes1;
            printf("Ano ingresso:/t");
            c1[d].di.ano=c1[o].di.ano1;             
            printf("DDD:/t");
            c1[d].di.tl.DDD=c1[o].di.tl.DDD1;
            printf("Telefone:/t");
            c1[d].di.tl.telefone=c1[o].di.tl.telefone1;
            c1[d].dn.tr.DDD=c1[o].dn.tr.DDD;
            printf("Telefone:/t");
            c1[d].dn.tr.telefone=c1[o].dn.tr.telefone;
            printf("Cidade:/t");       
            c1[d].dn.tr.er.cidade=c1[o].dn.tr.er.cidade.cidade;
            printf("Estado:/t");    
            c1[d].dn.tr.er.cidade.estado=c1[o].dn.tr.er.cidade.estado;
            printf("CEP:/t"); 
            c1[d].dn.tr.er.cidade.cep=c1[o].dn.tr.er.cidade.cep;
            c1[d].di.tl.ec.cidade=c1[o].di.tl.ec.cidade;
            printf("Estado:/t");    
            c1[1].di.tl.ec.estado=c1[o].di.tl.ec.estado1;
            printf("CEP:/t"); 
            c1[i].di.tl.ec.cep=c1[o].di.tl.ec.cep1;
        }
    } 
   
    
system("pause");
return 0;
}