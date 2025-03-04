#include <stdio.h>

int main(){
    char estado1 [10];
    char estado2 [10];
    char codigo1 [20];
    char codigo2 [20];
    char cidade1 [40];
    char cidade2 [40];
    float populacao1;
    float populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int turismo1;
    int turismo2;
    //pib(produto interno bruto)

    printf("Carta 1 \n");

    printf("Estado: \n");
    scanf("%c", &estado1);

    printf("Codigo da carta: \n");
    scanf("%s", codigo1);

    printf("Nome da cidade: \n");
    scanf("%s", cidade1);

    printf("População: \n");
    scanf("%f", &populacao1);

    printf("Área KM²: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turismo1);

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %f\n", populacao1);
    printf("Área KM² %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de pontos turísticos %d\n", turismo1);


   

    printf("Carta 2\n");

    printf("Estado: \n");
    scanf("%c", &estado2);

    printf("Codigo da carta: \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%f", &populacao2);

    printf("Área KM²: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turismo2);

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %f\n", populacao2);
    printf("Área KM² %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de pontos turísticos %d\n", turismo2);

    /*
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d
    %f: Imprime um número de ponto flutuante no formato padrao
    %e: Imprime um numero de ponto flutuante na notação científica
    %c: Imprime um unico caractere
    %s: Imprime uma cadeira (strings) de caracteres
    */
   
}     
