#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int turismo1;

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;
  // Área para entrada de dados

    printf("<-- Dados da carta 1 --> \n \n");

    printf("Estado (A-H): \n");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): \n");
    scanf("%s", codigo1);
    printf("Cidade: \n");
    scanf("%s", cidade1);
    printf("População (em Milhões de habitantes): \n");
    scanf("%d", &populacao1);
    printf("Área (em km²): \n");
    scanf(" %f", &area1);
    printf("PIB (em Bilhões de Reais): \n");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turismo1);

    printf("\n \n");

    printf("<-- Dados da Carta 2 --> \n \n");

    printf("Estado (A-H): \n");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): \n");
    scanf("%s", codigo2);
    printf("cidade: \n");
    scanf("%s", cidade2);
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Área (em km²): \n");
    scanf(" %f", &area2);
    printf("PIB (em Bilhões de Reais): \n");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turismo2);

  // Área para exibição dos dados da cidade

    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);

return 0;
} 
