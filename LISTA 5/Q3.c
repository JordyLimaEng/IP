#include <stdio.h>
#include <stdlib.h>

typedef struct Dados_Ficha{
	char Nome[51];
	double Salario;
	int CPFnum;
	char CPFchar [3];
	int Idade;
	char Sexo[10];
}Ficha_str;

int main (){
	
	Ficha_str Ficha;
	
	printf("Nome: ");
	scanf("%[^\n]s", &Ficha.Nome);
	setbuf(stdin, NULL);
	printf("Nome: %s", Ficha.Nome);
	
	
	return 0;
}
