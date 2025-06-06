#include <stdio.h>

int main(){
    // Criando as variáveis 1 e seus formatando seus tipos.
    char Estado1[3], CodigoCarta1[4], NomeCidade1[20];
    unsigned long int Populacao1;
    int NumeroPontoTuristico1;
    float AreaKM1, PIB1, DensidadePopulacional1, PIBPerCapita1, SuperPoder1;

    // Criando as variáveis 2 e seus formatando seus tipos.
    char Estado2[3], CodigoCarta2[4], NomeCidade2[20];
    unsigned long int Populacao2;
    int NumeroPontoTuristico2;
    float AreaKM2, PIB2, DensidadePopulacional2, PIBPerCapita2, SuperPoder2;

    // Pegandos os dados de entrada e armazenando para todos os 1.
    printf("\n Digite a primeira letra, em maiusculo, do seu estado: \n");
    scanf("%2s", Estado1);

    printf("Digite o código seguindo o padrão(Primeira Letra do estado + numero 01 ao 04 (ex: A01)): \n");
    scanf("%3s", CodigoCarta1);

    printf("Digite nome da cidade: \n");
    scanf("%19s", NomeCidade1);

    printf("Digite o numero da População: \n");
    scanf("%lu", &Populacao1);

    printf("Digite a Área em Km: \n");
    scanf("%f", &AreaKM1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &NumeroPontoTuristico1);

    // Calculando os valores para o primeiro conjunto
    DensidadePopulacional1 = Populacao1 / AreaKM1;
    PIBPerCapita1 = PIB1 / Populacao1;
    SuperPoder1 = (float)Populacao1 + AreaKM1 + PIB1 + (float)NumeroPontoTuristico1 + PIBPerCapita1 + (1 / DensidadePopulacional1);

    // Pegandos os dados de entrada e armazenando para todos os 2.
    printf("\n Digite a primeira letra, em maiusculo, do seu estado: \n");
    scanf("%2s", Estado2);

    printf("Digite o código seguindo o padrão(Primeira Letra do estado + numero 01 ao 04 (ex: A01)): \n");
    scanf("%3s", CodigoCarta2);

    printf("Digite nome da cidade: \n");
    scanf("%19s", NomeCidade2);

    printf("Digite o numero da População: \n");
    scanf("%lu", &Populacao2);

    printf("Digite a Área em Km: \n");
    scanf("%f", &AreaKM2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &NumeroPontoTuristico2);

    // Calculando os valores para o segundo conjunto
    DensidadePopulacional2 = Populacao2 / AreaKM2;
    PIBPerCapita2 = PIB2 / Populacao2;
    SuperPoder2 = (float)Populacao2 + AreaKM2 + PIB2 + (float)NumeroPontoTuristico2 + PIBPerCapita2 + (1 / DensidadePopulacional2);

    // Imprimindo na tela a Carta 01.
    printf("\n=====================\n");
    printf("\nCarta 01:\n");
    printf("\n=====================\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo de Carta: %s\n", CodigoCarta1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área em Km²: %.2f\n", AreaKM1);
    printf("PIB: %.2f\n", PIB1);
    printf("Numero de Pontos Turísticos: %d\n", NumeroPontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n", PIBPerCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);
    printf("\n=====================\n");

    // Imprimindo na tela a Carta 02.
    printf("\n=====================\n");
    printf("\nCarta 02:\n");
    printf("\n=====================\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo de Carta: %s\n", CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área em Km²: %.2f\n", AreaKM2);
    printf("PIB: %.2f\n", PIB2);
    printf("Numero de Pontos Turísticos: %d\n", NumeroPontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", PIBPerCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);
    printf("\n=====================\n");

    // Comparação por atributo fixo: PIB per capita
    printf("\nComparação de Cartas (Atributo: PIB per capita):\n\n");
    printf("Carta 1 - %s (%s): R$ %.2f\n", NomeCidade1, Estado1, PIBPerCapita1);
    printf("Carta 2 - %s (%s): R$ %.2f\n", NomeCidade2, Estado2, PIBPerCapita2);

    if (PIBPerCapita1 > PIBPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeCidade1);
    } else if (PIBPerCapita2 > PIBPerCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", NomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
