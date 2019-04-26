#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int Loja [10][50];
    int Linha, Coluna, cont=0;
    srand(time());

    //Preenchendo a Matriz Loja.

    for(Linha=0;Linha<10;Linha++){
        for(Coluna=0;Coluna<50;Coluna++){
            Loja[Linha][Coluna]= rand() % 50;
        }
    }

    for(Linha=0;Linha<1;Linha++){
        printf("\nQuestão Desafio 1\n\n");

        for(Coluna=1;Coluna<51;Coluna++){

               if (Coluna % 5 == 1){
            //Deixando a matriz alinhada.
                if (cont == 9 ){
                printf("Cliente %d %2s", cont+1, " ");
                }
                else{
                printf("Cliente %d %3s", cont+1, " ");
                }
               }

             printf("%3d", Loja[Linha][Coluna]);
            //Quebra de linha.
               if (Coluna % 5 == 0){
                printf("\n");
                cont++;
             }
        }

        printf("\n\n");
    }
   return(0);
}

