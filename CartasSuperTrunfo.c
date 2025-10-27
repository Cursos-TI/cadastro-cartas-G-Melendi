#include <stdio.h>

int main() {
    //Declaração das variáveis da Carta 1
    char estado1[3], codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, DensPop1, PIBPerCapita1;

    //Declaração das variáveis da Carta 2
    char estado2[3], codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, DensPop2, PIBPerCapita2;

    //A definição das variaveis poderia ter sido feito em um bloco apenas, todos os chars em uma linha, assim como todos os floats, etc, 
    //mas para manter levemente ortganizado e para facilitar o entendimento, manteremos separados. 
  
    //Leitura dos dados da Carta 1
    printf("Vamos Cadastrar a cidade 1?\n");
    
    printf("Estado (A-H): ");
    scanf(" %s", estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê string com espaços

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    
    DensPop1 = (float)populacao1 / area1;
    PIBPerCapita1 = pib1 * 1000000 / (float)populacao1;
    
    //Leitura dos dados da Carta 2
    printf("\n Vamos cadastrar a Cidade 2?\n");
    printf("Estado (A-H): ");
    scanf(" %s", estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
    
    DensPop2 = (float)populacao2 / area2;
    PIBPerCapita2 = pib2 * 1000000 / (float)populacao2;
    

    //Exibição dos dados da Carta 1
    printf("\n\nCidade 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f Hab/m²\n", DensPop1);
    printf("PIB per capita: %.2f R$ / hab\n", PIBPerCapita1);


    
    //Exibição dos dados da Carta 2
    printf("\nCidade 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f Hab/m²\n", DensPop2);
    printf("PIB per capita: %.2f R$ / hab\n", PIBPerCapita2);

    return 0;
}

