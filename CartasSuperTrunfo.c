#include <stdio.h>

int main() {
  //variáveis - carta A
  char stateA[2], codeA[3], cityA[50];
  int populationA, touristAttractionsA;
  float areaA, pibA;

  //variáveis - carta B
  char stateB[2], codeB[3], cityB[50];
  int populationB, touristAttractionsB;
  float areaB, pibB;

  // coletar dados das cartas - A
  printf(" --- Informe os dados da carta A --- \n");
  printf("Informe um caractere que represente o Estado: \n");
  scanf("%s", stateA);

  printf("Informe o código da carta (número de 01 à 04, deve incluir o 0 à esquerda): \n");
  scanf("%s", codeA);

  printf("Informe o nome da cidade (não use espaço): \n");
  scanf("%s", cityA);

  printf("Informe a população da cidade: \n");
  scanf("%d", &populationA);

  printf("Informe a àrea (em km quadrados) da cidade: \n");
  scanf("%f", &areaA);

  printf("Informe o pib da cidade: \n");
  scanf("%f", &pibA);

  printf("Informe a quantidade de pontos turísticos da cidade: \n");
  scanf("%d", &touristAttractionsA);

  // coletar dados das cartas - B
  printf(" --- Informe os dados da carta AB--- \n");
  printf("Informe um caractere que represente o Estado: \n");
  scanf("%s", stateB);

  printf("Informe o código da carta (número de 01 à 04, deve incluir o 0 à esquerda): \n");
  scanf("%s", codeB);

  printf("Informe o nome da cidade (não use espaço): \n");
  scanf("%s", cityB);

  printf("Informe a população da cidade: \n");
  scanf("%d", &populationB);

  printf("Informe a àrea (em km quadrados) da cidade: \n");
  scanf("%f", &areaB);

  printf("Informe o pib da cidade: \n");
  scanf("%f", &pibB);

  printf("Informe a quantidade de pontos turísticos da cidade: \n");
  scanf("%d", &touristAttractionsB);

  // printar dados carta A
  printf("Carta 1:\n");
  printf("Estado: %s \n", stateA);
  printf("Código: %s \n", codeA);
  printf("Nome da cidade (sem espaço): %s \n", cityA);
  printf("População: %d \n", populationA);
  printf("Área: %f km² \n", areaA);
  printf("PIB %f bilhões de reais \n", pibA);
  printf("Número de Pontos Turísticos: %d \n", touristAttractionsA);

  // printar dados carta B
  printf("Carta 1:\n");
  printf("Estado: %s \n", stateB);
  printf("Código: %s \n", codeB);
  printf("Nome da cidade (sem espaço): %s \n", cityB);
  printf("População: %d \n", populationB);
  printf("Área: %.3f km² \n", areaB);
  printf("PIB %.3f bilhões de reais \n", pibB);
  printf("Número de Pontos Turísticos: %d \n", touristAttractionsB);

  return 0;
}
