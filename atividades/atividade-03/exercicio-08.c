// 1. Calculadora Simples
// - Crie um programa que leia dois números inteiros do usuário e exiba a soma, subtração, multiplicação e divisão desses números.

#include <stdio.h>

int calculadora_simples() {
    int num1, num2;
    float soma, subtracao, multiplicacao, divisao;

    // Ler dois números inteiros do usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Calcular a soma, subtração, multiplicação e divisão
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    if (num2 != 0) {
        divisao = (float)num1 / num2;
        printf("Divisão: %.2f\n", divisao);
    } else {
        printf("Divisão por zero não permitida\n");
    }

    // Exibir os resultados
    printf("Soma: %d\n", (int)soma);
    printf("Subtração: %d\n", (int)subtracao);
    printf("Multiplicação: %d\n", (int)multiplicacao);

    return 0;
}



// 2. Conversão de Temperatura
// - Escreva um programa que converta uma temperatura em graus Celsius para Fahrenheit. O usuário deve inserir a temperatura em Celsius.


int conversao_temperatura() {
    float celsius, fahrenheit;

    // Ler a temperatura em graus Celsius
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    // Converter para Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Exibir o resultado
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}



// 3. Exercício: Verificação de Número Par
// - Peça ao usuário para digitar um número inteiro. Verifique se o número é par ou ímpar e exiba a mensagem correspondente.


int verificacao_numero_par() {
    int numero;

    // Ler um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verificar se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O número é par.\n");
    } else {
        printf("O número é ímpar.\n");
    }

    return 0;
}


// 4. Cálculo de Média Ponderada
// - Leia três notas (pesos 2, 3 e 5) e calcule a média ponderada. Exiba a média resultante.


int caculo_media_ponderada() {
    float nota1, nota2, nota3, media;

    // Ler três notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcular a média ponderada
    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2 + 3 + 5);

    // Exibir o resultado
    printf("Média Ponderada: %.2f\n", media);

    return 0;
}


// 5. Troca de Valores
// - Leia dois números inteiros e troque seus valores sem usar uma variável temporária.


int troca_de_valores() {
    int a, b;

    // Ler dois números inteiros
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    // Trocar os valores sem usar variável temporária
    a = a + b;
    b = a - b;
    a = a - b;

    // Exibir os resultados
    printf("Após troca, o primeiro número é: %d\n", a);
    printf("Após troca, o segundo número é: %d\n", b);

    return 0;
}

int main(){
  calculadora_simples();
 conversao_temperatura();
 verificacao_numero_par();
 caculo_media_ponderada();
 troca_de_valores();
  return 0;
}

