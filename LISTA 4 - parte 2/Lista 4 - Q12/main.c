#include <stdio.h>
#include <stdlib.h>

void SeConsoante(void);

int main()
{
    char Letras[5];
    int i, Consoante=0;

    for(i=0;i<5;i++){
        printf("\nDigite uma letra: ");
        scanf("%c",&Letras[i]);
        getchar();



    Consoante++;
    if (Letras[i] == 'a' || Letras[i] == 'e'){
        Consoante--;
     }
    if (Letras[i] == 'i' || Letras[i] == 'o'){
        Consoante--;
    }
    if (Letras[i] == 'u'){
        Consoante--;
    }



    }
    printf("Quantidade de consoantes: %d", Consoante);

    printf("\nElementos de indice impar:");

    for(i=0;i<6;i++){
     if(i % 2 == 0){
        if(Letras[i] == 'a' || Letras[i] == 'z'){
           printf("%d ", Letras[i]);
        }
        else{
           printf("%c ", Letras[i]);
        }
     }
    }
    printf("\n");


SeConsoante();
    return 0;
}


void SeConsoante(void){

char Consoante;

printf("\nDigite a letra: ");
scanf("%c", &Consoante);
getchar();

  if(Consoante!='a' && Consoante!='e' && Consoante!='i' && Consoante!='o' && Consoante!='u'){
     printf("\n%c eh consoante!",Consoante);
    }
  else{
     printf("\n%c nao eh consoante!",Consoante);
    }
}
