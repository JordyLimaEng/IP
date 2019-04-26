/* Ponteiro const para dado const. */
#include <stdio.h>

int main( void )
{
   int x = 5;
   int y;

   /* ptr é um ponteiro const para um inteiro const. ptr sempre aponta
      para a mesma localizacao, o inteiro nessa localizacao nao pode
      ser modificado */
   const int *const ptr = &x; 
                                 
   printf( "%d\n", *ptr );

   //*ptr = 7; /* Erro: *ptr é const; nao pode receber novo valor */
   ptr = &y; /* Erro: ptr é const; nao pode receber novo endereco */

   return 0; 

}


