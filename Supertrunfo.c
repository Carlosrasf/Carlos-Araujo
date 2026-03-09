#include <stdio.h>

int main() {

    // Carta 1
    char estado1[50];
    char cidade1[50];
    unsigned long int habitantes1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;
    float Superpoder1;

    // Carta 2
    char estado2[50];
    char cidade2[50];
    unsigned long int habitantes2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;
    float Superpoder2;

    // Entrada de dados Carta 1
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("Quantidade de habitantes: ");
    scanf("%lu", &habitantes1);

    printf("Area da cidade (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cálculos Carta 1
    densidade1 = habitantes1 / area1;
    pibPerCapita1 = pib1 / habitantes1;
    Superpoder1 = (densidade1 + pibPerCapita1 + pontos1) / 3;

    // Entrada de dados Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("Quantidade de habitantes: ");
    scanf("%lu", &habitantes2);

    printf("Area da cidade (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos Carta 2
    densidade2 = habitantes2 / area2;
    pibPerCapita2 = pib2 / habitantes2;
    Superpoder2 = (densidade2 + pibPerCapita2 + pontos2) / 3;

     // Exibição das cartas
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Habitantes: %lu\n", habitantes1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Superpoder: %.2f\n", Superpoder1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Habitantes: %lu\n", habitantes2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Superpoder: %.2f\n", Superpoder2);

        // Comparação das cartas

    printf("\n=== COMPARAÇÃO DAS CARTAS ===\n");    

    printf("Habitantes: Carta 1 venceu? %d\n", habitantes1 > habitantes2);
    printf("Area: Carta 1 venceu? %d\n", area1 > area2);
    printf("PIB: Carta 1 venceu? %d\n", pib1 > pib2);
    printf("Pontos turisticos: Carta 1 venceu? %d\n", pontos1 > pontos2);
    printf("Densidade populacional: Carta 1 venceu? %d\n", densidade1 > densidade2);
    printf("PIB per capita: Carta 1 venceu? %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Superpoder: Carta 1 venceu? %d\n", Superpoder1 > Superpoder2);
        
    return 0;
}
