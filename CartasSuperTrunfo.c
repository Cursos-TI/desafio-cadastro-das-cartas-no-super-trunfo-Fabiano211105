#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Leitura dos dados da primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H): \n");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): \n");
    scanf("%s", codigo1);
    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", cidade1);
    printf("População: \n");
    scanf("%d", &populacao1);
    printf("Área (em km²): \n");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    // Leitura dos dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (A-H): \n");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): \n");
    scanf("%s", codigo2);
    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", cidade2);
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Área (em km²): \n");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
