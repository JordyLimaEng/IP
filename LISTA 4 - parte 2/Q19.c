#include <stdio.h>

            int main(){

            int assentos[11]={0},soma1=0,soma2=0,opcao_nao_fumante=0;
            int op_assento,i,x,y=1,g=1;

            do{

            printf("Voce deseja assento de fumante(1) ou nao fumante(2) :");
            scanf("%i",&op_assento);

           soma1=assentos[1]+assentos[2]+assentos[3]+assentos[4]+assentos[5];

            if(soma1<5){

            if(op_assento==1){
                    printf("Assentos disponiveis marcados com 0\n\n");
                    printf("1 2 3 4 5 6 7 8 9 10\n");
            for(i=1;i<6;i++){

                if(assentos[i]==0 || assentos[i]==1){
                    printf("%i ",assentos[i]);
                }

                if(i==5){
                    printf("? ? ? ? ? ");
                }

            }

            printf("\nDigite o numero do assento escolhido: ");
            scanf("%i",&x);
            if(assentos[x]==0 && x<6){
                assentos[x]=1;
                printf("Assento %i escolhido com sucesso!!!\n",x);
                g++;

                printf("Poltrona: %i \nArea: Fumante",x);
            }

            else{
                printf("Voce nao pode escolher um assento ja ocupado!!");

             }
            }

            }

            soma2=assentos[6]+assentos[7]+assentos[8]+assentos[9]+assentos[10];
            if(soma2<5){
                if(op_assento==2){
                    printf("Assentos disponiveis marcados com 0\n\n");
                    printf("1 2 3 4 5 6 7 8 9 10\n");
            for(i=5;i<11;i++){

                if(assentos[i]==0 && i!=5 || assentos[i]==1 && i!=5){
                    printf("%i ",assentos[i]);
                }

                if(i==5){
                    printf("? ? ? ? ? ");
                }

            }

            printf("\nDigite o numero do assento escolhido: ");
            scanf("%i",&x);
            if(assentos[x]==0 && x>=6){
                assentos[x]=1;
                printf("Assento %i escolhido com sucesso!!!\n",x);

                printf("Poltrona: %i \nArea: Nao Fumante",x);
            }
             else{
                printf("Voce nao pode escolher um assento ja ocupado!!");

              }

             }

            }

            printf("\nDeseja continuar?1 sim 0 nao: ");
            scanf("%i",&y);
            }while(y!=0);


            }
