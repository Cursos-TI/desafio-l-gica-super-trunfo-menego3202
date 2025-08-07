#include <stdio.h>
    /* Feito pelo aluno Lucas Menegotto matricula nº 202505072474
    */
int main() {
    int opcao;

    printf("=== Menu principal ===\n");
    printf("1. Jogo de cartas\n");
    printf("2. Como o jogo funciona\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Você escolheu jogar o jogo de cartas.\n");
        printf("Iniciando o jogo...\n");
    
    
    char estado1;   //adicionar o prefixo do primeiro estado
    char estado2;   //adicionar o prefixo do segundo estado

    char codigo1[4];    // código da carta 1 (ex: A01)
    char codigo2[4];    // código da carta 2

    unsigned long long int populacao1;     // população da cidade 1
    unsigned long long int populacao2;     // população da cidade 2

    float area1;        // área da cidade 1
    float area2;        // área da cidade 2

    float PIB1;         // PIB da cidade 1
    float PIB2;         // PIB da cidade 2

    int pontosTuristicos1; // pontos turísticos da cidade 1
    int pontosTuristicos2; // pontos turísticos da cidade 2


    printf("Digite uma letra de A - H para o primeiro Estado: \n");  // Solicita o prefixo do primeiro estado
    scanf(" %c", &estado1);

    printf("Digite uma letra de A - H para o segundo Estado: \n");   // Solicita o prefixo do segundo estado
    scanf(" %c", &estado2);

    printf("Digite o código da carta 1 (ex: A01): \n"); // Solicita o código da carta 1
    scanf("%3s", codigo1);

    printf("Digite o código da carta 2 (ex: A02): \n"); // Solicita o código da carta 2
    scanf("%3s", codigo2);

    printf("Digite a população da cidade 1: (digite em numeros inteiros, sem pontuações)\n");   // Solicita a população da cidade 1
    scanf("%llu", &populacao1);

    printf("Digite a população da cidade 2: (digite em numeros inteiros, sem pontuações)\n");   // Solicita a população da cidade 2
    scanf("%llu", &populacao2);

    printf("Digite a área da cidade 1: (digite em numeros inteiros, sem pontuações)\n");   // Solicita a área da cidade 1
    scanf("%f", &area1);    

    printf("Digite a área da cidade 2: (digite em numeros inteiros, sem pontuações)\n");    // Solicita a área da cidade 2
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 1: \n");     // Solicita o PIB da cidade 1
    scanf("%f", &PIB1);

    printf("Digite o PIB da cidade 2: \n");   // Solicita o PIB da cidade 2
    scanf("%f", &PIB2); 

    printf("Digite o número de pontos turísticos da cidade 1: \n"); // Solicita o número de pontos turísticos da cidade 1
    scanf("%d", &pontosTuristicos1);        

    printf("Digite o número de pontos turísticos da cidade 2: \n"); // Solicita o número de pontos turísticos da cidade 2
    scanf("%d", &pontosTuristicos2);

    float Densidade1, Densidade2;
    float PIBperCapita1, PIBperCapita2;

    Densidade1 = (float)populacao1 / area1;
    Densidade2 = (float)populacao2 / area2;

    PIBperCapita1 = (float)PIB1 / populacao1;
    PIBperCapita2 = (float)PIB2 / populacao2;

    printf("\nCarta 1:\n");     // Exibe os dados da carta 1
    printf("Estado: %c\n", estado1);        // Exibe o prefixo do primeiro estado
    printf("Código: %s\n", codigo1);        // Exibe o código da carta 1
    printf("População: %llu\n", populacao1);      // Exibe a população da cidade 1
    printf("Área: %.2f km²\n", area1);      // Exibe a área da cidade 1
    printf("PIB: %.2f reais\n", PIB1);      // Exibe o PIB da cidade 1
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);     // Exibe o número de pontos turísticos da cidade 1
    printf("Densidade Populacional: %f hab/km²\n", Densidade1); // Exibe a densidade populacional da cidade 1
    printf("PIB per Capita: %.4f reais\n", PIBperCapita1); // Exibe o PIB per capita da cidade 1

    printf("\nCarta 2:\n");     // Exibe os dados da carta 2
    printf("Estado: %c\n", estado2);    // Exibe o prefixo do segundo estado
    printf("Código: %s\n", codigo2);    // Exibe o código da carta 2
    printf("População: %llu\n", populacao2);      // Exibe a população da cidade 2
    printf("Área: %.2f km²\n", area2);      // Exibe a área da cidade 2
    printf("PIB: %.2f reais\n", PIB2);      // Exibe o PIB da cidade 2
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);     // Exibe o número de pontos turísticos da cidade 2 
    printf("Densidade Populacional: %f hab/km²\n", Densidade2); // Exibe a densidade populacional da cidade 2
    printf("PIB per Capita: %.4f reais\n", PIBperCapita2); // Exibe o PIB per capita da cidade 2   

    float superpoder1 = populacao1 + area1 + PIB1 + pontosTuristicos1 + Densidade1 + PIBperCapita1 + (1.0 / Densidade1);
    float superpoder2 = populacao2 + area2 + PIB2 + pontosTuristicos2 + Densidade2 + PIBperCapita2 + (1.0 / Densidade2);

    int opcao2;

        printf("\nComparação das cartas:\n");
        printf("selecione qual categoria deseja comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("7. Superpoder\n");
        printf("Digite sua escolha: ");
        scanf("%d", &opcao2);
        switch (opcao2)
        {
        case 1:
            printf("Comparando as cartas, atributo escolhido: população\n");
            if (populacao1 > populacao2) {
        printf("Carta 1 (%c%s) venceu!\n", estado1, codigo1);
        } else if (populacao1 < populacao2){
        printf("Carta 2 (%c%s) venceu!\n", estado2, codigo2);
        } else {
        printf("As cartas têm a mesma população.\n");
     }
            break;
        case 2:
            printf("Comparando as cartas, atributo escolhido: área\n");
            if (area1 > area2) {
                printf("Carta 1 (%c%s) venceu!\n", estado1, codigo1);
            } else if (area1 < area2) {
                printf("Carta 2 (%c%s) venceu!\n", estado2, codigo2);
            } else {
                printf("As cartas têm a mesma área.\n");
            }
            break;
        case 3:
            printf("Comparando as cartas, atributo escolhido: PIB\n");
            if (PIB1 > PIB2) {
                printf("Carta 1 (%c%s) venceu!\n", estado1, codigo1);
            } else if (PIB1 < PIB2){
                 printf("Carta 2 (%c%s) venceu!\n", estado2, codigo2);
            } else {
                printf("As cartas têm o mesmo PIB.\n");
            }
            break;
        case 4:
            printf("Comparando as cartas, atributo escolhido: Pontos Turísticos\n");
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Carta 1 (%c%s) venceu!\n", estado1, codigo1);
            } else if (pontosTuristicos1 < pontosTuristicos2){
                printf("Carta 2 (%c%s) venceu!\n", estado2, codigo2);
            } else {
                printf("As cartas têm o mesmo número de pontos turísticos.\n");
            }
            break;
        case 5:
            printf("Comparando as cartas, atributo escolhido: Densidade Populacional\n");
            if (Densidade1 < Densidade2) {
                printf("Carta 1 (%c%s) venceu!\n", estado1, codigo1);
            } else if (Densidade1 > Densidade2){
                printf("Carta 2 (%c%s) venceu!\n", estado2, codigo2);
            } else {
                printf("As cartas têm a mesma densidade populacional.\n");
            }
            break;
        case 6:
            printf("Comparando as cartas, atributo escolhido: PIB per Capita\n");
            if (PIBperCapita1 > PIBperCapita2) {
                printf("Carta 1 (%c%s) venceu!\n", estado1, codigo1);
            } else if (PIBperCapita1 < PIBperCapita2){
                printf("Carta 2 (%c%s) venceu!\n", estado2, codigo2);
            } else {
                printf("As cartas têm o mesmo PIB per capita.\n");
            }
            break;
        case 7:
            printf("Comparando as cartas, atributo escolhido: Superpoder\n");
            if (superpoder1 > superpoder2) {
                printf("Carta 1 (%c%s) venceu!\n", estado1, codigo1);
            } else if (superpoder1 < superpoder2){
                printf("Carta 2 (%c%s) venceu!\n", estado2, codigo2);
            } else {
                printf("As cartas têm o mesmo superpoder.\n");
            }
            break;

        
        default:
            break;
        }
        break;
    case 2:
        printf("Regras do jogo:\n");
        printf("1. O jogo consiste em comparar duas cartas de estados brasileiros.\n");
        printf("2. Cada carta contém informações sobre o estado em questão.\n");
        printf("3. A carta com mais pontos em cada categoria vence.\n");
        printf("4. O superpoder de cada carta é calculado com base nas informações fornecidas.\n");
        break;

    case 3:
        printf("Saindo do jogo. Até logo!\n");
    
    default:
        printf("opcao invalida. Por favor, escolha 1, 2 ou 3.\n");
        break;
    }



    
    
    return 0;
}
