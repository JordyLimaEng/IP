#include <stdio.h>
#include <string.h>

char palavrasecreta[20];
char chutes[26];
int chutesdados = 0;
int opcao=0;

int enforcou() {

	int erros = 0;
	int i;
	int j;

	for( i= 0; i < chutesdados; i++) {

		int existe = 0;

		for( j= 0; j < strlen(palavrasecreta); j++) {
			if(chutes[i] == palavrasecreta[j]) {
				existe = 1;
				break;
			}
		}

		if(!existe) erros++;
	}

	return erros >= opcao;
}

void abertura() {
	printf("/****************/\n");
	printf("/ Jogo de Forca */\n");
	printf("/****************/\n\n");
}

void chuta() {
    void chuta();
	char chute;
	printf("\nQual letra? ");
	scanf(" %c", &chute);
    if(chute=='A' || chute=='B' || chute=='C' || chute=='D' || chute=='E' || chute=='F' || chute=='G' || chute=='H' || chute=='I' || chute=='J' || chute=='K' || chute=='L' || chute=='M' || chute=='N' || chute=='O' || chute=='P' || chute=='Q' || chute=='R' || chute=='S' || chute=='T' || chute=='U' || chute=='V' || chute=='X' || chute=='Z' || chute=='W' || chute=='Y'){
	chutes[chutesdados] = chute;
	chutesdados++;
}
    else{
    printf("Digite todas letras maiusculas!!!");
    chuta();
}
}

int jachutou(char letra) {
	int achou = 0;
	int j;
	for( j= 0; j < chutesdados; j++) {
		if(chutes[j] == letra) {
			achou = 1;
			break;
		}
	}

	return achou;
}

int ganhou() {
    int i;
	for( i= 0; i < strlen(palavrasecreta); i++) {
		if(!jachutou(palavrasecreta[i])) {
			return 0;
		}
	}

	return 1;
}

void desenhaforca() {
int i;
	printf("Você já deu %d chutes\n", chutesdados);

	for( i = 0; i < strlen(palavrasecreta); i++) {



		if(jachutou(palavrasecreta[i])) {
                if(i==3 || i==7){
                    printf("%i ", palavrasecreta[i]);
                }
                else{
			printf("%c ", palavrasecreta[i]);}
		} else {
			printf("_ ");
		}

	}
	printf("\n");

}

void escolhepalavra() {
	sprintf(palavrasecreta, "MELANCIA");
}

int main() {

    printf("Digite 1 para facil, 2 para medio, 3 para dificil: ");
    scanf("%i",&opcao);
    if(opcao==1){
        opcao=10;
    }
    if(opcao==2){
        opcao=7;
    }
    if(opcao==3){
        opcao=5;
    }
	abertura();
	escolhepalavra();

	do {

		desenhaforca();
		chuta();

	} while (!ganhou() && !enforcou());

}
