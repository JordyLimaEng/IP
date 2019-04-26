#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   int b[] = { 10, 20, 30, 40 }; 
   int *bPtr = b,*bPtr2 = b; ;          
   int i;
   
   printf( " b  = %d\n", *( b ) );   
   printf( " *( b + 2)  = %d\n", *( b + 2) );       
   bPtr2 = b + 3;
   printf( " *( bPtr2) = %d\n", *( bPtr2) );   
   bPtr = bPtr2 - 2;
   printf( " *(bPtr) = %d\n", *(bPtr) );
   i = bPtr2 - bPtr;
   printf( " i = %d\n", i ); 
   
   
   system("PAUSE");
   return 0; 

} 

