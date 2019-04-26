#include <stdio.h>

            int main(void){
            float calculaTaxas(float,int);
            int x,i;
            float SomaHoras=0,SomaTaxas=0,SomaTaxas1,SomaTaxas2,SomaTaxas3;

            float cliente1,cliente2,cliente3;

            printf("Digite quantas horas o cliente 1 estacionou: \n");
            scanf("%f",&cliente1);

            printf("\nDigite quantas horas o cliente 2 estacionou: \n");
            scanf("%f",&cliente2);

            printf("\nDigite quantas horas o cliente 3 estacionou: \n");
            scanf("%f",&cliente3);

            printf("Carro  Hora    Taxa\n");
            x=1;
            SomaTaxas1=calculaTaxas(cliente1,x);
            x=2;
            SomaTaxas2=calculaTaxas(cliente2,x);
            x=3;
            SomaTaxas3=calculaTaxas(cliente3,x);


                SomaHoras=cliente3+cliente2+cliente1;
                SomaTaxas=SomaTaxas1+SomaTaxas2+SomaTaxas3;

            printf("Total= %.1f    %.2f",SomaHoras,SomaTaxas);

            return 0;
            }

            float calculaTaxas(float horas,int x){
            float Pagar;

            if(horas<=3){

                Pagar=2;

                printf("% i     %.1f   %.2f\n",x,horas,Pagar);

                return Pagar;

            }

            else if(horas>3 && horas<24){

                Pagar=2+((horas-3)*0.5);
                printf("% i     %.1f    %.2f\n",x,horas,Pagar);

                return Pagar;

            }

            else if(horas==24){

                Pagar=10;
                printf("% i     %.1f    %.2f\n",x,horas,Pagar);

                return Pagar;

            }

            }
