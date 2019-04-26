#include <stdio.h>
#include <stdlib.h>

float MediaAluno (float, float, float, float);

int main()
{
 float nota1,nota2,nota3,nota4, media;

 printf("\nInforme as quatro notas do aluno \n-> ");
 scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

 printf("\nMedia do aluno eh %.2f\n", MediaAluno(nota1,nota2,nota3,nota4));

 media = MediaAluno(nota1,nota2,nota3,nota4);

   if(media > 7){
    printf("\nAluno aprovado\n");

 }else{
    printf("\nAluno reprovado\n");

 }

 return 0;
}

float MediaAluno(float n1, float n2, float n3, float n4){
 float media;

 media = (n1 + n2 + n3 + n4)/4;

return media;
}
