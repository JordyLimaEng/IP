#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Nota{
    float nota;
    float peso;
}TNota;

typedef struct Aluno{
    int matricula;
    char nome[50];
    int ano;
    int semestre;
    float media;
    char status;
    TNota notas[3];
}TAluno;

void PreencheVetor ();


int main(){

 PreencheVetor ();


return 0;
}

 void PreencheVetor (){
 TAluno Alunos[10];
 int x=0, y=0;
    for(x=0;x<10;x++){
        printf("Digite a matricula do aluno: ");
        scanf("%d", &Alunos[x].matricula);
        fflush(stdin);
        printf("Digite o nome do aluno: ");
        gets(Alunos[x].nome);
        printf("Digite o ano e o semestre: ");
        scanf("%d %d", &Alunos[x].ano, &Alunos[x].semestre);
        for(y=0;y<3;y++){
            printf("Digite a nota: ");
            scanf("%f", &Alunos[x].notas[y].nota);
            printf("Digite o peso: ");
            scanf("%f", &Alunos[x].notas[y].peso);
            printf("\n");
        }

        float Nota1 = Alunos[x].notas[0].nota;
        float Nota2 = Alunos[x].notas[1].nota;
        float Nota3 = Alunos[x].notas[2].nota;

        float Peso1 = Alunos[x].notas[0].peso;
        float Peso2 = Alunos[x].notas[1].peso;
        float Peso3 = Alunos[x].notas[2].peso;

        Alunos[x].media = ((Nota1*Peso1)+(Nota2*Peso2)+(Nota3*Peso3))/(Peso1+Peso2+Peso3);

        printf("Matricula: %d \nNome: %s \nAno: %d \nSemestre: %d\n",
               Alunos[x].matricula, Alunos[x].nome,
               Alunos[x].ano, Alunos[x].semestre);
        fflush(stdin);
        printf("Media: %.2f", Alunos[x].media);
        printf("\n\n");
    }

}

