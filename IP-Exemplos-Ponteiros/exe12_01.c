
#include <stdio.h>

int main( void )
{
   int a;       
   int *aPtr;
   
   printf( "O endereo de a eh %d"
           "\nO valor de aPtr eh %d\n", &a, &aPtr );

   a = 7;
   aPtr = &a;   

   printf( "O endereo de a eh %d"
           "\nO valor de aPtr eh %d\n", &a, aPtr );

   printf( "\n\nO valor de a eh %d"   
           "\nO valor de *aPtr eh %d\n", a, *aPtr );

   printf( "\n\nMostra que * e & sao complementares "
           "a cada um \n&*aPtr = %d"   
           "\n*&aPtr = %d\n", &*aPtr, *&aPtr );
           
   printf( "\n\nO endereco de aPtr %d\n", &aPtr );

   system("PAUSE");

   return 0;
    

}
