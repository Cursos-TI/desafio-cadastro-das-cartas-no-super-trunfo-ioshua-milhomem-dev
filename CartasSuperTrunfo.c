#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    char estado1[100];
    char codigoDaCarta1[4];
    char nomeDaCidade1[50];
    int população1;
    float area1;
    float PIB1;
    int NumerodePontosTúristicos1;

    printf("carta numero 1 \n");

    printf("estado: \n");
    scanf("%s", estado1);

    printf("codigo da carta: \n");
    scanf("%s", codigoDaCarta1);

    printf("nome da cidade: \n");
    scanf("%s", nomeDaCidade1);

    printf("população: \n");
    scanf("%d", &população1);

    printf("area do estado: \n");
    scanf("%f", &area1);

    printf("produto interno bruto(PIB) \n");
    scanf("%f", &PIB1);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &NumerodePontosTúristicos1);

    char estado2[100];
    char codigoDaCarta2[4];
    char nomeDaCidade2[50];
    int população2;
    float area2;
    float PIB2;
    int NumerodePontosTúristicos2;

    printf("carta numero 2 \n");

    printf("estado: \n");
    scanf("%s", estado2);

    printf("codigo da carta: \n");
    scanf("%s", codigoDaCarta2);

    printf("nome da cidade: \n");
    scanf("%s", nomeDaCidade2);

    printf("população: \n");
    scanf("%d", &população2);

    printf("area do estado: \n");
    scanf("%f", &area2);

    printf("produto interno bruto(PIB) \n");
    scanf("%f", &PIB2);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &NumerodePontosTúristicos2);
    printf("\n\n");
    printf("Carta 1 \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s \n", codigoDaCarta1);
    printf("Nome da cidade: %s \n", nomeDaCidade1);
    printf("População: %d  \n", população1);
    printf("Àrea: %f  \n", area1);
    printf("PIB: %f \n", PIB1);
    printf("Numero de Pontos Turisticos: %D \ngo\n", NumerodePontosTúristicos1);

    printf("Carta 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigoDaCarta2);
    printf("Nome da cidade: %s \n", nomeDaCidade2);
    printf("População: %d  \n", população2);
    printf("Àrea: %f  \n", area2);
    printf("PIB: %f \n", PIB2);
    printf("Numero de Pontos Turisticos: %d \n", NumerodePontosTúristicos2);

    return 0;
}
