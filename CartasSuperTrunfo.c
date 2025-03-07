#include <stdio.h>

int main()
{
    char state1[5], cardCode1[5], cityName1[31];
    unsigned long int population1;
    int touristAttraction1;
    float superPower1;
    double area1, pib1, pibPerCapita1, populationDensity1;

    char state2[5], cardCode2[5], cityName2[31];
    unsigned long int population2;
    int touristAttraction2;
    float superPower2;
    double area2, pib2, pibPerCapita2, populationDensity2;

    printf("\n\n\n******* Seja bem vindo ao Super Trunfo versão países *******\n\n");
    printf("Esse jogo consiste em comparar duas cartas previamente registradas e ganha a que tiver os maiores atributos.\n\n");
    printf("Registre a primeira carta\n\n");

    printf("Informe o estado da primeira cidade:\n");
    scanf("%2s", state1);
    printf("informe o código da cidade:\n");
    scanf("%2s", cardCode1);
    printf("Informe o nome da cidade:\n");
    scanf("%30s", cityName1);
    printf("Informe a população da cidade:\n");
    scanf("%lu", &population1);
    printf("Informe a área da cidade:\n");
    scanf("%lf", &area1);
    printf("Informe o PIB da cidade:\n");
    scanf("%lf", &pib1);
    printf("Informe a quantidade de pontos turísticos da cidade:\n");
    scanf("%i", &touristAttraction1);

    pibPerCapita1 = (double)pib1 / population1;
    populationDensity1 = (double)population1 / area1;
    superPower1 = (float)(1 / populationDensity1) + population1 + area1 + pib1 + pibPerCapita1 + touristAttraction1;

    printf("\n\n******* Carta 1 registrada *******\n\n\n");
    printf("Registre a segunda carta\n\n");

    printf("Informe o estado da segunda cidade:\n");
    scanf("%2s", state2);
    printf("informe o código da cidade:\n");
    scanf("%2s", cardCode2);
    printf("Informe o nome da cidade:\n");
    scanf("%30s", cityName2);
    printf("Informe a população da cidade:\n");
    scanf("%lu", &population2);
    printf("Informe a área da cidade:\n");
    scanf("%lf", &area2);
    printf("Informe o PIB da cidade:\n");
    scanf("%lf", &pib2);
    printf("Informe a quantidade de pontos turísticos da cidade:\n");
    scanf("%i", &touristAttraction2);

    pibPerCapita2 = (double)pib2 / population2;
    populationDensity2 = (double)population2 / area2;
    superPower2 = (float)(1 / populationDensity2) + population2 + area2 + pib2 + pibPerCapita2 + touristAttraction2;

    printf("\n\n******* cartas registradas *******\n\n\n");

    printf("Carta 1:\n\n Estado: %s\n Código: %s%s\n Nome da cidade: %s\n População: %lu\n Área: %.2lf (km²)\n PIB: R$ %.2lf Bilhões de reais\n N° de Pontos Turísticos: %i\n PIB per capita: %.2lf\n Densidade Demográfica: %lf\n Super Poder: %.2f\n\n", state1, state1, cardCode1, cityName1, population1, area1, pib1 / 1e9, touristAttraction1, pibPerCapita1, populationDensity1, superPower1);
    printf("Carta 2:\n\n Estado: %s\n Código: %s%s\n Nome da cidade: %s\n População: %lu\n Área: %.2lf (km²)\n PIB: R$ %.2lf Bilhões de reais\n N° de Pontos Turísticos: %i\n PIB per capita: %.2lf\n Densidade Demográfica: %lf\n Super Poder: %.2f\n\n", state2, state2, cardCode2, cityName2, population2, area2, pib2 / 1e9, touristAttraction2, pibPerCapita2, populationDensity2, superPower2);

    printf("******* Hora do combate *******\n\n");

    printf("Nesta fase do jogo as cartas serão comparadas e o resultado aparecerá como 1 para a CARTA I e 0 para a CARTA II.\n\n");

    printf("******* Os resultados aparecerão ao lado do atributo comparado *******\n\n\n");

    printf("População: %d\n", population1 > population2);
    printf("Pontos Turísticos: %d\n", touristAttraction1 > touristAttraction2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("PIB Per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Densidade Populacional: %d\n", populationDensity1 < populationDensity2);
    printf("Super Poder: %d\n", superPower1 > superPower2);

    printf("\n\n******* Fim do embate *******\n\n");

    printf("Agora é com você! Confira os resultados acima e declare o vencedor desta rodada.\n\n");

    return 0;
}
