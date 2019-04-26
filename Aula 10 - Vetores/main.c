#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL,"portuguese");

    printf("\nQuestão proposta\n\n%30s\n", "Escolha uma concessionária: \n");

    printf("%8s %12s %7s\n","1-FIAT", "2-CHEVROLET", "3-FORD");


    //printf("%5s %12s %11s\n", "Uno", "Vectra", "Escort");
    //printf("%8s %8s %11s\n", "Tempra", "Astra", "Pampa");
    //printf("%5s-%5s %8s %8s\n\n"," "," ", "Silverado", "Ranger");

    return 0;
}
