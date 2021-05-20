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
    int stackNull (void) {
   return t <= 0;
}
// Esta função devolve 1 se a string ASCII s 
// contém uma sequência bem-formada de 
// parênteses e colchetes e devolve 0 se 
// a sequência é malformada.

int bemFormada (char s[]) 
{
  stack_create()
   for (int i = 0; s[i] != '\0'; ++i) {
      char c;
      switch (s[i]) {
         case ')': if (stackNull) return 0;
                   c = pop ();
                   if (c != '(') return 0;
                   break;
         case ']': if (stackNull) return 0;
                   c = pop ();
                   if (c != '[') return 0;
                   break;
         default:  push (s[i]);
      }
   }
   return stackNull();
}


