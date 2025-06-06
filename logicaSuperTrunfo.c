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

    int opcao;

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

    // Menu de comparação
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparação de cartas (%s vs %s):\n", NomeCidade1, NomeCidade2);

    switch(opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu\n", NomeCidade1, Populacao1);
            printf("%s: %lu\n", NomeCidade2, Populacao2);
            if (Populacao1 > Populacao2)
                printf("Resultado: %s venceu!\n", NomeCidade1);
            else if (Populacao2 > Populacao1)
                printf("Resultado: %s venceu!\n", NomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", NomeCidade1, AreaKM1);
            printf("%s: %.2f km²\n", NomeCidade2, AreaKM2);
            if (AreaKM1 > AreaKM2)
                printf("Resultado: %s venceu!\n", NomeCidade1);
            else if (AreaKM2 > AreaKM1)
                printf("Resultado: %s venceu!\n", NomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: R$ %.2f\n", NomeCidade1, PIB1);
            printf("%s: R$ %.2f\n", NomeCidade2, PIB2);
            if (PIB1 > PIB2)
                printf("Resultado: %s venceu!\n", NomeCidade1);
            else if (PIB2 > PIB1)
                printf("Resultado: %s venceu!\n", NomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", NomeCidade1, NumeroPontoTuristico1);
            printf("%s: %d\n", NomeCidade2, NumeroPontoTuristico2);
            if (NumeroPontoTuristico1 > NumeroPontoTuristico2)
                printf("Resultado: %s venceu!\n", NomeCidade1);
            else if (NumeroPontoTuristico2 > NumeroPontoTuristico1)
                printf("Resultado: %s venceu!\n", NomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Populacional (menor vence)\n");
            printf("%s: %.2f hab/km²\n", NomeCidade1, DensidadePopulacional1);
            printf("%s: %.2f hab/km²\n", NomeCidade2, DensidadePopulacional2);
            if (DensidadePopulacional1 < DensidadePopulacional2)
                printf("Resultado: %s venceu!\n", NomeCidade1);
            else if (DensidadePopulacional2 < DensidadePopulacional1)
                printf("Resultado: %s venceu!\n", NomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: R$ %.2f\n", NomeCidade1, PIBPerCapita1);
            printf("%s: R$ %.2f\n", NomeCidade2, PIBPerCapita2);
            if (PIBPerCapita1 > PIBPerCapita2)
                printf("Resultado: %s venceu!\n", NomeCidade1);
            else if (PIBPerCapita2 > PIBPerCapita1)
                printf("Resultado: %s venceu!\n", NomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
