#include <stdio.h>

void cuboPorReferencia( int *nPtr );

int main( void )
{
   int numero = 20;
   int *numeroPtr = &numero;

   printf( "O valor original do numero eh %d", numero );

   cuboPorReferencia( numeroPtr );

   printf( "\nO novo valor do numero eh %d\n", numero );



   return 0;

}


void cuboPorReferencia( int *nPtr )
{
   *nPtr = (*nPtr) * (*nPtr) * (*nPtr);  /* cube *nPtr */
}


