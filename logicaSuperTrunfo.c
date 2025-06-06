#include <stdio.h>

int main() {
    // Criando as variáveis 1 e seus formatando seus tipos.
    char Estado1[3], CodigoCarta1[4], NomeCidade1[20];
    unsigned long int Populacao1;
    int NumeroPontoTuristico1;
    float AreaKM1, PIB1, DensidadePopulacional1, PIBPerCapita1;

    // Criando as variáveis 2 e seus formatando seus tipos.
    char Estado2[3], CodigoCarta2[4], NomeCidade2[20];
    unsigned long int Populacao2;
    int NumeroPontoTuristico2;
    float AreaKM2, PIB2, DensidadePopulacional2, PIBPerCapita2;

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

    // ===== NOVO BLOCO - Menu para seleção de dois atributos =====
    int atributo1 = 0, atributo2 = 0;

    printf("\nEscolha o PRIMEIRO atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &atributo1);

    do {
        printf("\nEscolha o SEGUNDO atributo para comparação (diferente do primeiro):\n");
        for (int i = 1; i <= 6; i++) {
            if (i != atributo1) {
                switch(i) {
                    case 1: printf("%d - População\n", i); break;
                    case 2: printf("%d - Área\n", i); break;
                    case 3: printf("%d - PIB\n", i); break;
                    case 4: printf("%d - Número de Pontos Turísticos\n", i); break;
                    case 5: printf("%d - Densidade Populacional\n", i); break;
                    case 6: printf("%d - PIB per Capita\n", i); break;
                }
            }
        }
        printf("Digite o número do segundo atributo: ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1)
            printf("Erro: você escolheu o mesmo atributo duas vezes. Tente novamente.\n");
    } while (atributo2 == atributo1);

    // ===== Comparação dos atributos selecionados =====
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1 = 0, soma2 = 0;

    switch (atributo1) {
        case 1: valor1_carta1 = Populacao1; valor1_carta2 = Populacao2; break;
        case 2: valor1_carta1 = AreaKM1; valor1_carta2 = AreaKM2; break;
        case 3: valor1_carta1 = PIB1; valor1_carta2 = PIB2; break;
        case 4: valor1_carta1 = NumeroPontoTuristico1; valor1_carta2 = NumeroPontoTuristico2; break;
        case 5: valor1_carta1 = DensidadePopulacional1; valor1_carta2 = DensidadePopulacional2; break;
        case 6: valor1_carta1 = PIBPerCapita1; valor1_carta2 = PIBPerCapita2; break;
    }

    switch (atributo2) {
        case 1: valor2_carta1 = Populacao1; valor2_carta2 = Populacao2; break;
        case 2: valor2_carta1 = AreaKM1; valor2_carta2 = AreaKM2; break;
        case 3: valor2_carta1 = PIB1; valor2_carta2 = PIB2; break;
        case 4: valor2_carta1 = NumeroPontoTuristico1; valor2_carta2 = NumeroPontoTuristico2; break;
        case 5: valor2_carta1 = DensidadePopulacional1; valor2_carta2 = DensidadePopulacional2; break;
        case 6: valor2_carta1 = PIBPerCapita1; valor2_carta2 = PIBPerCapita2; break;
    }

    // Inversão da lógica para Densidade Populacional (quanto menor, melhor)
    if (atributo1 == 5) soma1 += (valor1_carta1 < valor1_carta2) ? 1 : (valor1_carta1 > valor1_carta2 ? 0 : 0.5);
    else soma1 += (valor1_carta1 > valor1_carta2) ? 1 : (valor1_carta1 < valor1_carta2 ? 0 : 0.5);

    if (atributo2 == 5) soma1 += (valor2_carta1 < valor2_carta2) ? 1 : (valor2_carta1 > valor2_carta2 ? 0 : 0.5);
    else soma1 += (valor2_carta1 > valor2_carta2) ? 1 : (valor2_carta1 < valor2_carta2 ? 0 : 0.5);

    soma2 = 2 - soma1;

    // ===== Exibição dos resultados =====
    printf("\nResultado da Comparação:\n");
    printf("Carta 1 - %s:\n", NomeCidade1);
    printf("  Atributo 1: %.2f\n", valor1_carta1);
    printf("  Atributo 2: %.2f\n", valor2_carta1);
    printf("  Soma de pontos: %.2f\n", soma1);

    printf("Carta 2 - %s:\n", NomeCidade2);
    printf("  Atributo 1: %.2f\n", valor1_carta2);
    printf("  Atributo 2: %.2f\n", valor2_carta2);
    printf("  Soma de pontos: %.2f\n", soma2);

    if (soma1 > soma2)
        printf("\nResultado Final: Carta 1 (%s) venceu!\n", NomeCidade1);
    else if (soma2 > soma1)
        printf("\nResultado Final: Carta 2 (%s) venceu!\n", NomeCidade2);
    else
        printf("\nResultado Final: Empate!\n");

    return 0;
}
