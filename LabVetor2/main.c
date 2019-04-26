#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 8 // define o valor de N tal que satisfaz a matriz NxN

void function1(void);
void function2(void);
void function3(void);
void function4(void);
void function5(void);
void function6(void);
void function7(void);

int op;
int main() {
	setlocale (LC_ALL,"portuguese");
extern op;
srand(time(NULL));


printf("Selecione uma opção:\n1-Diagonal Principal = 1\n2-Cada Coluna de mesmo valor\n");
printf("3-Cada linha de mesmo valor igual ao fatorial da linha\n4-Cada elemento como soma dos indices\n");
printf("5-Cada elemento da col e da linha maior que o anterior\n6-Elementos acima da diagonal pricipal igual a 1\n");
printf("7-Elementos abaixo da diagonal principal sejam 1\n0-SAIR\n=> ");
scanf("%d",&op);

do{
switch (op){
case 1:
    function1 ();
    break;
case 2:
    function2 ();
    break;

case 3:
    function3 ();
    break;

case 4:
    function4 ();
    break;
case 5:
    function5 ();
    break;
case 6:
    function6();
    break;
case 7:
    function7();
    break;
}

}while(op!=0);
}

void function1 (void){
int i=0,j=0;
int Matriz[N][N];
extern op;
//preenchendo a matriz
for(i=0;i<N;i++){
 for(j=0;j<N;j++){
    if(i==j){
    Matriz[i][j]=1;
    }else{
    Matriz[i][j]=0;
    }
 }
}
//imprimindo a matriz
printf("\n\n");
for(i=0;i<N;i++){
 for(j=0;j<N;j++){
 printf("%3d", Matriz[i][j]);
 }
 printf("\n");
 }

printf("\n\n");

printf("Selecione uma opção:\n1-Diagonal Principal = 1\n2-Cada Coluna de mesmo valor\n");
printf("3-Cada linha de mesmo valor igual ao fatorial da linha\n4-Cada elemento como soma dos indices\n");
printf("5-Cada elemento da col maior que o anterior\n6-Elementos acima da diagonal pricipal igual a 1\n");
printf("7-Elementos abaixo da diagonal principal sejam 1\n0-SAIR\n=> ");
scanf("%d",&op);
}


void function2 (void){
extern op;
int i=0,j=0;
int Matriz[N][N];

//preenchendo a matriz
for(i=0;i<N;i++){
 for(j=0;j<N;j++){

    Matriz[i][j]= rand() % N;

    }
 }
int num;
//imprimindo a matriz
printf("\n\n");
for(i=0;i<N;i++){
 for(j=0;j<N;j++){
 if(i==0){
 printf("%3d", Matriz[0][j]);
    }else{
    num = Matriz [0][j];
    Matriz [i][j] = num;
 printf("%3d", Matriz[i][j]);

    }


 }
 printf("\n");
 }

printf("\n\n");

printf("Selecione uma opção:\n1-Diagonal Principal = 1\n2-Cada Coluna de mesmo valor\n");
printf("3-Cada linha de mesmo valor igual ao fatorial da linha\n4-Cada elemento como soma dos indices\n");
printf("5-Cada elemento da col maior que o anterior\n6-Elementos acima da diagonal pricipal igual a 1\n");
printf("7-Elementos abaixo da diagonal principal sejam 1\n0-SAIR\n=> ");
scanf("%d",&op);
}


void function3 (void){
extern op;
int i=0,j=0;
int Matriz[N][N];

//preenchendo a matriz
for(i=0;i<N;i++){
 for(j=0;j<N;j++){
    Matriz[i][j]= N;
    }
 }

int num=0,fat=0,n=0;

//imprimindo a matriz
printf("\n\n");
for(i=0;i<N;i++){
 for(j=0;j<N;j++){
    num = i+1;
    if(num>=0){
        fat=1;
        n=num;
      while(n>0){
        fat*=n;
           n--;}
      }

    Matriz [i][j] = fat;

 printf("%5d", Matriz[i][j]);
    }

 printf("\n");
 }
printf("\n\n");
printf("Selecione uma opção:\n1-Diagonal Principal = 1\n2-Cada Coluna de mesmo valor\n");
printf("3-Cada linha de mesmo valor igual ao fatorial da linha\n4-Cada elemento como soma dos indices\n");
printf("5-Cada elemento da col maior que o anterior\n6-Elementos acima da diagonal pricipal igual a 1\n");
printf("7-Elementos abaixo da diagonal principal sejam 1\n0-SAIR\n=> ");
scanf("%d",&op);
}


void function4 (void){
extern op;
int i=0,j=0, soma;
int Matriz[N][N];

//preenchendo a matriz
for(i=0;i<N;i++){
 for(j=0;j<N;j++){

    Matriz[i][j]=N;

 }
}
//imprimindo a matriz
printf("\n\n");
for(i=0;i<N;i++){
 for(j=0;j<N;j++){

 soma = i + j;
 soma += 2;

 printf("%3d", soma);


 }
 printf("\n");
 }

printf("\n\n");

printf("Selecione uma opção:\n1-Diagonal Principal = 1\n2-Cada Coluna de mesmo valor\n");
printf("3-Cada linha de mesmo valor igual ao fatorial da linha\n4-Cada elemento como soma dos indices\n");
printf("5-Cada elemento da col maior que o anterior\n6-Elementos acima da diagonal pricipal igual a 1\n");
printf("7-Elementos abaixo da diagonal principal sejam 1\n0-SAIR\n=> ");
scanf("%d",&op);


}


void function5 (void){
extern op;



printf("Selecione uma opção:\n1-Diagonal Principal = 1\n2-Cada Coluna de mesmo valor\n");
printf("3-Cada linha de mesmo valor igual ao fatorial da linha\n4-Cada elemento como soma dos indices\n");
printf("5-Cada elemento da col maior que o anterior\n6-Elementos acima da diagonal pricipal igual a 1\n");
printf("7-Elementos abaixo da diagonal principal sejam 1\n0-SAIR\n=> ");
scanf("%d",&op);
}


void function6 (void){
extern op;
int i=0,j=0;
int Matriz[N][N];

//preenchendo a matriz
for(i=0;i<N;i++){
 for(j=0;j<N;j++){
    if(i==j){
    Matriz[i][j]=0;
    }else{
    Matriz[i][j]=0;
    }
    if(i<j){
        Matriz[i][j]=1;
    }
 }
}
//imprimindo a matriz
printf("\n\n");
for(i=0;i<N;i++){
 for(j=0;j<N;j++){
 printf("%3d", Matriz[i][j]);
 }
 printf("\n");
 }
 printf("\n");
printf("Selecione uma opção:\n1-Diagonal Principal = 1\n2-Cada Coluna de mesmo valor\n");
printf("3-Cada linha de mesmo valor igual ao fatorial da linha\n4-Cada elemento como soma dos indices\n");
printf("5-Cada elemento da col maior que o anterior\n6-Elementos acima da diagonal pricipal igual a 1\n");
printf("7-Elementos abaixo da diagonal principal sejam 1\n0-SAIR\n=> ");
scanf("%d",&op);
}


void function7 (void){
extern op;
int i=0,j=0;
int Matriz[N][N];

//preenchendo a matriz
for(i=0;i<N;i++){
 for(j=0;j<N;j++){
    if(i==j){
    Matriz[i][j]=0;
    }else{
    Matriz[i][j]=1;
    }
    if(i<j){
    Matriz[i][j]=0;
    }
 }
}
//imprimindo a matriz
printf("\n\n");
for(i=0;i<N;i++){
 for(j=0;j<N;j++){
 printf("%3d", Matriz[i][j]);
 }
 printf("\n");
 }
 printf("\n");
printf("Selecione uma opção:\n1-Diagonal Principal = 1\n2-Cada Coluna de mesmo valor\n");
printf("3-Cada linha de mesmo valor igual ao fatorial da linha\n4-Cada elemento como soma dos indices\n");
printf("5-Cada elemento da col maior que o anterior\n6-Elementos acima da diagonal pricipal igual a 1\n");
printf("7-Elementos abaixo da diagonal principal sejam 1\n0-SAIR\n=> ");
scanf("%d",&op);
}


