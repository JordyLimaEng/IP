/* Função : Faça um programa que carregue dois vetores de 10 elementos numéricos cada um e os envie
			para uma função que cria e escreve o vetor resultante da intercalação desses dois vetores.
			Exemplo V1:{1,9,8,7,6,5,3,4,2,0}, V2:{0,1,2,3,5,6,4,7,9,8},
			Resultante:{1,0,9,1,8,2,7,3,6,5,5,6,3,4,4,7,2,9,0,8}.
   Autor : Adriano - F5cursos.com
*/
#include <stdio.h>
#include <conio.h>

main() {

int vetor1[10], vetor2[10], vetor3[20];
int i, j=0, x=0;

//Entrada de dados
for(i=0; i<10; i++)
{
   printf("\n Informe o %do valor do vetor 1 : ", i+1);
   scanf("%d", &vetor1[i]);
}
system("cls");

for(i=0; i<10; i++)
{
   printf("\n Informe o %do valor do vetor 2 : ", i+1);
   scanf("%d", &vetor2[i]);
}
system("cls");

printf("\n\n Vetor 1 = ");
for(i=0; i<10; i++)
{
		 printf(" %d", vetor1[i]);
}

printf("\n\n Vetor 2 = ");
for(i=0; i<10; i++)
{
		 printf(" %d", vetor2[i]);
}

//Processamento
for(i=0; i<20; i++)
{
		 if(i%2==0)
		 {
		 vetor3[i]=vetor1[x];
		 x++;
		 }
		 else
		 {
		 vetor3[i]=vetor2[j];
		 j++;
		 }
		 }

//Saida em tela
printf("\n\n Vetor 3 = ");
for(i=0; i<20; i++){
printf(" %d", vetor3[i]);
}
printf("\n\n");
return 0;
}
