#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Vetor[20], Positivo[20]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}, Negativo[20]={0};
    int i;

    for(i=0;i<20;i++){
        printf("Informe um valor: ");
        scanf("%d", &Vetor[i]);

        if(Vetor[i]>=0){
            Positivo[i]=Vetor[i];
        }
        if(Vetor[i]<0){
            Negativo[i]=Vetor[i];
        }
    }

    for(i=0;i<20;i++){
        if(Positivo[i]>-1){
            printf("%d eh positivo.\n",Positivo[i]);
        }
        else if(Negativo[i]<0){
            printf("%d eh negativo.\n",Negativo[i]);
        }
    }

    return 0;
}
