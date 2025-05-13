#include <stdio.h>
typedef struct{  
    
    //estrutura da carta
    char estado[20];    
    char codigo[5];     
    char nomedacidade[50];    
    int populacao;      
    float area;         
    float pib;          
    int pontosturisticos;    
} carta;


int main(){

    //declaração das cartas
    carta carta1, carta2; 

    //cadastro e leitura da carta 1
    printf("\nDigite os dados da primeira carta: \n ");

    printf("\nDigite o estado:");
    scanf("%s", carta1.estado);

    printf("Digite o codigo da carta (ex: A01,):");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade:");
    scanf("%s", carta1.nomedacidade);

    printf("Digite a população:");
    scanf("%d", &carta1.populacao);

    printf("digite a area (em km²):");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da cidade:");
    scanf("%f", &carta1.pib);

    printf("Digite a quantidade de pontos turisticos:");
    scanf("%d", &carta1.pontosturisticos);

    //cadastro e leitura da carta2
    printf("\nDigite os dados da segunda carta:\n");

    printf("\nDigite o estado:");
    scanf("%s", carta2.estado);

    printf("Digite o codigo da carta (ex: A01,):");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade:");
    scanf("%s", carta2.nomedacidade);

    printf("Digite a população:");
    scanf("%d", &carta2.populacao);

    printf("digite a area (em km²):");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da cidade:");
    scanf("%f", &carta2.pib);

    printf("Digite a quantidade de pontos turisticos:");
    scanf("%d", &carta2.pontosturisticos);

    //impressão das cartas cadastradas

    printf("\n Carta 1: \n");
    printf("Estado: %s \n", carta1.estado);
    printf("Codigo da carta: %s \n", carta1.codigo);
    printf("Nome da cidade: %s \n", carta1.nomedacidade);
    printf("População: %d \n", carta1.populacao);
    printf("Area: %f \n", carta1.area);
    printf("PIB: %f \n", carta1.pib);
    printf("Pontos turisticos: %d \n", carta1.pontosturisticos);


    printf("\n Carta 2: \n");
    printf("Estado: %s \n", carta2.estado);
    printf("Codigo da carta: %s \n", carta2.codigo);
    printf("Nome da cidade: %s \n", carta2.nomedacidade);
    printf("População: %d \n", carta2.populacao);
    printf("Area: %f \n", carta2.area);
    printf("PIB: %f \n", carta2.pib);
    printf("Pontos turisticos: %d \n", carta2.pontosturisticos);

}
