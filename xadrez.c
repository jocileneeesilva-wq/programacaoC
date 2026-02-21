#include <stdio.h>

int main() {

    int i;

    // =========================
    // TORRE - usando FOR
    // Move 5 casas para a direita
    // =========================

    printf("=== Movimento da Torre ===\n");

    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }


    // =========================
    // BISPO - usando WHILE
    // Move 5 casas na diagonal (Cima + Direita)
    // =========================

    printf("\n=== Movimento do Bispo ===\n");

    i = 1;
    while (i <= 5) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }


    // =========================
    // RAINHA - usando DO-WHILE
    // Move 8 casas para a esquerda
    // =========================

    printf("\n=== Movimento da Rainha ===\n");

    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= 8);


    return 0;
}