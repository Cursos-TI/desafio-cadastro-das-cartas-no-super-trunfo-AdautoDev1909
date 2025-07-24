#include <stdio.h>

int main(){
    char estado1, estado2;
    char codigo1[50],codigo2[50],cidade1[50],cidade2[100];
    int populacao1, populacao2, pontoT1, pontoT2; 
    float area1, area2, pib1, pib2;
    
      printf("Carta 1: Digite A INICIAL do seu estado: \n");
        scanf("%s", &estado1);

      printf("Digite o código da sua carta(inicial com numero de 01 a 04): \n");
       scanf(" %s", codigo1);

      printf("Digite o nome da cidade: \n");
       scanf(" %s", cidade1);

      printf("Diga o número de habitantes da sua cidade: \n");
       scanf(" %d", &populacao1);

      printf("Insira o tamanho(área) da sua cidade: \n");
       scanf(" %f", &area1);

       printf("Digite o PIB da sua cidade: \n");
        scanf(" %f", &pib1);

       printf("Digite a quantidade de ponto turísticos que há na cidade: \n");
        scanf(" %d", &pontoT1);

         printf("Carta 2: Digite A INICIAL do seu estado: \n");
        scanf("%s", &estado2);

        printf("Digite o código da sua carta(inicial com numero de 01 a 04): \n");
         scanf(" %s", codigo2);

        printf("Digite o nome da cidade: \n");
         scanf(" %s", cidade2);

        printf("Diga o número de habitantes da sua cidade: \n");
         scanf(" %d", &populacao2);

        printf("Insira o tamanho(área) da sua cidade: \n");
         scanf(" %f", &area2);

         printf("Digite o PIB da sua cidade: \n");
          scanf(" %f", &pib2);

         printf("Digite a quantidade de ponto turísticos que há na cidade: \n");
          scanf(" %d", &pontoT2);

        printf("Carta 1: Estado(inicial) %s\n", &estado1);
        printf("Código: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %f\n", area1);
        printf("PIB: %f\n", pib1);
        printf("Ponto Turístico: %d\n", pontoT1);
        printf("Carta 2: Estado(inicial) %s\n", &estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %f\n", area2);
        printf("PIB: %f\n", pib2);
        printf("Ponto Turístico: %d\n", pontoT2);
        
        return 0;

}
