#include <stdio.h>

/* Feito pelo aluno Lucas Menegotto matricula nº 202505072474 */

int main() {
    int opcao;  // variável para armazenar a opção do menu principal

    do {
        // Menu principal do jogo
        printf("=== Menu principal ===\n");
        printf("1. Jogo de cartas\n");
        printf("2. Como o jogo funciona\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Você escolheu jogar o jogo de cartas.\n");
                printf("Iniciando o jogo...\n");

                // Declaração das variáveis das cartas
                char estado1, estado2;          // prefixo do estado (letra de A a H)
                char codigo1[4], codigo2[4];   // código da carta (ex: A01)

                // Dados numéricos das cidades (cartas)
                unsigned long long int populacao1, populacao2;  // população
                float area1, area2;                              // área em km²
                float PIB1, PIB2;                                // PIB em reais
                int pontosTuristicos1, pontosTuristicos2;       // número de pontos turísticos

                // Leitura dos dados da carta 1 e carta 2
                printf("Digite uma letra de A - H para o primeiro Estado: \n");
                scanf(" %c", &estado1);

                printf("Digite uma letra de A - H para o segundo Estado: \n");
                scanf(" %c", &estado2);

                printf("Digite o código da carta 1 (ex: A01): \n");
                scanf("%3s", codigo1);

                printf("Digite o código da carta 2 (ex: A02): \n");
                scanf("%3s", codigo2);

                printf("Digite a população da cidade 1: (digite em números inteiros, sem pontuações)\n");
                scanf("%llu", &populacao1);

                printf("Digite a população da cidade 2: (digite em números inteiros, sem pontuações)\n");
                scanf("%llu", &populacao2);

                printf("Digite a área da cidade 1: (digite em números decimais)\n");
                scanf("%f", &area1);

                printf("Digite a área da cidade 2: (digite em números decimais)\n");
                scanf("%f", &area2);

                printf("Digite o PIB da cidade 1: \n");
                scanf("%f", &PIB1);

                printf("Digite o PIB da cidade 2: \n");
                scanf("%f", &PIB2);

                printf("Digite o número de pontos turísticos da cidade 1: \n");
                scanf("%d", &pontosTuristicos1);

                printf("Digite o número de pontos turísticos da cidade 2: \n");
                scanf("%d", &pontosTuristicos2);

                // Cálculo de densidade populacional e PIB per capita para cada cidade
                float Densidade1 = (float)populacao1 / area1;
                float Densidade2 = (float)populacao2 / area2;

                float PIBperCapita1 = PIB1 / populacao1;
                float PIBperCapita2 = PIB2 / populacao2;

                // Cálculo do superpoder de cada carta com base nos atributos
                float superpoder1 = populacao1 + area1 + PIB1 + pontosTuristicos1 + Densidade1 + PIBperCapita1 + (1.0f / Densidade1);
                float superpoder2 = populacao2 + area2 + PIB2 + pontosTuristicos2 + Densidade2 + PIBperCapita2 + (1.0f / Densidade2);

                int escolha1 = 0, escolha2 = 0;  // Variáveis para armazenar os atributos escolhidos

                // Menu para escolher o primeiro atributo para comparar
                do {
                    printf("\nSelecione o primeiro atributo para comparar:\n");
                    printf("1. População\n");
                    printf("2. Área\n");
                    printf("3. PIB\n");
                    printf("4. Pontos Turísticos\n");
                    printf("5. Densidade Populacional\n");
                    printf("6. PIB per Capita\n");
                    printf("7. Superpoder\n");
                    printf("Escolha: ");
                    scanf("%d", &escolha1);

                    if (escolha1 < 1 || escolha1 > 7) {
                        printf("Opção inválida. Tente novamente.\n");
                    }
                } while (escolha1 < 1 || escolha1 > 7);

                // Menu para escolher o segundo atributo, diferente do primeiro
                do {
                    printf("\nSelecione o segundo atributo para comparar (diferente do primeiro):\n");
                    if (escolha1 != 1) printf("1. População\n");
                    if (escolha1 != 2) printf("2. Área\n");
                    if (escolha1 != 3) printf("3. PIB\n");
                    if (escolha1 != 4) printf("4. Pontos Turísticos\n");
                    if (escolha1 != 5) printf("5. Densidade Populacional\n");
                    if (escolha1 != 6) printf("6. PIB per Capita\n");
                    if (escolha1 != 7) printf("7. Superpoder\n");
                    printf("Escolha: ");
                    scanf("%d", &escolha2);

                    if (escolha2 < 1 || escolha2 > 7 || escolha2 == escolha1) {
                        printf("Opção inválida ou igual à primeira escolha. Tente novamente.\n");
                    }
                } while (escolha2 < 1 || escolha2 > 7 || escolha2 == escolha1);

                // Variáveis para armazenar os valores dos atributos escolhidos para cada carta
                float val1_attr1 = 0, val1_attr2 = 0;
                float val2_attr1 = 0, val2_attr2 = 0;

                // Atribui os valores corretos para o primeiro atributo escolhido
                switch (escolha1) {
                    case 1: val1_attr1 = (float)populacao1; val2_attr1 = (float)populacao2; break;
                    case 2: val1_attr1 = area1; val2_attr1 = area2; break;
                    case 3: val1_attr1 = PIB1; val2_attr1 = PIB2; break;
                    case 4: val1_attr1 = (float)pontosTuristicos1; val2_attr1 = (float)pontosTuristicos2; break;
                    case 5: val1_attr1 = Densidade1; val2_attr1 = Densidade2; break;
                    case 6: val1_attr1 = PIBperCapita1; val2_attr1 = PIBperCapita2; break;
                    case 7: val1_attr1 = superpoder1; val2_attr1 = superpoder2; break;
                }

                // Atribui os valores corretos para o segundo atributo escolhido
                switch (escolha2) {
                    case 1: val1_attr2 = (float)populacao1; val2_attr2 = (float)populacao2; break;
                    case 2: val1_attr2 = area1; val2_attr2 = area2; break;
                    case 3: val1_attr2 = PIB1; val2_attr2 = PIB2; break;
                    case 4: val1_attr2 = (float)pontosTuristicos1; val2_attr2 = (float)pontosTuristicos2; break;
                    case 5: val1_attr2 = Densidade1; val2_attr2 = Densidade2; break;
                    case 6: val1_attr2 = PIBperCapita1; val2_attr2 = PIBperCapita2; break;
                    case 7: val1_attr2 = superpoder1; val2_attr2 = superpoder2; break;
                }

                // Variáveis para armazenar os nomes dos atributos escolhidos (para mostrar depois)
                char nomeAttr1[30], nomeAttr2[30];
                switch (escolha1) {
                    case 1: sprintf(nomeAttr1, "População"); break;
                    case 2: sprintf(nomeAttr1, "Área"); break;
                    case 3: sprintf(nomeAttr1, "PIB"); break;
                    case 4: sprintf(nomeAttr1, "Pontos Turísticos"); break;
                    case 5: sprintf(nomeAttr1, "Densidade Populacional"); break;
                    case 6: sprintf(nomeAttr1, "PIB per Capita"); break;
                    case 7: sprintf(nomeAttr1, "Superpoder"); break;
                }
                switch (escolha2) {
                    case 1: sprintf(nomeAttr2, "População"); break;
                    case 2: sprintf(nomeAttr2, "Área"); break;
                    case 3: sprintf(nomeAttr2, "PIB"); break;
                    case 4: sprintf(nomeAttr2, "Pontos Turísticos"); break;
                    case 5: sprintf(nomeAttr2, "Densidade Populacional"); break;
                    case 6: sprintf(nomeAttr2, "PIB per Capita"); break;
                    case 7: sprintf(nomeAttr2, "Superpoder"); break;
                }

                // Variáveis para guardar o vencedor de cada atributo (0 = empate, 1 = carta 1, 2 = carta 2)
                int vencedorAttr1 = 0, vencedorAttr2 = 0;

                // Comparação do primeiro atributo (regra especial para densidade: menor valor vence)
                if (escolha1 == 5) {
                    if (val1_attr1 < val2_attr1) vencedorAttr1 = 1;
                    else if (val1_attr1 > val2_attr1) vencedorAttr1 = 2;
                    else vencedorAttr1 = 0;
                } else {
                    if (val1_attr1 > val2_attr1) vencedorAttr1 = 1;
                    else if (val1_attr1 < val2_attr1) vencedorAttr1 = 2;
                    else vencedorAttr1 = 0;
                }

                // Comparação do segundo atributo (mesma regra de densidade)
                if (escolha2 == 5) {
                    if (val1_attr2 < val2_attr2) vencedorAttr2 = 1;
                    else if (val1_attr2 > val2_attr2) vencedorAttr2 = 2;
                    else vencedorAttr2 = 0;
                } else {
                    if (val1_attr2 > val2_attr2) vencedorAttr2 = 1;
                    else if (val1_attr2 < val2_attr2) vencedorAttr2 = 2;
                    else vencedorAttr2 = 0;
                }

                // Soma dos valores dos dois atributos para cada carta
                float somaCarta1 = val1_attr1 + val1_attr2;
                float somaCarta2 = val2_attr1 + val2_attr2;

                // Exibição clara e organizada do resultado da comparação
                printf("\nComparação entre as cartas %c%s e %c%s:\n\n", estado1, codigo1, estado2, codigo2);

                printf("Atributo 1: %s\n", nomeAttr1);
                printf("  Carta 1: %.4f\n", val1_attr1);
                printf("  Carta 2: %.4f\n", val2_attr1);
                if (vencedorAttr1 == 1) printf("  => Vencedor: Carta 1 (%c%s)\n", estado1, codigo1);
                else if (vencedorAttr1 == 2) printf("  => Vencedor: Carta 2 (%c%s)\n", estado2, codigo2);
                else printf("  => Empate no atributo 1\n");

                printf("\nAtributo 2: %s\n", nomeAttr2);
                printf("  Carta 1: %.4f\n", val1_attr2);
                printf("  Carta 2: %.4f\n", val2_attr2);
                if (vencedorAttr2 == 1) printf("  => Vencedor: Carta 1 (%c%s)\n", estado1, codigo1);
                else if (vencedorAttr2 == 2) printf("  => Vencedor: Carta 2 (%c%s)\n", estado2, codigo2);
                else printf("  => Empate no atributo 2\n");

                printf("\nSoma dos atributos:\n");
                printf("  Carta 1: %.4f\n", somaCarta1);
                printf("  Carta 2: %.4f\n", somaCarta2);

                if (somaCarta1 > somaCarta2) {
                    printf("\nResultado final: Carta 1 (%c%s) venceu!\n", estado1, codigo1);
                } else if (somaCarta1 < somaCarta2) {
                    printf("\nResultado final: Carta 2 (%c%s) venceu!\n", estado2, codigo2);
                } else {
                    printf("\nResultado final: Empate!\n");
                }

                break;

            case 2:
                // Exibe as regras do jogo
                printf("Regras do jogo:\n");
                printf("1. O jogo consiste em comparar duas cartas de estados brasileiros.\n");
                printf("2. Cada carta contém informações sobre o estado em questão.\n");
                printf("3. A carta com mais pontos em cada categoria vence.\n");
                printf("4. O superpoder de cada carta é calculado com base nas informações fornecidas.\n");
                printf("5. Agora é possível comparar dois atributos ao mesmo tempo!\n");
                break;

            case 3:
                // Mensagem de saída
                printf("Saindo do jogo. Até logo!\n");
                break;

            default:
                // Tratamento de opção inválida
                printf("Opção inválida. Por favor, escolha 1, 2 ou 3.\n");
                break;
        }

        printf("\n");  // Espaço para melhor visualização ao voltar para o menu

    } while (opcao != 3);  // Repete até o usuário escolher sair (3)

    return 0;
}
