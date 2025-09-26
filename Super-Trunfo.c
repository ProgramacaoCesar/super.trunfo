#include <stdio.h>

int main() {
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[50] = "Curitiba";
    int populacao1 = 2000000;
    float area1 = 5000000.0;
    float pib1 = 50000000.0;
    int pontosTuristicos1 = 20;

    char estado2 = 'B';
    char codigo2[4] = "A02";
    char cidade2[50] = "Florianopolis";
    int populacao2 = 500000;
    float area2 = 3000000.0;
    float pib2 = 2000000.0;
    int pontosTuristicos2 = 50;

    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
