#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int Embaralhar();

    int Baralho [13][4];
    int Carta, Naipe, Line,Col, Cont=0, Op=0;
    srand(time(0));

    //Preenchendo a Matriz Baralho.
    //As cartas são enumeradas de 1 a 52.

    for(Carta=0;Carta<13;Carta++){
        for(Naipe=0;Naipe<4;Naipe++){
            Baralho[Carta][Naipe]= 1 + (rand() % 52);
        }
    }
 printf("\nQuestão Desafio 2\n\n%27s\n%15s%4s%4s%4s\n", "----Naipes----","1","2","3","4");

    for(Line=0;Line<13;Line++){
    printf("\n");
    if(Cont<=8){
     printf("Carta %d%5s", Cont+1, " ");
    }else{printf("Carta %d%4s", Cont+1, " ");}

        for(Col=0;Col<4;Col++){
            printf(" %2d ",Baralho[Line][Col]);
            if (Col == 4){
                printf("\n");
            }
        }
    Cont++;
    }
printf("\n\n");

printf("Deseja embaralhar? (1-Sim 2-Não)\n=> ");
scanf("%d",&Op);

if (Op==1){
do{

    Embaralhar();

    printf("Deseja embaralhar novamente? (1-Sim 2-Não)\n=> ");
    scanf("%d",&Op);
}while(Op==1);

}
   return(0);

}

Embaralhar(){
    setlocale(LC_ALL, "Portuguese");

    int Baralho [13][4];
    int Carta, Naipe, Line,Col, Cont=0, Op;
    srand(time(0));

    //Preenchendo a Matriz Loja.

    for(Carta=0;Carta<13;Carta++){
        for(Naipe=0;Naipe<4;Naipe++){
            Baralho[Carta][Naipe]= 1 + (rand() % 52);
        }
    }
 printf("\n\n%27s\n%15s%4s%4s%4s\n", "----Naipes----","1","2","3","4");

    for(Line=0;Line<13;Line++){
    printf("\n");
    if(Cont<=8){
     printf("Carta %d%5s", Cont+1, " ");
    }else{printf("Carta %d%4s", Cont+1, " ");}

        for(Col=0;Col<4;Col++){
            printf(" %2d ",Baralho[Line][Col]);
            if (Col == 4){
                printf("\n");
            }
        }
    Cont++;
    }
printf("\n\n");

}
