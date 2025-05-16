#include <stdio.h>
#define TAM_MAX 100

int main() {
    // Dados da Carta 1
    char estado1 = 'B';
    char codigo1[5] = "B01";
    char nomeCidade1[TAM_MAX] = "São Paulo";
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    // Dados da Carta 2
    char estado2 = 'M';
    char codigo2[5] = "M01";
    char nomeCidade2[TAM_MAX] = "Cidade do México";
    unsigned long int populacao2 = 9000000;
    float area2 = 1485.00;
    float pib2 = 350.50;
    int pontosTuristicos2 = 70;

    // Cálculos - Carta 1
    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;
    float superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // Cálculos - Carta 2
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;
    float superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // Exibição dos dados
    printf("=== Carta 1 ===\n");
    printf("Estado: %c\nCódigo: %s\nNome: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bi\n", estado1, codigo1, nomeCidade1, populacao1, area1, pib1);
    printf("Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f R$\nSuper Poder: %.2f\n\n", pontosTuristicos1, densidade1, pibPerCapita1, superPoder1);

    printf("=== Carta 2 ===\n");
    printf("Estado: %c\nCódigo: %s\nNome: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bi\n", estado2, codigo2, nomeCidade2, populacao2, area2, pib2);
    printf("Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f R$\nSuper Poder: %.2f\n\n", pontosTuristicos2, densidade2, pibPerCapita2, superPoder2);

    // Comparações (1 = Carta 1 venceu, 0 = Carta 2 venceu)
    printf("=== Comparação de Cartas ===\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // Menor vence!
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
