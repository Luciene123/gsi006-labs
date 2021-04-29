//(7)Algoritmo normaliza notas de uma turma de 5 alunos multiplicando 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	float nota[5],maior=0;
	int i;
	 
    	for(i=0;i < 5;i++)
    	{   	
		    printf("Entre com a nota do aluno %d:\n",i++ );
        	scanf("%d",&nota[i]);
            nota[i]=nota[i]*2;
            if(nota[i]>= maior)
                maior=nota[i];
    	}
        maior=100;
    	for(i=0;i < 5;i++)
        {   
		    printf("A nota  normalizada do aluno %d é:%d, maior nota:%d\n",i++,nota[i], maior);
     	}
	system("pause");
	return 0;
}
