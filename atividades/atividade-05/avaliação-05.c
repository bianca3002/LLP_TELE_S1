 // 1. Criar um arquivo que armazena linhas de textos
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Criar um arquivo que armazena linhas de textos
    FILE *arquivo = fopen("meu_arquivo.txt", "w"); // Abre o arquivo em modo de escrita
    if (arquivo == NULL) {
        printf("Erro ao criar arquivo!\n");
        return 1;
    }

    // Gravar a string lida do teclado no arquivo
    char linha[1024]; // Buffer para armazenar a linha de texto
    printf("Digite uma linha de texto: ");
    fgets(linha, 1024, stdin); // Lê a linha de texto do teclado
    fprintf(arquivo, "%s", linha); // Escreve a linha no arquivo

    fclose(arquivo); // Fecha o arquivo

    return 0;
}

    // 2. O Arquivo será alimentado por dados digitados no teclado
    char linha[1024]; // Buffer para armazenar a linha de texto
   
printf("Digite as linhas de texto (digite 'sair' para terminar):\n");
    while (1) {
        printf("> ");
        fgets(linha, 1024, stdin); // Lê a linha de texto do teclado
        if (strcmp(linha, "sair\n") == 0) {
            break; // Sai do loop quando o usuário digita 'sair'
        }
        fprintf(arquivo, "%s", linha); // Escreve a linha no arquivo
    }

    // 3. Mostrar o conteúdo do arquivo

1. Opção 1
    fclose(arquivo); // Fecha o arquivo
    arquivo = fopen("meu_arquivo.txt", "r"); // Abre o arquivo em modo de leitura
    if (arquivo == NULL) {
        printf("Erro ao ler arquivo!\n");
        return 1;
    }
    char caractere;
    while ((caractere = fgetc(arquivo)) != EOF) {
        printf("%c", caractere); // Imprime o conteúdo do arquivo
    }
    fclose(arquivo); // Fecha o arquivo novamente

    return 0;
}

2.Opção 2
   
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Abrir o arquivo em modo de leitura
    FILE *arquivo = fopen("meu_arquivo.txt", "r"); // Abre o arquivo em modo de leitura
    if (arquivo == NULL) {
        printf("Erro ao ler arquivo!\n");
        return 1;
    }

    // Ler cada linha do arquivo e mostrar
    char linha[1024]; // Buffer para armazenar a linha de texto
    printf("Conteúdo do arquivo:\n");
    while (fgets(linha, 1024, arquivo) != NULL) {
        printf("%s", linha); // Mostra a linha
    }

    // Fechar o arquivo
    fclose(arquivo); // Fecha o arquivo

    return 0;
}

