#include <stdio.h>

// Desafio Super Trunfo - Países
// Código completo para o Nível Mestre
// Este código realiza o cadastro, cálculo, exibição e comparação de duas cartas.
// Ele segue as restrições de não utilizar laços (for, while) ou condicionais (if, else).

int main() {
    // =================================================================================
    // 1. DECLARAÇÃO DE VARIÁVEIS PARA AS DUAS CARTAS
    // =================================================================================
    
    // Variáveis da Carta 1
    char estado_c1;
    char codigo_c1[4]; // Ex: "A01" + caractere nulo '\0'
    char nome_cidade_c1[50];
    unsigned long int populacao_c1; // Tipo alterado para o Nível Mestre
    float area_c1;
    float pib_c1;
    int pontos_turisticos_c1;
    // Atributos calculados para a Carta 1
    float densidade_populacional_c1;
    float pib_per_capita_c1;
    float super_poder_c1;

    // Variáveis da Carta 2
    char estado_c2;
    char codigo_c2[4];
    char nome_cidade_c2[50];
    unsigned long int populacao_c2; // Tipo alterado para o Nível Mestre
    float area_c2;
    float pib_c2;
    int pontos_turisticos_c2;
    // Atributos calculados para a Carta 2
    float densidade_populacional_c2;
    float pib_per_capita_c2;
    float super_poder_c2;


    // =================================================================================
    // 2. CADASTRO DA CARTA 1
    // =================================================================================
    printf("--- CADASTRO DA CARTA 1 ---\n");
    
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado_c1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo_c1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome_cidade_c1);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao_c1); // %lu para unsigned long int

    printf("Digite a Area (em km2): ");
    scanf("%f", &area_c1);

    printf("Digite o PIB: ");
    scanf("%f", &pib_c1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos_c1);


    // =================================================================================
    // 3. CADASTRO DA CARTA 2
    // =================================================================================
    printf("\n--- CADASTRO DA CARTA 2 ---\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado_c2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo_c2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome_cidade_c2);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao_c2); // %lu para unsigned long int

    printf("Digite a Area (em km2): ");
    scanf("%f", &area_c2);

    printf("Digite o PIB: ");
    scanf("%f", &pib_c2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos_c2);


    // =================================================================================
    // 4. CÁLCULO DOS ATRIBUTOS (NÍVEL AVENTUREIRO E MESTRE)
    // =================================================================================

    // Cálculos para a Carta 1
    densidade_populacional_c1 = (float)populacao_c1 / area_c1; //
    pib_per_capita_c1 = pib_c1 / (float)populacao_c1; //
    super_poder_c1 = (float)populacao_c1 + area_c1 + pib_c1 + (float)pontos_turisticos_c1 + pib_per_capita_c1 + (1.0 / densidade_populacional_c1); //

    // Cálculos para a Carta 2
    densidade_populacional_c2 = (float)populacao_c2 / area_c2; //
    pib_per_capita_c2 = pib_c2 / (float)populacao_c2; //
    super_poder_c2 = (float)populacao_c2 + area_c2 + pib_c2 + (float)pontos_turisticos_c2 + pib_per_capita_c2 + (1.0 / densidade_populacional_c2); //


    // =================================================================================
    // 5. EXIBIÇÃO DOS DADOS DAS CARTAS
    // =================================================================================
    printf("\n\n--- DADOS DAS CARTAS CADASTRADAS ---\n");

    // Exibição Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_c1);
    printf("Codigo: %s\n", codigo_c1);
    printf("Nome da Cidade: %s\n", nome_cidade_c1);
    printf("Populacao: %lu\n", populacao_c1);
    printf("Area: %.2f km2\n", area_c1);
    printf("PIB: %.2f bilhoes de reais\n", pib_c1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_c1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional_c1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_c1);

    // Exibição Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_c2);
    printf("Codigo: %s\n", codigo_c2);
    printf("Nome da Cidade: %s\n", nome_cidade_c2);
    printf("Populacao: %lu\n", populacao_c2);
    printf("Area: %.2f km2\n", area_c2);
    printf("PIB: %.2f bilhoes de reais\n", pib_c2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_c2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional_c2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_c2);


    // =================================================================================
    // 6. COMPARAÇÃO DAS CARTAS (NÍVEL MESTRE)
    // =================================================================================
    printf("\n\n--- COMPARACAO DE CARTAS ---\n");
    // O resultado da comparação é um valor booleano: 1 para verdadeiro e 0 para falso.
    // Ex: (populacao_c1 > populacao_c2) resulta em 1 se a condição for verdadeira, e 0 se for falsa.
    
    // Para a maioria dos atributos, vence o maior valor
    printf("Populacao: Carta 1 venceu (%d)\n", populacao_c1 > populacao_c2);
    printf("Area: Carta 1 venceu (%d)\n", area_c1 > area_c2);
    printf("PIB: Carta 1 venceu (%d)\n", pib_c1 > pib_c2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos_turisticos_c1 > pontos_turisticos_c2);
    
    // Para Densidade Populacional, vence o menor valor
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional_c1 < densidade_populacional_c2);
    
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita_c1 > pib_per_capita_c2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder_c1 > super_poder_c2);


    return 0;
}
