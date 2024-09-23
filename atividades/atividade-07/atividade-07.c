#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct {
    int codigo;
    char descricao[100];
    float valor_unitario;
    int quantidade_estoque;
} Produto;

Produto produtos[MAX_PRODUTOS];
int num_produtos = 0;

void cadastrarProduto() {
    if (num_produtos >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido!\n");
        return;
    }
    Produto p;
    printf("Digite o codigo do produto: ");
    scanf("%d", &p.codigo);
    printf("Digite a descricao do produto: ");
    getchar();  // Limpar o buffer
    fgets(p.descricao, 100, stdin);
    p.descricao[strcspn(p.descricao, "\n")] = 0; // Remove a nova linha
    printf("Digite o valor unitario: ");
    scanf("%f", &p.valor_unitario);
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &p.quantidade_estoque);
    produtos[num_produtos++] = p;
    printf("Produto cadastrado com sucesso!\n");
}

void consultarProduto() {
    int codigo, i;
    printf("Digite o codigo do produto a ser consultado: ");
    scanf("%d", &codigo);
    for (i = 0; i < num_produtos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Produto encontrado:\n");
            printf("Codigo: %d\n", produtos[i].codigo);
            printf("Descricao: %s\n", produtos[i].descricao);
            printf("Valor Unitario: %.2f\n", produtos[i].valor_unitario);
            printf("Quantidade em Estoque: %d\n", produtos[i].quantidade_estoque);

            printf("Digite a nova descricao: ");
            getchar();  // Limpar o buffer
            fgets(produtos[i].descricao, 100, stdin);
            produtos[i].descricao[strcspn(produtos[i].descricao, "\n")] = 0; // Remove a nova linha
            printf("Digite o novo valor unitario: ");
            scanf("%f", &produtos[i].valor_unitario);
            printf("Digite a nova quantidade em estoque: ");
            scanf("%d", &produtos[i].quantidade_estoque);
            printf("Produto atualizado com sucesso!\n");
            return;
        }
    }
    printf("Produto nao encontrado.\n");
}

void listarProdutos() {
    printf("Lista de Produtos:\n");
    for (int i = 0; i < num_produtos; i++) {
        float valor_estoque = produtos[i].valor_unitario * produtos[i].quantidade_estoque;
        printf("Codigo: %d, Descricao: %s, Valor Unitario: %.2f, Quantidade: %d, Valor Estoque: %.2f\n",
               produtos[i].codigo, produtos[i].descricao, produtos[i].valor_unitario,
               produtos[i].quantidade_estoque, valor_estoque);
    }
}

void excluirProduto() {
    int codigo, i, j;
    printf("Digite o codigo do produto a ser excluido: ");
    scanf("%d", &codigo);
    for (i = 0; i < num_produtos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Produto encontrado:\n");
            printf("Codigo: %d\n", produtos[i].codigo);
            printf("Descricao: %s\n", produtos[i].descricao);
            printf("Valor Unitario: %.2f\n", produtos[i].valor_unitario);
            printf("Quantidade em Estoque: %d\n", produtos[i].quantidade_estoque);
            char confirmacao;
            printf("Deseja excluir este produto? (s/n): ");
            getchar(); // Limpar o buffer
            scanf("%c", &confirmacao);
            if (confirmacao == 's' || confirmacao == 'S') {
                for (j = i; j < num_produtos - 1; j++) {
                    produtos[j] = produtos[j + 1];
                }
                num_produtos--;
                printf("Produto excluido com sucesso!\n");
            } else {
                printf("Exclusao cancelada.\n");
            }
            return;
        }
    }
    printf("Produto nao encontrado.\n");
}

int main() {
    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1) Cadastrar Produto\n");
        printf("2) Consultar Produto para Alteracao\n");
        printf("3) Listar todos os produtos\n");
        printf("4) Exclusao do Produto\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProduto();
                break;
            case 2:
                consultarProduto();
                break;
            case 3:
                listarProdutos();
                break;
            case 4:
                excluirProduto();
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
