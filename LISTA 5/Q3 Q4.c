#include <stdio.h>
#include <stdlib.h>

typedef struct Dados_Ficha{
	char Nome[51];
	double Salario;
	char CPF [15];
	int Idade;
	char Sexo[1];
}Ficha_str;

int main (){
	
	Ficha_str Ficha;
	
	printf("Nome: ");
	scanf("%[^\n]s", &Ficha.Nome);
	setbuf(stdin, NULL);
//	printf("Nome: %s", Ficha.Nome);
	
	printf("\nSalario: ");
	scanf("%lf", &Ficha.Salario);
	setbuf(stdin, NULL);
//	printf("Salario: %.2lf", Ficha.Salario);

	printf("\nCPF: ");
	scanf("%[^\n]s", &Ficha.CPF);
	setbuf(stdin, NULL);
//	printf("CPF: %s", Ficha.CPF);
	
	printf("\nIdade: ");
	scanf("%d", &Ficha.Idade);
	setbuf(stdin, NULL);
//	printf("Idade: %d", Ficha.Idade);

	printf("\nSexo: ");
	scanf("%[^\n]s", &Ficha.Sexo);
	setbuf(stdin, NULL);
//	printf("Sexo: %s", Ficha.Sexo);
	
	return 0;
}
