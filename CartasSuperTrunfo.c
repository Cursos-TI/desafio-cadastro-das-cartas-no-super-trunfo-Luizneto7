#include <stdio.h>

int main()
{
    //Declaração das variáveis da carta 1 e 2. 
    //Obs.: Deixei 1 espaço a mais em cada variável char, para o caractere nulo '\o' que é inserido automaticamente em C. 
    char state1[3], cardCode1[3], cityName1[31];
    int population1, touristAttraction1;
    double area1, pib1;

    char state2[3], cardCode2[3], cityName2[31];
    int population2, touristAttraction2;
    double area2, pib2;
    
    //Tomei a liberdade para exibir uma interação com o usuário para adicionar uma cara de jogo para a interface CLI.
    printf("\n\n\n******* Seja bem vindo ao Super Trunfo versão países *******\n\n");
    printf("Esse jogo consiste em comparar duas cartas previamente registradas e ganha a que tiver os maiores atributos.");
    printf("Registre a primeira carta\n\n");

    //Entrada e saída de dados:
    printf("Informe o estado da primeira cidade:\n");
    scanf("%2s", &state1);
    printf("informe o código da cidade:\n");
    scanf("%2s", &cardCode1);
    printf("Informe o nome da cidade:\n");
    scanf("%30s", &cityName1);
    printf("Informe a população da cidade:\n");
    scanf("%i", &population1);
    printf("Informe a área da cidade:\n");
    scanf("%lf", &area1);
    printf("Informe o PIB da cidade:\n");
    scanf("%lf", &pib1);
    printf("Informe a quantidade de pontos turísticos da cidade:\n");
    scanf("%i", &touristAttraction1);

    //Interação com o usuário para informar que a primeira carta foi registrada e para dar início ao registro da carta 2.
    printf("\n\n******* Carta 1 registrada *******\n\n\n");
    printf("Registre a segunda carta\n\n");

    printf("Informe o estado da segunda cidade:\n");
    scanf("%2s", &state2);
    printf("informe o código da cidade:\n");
    scanf("%2s", &cardCode2);
    printf("Informe o nome da cidade:\n");
    scanf("%30s", &cityName2);
    printf("Informe a população da cidade:\n");
    scanf("%i", &population2);
    printf("Informe a área da cidade:\n");
    scanf("%lf", &area2);
    printf("Informe o PIB da cidade:\n");
    scanf("%lf", &pib2);
    printf("Informe a quantidade de pontos turísticos da cidade:\n");
    scanf("%i", &touristAttraction2);

    printf("\n\n******* cartas registradas *******\n\n\n");

    printf("Carta 1:\n\n Estado: %s\n Código: %s%s\n Nome da cidade: %s\n População: %i\n Área: %.2lf (km²)\n PIB: R$ %.2lf Bilhões de reais\n N° de Pontos Turísticos: %i\n\n", state1, state1, cardCode1, cityName1, population1, area1, pib1, touristAttraction1);
    printf("Carta 2:\n\n Estado: %s\n Código: %s%s\n Nome da cidade: %s\n População: %i\n Área: %.2lf (km²)\n PIB: R$ %.2lf Bilhões de reais\n N° de Pontos Turísticos: %i\n\n", state2, state2, cardCode2, cityName2, population2, area2, pib2, touristAttraction2);

    return 0;
}
