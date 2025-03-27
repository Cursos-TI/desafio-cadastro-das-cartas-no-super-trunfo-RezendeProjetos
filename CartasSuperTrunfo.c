#include <stdio.h>

int main() {
    // Criando duas variáveis grandes para armazenar todas as entradas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada dos dados da Carta 1
    printf("Digite o estado da primeira carta (A-H): \n");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta (ex: A01): \n");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade da primeira carta: \n");
    scanf(" %20[^\n]", nomecidade1);
    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade (km²): \n");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade (bilhões de reais): \n");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosTuristicos1);

    // Entrada dos dados da Carta 2
    printf("\nDigite o estado da segunda carta (A-H): \n");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta (ex: B02): \n");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade da segunda carta: \n");
    scanf(" %20[^\n]", nomecidade2);
    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao2);
    printf("Digite a área da cidade (km²): \n");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade (bilhões de reais): \n");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosTuristicos2);

    // Exibição das informações das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: A%s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: B%s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

