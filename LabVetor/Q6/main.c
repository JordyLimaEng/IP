#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int Loja [10][5];
    int Clientes, Produtos, Line,Col, Cont=0;
    srand(time(0));

    //Preenchendo a Matriz Loja.

    for(Clientes=0;Clientes<10;Clientes++){
        for(Produtos=0;Produtos<5;Produtos++){
            Loja[Clientes][Produtos]= rand() % 51;
        }
    }
 printf("\nQuestão Desafio 1\n\n%33s\n", "-----Produtos-----");

    for(Line=0;Line<10;Line++){
    printf("\n");
    if(Cont<=8){
     printf("Cliente %d%5s", Cont+1, " ");
    }else{printf("Cliente %d%4s", Cont+1, " ");}

        for(Col=0;Col<5;Col++){
            printf(" %2d ",Loja[Line][Col]);
            if (Col == 4){
                printf("\n");
            }
        }
    Cont++;
    }










   return(0);
}

