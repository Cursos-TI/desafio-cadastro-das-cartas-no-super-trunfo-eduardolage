#include <stdio.h>

int main () {

    float PIB, Populacao, Area;
    float PI, Densidade;

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a populacao: \n");
    scanf("%f", &Populacao);

    PI = (PIB / Populacao);
     
    printf("O PIB per capita e: %f", PI);
    

}