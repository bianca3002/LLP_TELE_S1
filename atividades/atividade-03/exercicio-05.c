//1 Atividade com while:
// - Descrição: Escreva um programa que exiba os números pares de 1 a 10 usando um loop while.
// - Dica: Use o operador de módulo (%) para verificar se um número é par.
#include <stdio.h>

int exiba_numeros_pares() {
    int i = 1; // Inicia o contador

    while (i <= 10) {
        if (i % 2 == 0) { // Verifica se o número é par
            printf("%d\n", i);
        }
        i++; // Incrementa o contador
    }

    return 0;
}


//2. Atividade com do while:
// - Descrição: Crie um programa que solicite ao usuário que adivinhe um número entre 1 e 100. O programa deve continuar pedindo até que o usuário acerte o número ou digite -1 para sair.
// - Dica: Use um loop do while para repetir a solicitação.
int adivinhe_numero() {
    int numero_secreto = 42; // Número secreto para adivinhação
    int palpite;

    do {
        printf("Adivinhe o número entre 1 e 100 (ou digite -1 para sair): ");
        scanf("%d", &palpite);

        if (palpite == -1) {
            printf("Saindo do jogo...\n");
            break;
        }

        if (palpite < numero_secreto) {
            printf("Muito baixo! Tente novamente.\n");
        } else if (palpite > numero_secreto) {
            printf("Muito alto! Tente novamente.\n");
        } else {
            printf("Parabéns! Você acertou o número!\n");
        }
    } while (palpite != numero_secreto && palpite != -1);

    return 0;
}


//3. Atividade com for:
// - Descrição: Escreva um programa que calcule a soma dos primeiros 10 números inteiros positivos usando um loop for.
// - Dica: Use uma variável acumuladora para calcular a soma.
int calcule_a_soma() {
    int soma = 0;

    for (int i = 1; i <= 10; i++) {
        soma += i; // Adiciona o número atual à soma
    }

    printf("A soma dos primeiros 10 números inteiros positivos é %d\n", soma);

    return 0;
}

int main() {
    exiba_numeros_pares();
    adivinhe_numero();
    calcule_a_soma();
    return 0;
}
    
