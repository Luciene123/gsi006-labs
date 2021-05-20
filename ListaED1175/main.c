#include <stdio.h>
#include <stdlib.h>
int maiin()
{
    #define N 100
    char stacK[N];
    int t;    
    stack_create()
    {
         t=0;
    }
     char pop (void) 
    {
        return stack[--t];
    }                                                                                                                                                                           

    void push (char y)
     {
        stack[t++] = y;
     }
    // Esta função recebe uma expressão infixa inf
    // e devolve a correspondente expressão posfixa.
    

    char *infixaParaPosfixa (char *inf)
    {
        int n = strlen (inf);
        char *posf; 
        posf = malloc ((n+1) * sizeof (char));
        stack_create();        
        pop (inf[0]); // empilha '('

        int j = 0;
        for (int i = 1; inf[i] != '\0'; ++i) 
        {
            switch (inf[i]) 
            {
                char x;
                case '(': push (inf[i]);
                   break;
                case ')': x = pop ();
                        while (x != '(') 
                        {
                            posf[j++] = x;
                             x = pop ();
                        }
                        break;
                case '+': 
                case '-': x = pop ();
                        while (x != '(') 
                        {
                            posf[j++] = x;
                            x = desempilha ();
                        }
                        push (x);
                        pusch (inf[i])
                        break;
                case '*':
                case '/': x = pop ();
                         while (x != '(' && x != '+' && x != '-')
                          {
                            posf[j++] = x;
                            x = pop ();
                         }
                        push (x);
                        push (inf[i]);
                        break;
                default:  posf[j++] = inf[i];
            }
        }
   posf[j] = '\0';      
   return posf;
  
    }
}    
