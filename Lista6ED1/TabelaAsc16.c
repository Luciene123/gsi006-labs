#include<stdio.h>
#include<stdlib.h>

int main ( )
 {
    char c ;

    for ( c = 32; c < 127; c++)
    printf ( "%c %d/t%c %d/t%c %d/t%c %d/t%c %d/t%c %d/t%c %d/t",c,c,c,c,c,c,c,c,c,c,c,c,c,c) ;
    system("pause");
    return 0 ;
 }