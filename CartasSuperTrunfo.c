#include <stdio.h>
/* Este é um programa que permite ao usuario o cadastro das cartas que seram usadas
 no jogo Super Trunfo*/
int main() {

    // Declaraçao das variaveis carta 1
    char estado1, codigocarta1[50], nomecidade1[50];
    int pontosturisticos1;
    unsigned long int populacao1;
    float area1, pib1; 
    float densidadepop1;
    float pibpercapita1;
    float superpoder1;
    // Declaração das variaveis carta 2
    char estado2, codigocarta2[50], nomecidade2[50];
    int pontosturisticos2;
    unsigned long int populacao2;
    float area2, pib2; 
    float densidadepop2;
    float pibpercapita2; 
    float superpoder2;
    // Declaração e inicialização das variaveis a serem usadas
    
    
    printf("Carta 1\n");
    printf("digite uma letra de A a H:\n");
    scanf(" %c", &estado1);

    printf("digite o codigo da carta: \n");
    scanf("%s", codigocarta1);

    printf("digite o nome da cidade: \n");
    scanf("%s", nomecidade1);

    printf("digite a populaçao: \n");
    scanf("%lu", &populacao1);

    printf("digite quantos pontos turisticos: \n");
    scanf("%d", &pontosturisticos1);

    printf("digite a area do estado: \n");
    scanf("%f", &area1);

    printf("digite o pib: \n");
    scanf("%f", &pib1);

    densidadepop1 = (populacao1 / area1);

    pibpercapita1 = (pib1 / populacao1);

    superpoder1 = (populacao1 +area1 + pontosturisticos1 + pib1 + (1/densidadepop1));

    printf("Carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidadepopulacional: %.2f\n", densidadepop1);
    printf("PIBpercapita: %.2f\n", pibpercapita1);
    printf("super Poder: %.2f\n", superpoder1);

    
     // Segunda carta

    printf("Carta 2 \n");
    ("digite uma letra de A a H: \n");
    scanf(" %c", &estado2);

    printf("digite o codigo da carta: \n");
    scanf("%s", codigocarta2);

    printf("digite o nome da cidade: \n");
    scanf("%s", nomecidade2);

    printf("digite a populaçao: \n");
    scanf("%lu", &populacao2);

    printf("digite quantos pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    printf("digite a area do estado: \n");
    scanf("%f", &area2);

    printf("digite o pib: \n");
    scanf("%f", &pib2);

    densidadepop2 = (populacao2 / area2);

    pibpercapita2 = (pib2 / populacao2);
    
    superpoder2 = (populacao2 +area2 + pontosturisticos2 + pib2 + (1/densidadepop2));

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("Populacao2: %lu\n", populacao2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidadepopulacional2: %.2f\n", densidadepop2);
    printf("PIBpercapita2; %.2f\n", pibpercapita2);
    printf("super Poder: %.2f\n", superpoder2);
   return 0;

}
