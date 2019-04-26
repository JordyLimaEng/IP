#include <stdio.h>
#include <stdlib.h>

//int pontosQualif (int);

int main()
{
    int media=0;
    int pontosQualif(int);

    printf("Informe a media do aluno:\n->");
    scanf("%d", &media);

    if(media>=60 && media<=100){
    printf("Sua nota final de qualis eh: %d",pontosQualif(media));
    }else{
    printf("\nNota invalida.\n");
    }

    return 0;
}

int pontosQualif(int media){

     if(media>=90 && media<=100){
    return 4;
}
else if(media>=80 && media<=89){
    return 3;
}
else if(media>=70 && media<=79){
    return 2;
}
else if(media>=60 && media<=69){
    return 1;
 }
}
