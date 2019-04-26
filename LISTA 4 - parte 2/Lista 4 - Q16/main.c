#include <stdio.h>
#include <stdlib.h>


int main(){

            float vendasbrutas[2]={0},x;
            int i,salario[2],contador[9]={0};
            float calcula_salario(float);


            for(i=0;i<2;i++){

                printf("Vendedor %i, digite o valor bruto de suas vendas nessa semana: ",i+1);
                scanf("%f",&vendasbrutas[i]);


            }

            for(i=0;i<2;i++){
                x=vendasbrutas[i];
            salario[i]=calcula_salario(x);

            }

            for(i=0;i<2;i++){
                if(salario[i]>=200 && salario[i]<=299){
                  contador[0]++;
                }
                if(salario[i]>=300 && salario[i]<=399){
                  contador[1]++;
                }
                if(salario[i]>=400 && salario[i]<=499){
                  contador[2]++;
                }
                if(salario[i]>=500 && salario[i]<=599){
                  contador[3]++;
                }
                if(salario[i]>=600 && salario[i]<=699){
                  contador[4]++;
                }
                if(salario[i]>=700 && salario[i]<=799){
                  contador[5]++;
                }
                if(salario[i]>=800 && salario[i]<=899){
                  contador[6]++;
                }
                if(salario[i]>=900 && salario[i]<=999){
                  contador[7]++;
                }
                if(salario[i]>1000){
                  contador[8]++;
                }
            }

    printf("\n");

                 for(i=0;i<9;i++){
                if(i=0){
                 printf("Entre 200 e 299: %i \n",contador[i]);
                }
                if(i=1){
                 printf("Entre 300 e 399: %i \n",contador[i]);
                }
                if(i=2){
                 printf("Entre 400 e 499: %i \n",contador[i]);
                }
                if(i=3){
                 printf("Entre 500 e 599: %i \n",contador[i]);
                }
                if(i=4){
                 printf("Entre 600 e 699: %i \n",contador[i]);
                }
                if(i=5){
                 printf("Entre 700 e 799: %i \n",contador[i]);
                }
                if(i=6){
                 printf("Entre 800 e 899: %i \n",contador[i]);
                }
                if(i=7){
                 printf("Entre 900 e 999: %i \n",contador[i]);
                }
                if(i=8){
                 printf("De 1000 a mais: %s%i \n"," ", contador[i]);
                }
               }




}
        float calcula_salario(float x){
            int i;
            float salario;



                salario=200+(x*0.09);

                return salario;




        }
