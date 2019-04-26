#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

enum {pistola=1,rifle,pesada,sub,branca};
int posicao_cliente=0;
int posicao_produto=0;
int posicao_carrinho=0;
int nome[50];
char usuario_excluir[17];
int id_produto_cliente,i=0;
int menu_pagamento_continuar_comprando=0,sim_nao_carrinho=0;
int a=0,posicao_produto_funcao=0,opcao_comprar_pagar=0;
double valor_a_pagar=0,valor_dado=0;
int posicao_cliente_gerar_codigo=0;
int g=0,c=0;
int rand1,codigo_de_devolucao=0;

    typedef struct nome_produtos{
        char nome[50];
    }nome_pro;

    typedef struct preco_produtos{
        double preco;
    }preco_pro;

    typedef struct historico{
        int id_cliente;
        char nome_cliente[50];
        char nome_pro nome_produto[5];
        char preco_pro preco_produto[5];
        int codigo_devolucao;
        double total_compra;
        int contador;
    }htr;
    htr historico[10];

    typedef struct funcionario{
            char usuario[16];
            char senha[9];
    } fcn ;
    fcn funcionario;

    typedef struct produto{
            int codigo;
            char nome[50];
            int categoria;
            double preco;
        }pdr;
    pdr produto[50];
    pdr carrinho[5];

    typedef struct cliente{
        char nome[51];
        char cpf[12];
        char usuario[17];
        char senha[13];
    }clt;
    clt cliente[10];

        void historico_(void){

        printf("Ultima compra");
        printf("\nCliente %s\n",historico[posicao_cliente_gerar_codigo].nome_cliente);
         for(g=0;g<historico[posicao_cliente_gerar_codigo].contador;g++){
          printf("%s",historico[posicao_cliente_gerar_codigo].nome_produto[g].nome);
          printf(" %.2f\n",historico[posicao_cliente_gerar_codigo].preco_produto[g].preco);
         }
        printf("Valor total pago na ultima compra: %.2f\n",historico[posicao_cliente_gerar_codigo].total_compra);
        }

        void devolucao(void){
            printf("DIgite o codigo de devolucao: ");
            scanf("%d",&codigo_de_devolucao);
            for(i=0;i<posicao_cliente;i++){
                if(historico[i].codigo_devolucao==codigo_de_devolucao){
                    historico[i].codigo_devolucao=0;
                    historico[i].id_cliente=0;
                    strcpy(historico[i].nome_cliente,"");
                    historico[i].total_compra=0;
                    for(g=0;g<historico[i].contador;g++){
                    strcpy(historico[i].nome_produto[g].nome,"");
                    historico[i].preco_produto[g].preco=0;
                    }
                    c=1;
                    printf("Compra cancelada, valor da compra estornado");
                    break;
                }else{
                    c=2;
                }
            }if(c==2){
                printf("\nCodigo nao listado\n");
            }
        }

        void vender_produto(void){
            char * categoriaId(int);
            srand(time(NULL));



            printf("Deseja comprar um(a)\n1 - Pistola\n2 - Rifle\n3 - Pesada\n4 - Sub-metralhadora\n5 - Arma Branca\n");
            scanf("%d",&a);


        switch(a){

                case pistola:
                    for(i=0;i<posicao_produto;i++){

                        if(produto[i].categoria==pistola){
                            printf("Id: %d\nNome: %s\nPreco: %.2f\n",produto[i].codigo,produto[i].nome,produto[i].preco);
                        }

                    }
                    break;
                    case rifle:
                    for(i=0;i<posicao_produto;i++){

                        if(produto[i].categoria==rifle){
                            printf("Id: %d\nNome: %s\nPreco: %.2f\n",produto[i].codigo,produto[i].nome,produto[i].preco);
                        }

                    }
                    break;
                    case pesada:
                    for(i=0;i<posicao_produto;i++){

                        if(produto[i].categoria==pesada){
                            printf("Id: %d\nNome: %s\nPreco: %.2f\n",produto[i].codigo,produto[i].nome,produto[i].preco);
                        }

                    }
                    break;
                    case sub:
                    for(i=0;i<posicao_produto;i++){

                        if(produto[i].categoria==sub){
                            printf("Id: %d\nNome: %s\nPreco: %.2f\n",produto[i].codigo,produto[i].nome,produto[i].preco);
                        }

                    }
                    break;
                    case branca:
                    for(i=0;i<posicao_produto;i++){

                                if(produto[i].categoria==branca){
                            printf("Id: %d\nNome: %s\nPreco: %.2f\n",produto[i].codigo,produto[i].nome,produto[i].preco);
                        }

                    }
                    break;
        }

                    printf("Digite o id do produto que deseja compra: ");
                    scanf("%d",&id_produto_cliente);


                    for(i=0;i<posicao_produto;i++){
                        if(id_produto_cliente==produto[i].codigo){
                            printf("\nCategoria: %s\nNome: %s\nPreco: %.2f\n",categoriaId(produto[i].categoria),produto[i].nome,produto[i].preco);
                            posicao_produto_funcao=i;
                            break;
                        }
                    }
                    printf("Deseja adicionar o produto no seu carrinho?\n1 - sim\n2 - Nao\nDigite: ");
                    scanf("%d",&sim_nao_carrinho);

                    if(sim_nao_carrinho==1){

                            if(carrinho[posicao_carrinho].preco==0 && posicao_carrinho<5){
                            carrinho[posicao_carrinho].codigo=produto[posicao_produto_funcao].codigo;
                            strcpy(carrinho[posicao_carrinho].nome,produto[posicao_produto_funcao].nome);
                            carrinho[posicao_carrinho].categoria=produto[posicao_produto_funcao].categoria;
                            carrinho[posicao_carrinho].preco=produto[posicao_produto_funcao].preco;
                            posicao_carrinho++;
                            historico[posicao_cliente_gerar_codigo].contador=posicao_carrinho;
                            printf("\nProduto adicionado ao carrinho");
                            printf("\n1 - Realizar pagamento\n2 - Continuar comprando\n3 - Cancelar compra\nDigite: ");
                            scanf("%d",&opcao_comprar_pagar);
                            if(opcao_comprar_pagar==1){
                                for(i=0;i<posicao_carrinho;i++){


                                 	valor_a_pagar+= carrinho[i].preco;
                                }

                                printf("Valor total a pagar: %.2f",valor_a_pagar);
                                printf("\nDigite o valor dado: ");
                                scanf("%lf",&valor_dado);
                                while(valor_dado<valor_a_pagar){
                                        printf("Valor insuficiente, de um novo valor: ");
                                        scanf("%lf",&valor_dado);
                                    }
                                if(valor_dado>=valor_a_pagar){

                                        valor_dado=valor_dado-valor_a_pagar;
                                        printf("Seu troco eh de: %.2f\nObrigado!!",valor_dado);


                                for(i=0;i<posicao_cliente;i++){

                                        historico[i].codigo_devolucao=0;
                                        historico[i].id_cliente=0;
                                        strcpy(historico[i].nome_cliente,"");
                                        historico[i].total_compra=0;
                                        for(g=0;g<historico[i].contador;g++){
                                        strcpy(historico[i].nome_produto[g].nome,"");
                                        historico[i].preco_produto[g].preco=0;
                    }



                                }


                                         rand1 =1+rand()%100;
                                        for(i=0;i<posicao_cliente;i++){

                                            if(rand1==historico[i].codigo_devolucao){

                                             for(i=0;i<posicao_carrinho;i++){
                                                    strcpy(historico[posicao_cliente_gerar_codigo].nome_produto[i].nome,carrinho[i].nome);
                                                    historico[posicao_cliente_gerar_codigo].preco_produto[i].preco=carrinho[i].preco;

                                                }
                                                rand1 =1+rand()%1000;

                                                historico[posicao_cliente_gerar_codigo].codigo_devolucao=rand1;
                                                historico[posicao_cliente_gerar_codigo].id_cliente=posicao_cliente_gerar_codigo;
                                                strcpy(historico[posicao_cliente_gerar_codigo].nome_cliente,cliente[posicao_cliente_gerar_codigo].nome);
                                                historico[posicao_cliente_gerar_codigo].total_compra=valor_a_pagar;
                                                printf("\nCODIGO DA COMPRA: %d",historico[posicao_cliente_gerar_codigo].codigo_devolucao);



                                            }
                                            else{
                                                for(i=0;i<posicao_carrinho;i++){

                                                    strcpy(historico[posicao_cliente_gerar_codigo].nome_produto[i].nome,carrinho[i].nome);
                                                    historico[posicao_cliente_gerar_codigo].preco_produto[i].preco=carrinho[i].preco;



                                                }


                                                historico[posicao_cliente_gerar_codigo].codigo_devolucao=rand1;
                                                historico[posicao_cliente_gerar_codigo].id_cliente=posicao_cliente_gerar_codigo;
                                                strcpy(historico[posicao_cliente_gerar_codigo].nome_cliente,cliente[posicao_cliente_gerar_codigo].nome);
                                                historico[posicao_cliente_gerar_codigo].total_compra=valor_a_pagar;
                                                printf("\nCODIGO DA COMPRA: %d ",historico[posicao_cliente_gerar_codigo].codigo_devolucao);
                                            }

                                        }



                                        for(i=0;i<posicao_carrinho;i++){

                                        strcpy(carrinho[i].nome,"");
                                        carrinho[i].codigo=0;
                                        carrinho[i].categoria=0;
                                        carrinho[i].preco=0.00;

                                        }
                                        posicao_carrinho=0;
                                        valor_a_pagar=0;

                                    }


                                }
                                else if(opcao_comprar_pagar==2){
                                        printf("\n");
                                    vender_produto();
                                }

                                else if(opcao_comprar_pagar==3){

                                    for(i=0;i<posicao_carrinho;i++){

                                        strcpy(carrinho[i].nome,"");
                                        carrinho[i].codigo=0;
                                        carrinho[i].categoria=0;
                                        carrinho[i].preco=0.00;

                                        }
                                        posicao_carrinho=0;
                                        valor_a_pagar=0;

                                }



                            }

                            else if(posicao_carrinho==5){

                            printf("\nVoce ja chegou no numero maximo de produtos\n1 - Realizar pagamento\n2 - Cancelar compra\nDigite: ");
                            scanf("%d",&opcao_comprar_pagar);
                            if(opcao_comprar_pagar==1){
                            for(i=0;i<posicao_carrinho;i++){


                                 	valor_a_pagar+= carrinho[i].preco;
                                }
                            printf("Valor total a pagar: %.2f",valor_a_pagar);
                            printf("\nDigite o valor dado: ");
                            scanf("%lf",&valor_dado);
                                while(valor_dado<valor_a_pagar){
                                        printf("Valor insuficiente, de um novo valor: ");
                                        scanf("%lf",&valor_dado);
                                    }
                                if(valor_dado>=valor_a_pagar){

                                        valor_dado=valor_dado-valor_a_pagar;
                                        printf("Seu troco eh de: %.2f\nObrigado!!",valor_dado);


                                for(i=0;i<posicao_cliente;i++){

                                        historico[i].codigo_devolucao=0;
                                        historico[i].id_cliente=0;
                                        strcpy(historico[i].nome_cliente,"");
                                        historico[i].total_compra=0;
                                        for(g=0;g<historico[i].contador;g++){
                                        strcpy(historico[i].nome_produto[g].nome,"");
                                        historico[i].preco_produto[g].preco=0;
                    }



                                }


                                         rand1 =1+rand()%100;
                                        for(i=0;i<posicao_cliente;i++){

                                            if(rand1==historico[i].codigo_devolucao){

                                             for(i=0;i<posicao_carrinho;i++){
                                                    strcpy(historico[posicao_cliente_gerar_codigo].nome_produto[i].nome,carrinho[i].nome);
                                                    historico[posicao_cliente_gerar_codigo].preco_produto[i].preco=carrinho[i].preco;

                                                }
                                                rand1 =1+rand()%1000;

                                                historico[posicao_cliente_gerar_codigo].codigo_devolucao=rand1;
                                                historico[posicao_cliente_gerar_codigo].id_cliente=posicao_cliente_gerar_codigo;
                                                strcpy(historico[posicao_cliente_gerar_codigo].nome_cliente,cliente[posicao_cliente_gerar_codigo].nome);
                                                historico[posicao_cliente_gerar_codigo].total_compra=valor_a_pagar;
                                                printf("\nCODIGO DA COMPRA: %d",historico[posicao_cliente_gerar_codigo].codigo_devolucao);



                                            }
                                            else{
                                                for(i=0;i<posicao_carrinho;i++){

                                                    strcpy(historico[posicao_cliente_gerar_codigo].nome_produto[i].nome,carrinho[i].nome);
                                                    historico[posicao_cliente_gerar_codigo].preco_produto[i].preco=carrinho[i].preco;



                                                }


                                                historico[posicao_cliente_gerar_codigo].codigo_devolucao=rand1;
                                                historico[posicao_cliente_gerar_codigo].id_cliente=posicao_cliente_gerar_codigo;
                                                strcpy(historico[posicao_cliente_gerar_codigo].nome_cliente,cliente[posicao_cliente_gerar_codigo].nome);
                                                historico[posicao_cliente_gerar_codigo].total_compra=valor_a_pagar;
                                                printf("\nCODIGO DA COMPRA: %d ",historico[posicao_cliente_gerar_codigo].codigo_devolucao);
                                            }

                                        }



                                        for(i=0;i<posicao_carrinho;i++){

                                        strcpy(carrinho[i].nome,"");
                                        carrinho[i].codigo=0;
                                        carrinho[i].categoria=0;
                                        carrinho[i].preco=0.00;

                                        }
                                        posicao_carrinho=0;
                                        valor_a_pagar=0;

                                    }


                                }

                                else if(opcao_comprar_pagar==2){

                                    for(i=0;i<posicao_carrinho;i++){

                                        strcpy(carrinho[i].nome,"");
                                        carrinho[i].codigo=0;
                                        carrinho[i].categoria=0;
                                        carrinho[i].preco=0.00;

                                        }
                                        posicao_carrinho=0;
                                        valor_a_pagar=0;

                                }
                            }








                            else{
                                printf("Voce ja chegou ao limite de compras!!");

                            }





                    }
                    else if(sim_nao_carrinho==2)
                    {

                    }



         }

        void listar_preco(pdr vetor[],int x){
        double temporario=0;
        int i,g;

        if(x>0){

        for(i=0;i<x;i++){
            for(g=i+1;g<x;g++){
                if(vetor[i].preco>vetor[g].preco){
                    temporario=vetor[i].preco;
                    vetor[i].preco=vetor[g].preco;
                    vetor[g].preco=temporario;
                }
            }
        }
        printf("Os 5 produtos mais baratos sao:\n");
        for(i=0;i<x && i<5;i++){
            if(vetor[i].preco>0){
            printf("Nome: %s\nValor: %.2f\n",vetor[i].nome,vetor[i].preco);

            }


        }
        printf("Os 5 produtos mais caros sao:\n");
        for(i=x-1;i>=0 && i<5;i--){
            if(vetor[i].preco>0){
            printf("Nome: %s\nValor: %.2f\n",vetor[i].nome,vetor[i].preco);

            }


        }
        }

        else{
            printf("Nenhum produto cadastrado!!!");
        }

        }

        void atualizar_produto(void){


            int opcao,i;
            for(i=0;i<10;i++){
                    if(!strcmp(usuario_excluir,produto[i].nome)){
                        printf("Voce deseja atualizar:\n1 - Id\n2 - Nome\n3 - Categoria\n4 - Preco\n5 - Atualizar tudo\n");
                        scanf("%d",&opcao);
                        switch(opcao){

                            case 1:
                                printf("Digite um id: ");
                                scanf("%d", &produto[i].codigo);
                                break;

                            case 2:
                                setbuf(stdin, NULL);
                                printf("Digite um novo nome: ");
                                scanf("%[^\n]s", &produto[i].nome);
                                setbuf(stdin, NULL);
                                break;

                            case 3:
                                printf("\n1 - Pistola\n2 - Rifle\n3 - Pesada\n4 - Sub-metralhadora\n5 - Arma Branca\n");
                                scanf("%d", &produto[i].categoria);
                                break;

                            case 4:
                                setbuf(stdin, NULL);
                                printf("Digite um novo preco: ");
                                scanf("%lf", &produto[i].preco);
                                setbuf(stdin, NULL);
                                break;

                            case 5:

                                printf("Digite um id: ");
                                scanf("%d", &produto[i].codigo);
                                setbuf(stdin, NULL);
                                printf("Digite um novo nome: ");
                                scanf("%[^\n]s", &produto[i].nome);
                                setbuf(stdin, NULL);
                                printf("Digite uma nova categoria: ");
                                scanf("%d", &produto[i].categoria);
                                setbuf(stdin, NULL);
                                setbuf(stdin, NULL);
                                printf("Digite um novo preco: ");
                                scanf("%[^\n]s", &produto[i].preco);
                                setbuf(stdin, NULL);
                                break;

                            default:

                                printf("\nOpcao invalida");
                                break;

                        }
                        break;
                    }
                }
        }

        char * categoriaId(int categoria){
        switch(categoria){
        case pistola:
            return "Pistola";
            break;
        case rifle:
            return "Rifle";
            break;
        case pesada:
            return "Pesada";
            break;
        case sub:
            return "Sub-metralhadora";
            break;
        case branca:
            return "Arma branca";
            break;

        default:
            return "Categoria nao cadastrada";
            break;

        }
    }

        void excluir_produto(char usuario_excluir[]){


            int i=0,j;



                for(i=0;i<10;i++){
                    if(!strcmp(usuario_excluir,produto[i].nome)){
                        for(j=i;j<9;j++){
                                if(j+1 == posicao_produto-1) {
                                    produto[j]=produto[j+1];
                                    produto[j+1].codigo = 0;
                                    strcpy(produto[j+1].nome , "");
                                    produto[j+1].categoria = 0;
                                    produto[j+1].preco =0;
                                    posicao_produto--;
                                    break;
                                }
                            produto[j]=produto[j+1];
                        }
                    }
                }


        }

        void exibir_produtos(void){
            int i=0,a=0;
            if(!posicao_produto){
                printf("Nao ha produtos registrados");
                return;
            }
            printf("Deseja listar\n1 - Pistola\n2 - Rifle\n3 - Pesada\n4 - Sub-metralhadora\n5 - Arma Branca\n6-Todos os produtos\n");
            scanf("%d",&a);
                switch(a){

                case pistola:
                    for(i=0;i<posicao_produto;i++){

                        if(produto[i].categoria==pistola){
                            printf("Id: %d\nNome: %s\nPreco: %.2f\n",produto[i].codigo,produto[i].nome,produto[i].preco);
                        }

                    }
                    break;
                    case rifle:
                    for(i=0;i<posicao_produto;i++){

                        if(produto[i].categoria==rifle){
                            printf("Id: %d\nNome: %s\nPreco: %.2f\n",produto[i].codigo,produto[i].nome,produto[i].preco);
                        }

                    }
                    break;
                    case pesada:
                    for(i=0;i<posicao_produto;i++){

                        if(produto[i].categoria==pesada){
                            printf("Id: %d\nNome: %s\nPreco: %.2f\n",produto[i].codigo,produto[i].nome,produto[i].preco);
                        }

                    }
                    break;
                    case sub:
                    for(i=0;i<posicao_produto;i++){

                        if(produto[i].categoria==sub){
                            printf("Id: %d\nNome: %s\nPreco: %.2f\n",produto[i].codigo,produto[i].nome,produto[i].preco);
                        }

                    }
                    break;
                    case branca:
                    for(i=0;i<posicao_produto;i++){

                        if(produto[i].categoria==branca){
                            printf("Id: %d\nNome: %s\nPreco: %.2f\n",produto[i].codigo,produto[i].nome,produto[i].preco);
                        }

                    }
                    break;

                    case 6:
                    for(i=0;i<posicao_produto;i++){
                   printf("Id: %d\nNome: %s\nPreco: %.2f\nCategoria: %s",produto[i].codigo,produto[i].nome,produto[i].preco,categoriaId(produto[i].categoria));

            }


                }
        }

        void cadastrar_produto(void){

            if(posicao_produto<50){

            printf("\nQual categoria deseja adicionar o produto\n1 - Pistola\n2 - Rifle\n3 - Pesada\n4 - Sub-metralhadora\n5 - Arma Branca\n");
            scanf("%d",&produto[posicao_produto].categoria);
            setbuf(stdin, NULL);

            printf("Digite o id do produto: ");
            scanf("%d",&produto[posicao_produto].codigo);

            setbuf(stdin, NULL);
            printf("Digite o nome do produto: ");
            scanf("%[^\n]s", &produto[posicao_produto].nome);
            setbuf(stdin, NULL);

            setbuf(stdin, NULL);

            printf("Digite o preco do produto: ");
            scanf("%lf", &produto[posicao_produto].preco);

            printf("Id do produto: %d\nNome do produto: %s\nCategoria: %s\nPreco: %.2f",produto[posicao_produto].codigo,produto[posicao_produto].nome,categoriaId(produto[posicao_produto].categoria),produto[posicao_produto].preco);

                posicao_produto++;
            }
            else{
                     printf("Banco de dados cheio");
                }
        }

        void preencher_cliente(){

            if(posicao_cliente<10){
            setbuf(stdin, NULL);
            printf("Nome do cliente: ");
            scanf("%[^\n]s", &cliente[posicao_cliente].nome);
            setbuf(stdin, NULL);

            printf("Digite o cpf do cliente: ");
            scanf("%[^\n]s", &cliente[posicao_cliente].cpf);
            setbuf(stdin, NULL);


            printf("Digite um usuario para o cliente(Letras e numeros, maximo 17 caracteres: ");
            scanf("%[^\n]s", &cliente[posicao_cliente].usuario);
            setbuf(stdin, NULL);


            printf("Digite uma senha para o cliente: ");
            scanf("%[^\n]s", &cliente[posicao_cliente].senha);
            setbuf(stdin, NULL);

            printf("Nome do cliente: %s\nCPF: %s\nUsuario: %s\nSenha: %s",cliente[posicao_cliente].nome,cliente[posicao_cliente].cpf,cliente[posicao_cliente].usuario,cliente[posicao_cliente].senha);
                posicao_cliente++;
                }

                else{
                     printf("Banco de dados cheio");
                }

        }

        void excluir_cliente(char usuario_excluir[]){


            int i=0,j;



                for(i=0;i<10;i++){
                    if(!strcmp(usuario_excluir,cliente[i].usuario)){
                        for(j=i;j<9;j++){
                                if(j+1 == posicao_cliente-1) {
                                    cliente[j]=cliente[j+1];
                                    strcpy(cliente[j+1].nome , "");
                                    strcpy(cliente[j+1].cpf , "");
                                    strcpy(cliente[j+1].usuario ,"");
                                    strcpy(cliente[j+1].senha ,"");
                                    posicao_cliente--;
                                    break;
                                }
                            cliente[j]=cliente[j+1];
                        }
                    }
                }


        }

        void exibir_clientes(void){
            int i=0;
            if(!posicao_cliente){
                printf("Nao ha clientes registrados");
                return;
            }
            for(i=0;i<posicao_cliente;i++){

                printf("Nome: %s\nCpf: %s\nUsuario: %s\nSenha: %s\n\n",cliente[i].nome,cliente[i].cpf,cliente[i].usuario,cliente[i].senha);

            }



        }

        void atualizar_cliente(void){
            int opcao,i;
            for(i=0;i<10;i++){
                    if(!strcmp(usuario_excluir,cliente[i].usuario)){
                        printf("Voce deseja atualizar:\n1 - Nome\n2 - CPF\n3 - Usuario\n4 - Senha\n5 - Atualizar tudo\n");
                        scanf("%d",&opcao);
                        switch(opcao){

                            case 1:
                                setbuf(stdin, NULL);
                                printf("Digite um novo nome: ");
                                scanf("%[^\n]s", &cliente[i].nome);
                                setbuf(stdin, NULL);
                                break;

                            case 2:
                                setbuf(stdin, NULL);
                                printf("Digite um novo CPF: ");
                                scanf("%[^\n]s", &cliente[i].cpf);
                                setbuf(stdin, NULL);
                                break;

                            case 3:
                                setbuf(stdin, NULL);
                                printf("Digite um novo Usuario: ");
                                scanf("%[^\n]s", &cliente[i].usuario);
                                setbuf(stdin, NULL);
                                break;

                            case 4:
                                setbuf(stdin, NULL);
                                printf("Digite um novo Senha: ");
                                scanf("%[^\n]s", &cliente[i].senha);
                                setbuf(stdin, NULL);
                                break;

                            case 5:
                                setbuf(stdin, NULL);
                                printf("Digite um novo nome: ");
                                scanf("%[^\n]s", &cliente[i].nome);
                                setbuf(stdin, NULL);
                                setbuf(stdin, NULL);
                                printf("Digite um novo CPF: ");
                                scanf("%[^\n]s", &cliente[i].cpf);
                                setbuf(stdin, NULL);
                                setbuf(stdin, NULL);
                                printf("Digite um novo Usuario: ");
                                scanf("%[^\n]s", &cliente[i].usuario);
                                setbuf(stdin, NULL);
                                setbuf(stdin, NULL);
                                printf("Digite um novo Senha: ");
                                scanf("%[^\n]s", &cliente[i].senha);
                                setbuf(stdin, NULL);
                                break;


                            default:

                                printf("\nOpcao invalida");
                                break;



                        }
                        break;

                    }
                }



        }

            //VERIFICAÇAO DE ACESSO
                int menu_func=0;
                int menu_clien=0;
                char confUsuario[16];
                char confSenha_admin[9];
                char confSenha_cliente[12];
                int op_func;
                int sair=1;

    int main(){
            strcpy(funcionario.usuario,"admin");
            strcpy(funcionario.senha,"123456789");

            int opcao_cliente_funcionario=0;
            int x;
            printf("-----------------------------------------------------------------------------");
            printf("\n|                  Seja bem vindo(a) ao Estoque Easy                        |\n");
            printf("-----------------------------------------------------------------------------");

            printf("\n\n1 - cliente\n2 - funcionario\nDigite: ");
            scanf("%d",&opcao_cliente_funcionario);

            if(opcao_cliente_funcionario==2){
            printf("\n\nUsuario:");
            setbuf(stdin, NULL);
            scanf("%[^\n]s", &confUsuario);
            setbuf(stdin, NULL);
            printf("\nSenha:");
            setbuf(stdin, NULL);
            confSenha_admin[0] = getch();
            printf ("*");
            confSenha_admin[1] = getch();
            printf ("*");
            confSenha_admin[2] = getch();
            printf ("*");
            confSenha_admin[3] = getch();
            printf ("*");
            confSenha_admin[4] = getch();
            printf ("*");
            confSenha_admin[5] = getch();
            printf ("*");
            confSenha_admin[6] = getch();
            printf ("*");
            confSenha_admin[7] = getch();
            printf ("*");
            confSenha_admin[8] = getch();
            printf ("*");

            }
            else if(opcao_cliente_funcionario==1){
                printf("\n\nUsuario:");
                setbuf(stdin, NULL);
                scanf("%[^\n]s", &confUsuario);
                setbuf(stdin, NULL);
                printf("\nSenha:");
                setbuf(stdin, NULL);
                scanf("%[^\n]s", &confSenha_cliente);
                setbuf(stdin, NULL);


            }
            int i;

            if(opcao_cliente_funcionario==2 && !strcmp(confUsuario,funcionario.usuario) && (confSenha_admin[0] == '1') && (confSenha_admin[1] == '2') && (confSenha_admin[2] == '3') && (confSenha_admin[3] == '4') && (confSenha_admin[4] == '5') && (confSenha_admin[5] == '6') && (confSenha_admin[6] == '7') && (confSenha_admin[7] == '8') && (confSenha_admin[8] == '9')){


                    menu_func=1;
                    sair=1;
            }
            for(i=0;i<10;i++){

           if(opcao_cliente_funcionario==1 && !strcmp(confUsuario,cliente[i].usuario) && !strcmp(confSenha_cliente,cliente[i].senha)){
            posicao_cliente_gerar_codigo=i;
            menu_clien=2;
            sair=1;

            }
            }
           if(menu_func==0 && menu_clien==0 ){

                printf("\nUsuario ou senha invalidos");

            }
            while(sair!=0){
                    if(menu_func == 1){
                    printf("\n\n--------------------------------------");
                    printf("\n|   Acesso restrito a funcionarios   |\n");
                    printf("--------------------------------------");
                    printf("\n|1| Cadastrar cliente");
                    printf("\n|2| Apagar cliente");
                    printf("\n|3| Atualizar cliente");
                    printf("\n|4| Imprimir todos os cliente");
                    printf("\n|5| Cadastrar produto");
                    printf("\n|6| Apagar produto");
                    printf("\n|7| Atualizar produto");
                    printf("\n|8| Imprimir dados de todos os produtos");
                    printf("\n|9| Deslogar");
                    printf("\nDigite sua opcao |?|: ");
                    scanf("%d",&op_func);

                    switch(op_func){

                            case 1:
                               preencher_cliente();
                                break;

                            case 2:
                                setbuf(stdin, NULL);
                                printf("\n\n----------------------------------------------------------------------------\n");
                                printf("\nDigite o login do usuario a ser excluido:");
                                scanf("%[^\n]s", &usuario_excluir);
                                excluir_cliente(usuario_excluir);
                                setbuf(stdin, NULL);

                                break;

                            case 3:
                                printf("\n\n----------------------------------------------------------------------------\n");
                                printf("\nAtualizar dados do cliente!");
                                setbuf(stdin, NULL);
                                printf("\nDigite o login do usuario a ser atualizado:");
                                scanf("%[^\n]s", &usuario_excluir);
                                setbuf(stdin, NULL);
                                atualizar_cliente();
                                break;

                            case 4:
                                printf("\n\n----------------------------------------------------------------------------\n");
                                printf("\nImprimir lista de todos os clientes!\n");
                                exibir_clientes();
                                break;

                            case 5:
                                printf("\n\n----------------------------------------------------------------------------\n");
                                printf("\nCadastrar produto\n");
                                setbuf(stdin, NULL);
                                cadastrar_produto();
                                break;

                            case 6:

                                printf("Excluir produtos\n");
                                printf("Nome do produto a ser excluido\n");
                                setbuf(stdin, NULL);
                                scanf("%[^\n]s", &usuario_excluir);
                                setbuf(stdin, NULL);
                                excluir_produto(usuario_excluir);
                                break;

                            case 7:
                                printf("Atualizar produtos\n");
                                setbuf(stdin, NULL);
                                printf("\nDigite o nome do produto a ser atualizado:");
                                scanf("%[^\n]s", &usuario_excluir);
                                setbuf(stdin, NULL);
                                atualizar_produto();
                                break;
                            case 8:
                                printf("Imprimir dados de todos os produtos!\n");
                                if(posicao_produto == 0) printf("Nenhum produto registrado!\n");
                                else exibir_produtos();
                                break;

                            case 9:
                                sair=0;
                                menu_func=0;
                                menu_clien=0;
                                opcao_cliente_funcionario=0;
                                main();
                                break;

                    }
                    }
                    if(menu_clien == 2){
                        printf("\n\n--------------------------------------");
                        printf("\n|   Menu do cliente!  |\n");
                        printf("--------------------------------------");
                        printf("\n|1| Lista de produtos, todos ou por categoria ");
                        printf("\n|2| Listar produtos por preço");
                        printf("\n|3| Comprar produto");
                        printf("\n|4| Devolucao do produto");
                        printf("\n|5| Histórico de compras \n");
                        printf("\n|6| Deslogar");
                        printf("\nDigite sua opcao |?|: ");
                        scanf("%d",&op_func);

                        switch(op_func){

                        case 1:
                            if(posicao_produto == 0) printf("Nenhum produto registrado!\n");
                            else exibir_produtos();
                            break;

                        case 2:
                            listar_preco(produto,posicao_produto);
                            break;
                        case 3:
                            vender_produto();
                            break;
                        case 4:

                            devolucao();
                            break;

                        case 5:
                            historico_();
                            break;
                        case 6:
                            sair=0;
                            menu_func=0;
                            menu_clien=0;
                            opcao_cliente_funcionario=0;
                            main();
                            break;
                        }

                    }
                    printf("\n\n\nDigite 1 para continuar e 0 para sair:");
                    scanf("%d",&sair);
            }

    }
