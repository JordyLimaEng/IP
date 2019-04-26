#include <stdio.h>
#include <stdlib.h>

void funcao1( int a );
void funcao2( int b );
void funcao3( int c );

int main( void )
{
   void (*f[ 3 ])( int ) = { funcao1, funcao2, funcao3 };

   int opcao;
	
   printf( "Digite um numero entre 0 e 2, 3 para sair: " );
   scanf( "%d", &opcao );

   while ( opcao >= 0 && opcao < 3 ) {

	  (*f[ opcao ])( opcao );

      printf( "Digite um numero entre 0 e 2, 3 para sair: ");
      scanf( "%d", &opcao );
   }

   printf( "Programa terminou.\n" );

   system("PAUSE");

   return 0;

} 

void funcao1( int a )
{
   printf( "Voce passou %d para a funcao1 \n\n", a );
} 

void funcao2( int a )
{
	printf( "Voce passou %d para a funcao2 \n\n", a );
}

void funcao3( int a )
{
	printf( "Voce passou %d para a funcao3 \n\n", a );
} 

