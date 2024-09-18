#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char linha[256];
    char nomeArquivo[] = "texto.txt";

    // Criar e abrir o arquivo para escrita
    file = fopen(nomeArquivo, "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    // Laço para inserir linhas de texto
    printf("Digite linhas de texto (digite 'sair' para encerrar):\n");
    while (1) {
        fgets(linha, sizeof(linha), stdin);
        // Remover o newline no final da string
        linha[strcspn(linha, "\n")] = 0;

        // Verifica se o usuário digitou 'sair'
        if (strcmp(linha, "sair") == 0) {
            break;
        }

        // Gravar a linha no arquivo
        fprintf(file, "%s\n", linha);
    }

    // Fechar o arquivo
    fclose(file);

    // Abrir o arquivo para leitura
    file = fopen(nomeArquivo, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    // Ler e mostrar o conteúdo do arquivo
    printf("\nConteúdo do arquivo:\n");
    while (fgets(linha, sizeof(linha), file) != NULL) {
        printf("%s", linha);
    }

    // Fechar o arquivo
    fclose(file);

    return 0;
}

