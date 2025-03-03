#include <stdio.h>

int main() {
    char estado;
    char codigo [20];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turismo;
    //pib(produto interno bruto)

    printf("Carta 1 \n");

    printf("Estado: \n");
    scanf("%c", &estado);

    printf("Codigo da carta: \n");
    scanf("%s", codigo);

    printf("Nome da cidade: \n");
    scanf("%s", cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área KM²: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turismo);

    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Área KM² %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de pontos turísticos %d\n", turismo);

    /*
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d
    %f: Imprime um número de ponto flutuante no formato padrao
    %e: Imprime um numero de ponto flutuante na notação científica
    %c: Imprime um uniuco caractere
    %s: Imprime uma cadeira (strings) de caracteres
    */

    return 0;
}
