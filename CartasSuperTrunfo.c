#include <stdio.h>

int main() {
    char nome[50], codigo[50];
    int populacao, pontos;
    float area, PIB;

    printf("\nCadastro de carta do jogo super trunfo. \n");
    
    // Leitura dos dados das cartas
    printf("Digite o código da carta: ");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite quantos pontos turisticos tem na cidade: ");
    scanf("%d", &pontos);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);
    
    // Exibição dos dados da cidade
    printf("Informações da Carta:\n");
    printf("Código da Carta: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Pontos turísticos: %d\n", pontos);
    printf("Área: %f km²\n", area);
    printf("PIB: %f\n", PIB);

    return 0;
}
