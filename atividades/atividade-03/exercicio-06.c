// 1. Atividade com Array Unidimensional:
// - Descrição: Escreva um programa que leia 5 números inteiros do usuário e armazene-os em um array. Em seguida, exiba a soma desses números.
// - Dica: Use um loop `for` para ler os números e outro loop para calcular a soma.

#include <stdio.h>

int array_unidimensional() {
    int numeros[5]; // Array para armazenar 5 números
    int soma = 0; // Variável para armazenar a soma

    // Leitura dos números
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Cálculo da soma
    for (int i = 0; i < 5; i++) {
        soma += numeros[i];
    }

    // Exibição da soma
    printf("A soma dos números é: %d\n", soma);

    return 0;
}



// 2. Atividade com Array Multidimensional (Matriz):
// - Descrição: Crie um programa que leia uma matriz 3x3 (ou seja, uma matriz com 3 linhas e 3 colunas) e exiba a soma dos elementos da diagonal principal.
// - Dica: Use um loop `for` aninhado para ler os elementos da matriz e calcule a soma dos elementos da diagonal principal.

int array_multidimensional_matriz() {
    int matriz[3][3]; // Matriz 3x3
    int soma_diagonal = 0; // Variável para armazenar a soma da diagonal principal

    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da soma dos elementos da diagonal principal
    for (int i = 0; i < 3; i++) {
        soma_diagonal += matriz[i][i];
    }

    // Exibição da soma da diagonal principal
    printf("A soma dos elementos da diagonal principal é: %d\n", soma_diagonal);

    return 0;
}

int main(){
   array_unidimensional();
  array_multidimensional_matriz();
  return 0;
  
}
