#include <stdio.h>

int main(){
    //Escolhas das variaveis
    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char cidade1[40], cidade2[40];
    int populacao1 = 2500000, populacao2 = 2000000;
    float area1 = 750, area2 = 1500;
    float pib1 = 10, pib2 = 2;
    int turismo1 = 60, turismo2 = 30;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    int atributo;
    //pib(produto interno bruto)

    //Informações da carta 1
    printf("\nCarta 1 \n");

    printf("Estado: Minas Gerais\n");
            
    printf("Codigo da carta: A01\n");
            
    printf("Nome da cidade: Belo Horizonte\n");
            
    printf("População: %d\n", populacao1);
        
    printf("Área: %.2fkm²\n", area1);
    
    printf("PIB: %.2f Bilhões\n", pib1);
    
    printf("Número de pontos turísticos: %d\n", turismo1);
    
    // Cálculo de densidade e pib per  capita da carta 1
    densidade1 = populacao1 / area1;    
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    printf("Densidade populacional: População / Àrea %.2f hab/km²\n", densidade1);
    printf("Pib Per Capita: PIB / População %.2f Reais\n", pib_per_capita1);
    
    // Informações da carta 2
    printf("\nCarta 2\n");   

    printf("\nEstado: Goiás\n");
    
    printf("Codigo da carta: B02\n");
    
    printf("Nome da cidade: Goiânia\n"); 
    
    printf("População: %d\n", populacao2);    
    
    printf("Área: %.2fkm²\n", area2);  
    
    printf("PIB: %.2f Bilhões\n", pib2);
    
    printf("Número de pontos turísticos: %d\n", turismo2);
    
   // Cálculo de densidadde e pib per capita carta 2
   densidade2 = populacao2 / area2;    
   pib_per_capita2 = (pib2 * 1000000000) / populacao2;

   printf("Densidade populacional: População / Àrea %.2f hab/km²\n", densidade2);
   printf("Pib Per Capita: PIB / População %.2f Reais\n", pib_per_capita2);
    
   
   /*Jogo das 2 cartas com a escolha dos 2 estados e 2 cidades com o uso do menu interativo com a estrutura
    switch e estrutura de comparação com if-else*/
    
    //Menu principal
   printf("Menu Principal\n");
   printf("Opções para disputa\n");
   printf("1. Populaçao\n");
   printf("2. Àrea\n");
   printf("3. PIB\n");
   printf("4. Pontos Turísticos\n");
   printf("5. Densidade Demográfica\n");
   printf("Escolha uma opção ");
   scanf("%d", &atributo);
    
   switch (atributo){
    case 1:
      if (populacao1 > populacao2){
          printf("Carta 1 Venceu!\n");
          printf("Minas Gerais x Goiás\n");
          printf("População de Belo Horizonte 2,5 milhões\n");
          printf("População de Goiânia 2 milhões\n");
      } else if (populacao1 < populacao2){
          printf("Carta 2 Venceu!\n");
          printf("Goiás x Minas Gerais\n");
          printf("População de Goiânia 2 milhões\n");
          printf("População de Belo Horizonte\n");
      } else{
        printf("Empatou!");
      }
        break;
    case 2:
      if (area1 > area2){
          printf("Carta 1 Venceu!\n");
          printf("Minas Gerais x Goiás\n");
          printf("Àrea de Belo Horizonte 2 mil km²\n");
          printf("Àrea de Goiânia 1 mil km²\n");
      } else if (area1 < area2){
          printf("Carta 2 Venceu!\n");
          printf("Goiás x Minas Gerais\n");
          printf("Àrea de Belo Horizonte 2 mil km²\n");
          printf("Àrea de Goiânia 1 mil km²\n");
      } else {
        printf("Empatou!");
      }
        break;
    case 3:
      if (pib1 > pib2){
          printf("Carta 1 Venceu!\n");
          printf("Minas Gerais x Goiás\n");
          printf("Belo Horizonte PIB de 10 bilhões\n");
          printf("Goiânia tem PIB de 2 bilhões\n");
      } else if (pib1 < pib2){
          printf("Carta 2 Venceu!\n");
          printf("Goiás x Minas Gerais\n");
          printf("Goiânia tem PIB de 2 bilhões\n");
          printf("Belo Horizonte tem PIB de 10 bilhões\n");
      } else {
        printf("Empatou!");
      }  
        break;
    case 4:
      if (turismo1 > turismo2){
          printf("Carta 1 Venceu!\n");
          printf("Minas Gerais x Goiás\n");
          printf("Belo Horizonte tem mais pontos turísticos\n");
          printf("Goiânia tem menos pontos turísticos\n");
      } else if (turismo1 < turismo2){
          printf("Carta 2 Venceu!\n");
          printf("Goiás x Minas Gerais\n");
          printf("Goiânia tem mais pontos turísticos\n");
          printf("Belo Horizonte tem menos pontos turísticos\n");
      } else {
        printf("Empatou!");
      }
        break;
    case 5:
      if (densidade1 < densidade2){
          printf("Carta 1 Venceu!\n");
          printf("Minas Gerais x Goiás\n");
          printf("Belo Horizonte é menos denso com %.2f hab/km²\n", densidade1);
          printf("Goiânia é mais denso com %.2f hab/km²\n", densidade2);
      } else if (densidade1 > densidade2){
          printf("Carta 2 Venceu!\n");
          printf("Goiás x Minas Gerais\n");
          printf("Goiânia é menos denso com %.2f hab/km²\n", densidade2);
          printf("Belo Horizonte é muito denso com %.2f hab/km²\n", densidade1);
      } else {
        printf("Empatou!");
      }
        break;    
    default:
        printf("Nenhuma das opções");
        break;
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