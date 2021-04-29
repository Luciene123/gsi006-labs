//Ex(11)Considere o seguinte programa
#include <stdio.h> 
#include <string.h> 
int main(void)
{   
    char buff[5];     
    int pass = 0;     
    printf("\n Entre com a senha : \n"); 
    gets(buff);     
    if (strcmp(buff, "1234"))  
    {
        printf ("\n Senha Errada \n");    
    }  
    else  
    {        
        printf ("\n Senha Correta \n");         
        pass = 1;     
    }    
    if (pass) 
    {       
        /* O usuário acertou a senha, poderá continuar*/        
        printf ("\n Acesso liberado \n");     
     } 
    else 
    {         
        printf ("\n Acesso negado \n");     
    }    
    return 0; 
}  
/*a)Qual é a função do programa? Checar se senha esta correta ou não. e em se guida acesso
b)Qual a saída quando a senha correta é digitada (senha correta: 1234)= "Senha Correta" e atualiza pass=1 que libera acesso.
c)Qual a saída para as seguintes senhas a.123 b.12345 c.123456d)="senha errada" em seguida atualiza pass e então Acesso negado
Em quais casos o programa obteve um comportamento inválido. Explique o motivo=
Quando a senha não eh igual a senha correta(senha correta: 1234)*/ 
