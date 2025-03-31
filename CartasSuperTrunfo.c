#include <stdio.h>

struct Cidade {
    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
};

int main() {
    printf("Desafio Super Trunfo!\n"); 
    printf("CARTA 1\n");

    
    struct Cidade carta1 = {'A', "A4", "Rio Branco", 800000, 250000.0, 950000.0, 20};

    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosturisticos);

    printf("Desafio Super Trunfo!\n"); 
    printf("CARTA 2\n");

    
    struct Cidade carta2 = {'B', "B2", "Maceio", 1200000, 550000.0, 880000.0, 40};

    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosturisticos);

    return 0;
}
