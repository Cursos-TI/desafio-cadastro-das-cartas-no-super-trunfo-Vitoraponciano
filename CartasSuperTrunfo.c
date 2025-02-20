#include <stdio.h>

int main() {
    char nome1[50], codigo1[50], nome2[50], codigo2[50];
    int populacao1, pontos1, populacao2, pontos2;
    float area1, PIB1, area2, PIB2;

    printf("\nCadastro de carta do jogo super trunfo. \n");
    
    // Leitura dos dados das cartas
    printf("Digite o código da carta: ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome1);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite quantos pontos turisticos tem na cidade: ");
    scanf("%d", &pontos1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);
    
    // Exibição dos dados da carta
    printf("Informações da Primeira Carta:\n");
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f\n", PIB1);

    printf("\nCadastro da segunda Carta. \n");
    
    // Leitura da segunda carta
    printf("Digite o código da carta: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome2);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite quantos pontos turisticos tem na cidade: ");
    scanf("%d", &pontos2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);
    
    // Exibição dos dados da segunda carta carta
    printf("Informações da Primeira Carta:\n");
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f\n", PIB2);

    return 0;
}
