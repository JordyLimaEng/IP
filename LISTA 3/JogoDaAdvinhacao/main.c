#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


#define TentativaFacil 20
#define TentativaMedio 15
#define TentativaDificil 6
#define Pontos 1000

int main() {
setlocale(LC_ALL, "Portuguese");

	Jogo ();

return 0;
system("pause");
}



 Jogo (){

	printf("\n\n");
	printf("          P  /_\\  P                              \n");
	printf("         /_\\_|_|_/_\\                            \n");
	printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
	printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinha��o! \n");
	printf("    |\" \"  |  |_|  |\"  \" |                     \n");
	printf("    |_____| ' _ ' |_____|                         \n");
	printf("          \\__|_|__/                              \n");
	printf("\n\n");

	int chute;
	int acertou;
	int nivel;
	int totaldetentativas;
	int i, NumInicial, NumFinal, Op, Resposta, NumAtual;

	double pontos = Pontos;

do{
	// escolhendo o nivel de dificuldade
	printf("Qual o n�vel de dificuldade?\n");
	printf("(1) F�cil (2) M�dio (3) Dif�cil\n\n");
	printf("Escolha: ");

	scanf("%d", &nivel);


	printf("Escolha um intervalo entre n�meros inteiros: \n\n");
	printf("=> ");
	scanf("%d %d", &NumInicial, &NumFinal);

	srand(time(0));
	int numerosecreto = NumInicial + (rand() % NumFinal);

	switch(nivel) {
		case 1:
			totaldetentativas = TentativaFacil;
			break;
		case 2:
			totaldetentativas = TentativaMedio;
			break;
		default:
			totaldetentativas = TentativaDificil;
			break;
	}

	for(i = 1; i <= totaldetentativas; i++) {

		printf("-> Tentativa %d de %d\n\n", i, totaldetentativas);

		printf("Chute um n�mero: ");
		scanf("%d", &chute);

		if(chute == NumAtual){
            printf("\n\nVoc� n�o pode chutar o mesmo n�mero duas vezes seguidas!!\n\n");
            i--;
            continue;
        }
            NumAtual = chute;

		if(chute < 0) {
			printf("Voc� n�o pode chutar n�meros negativos\n");
			i--;
			continue;
		}

		acertou = chute == numerosecreto;

		if(acertou) {
			break;
		} else if(chute > numerosecreto) {
			printf("\nSeu chute foi maior do que o n�mero secreto!\n\n");
		} else {
			printf("\nSeu chute foi menor do que o n�mero secreto!\n\n");
		}

		double pontosperdidos = abs(chute - numerosecreto) / 2.0;
		pontos = pontos - pontosperdidos;
	}



	printf("\n");
	if(acertou) {
		printf("             OOOOOOOOOOO               \n");
		printf("         OOOOOOOOOOOOOOOOOOO           \n");
		printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
		printf("    OOOOOO      OOOOO      OOOOOO      \n");
		printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
		printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
		printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
		printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
		printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
		printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
		printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
		printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
		printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
		printf("         OOOOOO         OOOOOO         \n");
		printf("             OOOOOOOOOOOO              \n");
		printf("\nParab�ns! Voc� acertou!\n");
		printf("Voc� fez %.2f pontos. At� a pr�xima!\n\n", pontos);
	} else {

        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");

		printf("\nVoc� perdeu! Tente novamente!\n\n");
	}

     printf("Deseja jogar novamente?\n");
     printf("1-Sim\n");
     printf("2-N�o\n");
     printf("=> ");
     scanf("%d", &Op);

}while (Op==1);

}

