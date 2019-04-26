#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));

    int num1, num2, resposta, opcao;


    do{
       num1 = rand()%10;
       num2 = rand()%10;

      while(resposta!=(num1*num2)){

       printf("Quanto eh %d x %d ? ", num1, num2);
       scanf("%d",&resposta);

       if (resposta == (num1*num2)){
        printf("\nVoce acertou! :D\n\n");
       }
       else{
        printf("\nTente novamente! :/\n\n");
       }
      }

      printf("Deseja continuar a brincar???\nDigite 0 para sair \nOu qualquer outro numero para continuar!\n");
      scanf("%d",&opcao);
    }while(opcao!=0);

    return 0;
}

