#include <stdio.h>
int main( void ) {
int b[] = { 1, 2, 3, 4 };
int i; int *bPtr = b;

for ( i = 0; i < 4; i++ ) {
printf( "b[ %d ] = %d\n", i, b[ i ] );
}

b[0] = 0; b[1] = 1;
b[2] = 2; b[3] = 3;

for ( i = 0; i < 4; i++ ) {
printf( "bPtr[ %d ] = %d\n", i, bPtr[i ] );
}
b[3]= 2;

for ( i = 0; i < 3; i++ ) {
printf( "*(bPtr + %d ) = %d\n", i, *(bPtr + 1));
}
b[2] = 2;

for ( i = 1; i < 2; i++ ) {
printf( "*(bPtr + %d ) = %d\n", i, *(bPtr + 1));
}

return 0;}
