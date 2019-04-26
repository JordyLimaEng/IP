#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct DadosPessoais{
    char numeroTelefone[12];
    char endereco[51];
    char cidade[16];
    char estado[10];
    char cep[9];
}typedef DadosPessoais;

typedef struct Cliente{
	char primeiroNome[16];
	char ultimoNome[16];
	int numeroCliente;
	DadosPessoais dados;
}TCliente;

int main(){
	TCliente registroCliente;
	TCliente *clientePtr;
	TCliente clientes[10];

	clientePtr = &registroCliente;

    // Usando registroCliente
    strcpy(registroCliente.primeiroNome , "Jordy"); /* legal */
    //registroCliente.primeiroNome = "Jordy"; ILEGAL
    strcpy(registroCliente.ultimoNome , "Lima");    /* legal */
    //registroCliente.ultimoNome = "Lima";    ILEGAL
    registroCliente.numeroCliente = 1;

     // Usando ClientePtr
    strcpy( clientePtr->primeiroNome, "Jordy"); /* legal */
    //clientePtr->primeiroNome = "Jordy"; ILEGAL
    strcpy( clientePtr->ultimoNome, "Lima");
    //clientePtr->ultimoNome = "Lima";    ILEGAL
    clientePtr->numeroCliente = 1;

    printf("|registroCliente|\nPrimeiro nome: %s \nUltimo nome: %s \nNumero de %s %s: %d\n\n", registroCliente.primeiroNome,
           registroCliente.ultimoNome, registroCliente.primeiroNome, registroCliente.ultimoNome,
           registroCliente.numeroCliente);
    printf("|clientePtr|\nPrimeiro nome: %s \nUltimo nome: %s \nNumero de %s %s: %d\n\n", clientePtr->primeiroNome,
           clientePtr->ultimoNome, clientePtr->primeiroNome, clientePtr->ultimoNome,
           clientePtr->numeroCliente);

    // Usando registroCliente
    strcpy(registroCliente.dados.numeroTelefone, "83987586727");
    strcpy(registroCliente.dados.endereco, "R. Berlamino Bento da Silva");
    strcpy(registroCliente.dados.cidade, "Joao Pessoa");
    strcpy(registroCliente.dados.cep, "58071190");
    strcpy(registroCliente.dados.estado, "PB");
    // Usando ClientePtr
    strcpy(clientePtr->dados.numeroTelefone, "83987586727");
    strcpy(clientePtr->dados.endereco, "R. Berlamino Bento da Silva");
    strcpy(clientePtr->dados.cidade, "Joao Pessoa");
    strcpy(clientePtr->dados.cep, "58071190");
    strcpy(clientePtr->dados.estado, "PB");

    printf("|registroCliente|\nNumero do telefone: %s\nEndereco: %s \nCidade: %s \nCep: %s \nEstado: %s\n\n", registroCliente.dados.numeroTelefone,
           registroCliente.dados.endereco, registroCliente.dados.cidade, registroCliente.dados.cep,
           registroCliente.dados.estado);
    printf("|clientePtr|\nNumero do telefone: %s\nEndereco: %s \nCidade: %s \nCep: %s \nEstado: %s\n", clientePtr->dados.numeroTelefone,
           clientePtr->dados.endereco, clientePtr->dados.cidade, clientePtr->dados.cep,
           clientePtr->dados.estado);

    printf("sizeof (DadosPessoais) == %d\n", sizeof(DadosPessoais));
    printf("sizeof (TCliente) == %d", sizeof(TCliente));

    printf("\n");
	return 0;
}
