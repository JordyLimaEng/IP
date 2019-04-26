#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float DESCONTO (float);
void  PARCELAS   (int);
void VALOR_PARCELAS(float, float, int);

int main()
{
    setlocale (LC_ALL, "portuguese");
    int FormPag;
    float Valor, Desconto;

    printf("Informe o valor:\n-> ");
    scanf("%f",&Valor);
    //DESCONTO(Valor);

    printf("\nFormas de pagamento:\n1-À vista\n2-Cheque\n3-Cartão\n");
    printf("-> ");
    scanf("%d",&FormPag);
    PARCELAS(FormPag);

    Desconto = DESCONTO(Valor);
    VALOR_PARCELAS(Valor, Desconto, FormPag);

    return 0;
}

float DESCONTO (float Valor){
float ValorFinal, Desconto;

if ((Valor >= 200.00) && (Valor < 400.00)){
    Desconto = (Valor * 0.05);
    ValorFinal = Valor - Desconto;
    printf("Valor com desconto: %.2f\n", ValorFinal);

}else if (Valor >= 400.00){
    Desconto = (Valor * 0.10);
    ValorFinal = Valor - Desconto;
    printf("Valor com desconto: %.2f\n", ValorFinal);

}else{
    printf("\n\nNão há desconto.\n\n");
}

return Desconto;
}

void PARCELAS(int FormPag){

if (FormPag == 1){
    printf("\nParcela única.\n");
}
if (FormPag == 2){
    printf("\nParcelado em até 2x.\n");
}
if (FormPag == 3){
    printf("\nParcelado em até 3x.\n");
}

}

void VALOR_PARCELAS(float Valor, float Desconto, int FormPag){
float ValorParcelas;
int op;

if (FormPag == 2 || FormPag == 3){
printf("Deseja parcelar em quantas vezes?\n-> ");
scanf("%d", &op);
ValorParcelas = (Valor - Desconto) / op;
}
else {
ValorParcelas = (Valor - Desconto) / FormPag;
}
printf("\nO valor de cada parcela é de: R$%.2f \n", ValorParcelas);

}
