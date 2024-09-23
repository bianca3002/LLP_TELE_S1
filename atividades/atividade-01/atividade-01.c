#include <stdio.h>

int main(void) {
    int x;

    // Solicita ao usuário que insira a pontuação
    printf("Digite a pontuação do jogador (0 a 100): ");
    scanf("%d", &x);

    // Avalia a pontuação e imprime a mensagem correspondente
    if (x < 0 || x > 100) {
        printf("Pontuação inválida! A pontuação deve estar entre 0 e 100.\n");
    } else if (x >= 0 && x < 10) {
        printf("Insuficiente\n");
    } else if (x >= 10 && x < 40) {
        printf("Regular\n");
    } else if (x >= 40 && x < 70) {
        printf("Bom\n");
    } else if (x >= 70 && x < 90) {
        printf("Ótimo\n");
    } else if (x >= 90 && x <= 100) {
        printf("Excelente\n");
    }

    return 0;
}
