#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Dados_Notas{

	char Nome[51];
	char Turma[3];
	float Notas[4];

} Notas_str;


int main (){
	int x=0;
	Notas_str Notas;

	strcpy(Notas.Nome ,"ANA LUCIA");

 	strcpy(Notas.Turma, "A01");

	Notas.Notas[0] = 8.5;
	Notas.Notas[1] = 7.0;
	Notas.Notas[2] = 9.0;
	Notas.Notas[3] = 8.5;

	printf("Nome:%s %20sTurma:%s\n", Notas.Nome, " ",Notas.Turma);
	for(x=0;x<4;x++){
	printf("Nota %d: %.1f ", x+1, Notas.Notas[x]);
    }

	return 0;
}
