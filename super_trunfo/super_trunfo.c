#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade_populacional1 = (float) populacao1 / area1;
    pib_per_capita1 = pib1 / (float) populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pib_per_capita1 + (1.0f / densidade_populacional1);

    // --- Cadastro da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código: ");
    scanf("%s", codigo2);
    printf("Digite a cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = pib2 / (float) populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pib_per_capita2 + (1.0f / densidade_populacional2);

    // --- Exibição detalhada para conferência ---
    printf("\n--- Dados da Carta 1: %s (%s) ---\n", nomeCidade1, codigo1);
    printf("População: %lu | Área: %.2f | PIB: %.2f | Pontos: %d\n", populacao1, area1, pib1, pontosTuristicos1);
    printf("Densidade: %.2f | PIB per Capita: %.5f | Super Poder: %.2f\n", densidade_populacional1, pib_per_capita1, super_poder1);

    printf("\n--- Dados da Carta 2: %s (%s) ---\n", nomeCidade2, codigo2);
    printf("População: %lu | Área: %.2f | PIB: %.2f | Pontos: %d\n", populacao2, area2, pib2, pontosTuristicos2);
    printf("Densidade: %.2f | PIB per Capita: %.5f | Super Poder: %.2f\n", densidade_populacional2, pib_per_capita2, super_poder2);

    // --- Resultados da Comparação ---
    printf("\nComparação de Cartas:\n");
    
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_populacional1 < densidade_populacional2) ? 1 : 2, densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, super_poder1 > super_poder2);

    return 0;
}