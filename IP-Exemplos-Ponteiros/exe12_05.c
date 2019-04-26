/*
 Ponteiro nao-const para dado const
 */

#include <stdio.h>

void printCharacters( const char *sPtr );

int main( void )
{

   char string[] = "imprime caracteres de um string";

   printf( "O String eh:\n" );
   printCharacters( &string );
   printf( "\n" );



   return 0;

}

/* sPrt nao pode modificar o valor do caracter que ele aponta,
 ou seja, sPrt é um ponteiro somente leitura*/
void printCharacters( const char *sPtr )
{

   for ( ; *sPtr != '\0'; sPtr++ ) {
      printf( "%c", *sPtr );
   }

}

