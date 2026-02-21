#include <stdio.h>

int main() {

    // =========================
    // 1️⃣ CRIANDO O TABULEIRO
    // =========================
    
    // Matriz 10x10 (10 linhas e 10 colunas)
    int tabuleiro[10][10];

    // Preenchendo todo o tabuleiro com 0 (água)
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // =========================
    // 2️⃣ CRIANDO OS NAVIOS
    // =========================

    // Vetores representando navios de tamanho 3
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // =========================
    // 3️⃣ POSICIONANDO NAVIO HORIZONTAL
    // =========================

    int linhaH = 2;     // linha onde o navio ficará
    int colunaH = 4;    // coluna inicial

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    // =========================
    // 4️⃣ POSICIONANDO NAVIO VERTICAL
    // =========================

    int linhaV = 5;     // linha inicial
    int colunaV = 7;    // coluna fixa

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    // =========================
    // 5️⃣ EXIBINDO O TABULEIRO
    // =========================

    printf("=== TABULEIRO BATALHA NAVAL ===\n\n");

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}