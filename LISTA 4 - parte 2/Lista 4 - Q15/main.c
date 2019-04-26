#include <stdio.h>
#include <stdlib.h>


        int main(){

        float salarios[300]={0};
        int tempo[300]={0};
        int lista[300]={0};

        int i=0;

        for(i=0;i<300;i++){
            printf("\nDIgite o valor do seu salario:");
            scanf("%f",&salarios[i]);
            printf("\nDIgite quanto tempo voce tem de servico:");
            scanf("%i",&tempo[i]);

        }

        for(i=0;i<300;i++){



                if(salarios[i]<200 && tempo[i]>5){

                    salarios[i]=salarios[i]+(salarios[i]*0.35);
                    printf("O funcionario %i teve o salario aumentado para %.2f\n",i+1,salarios[i]);
                    lista[i]=1;


                }

                if(tempo[i]>5){
                    salarios[i]=salarios[i]+(salarios[i]*0.25);
                    printf("O funcionario %i teve o salario aumentado para %.2f\n",i+1,salarios[i]);
                    lista[i]=1;

                }

                if(salarios[i]<200){
                    salarios[i]=salarios[i]+(salarios[i]*0.15);
                    printf("O funcionario %i teve o salario aumentado para %.2f\n",i+1,salarios[i]);
                    lista[i]=1;

                }


                if(salarios[i]>200 && tempo[i]<5){
                    printf("Funcionario %i nao beneficiado!!!\n",i+1);
                    lista[i]=300;
                }




        }
        for(i=0;i<300;i++){

            if(lista[i]==2){
                printf("\nO funcionario %i nao foi beneficiado com aumento!!!\n",i+1);
            }

            else if(lista[i]==1){

                printf("\nO funcionario %i ganhou aumento. Novo salario: %.2f",i+1,salarios[i]);
            }

        }


        }
