#include <stdio.h>
#include <string.h>
#include <math.h>

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
    printf("Codigo: %s\n", cod2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pTuristicos2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidadePopulaciona2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Incluindo menu switch
    printf("\n ---Selecione abaixo o primeiro atributo que deseja comparar---\n");
    printf("[1] - POPULACAO\n");
    printf("[2] - AREA\n");
    printf("[3] - PIB\n");
    printf("[4] - PONTOS TURISTICOS\n");
    printf("[5] - DENSIDADE DEMOGRAFICA\n");
    printf("[6] - SUPER PODER\n");

    int escolha1;
    scanf("%d", &escolha1);

    if (escolha1< 1 || escolha1 > 6) {
        printf("OPCAO INVALIDA!\n");
    }
    else {
        switch (escolha1) {
            case 1:
                printf("\n ---Agora selecione abaixo o segundo atributo que deseja comparar---\n");
                printf("[X] - JA SELECIONADA\n");
                printf("[2] - AREA\n");
                printf("[3] - PIB\n");
                printf("[4] - PONTOS TURISTICOS\n");
                printf("[5] - DENSIDADE DEMOGRAFICA\n");
                printf("[6] - SUPER PODER\n");
                break;   
            case 2:
                printf("\n ---Agora selecione abaixo o segundo atributo que deseja comparar---\n");
                printf("[1] - POPULACAO\n");
                printf("[X] - JA SELECIONADA\n");
                printf("[3] - PIB\n");
                printf("[4] - PONTOS TURISTICOS\n");
                printf("[5] - DENSIDADE DEMOGRAFICA\n");
                printf("[6] - SUPER PODER\n");
                break;
            case 3:
                printf("\n ---Agora selecione abaixo o segundo atributo que deseja comparar---\n");
                printf("[1] - POPULACAO\n");
                printf("[2] - AREA\n");
                printf("[X] - JA SELECIONADA\n");
                printf("[4] - PONTOS TURISTICOS\n");
                printf("[5] - DENSIDADE DEMOGRAFICA\n");
                printf("[6] - SUPER PODER\n");
                break;
            case 4:
                printf("\n ---Agora selecione abaixo o segundo atributo que deseja comparar---\n");
                printf("[1] - POPULACAO\n");
                printf("[2] - AREA\n");
                printf("[3] - PIB\n");
                printf("[X] - JA SELECIONADA\n");
                printf("[5] - DENSIDADE DEMOGRAFICA\n");
                printf("[6] - SUPER PODER\n");
                break;
            case 5:
                printf("\n ---Agora selecione abaixo o segundo atributo que deseja comparar---\n");
                printf("[1] - POPULACAO\n");
                printf("[2] - AREA\n");
                printf("[3] - PIB\n");
                printf("[4] - PONTOS TURISTICOS\n");
                printf("[X] - JA SELECIONADA\n");
                printf("[6] - SUPER PODER\n");
                break;
            default:
                printf("\n ---Agora selecione abaixo o segundo atributo que deseja comparar---\n");
                printf("[1] - POPULACAO\n");
                printf("[2] - AREA\n");
                printf("[3] - PIB\n");
                printf("[4] - PONTOS TURISTICOS\n");
                printf("[5] - DENSIDADE DEMOGRAFICA\n");
                printf("[X] - JA SELECIONADA\n");
        }
        int escolha2;
        scanf("%d", &escolha2);

        int validacao = escolha1 == escolha2 ? 1 : 0;

        if (validacao == 1) {
            printf("\nOPCAO JA SELECIONADA\n");
        }
        else {
            float somaDosAtributos1 = 0;
            float somaDosAtributos2 = 0;
            // Comparando o primeiro atributo selecionado e realizando a soma
            int result1;
            printf("\nNOME CARTA 1: %s | NOME CARTA 2: %s\n", nome1, nome2);
            printf("\nATRIBUTO 1:\n");
            if (escolha1 == 1) {
                printf("Atributo escolhido: Populacao\n");
                printf("Populacao 1: %lu | Pupulacao 2: %lu\n", populacao1, populacao2);
                result1 = populacao1 > populacao2 ? 1 : 0;
                somaDosAtributos1 += (float) populacao1;
                somaDosAtributos2 += (float) populacao2;
            }
            else if (escolha1 == 2) {
                printf("Atributo escolhido: Area\n");
                printf("Area 1: %.2f | Area 2: %.2f\n", area1, area2);
                result1 = area1 > area2 ? 1 : 0;
                somaDosAtributos1 += area1;
                somaDosAtributos2 += area2;
            }
            else if (escolha1 == 3) {
                printf("Atributo escolhido: PIB\n");
                printf("PIB 1: %.2f | PIB 2: %.2f\n", pib1, pib2);
                result1 = pib1 > pib2 ? 1 : 0;
                somaDosAtributos1 += pib1;
                somaDosAtributos2 += pib2; 
            }
            else if (escolha1 == 4) {
                printf("Atributo escolhido: Pontos Turisticos\n");
                printf("Pontos turisticos 1: %d | Pontos turisticos 2: %d\n", pTuristicos1, 
                    pTuristicos2);
                result1 =  pTuristicos1 > pTuristicos2 ? 1 : 0;
                somaDosAtributos1 += (float) pTuristicos1;
                somaDosAtributos2 += (float) pTuristicos2;
            }
            else if (escolha1 == 5) {
                printf("Atributo escolhido: Densidade Populacional\n");
                printf("Densidade Populacional 1: %.2f | Densidade Populacional 2: %.2f\n", 
                    densidadePopulaciona1, densidadePopulaciona2);
                result1 = densidadePopulaciona1 < densidadePopulaciona2 ? 1 : 0;
                somaDosAtributos1 += (1.0 / densidadePopulaciona1);
                somaDosAtributos2 += (1.0 / densidadePopulaciona2); 
            }
            else {
                printf("Atributo escolhido: Super Poder\n");
                printf("Super Poder 1: %.2f | Super Poder 2: %.2f\n", superPoder1, superPoder2);
                result1 = superPoder1 > superPoder2 ? 1 : 0;
                somaDosAtributos1 += superPoder1;
                somaDosAtributos2 += superPoder2; 
            }
            // Resultado da comparacao entre o primeiro atributo
            if (result1 == 1) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            }
            else { 
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2); 
            }
            // Comparando o segundo atributo selecionado e realizando a soma
            int result2;
            printf("\nATRIBUTO 2:\n");
            if (escolha2 == 1) {
                printf("Atributo escolhido: Populacao\n");
                printf("Populacao 1: %lu | Pupulacao 2: %lu\n", populacao1, populacao2);
                result2 = populacao1 > populacao2 ? 1 : 0;
                somaDosAtributos1 += (float) populacao1;
                somaDosAtributos2 += (float) populacao2;
            }
            else if (escolha2 == 2) {
                printf("Atributo escolhido: Area\n");
                printf("Area 1: %.2f | Area 2: %.2f\n", area1, area2);
                result2 = area1 > area2 ? 1 : 0;
                somaDosAtributos1 += area1;
                somaDosAtributos2 += area2;
            }
            else if (escolha2 == 3) {
                printf("Atributo escolhido: PIB\n");
                printf("PIB 1: %.2f | PIB 2: %.2f\n", pib1, pib2);
                result2 = pib1 > pib2 ? 1 : 0; 
                somaDosAtributos1 += pib1;
                somaDosAtributos2 += pib2; 
            }
            else if (escolha2 == 4) {
                printf("Atributo escolhido: Pontos Turisticos\n");
                printf("Pontos turisticos 1: %d | Pontos turisticos 2: %d\n", pTuristicos1, 
                    pTuristicos2);
                result2 =  pTuristicos1 > pTuristicos2 ? 1 : 0;
                somaDosAtributos1 += (float) pTuristicos1;
                somaDosAtributos2 += (float) pTuristicos2;
            }
            else if (escolha2 == 5) {
                printf("Atributo escolhido: Densidade Populacional\n");
                printf("Densidade Populacional 1: %.2f | Densidade Populacional 2: %.2f\n", 
                    densidadePopulaciona1, densidadePopulaciona2);
                result2 = densidadePopulaciona1 < densidadePopulaciona2 ? 1 : 0;
                somaDosAtributos1 += (1.0 / densidadePopulaciona1);
                somaDosAtributos2 += (1.0 / densidadePopulaciona2); 
            }
            else {
                printf("Atributo escolhido: Super Poder\n");
                printf("Super Poder 1: %.2f | Super Poder 2: %.2f\n", superPoder1, superPoder2);
                result2 = superPoder1 > superPoder2 ? 1 : 0;
                somaDosAtributos1 += superPoder1;
                somaDosAtributos2 += superPoder2; 
            }
            // Resultado da comparacao entre o segundo atributo
            if (result2 == 1) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            }
            else { 
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2); 
            }
            // Imprimido as somas dos atributos selecionados
            printf("\nSOMA DOS ATRIBUTOS:\n");
            printf("CARTA 1: %.2f\n", somaDosAtributos1);
            printf("CARTA 2: %.2f\n", somaDosAtributos2);

            if (somaDosAtributos1 > somaDosAtributos2) {
                printf("\nA CARTA 1 venceu a rodada!\n");
            }
            else if (somaDosAtributos1 < somaDosAtributos2) {
                printf("\nA CARTA 2 venceu a rodada!\n");
            } 
            else {
                printf("\nA rodada empatou!\n");
            }

        }

    }
         
    return 0;
}