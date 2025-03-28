#include <stdio.h>

// Definição da estrutura para armazenar as informações das cartas
typedef struct {
    char estado[50];
    char codigo[50];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

// Função para calcular a densidade populacional e o PIB per capita
void calcular_indicadores(Carta* carta) {
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / carta->populacao;
}

// Função para comparar as cartas com base em um atributo específico (População, no caso)
void comparar_cartas(Carta carta1, Carta carta2) {
    printf("Comparação de cartas (Atributo: População):\n");

    // Exibição dos dados de ambas as cartas
    printf("Carta 1 - %s (%s): %d\n", carta1.nome_cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.nome_cidade, carta2.estado, carta2.populacao);

    // Determinação da carta vencedora (maior população vence)
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
    } else if (carta1.populacao < carta2.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
    } else {
        printf("Resultado: Empate!\n");
    }
}

int main() {
    // Exemplo de duas cartas de Super Trunfo
    Carta carta1 = {"SP", "C1", "São Paulo", 12300000, 1500.5, 6500000.0, 100, 0.0, 0.0};
    Carta carta2 = {"RJ", "C2", "Rio de Janeiro", 6000000, 1200.0, 4500000.0, 50, 0.0, 0.0};

    // Calcular densidade populacional e PIB per capita para ambas as cartas
    calcular_indicadores(&carta1);
    calcular_indicadores(&carta2);

    // Comparar as cartas com base na População
    comparar_cartas(carta1, carta2);

    return 0;
}