#include <stdio.h>
#include <string.h>

int main() {
    // Declaracao das variaveis
    char estado1, estado2;
    char cod1[15], nome1[50], cod2[15], nome2[50];
    int populacao1, populacao2, pTuristicos1, pTuristicos2;
    float area1, area2, pib1, pib2;

    printf("Informacoes CARTA 1: \n");

    // Leitura das caracteristicas da Carta 1
    printf("Digite a letra que representa o estado: ");
    scanf(" %c", &estado1);
    getchar(); 

    printf("Digite o codigo da carta: ");
    scanf("%s", cod1);
    getchar(); 

    printf("Digite o nome da cidade: ");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pTuristicos1);
    getchar();

    printf("\nInformacoes CARTA 2: \n");

    // Leitura das caracteristicas da Carta 2
    printf("Digite a letra que representa o estado: ");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o codigo da carta: ");
    scanf("%s", cod2);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = '\0'; 

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pTuristicos2);

    // Impressao das caracteristicas das cartas
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cod1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pTuristicos1);

    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo %s\n", cod2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pTuristicos2);

    return 0;
}