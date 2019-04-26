#include <stdio.h>
#define TAMANHO 10

void ordenaCrescente( int * const vetor, const int tam );
void trocar( int *element1Ptr, int *element2Ptr ); 

int main( void )
{
   int a[ TAMANHO ] = { 6, 3 , 4, 10, 8, 12, 89, 68, 45, 37 };
   
   int i; 

   printf( "Itens na ordem original\n" );

   for ( i = 0; i < TAMANHO; i++ ) {
      printf( "%4d", a[ i ] );
   }

   ordenaCrescente( a, TAMANHO );

   printf( "\nItens em ordem crescente\n" );
   
   for ( i = 0; i < TAMANHO; i++ ) {
      printf( "%4d", a[ i ] );   
   } 

   printf( "\n" );

   system("PAUSE");
   return 0; 

}

void ordenaCrescente( int * const vetor, const int tam )
{
  
   int prox; 
   int j;    
   
   for ( prox = 0; prox < tam - 1; prox++ ) {

      for ( j = 0; j < tam - 1; j++ ) {

         if ( vetor[ j ] > vetor[ j + 1 ] ) {
            trocar( &vetor[ j ], &vetor[ j + 1 ] );
         } 

      }

   }

}

/* Altenar os valores que os ponteiros element1Ptr e element2Ptr apontam, ou seja,
 trocam um pelo outro */
void trocar( int *element1Ptr, int *element2Ptr )
{
   int aux = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = aux;
} 
