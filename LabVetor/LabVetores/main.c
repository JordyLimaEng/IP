#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale (LC_ALL, "Portuguese");

	int Jogador1 [100], Num, Count, NumSecreto, acertou;
	srand (time(0));

 for(Count=0;Count<100;Count++){
	Jogador1 [Count] = rand() % 10;
	}

	NumSecreto = Jogador1 [rand() % 100];

 do{
    printf("Digite um número aleatório entre 0 e 10: ");
	scanf("%d", &Num);

    if (Num==NumSecreto){
        printf("\n\tVocê acertou!!\n\n");
    } else{
        printf("\n\tVocê errou!!\n\n"  );
     }

   }while(Num!=NumSecreto);

	return 0;
	}
