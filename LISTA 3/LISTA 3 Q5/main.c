#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese");

	float NumA, NumB, S, Sb, M, D;
	int Op;

	printf("Digite dois números A e B: ");
	scanf("%f %f", &NumA, &NumB);

    do{
	printf("\tMENU\n");
	printf("1 - SOMA de A por B\n");
	printf("2 - SUBTRAÇÃO de A por B\n");
	printf("3 - MULTIPLICAÇÃO de A por B\n");
	printf("4 - DIVISÃO de A por B\n");
    printf("5 - SAIR\n\n");

	printf("Opção => ");
	scanf("%d",&Op);

    switch (Op){
    case 1:
        S=NumA + NumB;
        printf("\nResposta => %0.f\n\n", S);
        break;
    case 2:
        Sb=NumA - NumB;
        printf("\nResposta => %0.f\n\n", Sb);
        break;
    case 3:
        M=(NumA * NumB);
        printf("\nResposta => %0.f\n\n", M);
        break;
    case 4:
        D=(NumA / NumB);
        if(NumB != 0){
        printf("\nResposta => %.2f\n\n", D);
        }else{
            printf("Operação inválida, digite um número B maior que 0\n");
        }
        break;
    default:
        if(Op <= 0 || Op > 5){
        printf("\n\tOpção Inválida!\n\n");
        }
        break;
    }
    }while (Op != 5);
	return 0;
}
