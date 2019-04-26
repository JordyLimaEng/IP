/*
   Ponteiro nao-const para dado nao-const
 */

#include <stdio.h>
#include <ctype.h>

void converterParaMaiscula( char *sPtr );

int main( void )
{
   char string[] = "jordy allyson de sousa lima";

   printf( "O String antes da conversao eh: %s", string );
   converterParaMaiscula( string );
   printf( "\nO String depois da conversao eh: : %s\n", string );

   return 0;

}


void converterParaMaiscula( char *sPtr )
{
   while ( *sPtr != '\0' ) {

      if ( islower( *sPtr ) ) {
         *sPtr = toupper( *sPtr );
      }

      ++sPtr;
   }

}

