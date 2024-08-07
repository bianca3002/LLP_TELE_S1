// 1. Atividade com `if`:
// - Descrição: Escreva um programa que leia um número inteiro e verifique se ele é positivo, negativo ou zero. Use a declaração `if`.
// - Dica: Use a função `scanf` para ler o número e compare-o com zero.
#include<stdio.h> 

int verifica_numero() {
    int num;
    printf("digite um numero: \n");
    scanf("%d",&num);
    if(num>0){
        printf("O numero %d é positivo\n",num);
    }
    if(num<0){
        printf("O numero %d é negativo\n",num);
    }
    if(num==0){
        printf("O numero %d é zero\n",num);
    }

    return 3;
}

// 2. Atividade com `if else`:
// - Descrição: Crie um programa que determine se um ano é bissexto ou não. 
//  Um ano é bissexto se for divisível por 4, exceto quando é divisível por 100 (a menos que também seja divisível por 400).
// - Dica: Use a declaração `if else` para verificar as condições.

int verifica_bissexto() {
    int ano;

    // Solicita ao usuário que insira um ano
    printf("Digite um ano: ");
    scanf("%d", &ano);

    // Verifica se o ano é bissexto usando if else
    if (ano % 400 == 0) {
        printf("%d é um ano bissexto.\n", ano);
    } else if (ano % 100 == 0) {
        printf("%d não é um ano bissexto.\n", ano);
    } else if (ano % 4 == 0) {
        printf("%d é um ano bissexto.\n", ano);
    } else {
        printf("%d não é um ano bissexto.\n", ano);
    }

    return 0;
}


// 3. Atividade com `switch`:
// - Descrição: Implemente um programa que leia um número de 1 a 7 e exiba o dia da semana correspondente (1 = domingo, 2 = segunda-feira, etc.).
// - Dica: Use a estrutura `switch` para associar os números aos dias da semana.


int exibir_dia_da_semana() {
    int dia;

    // Solicita ao usuário que insira um número entre 1 e 7
    printf("Digite um número de 1 a 7: ");
    scanf("%d", &dia);

    // Verifica o número e exibe o dia da semana correspondente usando switch
    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Número inválido! Digite um número entre 1 e 7.\n");
            break;
    }

    return 0;
}

// 4. Atividade com Operador Ternário:
// - Descrição: Escreva um programa que leia dois números inteiros e exiba o maior deles usando o operador ternário.
// - Dica: Use a expressão `(a > b) ? a : b` para encontrar o maior número.

int exibe_maior() {
    int a, b, maior;

    // Solicita ao usuário que insira dois números inteiros
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    // Usa o operador ternário para determinar o maior número
    maior = (a > b) ? a : b;

    // Exibe o maior número
    printf("O maior número é: %d\n", maior);

    return 0;
}

// Lembre-se de testar seus programas com diferentes entradas para garantir que funcionem corretamente! 🌟

int main() {
    verifica_numero();
    verifica_bissexto();
    exibir_dia_da_semana();
    exibe_maior();
}
