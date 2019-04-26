#include <stdlib.h>

int main( void )
{
   int b[] = { 10, 20, 30, 40 };
   int *bPtr = b;
   int *bPtr2;
   int i;

   printf( " elem  = %d\n", *( bPtr) );
   bPtr2 = &bPtr[2];
   printf( " elem = %d\n", *( bPtr2) );
   bPtr = bPtr2 - 1;
   printf( " elem = %d\n", *( bPtr) );
   bPtr = bPtr + 2;
   printf( " elem = %d\n", *( bPtr) );


   system("PAUSE");
   return 0;

}

