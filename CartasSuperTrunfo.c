#include <stdio.h>

int main() {
    char nome1[50], codigo1[50], nome2[50], codigo2[50];
    int populacao1, pontos1, populacao2, pontos2;
    float area1, PIB1, area2, PIB2, densidade1, densidade2, percapita1, percapita2, poder1, invertida1;
    float poder2, invertida2;

    printf("\nCadastro de carta do jogo super trunfo. \n");
    
    // Leitura dos dados da 1 carta
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite quantos pontos turisticos tem na cidade: ");
    scanf("%d", &pontos1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);

    // calculando densidade populacional
    densidade1 = populacao1 / area1;
    // calculando PIB per capita
    percapita1 = PIB1 / populacao1;

    // Calculando a densidade invertida 
    invertida1 = 1 / densidade1; 
    // Calculando super poder
    poder1 = PIB1 + area1 + populacao1 + pontos1 + percapita1 + invertida1;

    // Exibição dos dados da carta
    printf("Informações da Primeira Carta:\n");
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Área: %2.f km²\n", area1);
    printf("PIB: %2.f\n", PIB1);
    printf("Densidade populacional: %f hab/km²\n", densidade1);
    printf("PIB per capita: %f reais\n", percapita1);

    printf("\nCadastro da segunda Carta. \n");
    
    // Leitura da segunda carta
    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite quantos pontos turisticos tem na cidade: ");
    scanf("%d", &pontos2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    // calculando densidade populacional
    densidade2 = populacao2 / area2;
    // calculando PIB per capita
    percapita2 = PIB2 / populacao2;

    // Calculando a densidade invertida 
    invertida2 = 1 / densidade2; 
    // Calculando super poder
    poder2 = PIB2 + area2 + populacao2 + pontos2 + percapita2 + invertida2;

    // Exibição dos dados da segunda carta
    printf("Informações da Segunda Carta:\n");
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Área: %2.f km²\n", area2);
    printf("PIB: %2.f\n", PIB2);
    printf("Densidade populacional: %f hab/km²\n", densidade2);
    printf("PIB per capita: %f reais\n", percapita2);

    // calculando vencedor
    poder1 > poder2;

    return 0;
}
