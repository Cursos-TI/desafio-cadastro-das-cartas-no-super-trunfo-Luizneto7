#include <stdio.h>

int main() {
    // Definindo as variáveis separadas para cada atributo da cidade, inicializando-as para evitar que valores indesejados sejam atribuídos.
    //Código da carta.
    char cardCode[4] = "AAAA";
    //Nome da cidade.
    char cityName[30] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    //População.
    int population = 0;
    //Área.
    double area = 0;
    //PIB
    double pib = 0;
    //Pontos turísticos.
    short int touristAttractions = 0;
    
    //Boas vindas ao iniciar o jogo.
    printf("Bem vindo ao Super Trunfo Países!\n");
    
    //Solicitando ao usuário os dados da carta a ser criada via prompt. E lendo com o scanf() cada valor inserido e atribuíndo as variáveis criadas anteriormente.
    // Cadastro das Cartas:
    printf("Informe o código da carta informando a sigla do estado e o número: \n");
    scanf("%s", &cardCode);

    printf("Informe o nome da cidade: \n");
    scanf("%s", &cityName);

    print("Informe a população da cidade: \n");
    scanf("%i", &population);

    printf("Informe a área da cidade: \n");
    scanf("%lf", &area);
    // Exibição dos Dados das Cartas:
    printf("Carta %s cadastrada com sucesso!\n\nCódigo da carta: %s\nCidade: %s\nPopulação: %i\nÁrea: %lf\n");
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
