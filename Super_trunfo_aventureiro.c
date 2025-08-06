#include <stdio.h>
#include <string.h>
    int main(){

        char estado1, estado2;
        char codigo1[4], codigo2[4];
        char cidade1[100], cidade2[100];
        int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int pontosTuristicos1, pontosTuristicos2;
        float densidadepopulacional1, densidadepopulacional2;
        float pibpercapita1, pibpercapita2;
       


        // Entrada de dados da Primeira Carta

        printf("\n ***** Calculando Densidade Populacional e PIB per Capita \n \n");

        printf("Digite a letra do Estado de (A ate H): \n");
        scanf(" %c", &estado1);

        printf("Digite o Codigo da Carta (ex: A01, B04): \n");
        scanf("%s", codigo1);
        getchar();

        printf("Digite o Nome da Cidade: \n");
        fgets(cidade1, sizeof(cidade1), stdin);
        cidade1[strcspn(cidade1, "\n")] = '\0';

        printf("Digite a Populacao da Cidade: \n");
        scanf("%d", &populacao1);

        printf("Digite a Area da Cidade por km : \n");
        scanf("%f", &area1);

        printf("Digite o PIB da Cidade: \n");
        scanf("%f", &pib1);

        printf("Digite a quantidade de pontos turisticos: \n");
        scanf("%d", &pontosTuristicos1);

        densidadepopulacional1 = (float) populacao1 / area1;
        pibpercapita1 =(float) pib1 / populacao1;

        // Entrada de dados da Segunda Carta

        printf("\n == Entre com os dados da segunda carta: == \n");

        printf("Digite a letra do Estado de (A ate H): \n");
        scanf(" %c", &estado2);

        printf("Digite o Codigo da Carta (ex: A01, B04): \n");
        scanf("%s", codigo2);
        getchar();

        printf("Digite o Nome da Cidade 2: \n");
        fgets(cidade1, sizeof(cidade1), stdin);
        cidade1[strcspn(cidade1, "\n")] = '\0';

        printf("Digite a Populacao da Cidade: \n");
        scanf("%d", &populacao2);

        printf("Digite a Area da Cidade por km : \n");
        scanf("%f", &area2);

        printf("Digite o PIB da Cidade: \n");
        scanf("%f", &pib2);

        printf("Digite a quantidade de pontos turisticos: \n");
        scanf("%d", &pontosTuristicos2);

        densidadepopulacional2 = (float) populacao2 / area2;
        pibpercapita2 =(float) pib2 / populacao2;

        // Saida dos dados das cartas

       printf("\nCarta 1:== \n");
       printf("Estado: %c \n", estado1);
       printf("Codigo: %s \n", codigo1);
       printf("Nome da Cidade: %s \n", cidade1);
       printf("Populacao: %d \n", populacao1);
       printf("Area: %.2f \n", area1);
       printf("PIB: %f \n", pib1);
       printf("Numeros de Pontos Turisticos: %d \n", pontosTuristicos1);
       printf("Densidade Populacional: %.2f \n \n", densidadepopulacional1);
       printf("PIB per Capita: %2f \n \n", pibpercapita1);

       printf("\nCarta 2:== \n");
       printf("Estado: %c \n", estado2);
       printf("Codigo: %s \n", codigo2);
       printf("Nome da Cidade: %s \n", cidade2);
       printf("Populacao: %d \n", populacao2);
       printf("Area: %.2f \n", area2);
       printf("PIB: %f \n", pib2);
       printf("Numeros de Pontos Turisticos: %d \n", pontosTuristicos2);
       printf("Densidade Populacional: %.2f \n \n", densidadepopulacional2);
       printf("PIB per Capita: %2f \n \n", pibpercapita2);
      

       return 0;

    }
