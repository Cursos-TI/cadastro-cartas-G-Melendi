#include <stdio.h>

int main() {
    //Declaração das variáveis da Carta 1
    char estado1[3], codigo1[4], nomeCidade1[50];
    int pontosTuristicos1;
    unsigned long int populacao1;
    float area1, pib1, DensPop1, PIBPerCapita1, InvDens1, SuperPoder1;

    //Declaração das variáveis da Carta 2
    char estado2[3], codigo2[4], nomeCidade2[50];
    int pontosTuristicos2;
    unsigned long int populacao2;
    float area2, pib2, DensPop2, PIBPerCapita2, InvDens2, SuperPoder2;

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
    scanf("%lu", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    
    DensPop1 = (float)populacao1 / area1;
    PIBPerCapita1 = pib1 * 1000000000 / (float)populacao1;
    InvDens1 = 1 / DensPop1;
    SuperPoder1 = (float)populacao1 + (float)area1 + (float)pib1 + (float)pontosTuristicos1 + (float)PIBPerCapita1 + (float)InvDesn1;
    
    //Leitura dos dados da Carta 2
    printf("\n Vamos cadastrar a Cidade 2?\n");
    printf("Estado (A-H): ");
    scanf(" %s", estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
    
    DensPop2 = (float)populacao2 / area2;
    PIBPerCapita2 = pib2 * 1000000000 / (float)populacao2;
    InvDens2 = 1 / DensPop2;
    SuperPoder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pontosTuristicos2 + (float)PIBPerCapita2 + (float)InvDesn2;

    //Exibição dos dados da Carta 1
    printf("\n\nCidade 1\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f Hab/km²\n", DensPop1);
    printf("PIB per capita: %.2f R$ / hab\n", PIBPerCapita1);


    
    //Exibição dos dados da Carta 2
    printf("\nCidade 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f Hab/km²\n", DensPop2);
    printf("PIB per capita: %.2f R$ / hab\n", PIBPerCapita2);

    return 0;
}

