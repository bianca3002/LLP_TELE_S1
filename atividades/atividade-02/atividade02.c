#include <stdio.h>

int main(void) {
    printf("Números inteiros pares entre 1 e 50:\n");

    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) { // Verifica se o número é par
            printf("%d\n", i);
        }
    }

    return 0;
}
