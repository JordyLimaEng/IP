#include <stdio.h>


            int main(){

            int hora, minutos, segundos;
            int relogio(int hora,int minutos,int segundos);
            int minutos1;


            printf("Digite a hora: ");
            scanf("%i",&hora);
            printf("Digite os minutos: ");
            scanf("%i",&minutos);
            printf("Digite os segundos: ");
            scanf("%i",&segundos);

            if(segundos>=60){
               int segundos1;
               segundos1=segundos/60;
                minutos+=segundos1;
            }
            if(minutos>=60){

                minutos1=minutos/60;
                hora+=minutos1;

            }
            if(hora>12){
                hora=minutos1-1;
            }



            printf("Se passaram %i segundos desde as %i !!!",relogio(hora,minutos,segundos),hora);


            }

        int relogio(int hora,int minutos,int segundos){

        minutos=minutos%60;

        segundos=segundos+(minutos*60);

        return segundos;

        }
