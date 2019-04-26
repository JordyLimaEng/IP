#include <stdio.h>
#include <stdlib.h>

void calculaComissao(int);
void calculaBonus(int);

int main()
{
int QuantVenda, i, Abadas=3000;

    for(i=0;i<5;i++){
    printf("Comissario %d", i+1);
    printf("\nDigite o total  de vendas:\n-> ");
    scanf("%d", &QuantVenda);

    calculaComissao(QuantVenda);
    calculaBonus(QuantVenda);
    printf("\n");
    Abadas -= QuantVenda;
    }
    printf("\nQuantidade de abadas restantes: %d\n\n", Abadas);

    return 0;
}

void calculaComissao(int QuantVenda){

    float ValorVendido, ValorComissao;

    ValorVendido = 80.00 * QuantVenda;
    ValorComissao = ValorVendido * 0.07;

    if(QuantVenda>50){
        ValorComissao += 70.00;
        printf("Valor da comissao sem bonus: R$%.2f\n", ValorComissao - 70.00);
        printf("Valor da comissao com bonus: R$%.2f\n", ValorComissao);

    }
    else{
        printf("Valor da comissao: R$%.2f\n", ValorComissao);
    }



}

void calculaBonus   (int QuantVenda){
    if(QuantVenda>50){
        printf("\nRecebeu um bonus de R$70.00\n");
    }
    else {
        printf("\nNao recebeu bonus.\n");
    }
}
