#include <stdio.h>

float calc_densidade(int populacao, float area)
{
    if (area == 0)
    {
        printf("Erro: Area nao pode ser zero. \n");
        return 0.0f;
    }
    return (float)populacao / area;
}

float pibpercapita(float pib, int populacao)
{
    if (populacao == 0)
    {
        printf("Erro: Populacao nao pode ser zero. \n");
        return 0.0f;
    }
    return pib / populacao;
}

const char* resultado_populacao(int populacao, int populacao2)
{
    if (populacao > populacao2)
    {
        return "Carta 1 venceu!!";
    }
    else if (populacao2 > populacao)
    {
        return "Carta 2 venceu!!";
    }
    else
    {
        return "Empate!!";
    }
}

const char* resultado_area(float area, float area2)
{
    if (area > area2)
    {
        return "Carta 1 venceu!!";
    }
    else if (area2 > area)
    {
        return "Carta 2 venceu!!";
    }
    else
    {
        return "Empate!!";
    }
}

const char* resultado_pib(float pib, float pib2)
{
    if (pib > pib2)
    {
        return "Carta 1 venceu!!";
    }
    else if (pib2 > pib)
    {
        return "Carta 2 venceu!!";
    }
    else
    {
        return "Empate!!";
    }
}

const char* resultado_ponto_t(int ponto_t, int ponto_t2)
{
    if (ponto_t > ponto_t2)
    {
        return "Carta 1 venceu!!";
    }
    else if (ponto_t2 > ponto_t)
    {
        return "Carta 2 venceu!!";
    }
    else
    {
        return "Empate!!";
    }
}

const char* resultado_densidade(int populacao, float area, int populacao2, float area2)
{
    float densidade1 = calc_densidade(populacao, area);
    float densidade2 = calc_densidade(populacao2, area2);

    if (densidade1 > densidade2)
    {
        return "Carta 1 venceu!!";
    }
    else if (densidade2 > densidade1)
    {
        return "Carta 2 venceu!!";
    }
    else
    {
        return "Empate!!";
    }
}

float calcular_inverso_densidade(float densidade)
{
    if (densidade == 0)
    {
        return 0.0f;
    }
    return 1.0f / densidade;
}

float calcular_super_poder(int populacao, float area, float pib, int pontos_turisticos)
{
    // Calcular PIB per capita
    float pib_per_capita = pibpercapita(pib, populacao);

    // Calcular densidade populacional
    float densidade = calc_densidade(populacao, area);

    // Calcular inverso da densidade
    float inverso_densidade = calcular_inverso_densidade(densidade);

    // Calcular Super Poder
    float super_poder = (float)populacao + area + pib + (float)pontos_turisticos + pib_per_capita + inverso_densidade;

    return super_poder;
}

const char* superp(float super_poder1, float super_poder2)
{
    if (super_poder1 > super_poder2)
    {
        return "Carta 1 venceu!!";
    }
    else if (super_poder2 > super_poder1)
    {
        return "Carta 2 venceu!!";
    }
    else
    {
        return "Empate!!";
    }
}

int main()
{
    // Variáveis da primeira carta
    char estado = '\0';
    char carta[4] = "";
    char nome_cidade[50] = "";
    int populacao = 0;
    float area = 0.0f;
    float pib = 0.0f;
    int pontos_t = 0;
    float super_poder1 = 0.0f;

    // Variáveis da segunda carta
    char estado2 = '\0';
    char carta2[4] = "";
    char nome_cidade2[50] = "";
    int populacao2 = 0;
    float area2 = 0.0f;
    float pib2 = 0.0f;
    int pontos_t2 = 0;
    float super_poder2 = 0.0f;

    // Ler os dados da primeira carta
    printf("\nInserindo os dados da primeira carta:\n");
    printf("Estado (A a H): \n");
    scanf(" %c", &estado);
    printf("Codigo da carta (ex: 01): \n");
    scanf("%3s", carta, (unsigned)sizeof(carta));
    printf("Nome da cidade: \n");
    scanf("%49s", nome_cidade, (unsigned)sizeof(nome_cidade));
    printf("Populacao: \n");
    scanf("%d", &populacao);
    printf("Area (em km): \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Pontos turisticos: \n");
    scanf("%d", &pontos_t);

    // Ler os dados da segunda carta
    printf("\nInserindo os dados da segunda carta:\n");
    printf("Estado (A a H): \n");
    scanf(" %c", &estado2);
    printf("Codigo da carta (ex: 01): \n");
    scanf("%3s", carta, (unsigned)sizeof(carta));
    printf("Nome da cidade: \n");
    scanf("%49s", nome_cidade, (unsigned)sizeof(nome_cidade));
    printf("Populacao: \n");
    scanf("%d", &populacao2);
    printf("Area (em km): \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Pontos turisticos: \n");
    scanf("%d", &pontos_t2);

    // Calcular Super Poder
    super_poder1 = calcular_super_poder(populacao, area, pib, pontos_t);
    super_poder2 = calcular_super_poder(populacao2, area2, pib2, pontos_t2);

    // Exibir os dados lidos
    printf("\nDados da primeira carta:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo da carta: %c%s\n", estado, carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turisticos: %d\n", pontos_t);
    printf("Densidade populacional: %.2f \n", calc_densidade(populacao, area));
    printf("PIB per capita: %.2f \n", pibpercapita(pib, populacao));

    printf("\nDados da segunda carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %c%s\n", estado2, carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_t2);
    printf("Densidade populacional: %.2f \n", calc_densidade(populacao2, area2));
    printf("PIB per capita: %.2f \n", pibpercapita(pib2, populacao2));

    // Comparação de cartas
    printf("\nComparacao de cartas \n");
    printf("Populacao: %s\n", resultado_populacao(populacao, populacao2));
    printf("Area: %s\n", resultado_area(area, area2));
    printf("PIB: %s\n", resultado_pib(pib, pib2));
    printf("Pontos turisticos: %s\n", resultado_ponto_t(pontos_t, pontos_t2));
    printf("Densidade populacional: %s\n", resultado_densidade(populacao, area, populacao2, area2));
    printf("Super Poder: %s\n", superp(super_poder1, super_poder2));

    return 0;
}