/* 
   Ponteiro nao-const para dado nao-const
 */

#include <stdio.h>
#include <ctype.h>

void converterParaMaiscula( char *sPtr );

int main( void )
{
   char string[] = "caracteres e numero $32.98";

   printf( "O String antes da conversao eh: %s", string );
   converterParaMaiscula( string );
   printf( "\nO String depois da conversao eh: : %s\n", string ); 
          
   system("PAUSE");
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

