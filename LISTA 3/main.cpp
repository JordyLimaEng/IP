#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int NumInicio=1, NumFinal=100, x, soma=0, SomaAtual=0, SomaFinal;
			
	for (x=1;x<=100;x++){
		soma=NumInicio+NumFinal;
		SomaAtual+=soma;
		NumInicio++;
		NumFinal--;
		SomaFinal = SomaAtual/2;
		}
	printf("A soma dos n�meros de 1 at� 100 � de: %d \n", SomaFinal);
}

