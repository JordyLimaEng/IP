#include <stdio.h>
#include <stdlib.h>


int main (){
	
	int n1=10, n2;
	int *n1Ptr=&n1;
	
	n2 = *n1Ptr;
	n2 += 40;
	
	printf("%d\n", n2);
	printf("%d\n", &*n1Ptr);
	printf("%d\n", &n1Ptr);
	
	return 0;
}
