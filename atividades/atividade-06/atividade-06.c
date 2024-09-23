#include <stdio.h>
#include <string.h>

// Estrutura de dados para armazenar os produtos
typedef struct {
    int codigo;
    char descricao[50];
    float valorUnitario;
    int qtdEstoque;
    float valorEstoque;
} Produto;

// Array de structs para armazenar os produtos
Produto produtos[100];

// Função para mostrar o menu principal
void mostrarMenu() {
    printf("----------------------------------------------------------------------\n");
    printf("Sistema de Estoque\n");
    printf("----------------------------------------------------------------------\n");
    printf("1) Entrada de Produtos\n");
    printf("2) Listar os Produtos\n");
    printf("3) Valor Total do Estoque\n");
    printf("4) Fim\n");
    printf("Opção: __\n");
    printf("----------------------------------------------------------------------\n");
}

// Função para entrada de cadastro de produtos
void entradaCadastroProduto() {
    Produto produto;
    printf("----------------------------------------------------------------------\n");
    printf("Entrada de Cadastro de Produtos\n");
    printf("----------------------------------------------------------------------\n");
    printf("Código: ");
    scanf("%d", &produto.codigo);
    printf("Descrição: ");
    fgets(produto.descricao, 50, stdin);
    produto.descricao[strlen(produto.descricao) - 1] = '\0'; // remover o caractere de newline
    printf("Valor Unitário: ");
    scanf("%f", &produto.valorUnitario);
    printf("Qtd Estoque: ");
    scanf("%d", &produto.qtdEstoque);
    produto.valorEstoque = produto.valorUnitario * produto.qtdEstoque;
    printf("Valor Estoque: %.2f\n", produto.valorEstoque);
    printf("Digite (1-Para Gravar, 2-Voltar a tela inicial) : ");
    int opcao;
    scanf("%d", &opcao);
    if (opcao == 1) {
        // Gravar os dados no array de structs
        for (int i = 0; i < 100; i++) {
            if (produtos[i].codigo == 0) {
                produtos[i] = produto;
                break;
            }
        }
    }
}

int main() {
    int opcao;
    do {
        mostrarMenu();
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                entradaCadastroProduto();
                break;
            case 2:
                // Listar os produtos (implementação pendente)
                break;
            case 3:
                // Valor Total do Estoque (implementação pendente)
                break;
            case 4:
                printf("Fim do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);
    return 0;
}
