#include <stdio.h>   // Biblioteca para usar printf e scanf

int main() {

    // =========================
    // DECLARAÇÃO DAS VARIÁVEIS
    // =========================

    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    int opcao; // variável para escolher o atributo

    // =========================
    // ENTRADA DE DADOS - CARTA 1
    // =========================

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);


    // =========================
    // ENTRADA DE DADOS - CARTA 2
    // =========================

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // =========================
    // SAÍDA DE DADOS
    // =========================

    printf("\n\n===== DADOS CADASTRADOS =====\n");

    printf("\nCarta 1:\n");
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    // =========================
    // COMPARAÇÃO DAS CARTAS
    // =========================

    printf("\n=== ESCOLHA O ATRIBUTO PARA COMPARAR ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO ===\n");

    if (opcao == 1) {
        if (populacao1 > populacao2)
            printf("Carta 1 (%s) venceu!\n", cidade1);
        else if (populacao2 > populacao1)
            printf("Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Empate!\n");
    }
    else if (opcao == 2) {
        if (area1 > area2)
            printf("Carta 1 (%s) venceu!\n", cidade1);
        else if (area2 > area1)
            printf("Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Empate!\n");
    }
    else if (opcao == 3) {
        if (pib1 > pib2)
            printf("Carta 1 (%s) venceu!\n", cidade1);
        else if (pib2 > pib1)
            printf("Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Empate!\n");
    }
    else if (opcao == 4) {
        if (pontosTuristicos1 > pontosTuristicos2)
            printf("Carta 1 (%s) venceu!\n", cidade1);
        else if (pontosTuristicos2 > pontosTuristicos1)
            printf("Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Empate!\n");
    }
    else {
        printf("Opcao invalida!\n");
    }

    return 0;
}