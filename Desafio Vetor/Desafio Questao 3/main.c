#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    srand(time(0));

    int MegaSena [12][5];
    int Sorteados[0][6];
    int Line,Col;

    //Preenchendo a matriz MegaSena.
    for (Line=0;Line<12;Line++){
        for(Col=0;Col<5;Col++){
           MegaSena[Line][Col] = 1 + (rand() % 60);
        }
    }

    //Determinando a sequencia premiada.
    int x,y;
    for (x=0;x<1;x++){
        for(y=0;y<6;y++){
         Line = rand() % 12;
         Col  = rand() %  5;
         Sorteados[x][y] = MegaSena[Line][Col];
        }
    }


    //Recebendo 6 números do usuário.
    int Num1, Num2, Num3, Num4, Num5, Num6;
    printf("Digite uma sequência de 6 números: \n=> ");
    scanf("%d%d%d%d%d%d",&Num1, &Num2, &Num3, &Num4, &Num5, &Num6);

    //Verificando se acertou.
    int Cont=0;

    if(Num1 == Sorteados[0][0]){
        Cont++;
    }
    if(Num2 == Sorteados[0][1]){
        Cont++;
    }
    if(Num3 == Sorteados[0][2]){
        Cont++;
    }
    if(Num4 == Sorteados[0][3]){
        Cont++;
    }
    if(Num5 == Sorteados[0][4]){
        Cont++;
    }
    if(Num6 == Sorteados[0][5]){
        Cont++;
    }

    //Exibindo a sequência premiada.
        x=0;
        printf("A Sequência premiada é:\n\n");
        for(y=0;y<6;y++){
        printf(" %d ",Sorteados[x][y]);
        }

        printf("\n\n");


    printf("Você acertou %d números!!\n\n",Cont);



    return 0;
}


