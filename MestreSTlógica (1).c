#include <stdio.h>

int main() {
    printf("=== Bem-vindo ao Super Trunfo ===\n");

    // Variáveis do primeiro jogador
    char Estado1[50], codigo1[4], Cidade1[50];
    unsigned long int populacao1;
    float PIB1, area1;
    int pontos_turisticos1;
    float densidade_populacional1, PIBpercapita1;

    // Variáveis do segundo jogador
    char Estado2[50], codigo2[4], Cidade2[50];
    unsigned long int populacao2;
    float PIB2, area2;
    int pontos_turisticos2;
    float densidade_populacional2, PIBpercapita2;

    int atributo;

    // Entrada de dados do primeiro jogador
    printf("\nDigite os dados da carta do primeiro jogador:\n");
    printf("Estado: "); scanf(" %[^\n]", Estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Cidade: "); scanf(" %[^\n]", Cidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("PIB (em bilhões): "); scanf("%f", &PIB1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("Pontos turísticos: "); scanf("%d", &pontos_turisticos1);

    // Entrada de dados do segundo jogador
    printf("\nDigite os dados da carta do segundo jogador:\n");
    printf("Estado: "); scanf(" %[^\n]", Estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Cidade: "); scanf(" %[^\n]", Cidade2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("PIB (em bilhões): "); scanf("%f", &PIB2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("Pontos turísticos: "); scanf("%d", &pontos_turisticos2);

    // Cálculos
    densidade_populacional1 = (float)populacao1 / area1;
    PIBpercapita1 = PIB1 / (float)populacao1;

    densidade_populacional2 = (float)populacao2 / area2;
    PIBpercapita2 = PIB2 / (float)populacao2;

    // Menu de escolha de atributo
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - PIB\n");
    printf("3 - Área\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    scanf("%d", &atributo);

    printf("\n=== Resultado da comparação ===\n");
    printf("%-25s %-15s %-15s\n", "Atributo", Cidade1, Cidade2);

    switch(atributo) {
        case 1: // População
            printf("%-25s %-15lu %-15lu\n", "População", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("\n>>> O jogador 1 venceu!\n");
            else if (populacao2 > populacao1)
                printf("\n>>> O jogador 2 venceu!\n");
            else
                printf("\n>>> Empate!\n");
            break;

        case 2: // PIB
            printf("%-25s %-15.2f %-15.2f\n", "PIB (bilhões)", PIB1, PIB2);
            if (PIB1 > PIB2)
                printf("\n>>> O jogador 1 venceu!\n");
            else if (PIB2 > PIB1)
                printf("\n>>> O jogador 2 venceu!\n");
            else
                printf("\n>>> Empate!\n");
            break;

        case 3: // Área
            printf("%-25s %-15.2f %-15.2f\n", "Área (km²)", area1, area2);
            if (area1 > area2)
                printf("\n>>> O jogador 1 venceu!\n");
            else if (area2 > area1)
                printf("\n>>> O jogador 2 venceu!\n");
            else
                printf("\n>>> Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("%-25s %-15d %-15d\n", "Pontos turísticos", pontos_turisticos1, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2)
                printf("\n>>> O jogador 1 venceu!\n");
            else if (pontos_turisticos2 > pontos_turisticos1)
                printf("\n>>> O jogador 2 venceu!\n");
            else
                printf("\n>>> Empate!\n");
            break;

        case 5: // Densidade populacional (menor vence)
            printf("%-25s %-15.2f %-15.2f\n", "Densidade (hab/km²)", densidade_populacional1, densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2)
                printf("\n>>> O jogador 1 venceu!\n");
            else if (densidade_populacional2 < densidade_populacional1)
                printf("\n>>> O jogador 2 venceu!\n");
            else
                printf("\n>>> Empate!\n");
            break;

        default:
            printf("\nOpção inválida!\n");
            break;
    }

    // Exibir PIB per capita de cada carta
    printf("\n=== PIB per capita ===\n");
    printf("%-25s %-15.2f %-15.2f\n", "PIB per capita (reais)", PIBpercapita1, PIBpercapita2);

    return 0;
}