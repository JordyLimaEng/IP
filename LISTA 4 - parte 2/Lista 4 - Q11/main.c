#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Vetor[10]={10,9,8,7,6,5,4,3,2,1};
    int i=0, j=0, temp=0;


    for(i=0;i<10;i++){
        //printf("\nInforme um numero: ");
        //scanf("%d", &Vetor[i]);


      for(j=i+1;j<10;j++){
         if(Vetor[i]>Vetor[j]){
            temp=Vetor[i];
            Vetor[i]=Vetor[j];
            Vetor[j]=temp;
         }
      }
    }

    for(i=0;i<10;i++){
        printf("%d ", Vetor[i]);
    }

    printf("\n");

    for(i=0;i<10;i++){
        //printf("\nInforme um numero: ");
        //scanf("%d", &Vetor[i]);


      for(j=i+1;j<10;j++){
         if(Vetor[j]>Vetor[j+1]){
            temp=Vetor[j];
            Vetor[j+1]=Vetor[j];
            Vetor[j]=temp;
         }
      }
    }

    for(j=0;j<10;j++){
        printf("%d ", Vetor[j]);
    }



    return 0;
}
