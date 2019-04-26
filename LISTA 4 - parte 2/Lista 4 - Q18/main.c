#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

     int i=0,h=1,j=0,opcao=0;

            while(h!=0){

            int assentos[10]={0};
            int assento_passageiro[10]={1,2,3,4,5,6,7,8,9,10};
            int opcao=0;
            srand(time(NULL));

            printf("Digite 1 para fumante\nDigite 2 para nao fumante\n");
            scanf("%i",&opcao);

            if(opcao==1 && i<6){
            assentos[i]=assento_passageiro[i];
            printf("Area: Fumante \nPoltrona:%i\n",assentos[i]);
            }

            if(opcao==2 ){
                assentos[5+j]=assento_passageiro[5+j];
                printf("Area: Nao Fumante \nPoltrona:%i\n",assentos[j+5]);
            }

                if(opcao==1){
                i++;
                }
                if(opcao==2){
                j++;
                }

                printf("\n\nDigite 0 se quiser sair e 1 para continuar:");
                scanf("%i",&h);
                }
            }

/*
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


            int main(void){
                int i=0,h=1,opcao=0,opcao2=0;
                while(h!=0){

            int assentos[10]={0};
            int assento_passageiro[10]={1,2,3,4,5,6,7,8,9,10};
            int opcao=0;
            srand(time(NULL));

            printf("Digite 1 para fumante\nDigite 2 para nao fumando\n");
            scanf("%i",&opcao);

            if(opcao==1 && i<6){

            assentos[i]=assento_passageiro[i];
            printf("Area: Fumante \nPoltrona:%i\n",assentos[i]);

            }

            if(opcao==1 && i>=6){
                printf("Voce deseja ir para a classe nao fumante?1 sim 2 nao\n");
                scanf("%i",&opcao2);

                if(opcao2==1){
                assentos[i]=assento_passageiro[i];
                printf("Area: Nao Fumante \nPoltrona:%i\n\n",assentos[i]);
                }

            }

            if(opcao==2){
                assentos[5+i]=assento_passageiro[5+i];
                printf("Area: Nao Fumante \nPoltrona:%i\n\n",assentos[i+5]);
            }

                i++;
                printf("\nDigite 0 se quiser sair e 1 para continuar:");
                scanf("%i",&h);
                }
            }
*/
