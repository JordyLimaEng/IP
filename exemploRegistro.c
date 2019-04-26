#include<stdio.h>
#define TAM 3
typedef struct novo_tipo {
	int campo1;
	double campo2;
} TNOVO;

void imprimeRegistroTNOVO(TNOVO);
void dobraValoresTNOVO(TNOVO*);
void preencheVetorTNOVO(TNOVO [], int);
void imprimeVetorTNOVO(TNOVO [], int);
void preencheVetorTNOVOPonteiro(TNOVO*, int);
void imprimeVetorTNOVOPonteiro(TNOVO*, int);



int main () {

	//struct novo_tipo x;
	TNOVO x;
	TNOVO *ptrX;
	//struct novo_tipo vetor[10];
	TNOVO vetor[TAM];

	ptrX = &x;
	x.campo1 = 10;
	x.campo2 = 32.2;

	imprimeRegistroTNOVO(x);
	dobraValoresTNOVO(ptrX);
	imprimeRegistroTNOVO(x);


	vetor[0].campo1 = 100;
	vetor[0].campo2 = 10.10;
	
	ptrX = &vetor[0];
	imprimeRegistroTNOVO(vetor[0]);
	dobraValoresTNOVO(ptrX);
	//dobraValoresTNOVO(&vetor[0]);
	dobraValoresTNOVO(vetor);
	imprimeRegistroTNOVO(vetor[0]);
//	printf ("%d\n", x.campo1);
//	printf ("%f\n", x.campo2);

	//preencheVetorTNOVO(vetor, TAM);
	//imprimeVetorTNOVO(vetor, TAM);
	
	
	preencheVetorTNOVOPonteiro(ptrX, TAM);
	imprimeVetorTNOVOPonteiro(ptrX, TAM);
	

}

void imprimeRegistroTNOVO(TNOVO param1) {
	printf ("%d\n", param1.campo1);
        printf ("%f\n", param1.campo2);
	
}

void dobraValoresTNOVO(TNOVO *param1) {

	//param1->campo1 = param1->campo1 *2;
	//param1->campo2 = param1->campo2 *2;
	(*param1).campo1 = (*param1).campo1 *2;
	(*param1).campo2 = (*param1).campo2 *2;
}

void preencheVetorTNOVO(TNOVO vetorFunc[], int t) {

	int i = 0;
	for(i=0;i<t;i++){
		printf("Posicao %d: \n", i);
		printf("Digite campo1: \n");
		scanf("%d", &vetorFunc[i].campo1);
		printf("Digite campo2: \n");
                scanf("%lf", &vetorFunc[i].campo2);	
	}
}

void imprimeVetorTNOVO(TNOVO vetorFunc[], int t) {

        int i = 0;
        for(i=0;i<t;i++){
                printf("Posicao %d: \n", i);
                printf("Campo1: %d \n", vetorFunc[i].campo1);

                printf("Campo2: %lf \n", vetorFunc[i].campo2);

	}
}


void preencheVetorTNOVOPonteiro(TNOVO *ptrVetor, int t) {

	int i = 0;
	for(i=0;i<t;i++){
		printf("Posicao %d: \n", i);
		printf("Digite campo1: \n");
		scanf("%d", &ptrVetor->campo1);
		printf("Digite campo2: \n");
                scanf("%lf", &ptrVetor->campo2);
		ptrVetor++;	
	}
}

void imprimeVetorTNOVOPonteiro(TNOVO *ptrVetor, int t) {

        int i = 0;
        for(i=0;i<t;i++){
                printf("Posicao %d: \n", i);
                printf("Campo1: %d \n", (*ptrVetor).campo1);

                printf("Campo2: %lf \n", (*ptrVetor).campo2);
		ptrVetor++;

	}
}



