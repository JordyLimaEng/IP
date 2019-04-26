#include <stdio.h>
#include <math.h>

        int main(void){

        float Numeros[10]={0},NumerosArredondados[10]={0};
        int i;

        for(i=0;i<10;i++){
            printf("Digite o valor que voce quer arredondar: ");
            scanf("%f",&Numeros[i]);
            NumerosArredondados[i]=floor(Numeros[i] + 0.5);
            printf("\nO valor era %.1f e ficou %.1f\n",Numeros[i],NumerosArredondados[i]);

        }

        return 0;


        }
