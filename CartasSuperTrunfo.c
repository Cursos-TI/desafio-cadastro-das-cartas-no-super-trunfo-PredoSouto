#include <stdio.h>

float densidade(int populacao, float area)
{
    if (area == 0)
    {
        printf("Erro: Area nao pode ser zero. \n");
    }return (float)populacao / area;

}

float pibpercapita(float pib, int populacao)
{
    if (pib == 0)
    {
        printf("Erro: PIB nao pode ser zero");
    }return (float)pib / populacao;
}

int main() {
    /*variaveis da primeira carta*/
    char estado = '\0';
    char carta[4] = "";
    char nome_cidade[50] = "";
    int populacao = 0;
    float area = 0.0f;
    float pib = 0.0f;
    int pontos_t = 0;

    //variaveis da segunda carta
    char estado2 = '\0';
    char carta2[4] = "";
    char nome_cidade2[50] = "";
    int populacao2 = 0;
    float area2 = 0.0f;
    float pib2 = 0.0f;
    int pontos_t2 = 0;   

    // primeira carta
    printf("\nInserindo os dados da primeira cartas:\n");

    // Ler o estado (A a H)
    printf("Estado (A a H): \n");
    scanf_s(" %c", &estado, 1); // Espaço antes de %c para ignorar espaços em branco


    // Ler o código da carta (ex: A01, B03)
    printf("Codigo da carta (ex: 01): \n");
    scanf_s("%3s", carta, (unsigned)sizeof(carta)); // Lê até 3 caracteres


    // Ler o nome da cidade
    printf("Nome da cidade: \n");
    scanf_s("%49s", nome_cidade, (unsigned)sizeof(nome_cidade)); // Lê até 49 caracteres

    // Ler a população
    printf("Populacao: \n");
    scanf_s("%d", &populacao);

    // Ler a área
    printf("Area (em km): \n");
    scanf_s("%f", &area);

    // Ler o PIB
    printf("PIB: \n");
    scanf_s("%f", &pib);

    // Ler o número de pontos turísticos
    printf("Pontos turisticos: \n");
    scanf_s("%d", &pontos_t);

    ///////////////////////////////////////////////////////////

    //segunda carta

    printf("\nInserindo os dados da segunda cartas:\n");

    // Ler o estado (A a H)
    printf("Estado (A a H): \n");
    scanf_s(" %c", &estado2, 1); // Espaço antes de %c para ignorar espaços em branco


    // Ler o código da carta (ex: A01, B03)
    printf("Codigo da carta (ex: 01): \n");
    scanf_s("%3s", carta2, (unsigned)sizeof(carta2)); // Lê até 3 caracteres


    // Ler o nome da cidade
    printf("Nome da cidade: \n");
    scanf_s("%49s", nome_cidade2, (unsigned)sizeof(nome_cidade2)); // Lê até 49 caracteres

    // Ler a população
    printf("Populacao: \n");
    scanf_s("%d", &populacao2);

    // Ler a área
    printf("Area (em km): \n");
    scanf_s("%f", &area2);

    // Ler o PIB
    printf("PIB: \n");
    scanf_s("%f", &pib2);

    // Ler o número de pontos turísticos
    printf("Pontos turisticos: \n");
    scanf_s("%d", &pontos_t2);

    ////////////////////////////////////////////////////////////////


    // Exibir os dados lidos
    printf("\nDados da primeira carta:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo da carta: %c%s\n",estado, carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turisticos: %d\n", pontos_t);
    printf("Densidade populacional: %.2f \n", densidade(populacao, area));
    printf("PIB per capita: %.2f \n", pibpercapita(pib, populacao));

    printf("\nDados da segunda carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %c%s\n", estado2, carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_t2);
    printf("Densidade populacional: %.2f \n", densidade(populacao2, area2));
    printf("PIB per capita: %.2f \n", pibpercapita(pib2, populacao2));

    return 0;
}