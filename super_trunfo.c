#include <stdio.h>
#include <ctype.h> // Para usar toupper()

int main()
{
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Leitura dos dados da primeira carta
    printf("Cadastro da Carta 1:\n");

    // Estado
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    estado1 = toupper(estado1); // Converte para maiúscula

    // Código da Carta
    printf("Código da Carta (ex: %c01): ", estado1);
    scanf("%s", codigo1);

    // Nome da Cidade
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    // População
    printf("População: ");
    scanf("%d", &populacao1);

    // Área
    printf("Área (em km²): ");
    scanf("%f", &area1);

    // PIB
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    // Número de Pontos Turísticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura dos dados da segunda carta
    printf("\nCadastro da Carta 2:\n");

    // Estado
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    estado2 = toupper(estado2); // Converte para maiúscula

    // Código da Carta
    printf("Código da Carta (ex: %c02): ", estado2);
    scanf("%s", codigo2);

    // Nome da Cidade
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    // População
    printf("População: ");
    scanf("%d", &populacao2);

    // Área
    printf("Área (em km²): ");
    scanf("%f", &area2);

    // PIB
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    // Número de Pontos Turísticos
    printf("Número de Pontos Turísticos: ");
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
