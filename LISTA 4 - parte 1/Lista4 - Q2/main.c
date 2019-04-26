#include <stdio.h>


            int main(void){
            int vetor[10]={0};
            void MULTI3(int[]);
            void DIVISOR(int[]);
            int i,z=0;
            int vetor_troca[2]={0};
            int *vetor_troca_ponteiro=&vetor_troca;
            int mais_vetor[2];

            for(i=0;i<10;i++){
                printf("Digite um numero: ");
                scanf("%i",&vetor[i]);


            }
            MULTI3(vetor);
            DIVISOR(vetor);

            for(i=0;i<2;i++){
                printf("\nDigite um valor: ");
                scanf("%i",&vetor_troca_ponteiro[i]);

            }
            if(vetor_troca[0]>vetor_troca[1]){
                int temporario=vetor_troca[0];
                vetor_troca[0]=vetor_troca[1];
                vetor_troca[1]=temporario;
            }
            if(vetor_troca[0]%3==0){
                z++;
            }
            if(vetor_troca[1]%3==0){
                z++;
            }

            printf("\nExistem %i multiplos de tres",z);


            }

            void MULTI3(int vetor[]){
            int i,x=0;

            for(i=0;i<10;i++){

                if(vetor[i]%3==0){
                    printf("O %i eh multiplo de 3 !!!\n",vetor[i]);
                    x++;
                }

            }
            printf("%i numeros sao multiplos de tres!!!",x);

            }

            void DIVISOR(int vetor[]){
            int i,x=0;

                    for(i=0;i<10;i++){

                        if(8%vetor[i]==0){
                        printf("\nO %i eh divisor de 8 !!!\n",vetor[i]);
                        x++;

                        }



                    }
            printf("%i numeros sao divisores de oito!!!",x);


            }
