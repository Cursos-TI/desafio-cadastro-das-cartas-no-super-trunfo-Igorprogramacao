#include <stdio.h>

int main(){
    char estado1 [10];
    char estado2 [10];
    char codigo1 [20];
    char codigo2 [20];
    char cidade1 [40];
    char cidade2 [40];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int turismo1;
    int turismo2;
    //pib(produto interno bruto)

    printf("Carta 1 \n");

    printf("A.");
    printf("Estado: \n");
    scanf(" %c",&estado1);
    
    printf("01. \n");
    printf("Codigo da carta: ");
    scanf(" %2s", codigo1);
    
    printf("Manaus. \n");
    printf("Nome da cidade: ");
    scanf(" %s",cidade1);
    
    printf("2.279.686. \n");
    printf("População: ");
    scanf(" %d",&populacao1);

    printf("11.401.092 km². \n");
    printf("Área KM²: ");
    scanf(" %f",&area1);
    
    printf("103,282 bilhões. \n");
    printf("PIB: ");
    scanf(" %f",&pib1);
     
    printf("10.");
    printf("Número de pontos turísticos: \n");
    scanf(" %d",&turismo1);

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área KM² %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de pontos turísticos %d\n", turismo1);


   

    printf("Carta 2\n");
    
    printf("B. \n");
    printf("Estado: ");
    scanf(" %c",&estado2);
    
    printf("02. \n");
    printf("Codigo da carta: ");
    scanf(" %2s",codigo2);
    
    printf("Goiania. \n");
    printf("Nome da cidade: ");
    scanf(" %s",cidade2);
    
    printf("1.494.599. \n");
    printf("População: ");
    scanf(" %d",&populacao2);
    
    printf("729,29km². \n");
    printf("Área KM²: ");
    scanf(" %f",&area2);
    
    printf("59,865 bilhões. \n");
    printf("PIB: ");
    scanf(" %f",&pib2);
    
    printf("8. \n");
    printf("Número de pontos turísticos: ");
    scanf(" %d",&turismo2);

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
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
   return 0;
   
}     
