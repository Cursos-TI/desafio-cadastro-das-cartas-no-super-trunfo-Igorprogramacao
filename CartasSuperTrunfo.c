#include <stdio.h>

int main(){
    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char cidade1[40], cidade2[40];
    int populacao1 = 2500000, populacao2 = 2000000;
    float area1 = 2000, area2 = 1000;
    float pib1 = 10, pib2 = 2;
    int turismo1 = 60, turismo2 = 30;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    //pib(produto interno bruto)

    printf("\nCarta 1 \n");

    printf("Estado: Minas Gerais\n");
            
    printf("Codigo da carta: A01\n");
            
    printf("Nome da cidade: Belo Horizonte\n");
            
    printf("População: 2.500,000\n");
        
    printf("Área 2.000km²: \n");
    
    printf("PIB: 10 Bilhões\n");
    
    printf("Número de pontos turísticos: 60 \n");
    
    // Cálculo carta 1
    densidade1 = populacao1 / area1;    
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // informações da carta
    printf("Densidade populacional: População / Àrea %.2f hab/km²\n", densidade1);
    printf("Pib Per Capita: PIB / População %.2f Reais\n", pib_per_capita1);
    
    printf("\nCarta 2\n");   

    printf("\nEstado: Goias\n");
    
    printf("Codigo da carta: B02\n");
    
    printf("Nome da cidade: Goiânia \n"); 
    
    printf("População: 2.000,000\n");    
    
    printf("Área: 1.000 km²\n");  
    
    printf("PIB: 2 Bilhões \n");
    
    printf("Número de pontos turísticos: 30 \n");
    
   // Cálculo carta 2
   densidade2 = populacao2 / area2;    
   pib_per_capita2 = (pib2 * 1000000000) / populacao2;

   // informações da carta
   printf("Densidade populacional: População / Àrea %.2f hab/km²\n", densidade2);
   printf("Pib Per Capita: PIB / População %.2f Reais\n", pib_per_capita2);

    // Comparação de cartas
    printf("carta 1 - Belo Horizonte (MG) 2.500,000\n");
    printf("Carta 2 - Goiânia (GO): 1.500,000\n");
    if(populacao1 > populacao2){
        printf("Carta 1 (Belo Horizonte)venceu!\n");
    }else{
        printf("Carta 2 (Goiânia) venceu!\n");
    }
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