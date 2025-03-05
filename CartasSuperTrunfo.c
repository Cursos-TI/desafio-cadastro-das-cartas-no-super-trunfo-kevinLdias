#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main() {

    // Declaracao das variaveis
    char estado1, estado2;
    char cod1[15], nome1[50], cod2[15], nome2[50];
    int pTuristicos1, pTuristicos2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidadePopulaciona1, densidadePopulaciona2, pibPerCapita1, pibPerCapita2;

    printf("Informacoes CARTA 1: \n");

    // Leitura das caracteristicas da Carta 1
    printf("Digite a letra que representa o pais/cidade/estado: ");
    scanf(" %c", &estado1);
    getchar(); 

    printf("Digite o codigo da carta: ");
    scanf("%s", cod1);
    getchar(); 

    printf("Digite o nome do pais/cidade/estado: ");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Digite a populacao do pais/cidade/estado: ");
    scanf("%lu", &populacao1);

    printf("Digite a area do pais/cidade/estado: ");
    scanf("%f", &area1);

    printf("Digite o PIB do pais/cidade/estado: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos do pais/cidade/estado: ");
    scanf("%d", &pTuristicos1);
    getchar();

    printf("\nInformacoes CARTA 2: \n");

    // Leitura das caracteristicas da Carta 2
    printf("Digite a letra que representa o pais/cidade/estado: ");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o codigo da carta: ");
    scanf("%s", cod2);
    getchar();

    printf("Digite o nome do pais/cidade/estado: ");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = '\0'; 

    printf("Digite a populacao do pais/cidade/estado: ");
    scanf("%lu", &populacao2);

    printf("Digite a area do pais/cidade/estado: ");
    scanf("%f", &area2);

    printf("Digite o PIB do pais/cidade/estado: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos do pais/cidade/estado: ");
    scanf("%d", &pTuristicos2);

    // Calculando a densidade populacional das cartas
    densidadePopulaciona1 = populacao1 / area1;
    densidadePopulaciona2 = populacao2 / area2;

    /* Calculando o PIB per Capita! | obs: O PIB foi multiplicado por 10 elevado a 9 pois pelo formato de discagem 
    ex: 699.28 ao realizar a divisão pela populacao resultaria em 0, então transformamos 699.28 em bilhôes. */

    pibPerCapita1 = (pib1 * pow(10, 9)) / populacao1;
    pibPerCapita2 = (pib2 * pow(10, 9)) / populacao2;

    // Calculando Super Poder
    float superPoder1 = (float) populacao1 + area1 + pib1 + pTuristicos1 + pibPerCapita1 +
     (1.0 / densidadePopulaciona1);
    float superPoder2 = (float) populacao2 + area2 + pib2 + pTuristicos2 + pibPerCapita2 +
     (1.0 / densidadePopulaciona2);

    // Impressao das caracteristicas das cartas
    printf("\nCARTA 1:\n");
    printf("Pais/cidade/estado: %c\n", estado1);
    printf("Codigo: %s\n", cod1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pTuristicos1);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidadePopulaciona1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCARTA 2:\n");
    printf("Pais/cidade/estado: %c\n", estado2);
    printf("Codigo %s\n", cod2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pTuristicos2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidadePopulaciona2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Incluindo menu switch
    printf("\n ---Selecione abaixo o atributo que deseja comparar---\n");
    printf("[1] - POPULACAO\n");
    printf("[2] - AREA\n");
    printf("[3] - PIB\n");
    printf("[4] - PONTOS TURISTICOS\n");
    printf("[5] - DENSIDADE DEMOGRAFICA\n");
    printf("[6] - SUPER PODER\n");

    int escolha;
    scanf("%d", &escolha);

    // Verificacões após switch + impressão dos resultados
    if (escolha < 1 || escolha > 6) {
        printf("OPCAO INVALIDA!\n");
    }
    else {
        printf("\nNome do pais/cidade/estado 1: %s | Nome do pais/cidade/estado 2: %s\n", nome1, nome2);
        if (escolha == 1) {
            printf("Atributo escolhido: Populacao\n");
            printf("Populacao 1: %lu | Pupulacao 2: %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            }
            else if (populacao1 < populacao2) {
                 printf("Resultado: Carta 2 (%s) venceu!\n", nome2); 
            }
            else { printf("Resultado: Empate!\n"); };
        }
        else if (escolha == 2) {
            printf("Atributo escolhido: Area\n");
            printf("Area 1: %.2f | Area 2: %.2f\n", area1, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            }
            else if (area1 < area2) { 
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2); 
            }
            else { printf("Resultado: Empate!\n"); };
        }
        else if (escolha == 3) {
            printf("Atributo escolhido: PIB\n");
            printf("PIB 1: %.2f | PIB 2: %.2f\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            }
            else if (pib1 < pib2) { 
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2); 
            }
            else { printf("Resultado: Empate!\n"); };
        }
        else if (escolha == 4) {
            printf("Atributo escolhido: Pontos Turisticos\n");
            printf("Pontos turisticos 1: %d | Pontos turisticos 2: %d\n", pTuristicos1, 
                pTuristicos2);
            if (pTuristicos1 > pTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            }
            else if (pTuristicos1 < pTuristicos2) { 
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2); 
            }
            else { printf("Resultado: Empate!\n"); }
        }
        else if (escolha == 5) {
            printf("Atributo escolhido: Densidade Populacional\n");
            printf("Densidade Populacional 1: %.2f | Densidade Populacional 2: %.2f\n", 
                densidadePopulaciona1, densidadePopulaciona2);
            if (densidadePopulaciona1 < densidadePopulaciona2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            }
            else if (densidadePopulaciona1 > densidadePopulaciona2) { 
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2); 
            }
            else { printf("Resultado: Empate!\n"); }
        }
        else {
            printf("Atributo escolhido: Super Poder\n");
            printf("Super Poder 1: %.2f | Super Poder 2: %.2f\n", superPoder1, superPoder2);
            if (superPoder1 > superPoder2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            }
            else if (superPoder1 < superPoder2) { 
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2); 
            }
            else { printf("Resultado: Empate!\n"); }

        }

    }
         
    return 0;
}
