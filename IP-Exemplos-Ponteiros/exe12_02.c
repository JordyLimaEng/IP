
#include <stdio.h>

int cuboPorValor( int n );

int main( void )
{
   int numero = 7;

   printf( "O valor original do numero eh %d", numero );


   cuboPorValor( numero );

   printf( "\nO novo valor do numero eh %d\n", numero );



   return 0;

}


int cuboPorValor( int n )
{
   return n * n * n;

}

