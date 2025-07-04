#include <stdio.h>

int main () {
    printf("Desafio Super Trunfo em C\n");

    int Carta, Turismo, Populacao, Carta2,Turismo2, Populacao2;
    char Estado;
    float Area, PIB, Area2, PIB2, PIBPC, PIBPC2, Densidade, Densidade2;
    
    //int:%d, char:%c (%s de string na real), float:%f ou %.(numero de numeros)f (ex:%.2f)


    printf("Digite o numero da carta 1: \n");
    scanf("%d", &Carta);

    printf("Digite a populacao da carta 1: \n");
    scanf("%d", &Populacao);

    printf("Digite a area da carta 1: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos da carta 1: \n");
    scanf("%d", &Turismo);

    PIBPC = (PIB / Populacao);

    printf("PIB Per Capita da carta 1:%f\n", PIBPC);

    Densidade = (Area / Populacao);

    printf("Densidade populacional da carta 1:%f\n", Densidade);

    printf("Digite o numero da carta 2: \n");
    scanf("%d", &Carta2);

    printf("Digite a populacao da carta 2: \n");
    scanf("%d", &Populacao2);

    printf("Digite a area da carta 2: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos da carta 2: \n");
    scanf("%d", &Turismo2);

    













    









}