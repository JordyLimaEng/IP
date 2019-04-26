#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct conta{
    int numeroConta;
    char nomeConta[21];
}CONTA;

int main(){
    int x;
    CONTA registroConta;
    CONTA contas[20];
    CONTA *sPtr;

    sPtr = &registroConta;

    printf("Digite um numero: ");
    scanf("%d", &sPtr->numeroConta);
    printf("Digite uma operacao (apenas letras): ");
    scanf("%s", &sPtr->nomeConta);

    contas[19].numeroConta = sPtr->numeroConta;
    strcpy(contas[19].nomeConta, sPtr->nomeConta);

    sPtr = &contas[20];

    for(x=0;x<20;x++){
     printf("\nConta numero %d", x+1);
     printf("\nDigite um numero: ");
     scanf("%d", &contas[x].numeroConta);
     printf("Digite uma operacao (apenas letras): ");
     scanf("%s", &contas[x].nomeConta);
    }

    printf("\n");

    printf("Primero do vetor contas:\nNumero: %d\nOperacao: %s\n", contas[0].numeroConta, contas[0].nomeConta);
    printf("Quinto do vetor contas:\nNumero: %d\nOperacao: %s\n", contas[4].numeroConta,  contas[4].nomeConta);
    printf("Ultimo do vetor contas:\nNumero: %d\nOperacao: %s\n", contas[19].numeroConta,  contas[19].nomeConta);
    printf("\n");
	return 0;
}
