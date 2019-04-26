#include <stdio.h> 
#include <stdlib.h> 

main() {

	char *err[] = { "mensagem1", "mensagem2", "mensagem3"};

	int i; 

	for (i = 0; i <3; i++) 
		puts(err[i]);

	system("PAUSE");


}