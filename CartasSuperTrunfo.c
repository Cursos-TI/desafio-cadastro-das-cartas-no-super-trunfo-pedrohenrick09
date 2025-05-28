#include <stdio.h>
typedef struct{  
    
    //estrutura da carta
    char estado[20];    
    char codigo[5];     
    char nomedacidade[50];    
    unsigned long int populacao;      
    float area;         
    float pib;          
    int pontosturisticos;    
    float densidadepopulacional;
    float pibpercapta;  
    float superpoder;
    float resultado;
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
    scanf("%lu", &carta1.populacao);

    printf("digite a area (em km²):");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da cidade:");
    scanf("%f", &carta1.pib);

    printf("Digite a quantidade de pontos turisticos:");
    scanf("%d", &carta1.pontosturisticos);

    //adições do nivel aventureiro (densidadepopulacional, PIB per capta)
    carta1.densidadepopulacional = carta1.populacao / carta1.area;
    carta1.pibpercapta = carta1.pib / carta1.populacao;

    //adição do super poder carta 1
    carta1.superpoder = carta1.populacao + carta1.area + carta1.pib + carta1.pontosturisticos + carta1.pibpercapta + (1 / carta1.densidadepopulacional);

    //cadastro e leitura da carta2
    printf("\nDigite os dados da segunda carta:\n");

    printf("\nDigite o estado:");
    scanf("%s", carta2.estado);

    printf("Digite o codigo da carta (ex: A01,):");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade:");
    scanf("%s", carta2.nomedacidade);

    printf("Digite a população:");
    scanf("%lu", &carta2.populacao);
    printf("digite a area (em km²):");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da cidade:");
    scanf("%f", &carta2.pib);

    printf("Digite a quantidade de pontos turisticos:");
    scanf("%d", &carta2.pontosturisticos);

    //adições do nivel aventureiro (densidadepopulacional, PIB per capta)
    carta1.densidadepopulacional = carta1.populacao / carta1.area;
    carta1.pibpercapta = carta1.pib / carta1.populacao;

    //adição do super poder carta 2

    carta2.superpoder = carta2.populacao + carta2.area + carta2.pib + carta2.pontosturisticos + carta2.pibpercapta + (1 / carta2.densidadepopulacional);

    //impressão das cartas cadastradas

    printf("\n*** Carta 1 *** \n");
    printf("Estado: %s \n", carta1.estado);
    printf("Codigo da carta: %s \n", carta1.codigo);
    printf("Nome da cidade: %s \n", carta1.nomedacidade);
    printf("População: %lu \n", carta1.populacao);
    printf("Area: %f \n", carta1.area);
    printf("PIB: %f \n", carta1.pib);
    printf("Pontos turisticos: %d \n", carta1.pontosturisticos);
    printf("Densidade Populacional (hab/km²): %.2f\n", carta1.densidadepopulacional);
    printf("PIB per Capita (R$): %.2f\n", carta1.pibpercapta);
    printf("Super Poder: %f", carta1.superpoder);


    printf("\n*** Carta 2 ***\n");
    printf("Estado: %s \n", carta2.estado);
    printf("Codigo da carta: %s \n", carta2.codigo);
    printf("Nome da cidade: %s \n", carta2.nomedacidade);
    printf("População: %lu \n", carta2.populacao);
    printf("Area: %f \n", carta2.area);
    printf("PIB: %f \n", carta2.pib);
    printf("Pontos turisticos: %d \n", carta2.pontosturisticos);
    printf("Densidade Populacional (hab/km²): %.2f\n", carta2.densidadepopulacional);
    printf("PIB per Capita (R$): %.2f\n", carta2.pibpercapta);
    printf("Super Poder: %f\n", carta2.superpoder);

    //Comparação das cartas
    printf("\n *** COMPARAÇÃO DAS CARTAS *** \n");
    printf("População: Carta 1 venceu %d\n", carta1.populacao > carta2.populacao);
    printf("Area: Carta 1 venceu %d \n", carta1.area > carta2.area);
    printf("PIB: Carta 1 venceu %d \n", carta1.area > carta2.area);
    printf("Pontos turisticos: %d\n", carta1.pontosturisticos > carta2.pontosturisticos);
    printf("Densidade Populacional: Carta 1 venceu %d\n", carta1.densidadepopulacional < carta2.densidadepopulacional);
    printf("PIB per capta: Carta 1 venceu %d \n", carta1.pibpercapta > carta2.pibpercapta);
    printf("Super Poder: Carta 1 venceu %d \n", carta1.superpoder > carta2.superpoder);

    printf("\n *** LEGENDA : CARTA 1 (1) | CARTA 2 (0) *** ");
}