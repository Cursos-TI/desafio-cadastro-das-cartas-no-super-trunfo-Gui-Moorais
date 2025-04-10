#include <stdio.h> 
#define TAM_MAX 100
//desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Dados da carta do Brasil
    char estado1 = 'B'; // Brasil
    char codigo1[5] = "B01";
    char nomeCidade1[TAM_MAX] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    // Dados da carta do México
    char estado2 = 'M'; // México
    char codigo2[5] = "M01";
    char nomeCidade2[TAM_MAX] = "Cidade do México";
    int populacao2 = 9000000;
    float area2 = 1485.00;
    float pib2 = 350.50;
    int pontosTuristicos2 = 70;

    // Exibição dos dados da carta do Brasil
    printf("Carta 1 (Brasil):\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n");

    // Exibição dos dados da carta do México
    printf("Carta 2 (México):\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}