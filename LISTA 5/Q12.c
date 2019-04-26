#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int ano;
    char modelo[15];
    double preco;
    char tipo[15];

}Dados;

int main(){
    int x;
    Dados Concess[100];

    for(x=0;x<100;x++){
        printf("Digite o ano do veiculo: ");
        scanf("%d", &Concess->ano);
        fflush(stdin);

        printf("Digite o modelo do veiculo: ");
        gets(Concess->modelo);

        printf("Digite o preco do veiculo: ");
        scanf("%lf", &Concess->preco);
        fflush(stdin);

        printf("Digite o tipo do veiculo: ");
        gets(Concess->tipo);
        printf("\n");
        printf("Ano: %d; \nModelo: %s; \nPreco: R$%.2lf; \nTipo: %s"
               "\nVeiculo cadastrado com sucesso!\n\n",
               Concess->ano, Concess->modelo, Concess->preco, Concess->tipo);
    }

return 0;
}
