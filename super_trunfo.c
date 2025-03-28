#include <stdio.h>

int main(){
    
    int carta;
    char estado1 [10] ;
    char codigo1 [10] ;
    char cidade1 [50] ;
    int populacao1 ;
    float area1 ;
    float pib1 ;
    int numeroPontosTuristicos1 ; 


    printf("Carta: \n");
    scanf("%d", &carta);

    printf("Estado: \n");
    scanf("%s", estado1);

    printf("Código: \n");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade1);

    printf("Qual a População: \n");
    scanf("%d", &populacao1) ;

    printf("Qual a Área da Cidade : \n");
    scanf("%f", &area1);

    printf("Informe o PIB: \n");
    scanf("%f", &pib1 );

    printf("Quantos Pontos Turísticos: \n");
    scanf("%d", &numeroPontosTuristicos1);
    
    printf("Carta: %d\n", carta);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f Km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);
   

    return 0;


}
