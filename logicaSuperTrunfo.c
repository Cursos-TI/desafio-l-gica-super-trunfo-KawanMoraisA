#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado;
    char codigo[4];
    char nome[20];
    unsigned long int populacao;
    float area;
    float pib;
    int numeroPontoTuristico;
    float densidadePopulacional;
    float pibPerCapital;
    float superPoder;


    char estado2;
    char codigo2[4];
    char nome2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numeroPontoTuristico2;
    float densidadePopulacional2;
    float pibPerCapital2;
    float superPoder2;

    unsigned int batalha; // nova variavel pra armazenar a escolha de abributo para batalha.

    //Essa parte de variaveis e cadastro das cartas eu peguei do codigo anterior já que estava comentado que poderia fazer isso.

    printf("Cadastrar carta 1:\n");
    printf("Escolha uma letra para representar o estado(de A a H): ");
    scanf(" %c", &estado);

    printf("\nEscolha um numero de 01 a 04: ");
    scanf("%s", codigo);
    
    printf("\nEscolha o nome da cidade:");
    getchar(); // isso serve pra limpar o \n e evitar que ocorre um erro e saia (null) como output da variavel
    scanf(" %[^\n]", nome);
    
    printf("\nQual a população da cidade?:");
    scanf("%u", &populacao);
    
    printf("\nQual a area da cidade?:");
    scanf("%f", &area);

    printf("\nQual o pib da cidade?:");
    scanf("%f", &pib);
    
    printf("\nQuantos pontos turisticos ela tem?:");
    scanf("%d", &numeroPontoTuristico);

    densidadePopulacional = populacao / area;

    pibPerCapital = pib / populacao;

    superPoder = (float)populacao + area + pib + numeroPontoTuristico + pibPerCapital + densidadePopulacional;

    printf("\n Carta 01 tem os seguintes dados: \n");
    printf(" estado: %c \n codigo: %c%s \n nome: %s \n populaçao: %u \n area: %f \n pib: %f \n quantidade de pontos turisticos: %d \n Densidade Populacional: %f hab/km² \n PIB per Capita: %f reais \n Super Poder: %.2f \n", estado, estado, codigo, nome, populacao, area, pib, numeroPontoTuristico, densidadePopulacional, pibPerCapital, superPoder);

    printf("\n\nCadastrar carta 2:\n");
    printf("Escolha uma letra para representar o estado(de A a H): ");
    scanf(" %c", &estado2);

    printf("\nEscolha um numero de 01 a 04: ");
    scanf("%s", codigo2);
    
    printf("\nEscolha o nome da cidade:");
    getchar(); 
    scanf(" %[^\n]", nome2); /* Essa expressão '%[^\n]' serve pro codigo ler o input até encontrar uma quebra de linha(\n). Quando eu 
    tava desenvolvendo, se eu colocava como input 'são paulo', o codigo registrava essa variavel como 'são' e colocava o 'paulo'
    na proxima. Pesquisei como resolver esse problema e encontrei essa solução.
    */
    
    printf("\nQual a população da cidade?:");
    scanf("%u", &populacao2);
    
    printf("\nQual a area da cidade?:");
    scanf("%f", &area2);

    printf("\nQual o pib da cidade?:");
    scanf("%f", &pib2);

    printf("\nQuantos pontos turisticos ela tem?:");
    scanf("%d", &numeroPontoTuristico2);

    densidadePopulacional2 = populacao2 / area2;

    pibPerCapital2 = pib2 / populacao2;

    superPoder2 = (float)populacao2 + area2 + pib2 + numeroPontoTuristico2 + pibPerCapital2 + densidadePopulacional2;
    
    printf("\n Carta 02 tem os seguintes dados: \n");
    printf(" estado: %c \n codigo: %c%s \n nome: %s \n populaçao: %u \n area: %f \n pib: %f \n quantidade de pontos turisticos: %d \n Densidade Populacional: %f hab/km² \n PIB per Capita: %f reais \n Super Poder: %.2f \n", estado2, estado2, codigo2, nome2, populacao2, area2, pib2, numeroPontoTuristico2, densidadePopulacional2, pibPerCapital2, superPoder2);

    /*
    Agora pra parte de escolher um atributo pra batalhar, to pensando em criar uma variavel que armazene o atributo escolhido.
    Eu dou uma opção numerica pro usuario, ele escolhe um numero e usando if e else, ele determina o vencedor da batalha que o
    usuario escolheu. o nome da variavel será 'batalha', vou registrala como unsigned int no inicio.
    */

    printf("\n\nEscolha um atributo(de 1 a 7) para batalhar: \n");
    printf("%s Contra %s \n", nome, nome2);
    printf("\n (1) População; \n (2) Area; \n (3) PIB; \n (4) Numero de Pontos Turisticos; \n (5) Densidade Populacional; \n (6) PIB Per Capital; \n (7) Super Poder; \n");
    scanf("%u", &batalha);

    //Aqui vou usar if..else compostos: Em um if comparo os valores de 'batalha' e dentro desse if eu coloco outro para definir o vencedor
    
    if (batalha == 1){
        if (populacao > populacao2){
            printf("Carta 1 - %s: %u \n", nome, populacao);
            printf("Carta 2 - %s: %u \n", nome2, populacao2);
            printf("População de %s(%u) venceu contra a de %s \n", nome, populacao, nome2);
            } else{
                printf("Carta 1 - %s: %u \n", nome, populacao);
                printf("Carta 2 - %s: %u \n", nome2, populacao2);
                printf("População de %s(%u) venceu contra a de %s \n", nome2, populacao2, nome);
            }
    }else if (batalha == 2){
        if (area > area2){
            printf("Carta 1 - %s: %f \n", nome, area);
            printf("Carta 2 - %s: %f \n", nome2, area2);
            printf("Area de %s(%f) venceu contra a de %s \n", nome, area, nome2);
        } else{
            printf("Carta 1 - %s: %f \n", nome, area);
            printf("Carta 2 - %s: %f \n", nome2, area2);
            printf("Area de %s(%f) venceu contra a de %s \n", nome2, area, nome);
        }
    }else if (batalha == 3){
        if (pib > pib2){
            printf("Carta 1 - %s: %f \n", nome, pib);
            printf("Carta 2 - %s: %f \n", nome2, pib2);
            printf("PIB de %s(%u) venceu contra a de %s \n", nome, pib, nome2);
        } else{
            printf("Carta 1 - %s: %f \n", nome, pib);
            printf("Carta 2 - %s: %f \n", nome2, pib2);
            printf("PIB de %s(%u) venceu contra a de %s \n", nome2, pib2, nome);
        }
    }else if (batalha == 4){
        if (numeroPontoTuristico > numeroPontoTuristico2){
            printf("Carta 1 - %s: %u \n", nome, populacao);
            printf("Carta 2 - %s: %u \n", nome2, populacao2);
            printf("Quantidade de pontos turisticos de %s(%u) venceu contra o de %s \n", nome, numeroPontoTuristico, nome2);
        } else{
            printf("Carta 1 - %s: %u \n", nome, populacao);
            printf("Carta 2 - %s: %u \n", nome2, populacao2);
            printf("Quantidade de pontos turisticos de %s(%u) venceu contra o de %s \n", nome2, numeroPontoTuristico2, nome);
        }
    }else if (batalha == 5){
        if (densidadePopulacional < densidadePopulacional2){
            printf("Carta 1 - %s: %u \n", nome, populacao);
            printf("Carta 2 - %s: %u \n", nome2, populacao2);
            printf("Densidade populacional de %s(%u) venceu contra a de %s \n", nome, densidadePopulacional, nome2);
        } else{
            printf("Carta 1 - %s: %u \n", nome, populacao);
            printf("Carta 2 - %s: %u \n", nome2, populacao2);
            printf("Densidade populacional de %s(%u) venceu contra a de %s \n", nome2, densidadePopulacional2, nome);
        }
    }else if (batalha == 6){
        if (pibPerCapital > pibPerCapital2){
            printf("Carta 1 - %s: %u \n", nome, populacao);
            printf("Carta 2 - %s: %u \n", nome2, populacao2);
            printf("PIB per capital de %s(%u) venceu contra a de %s \n", nome, pibPerCapital, nome2);
        } else{
            printf("Carta 1 - %s: %u \n", nome, populacao);
            printf("Carta 2 - %s: %u \n", nome2, populacao2);
            printf("PIB per capital de %s(%u) venceu contra a de %s \n", nome2, pibPerCapital2, nome);
        }
    }else if (batalha == 7){
        if (superPoder > superPoder2){
            printf("Carta 1 - %s: %u \n", nome, populacao);
            printf("Carta 2 - %s: %u \n", nome2, populacao2);
            printf("O Super Poder de %s(%u) venceu contra o de %s \n", nome, superPoder, nome2);
        } else{
            printf("Carta 1 - %s: %u \n", nome, populacao);
            printf("Carta 2 - %s: %u \n", nome2, populacao2);
            printf("O Super Poder de %s(%u) venceu contra o de %s \n", nome2, superPoder2, nome);
        }
    }else{
        printf("Erro: Numero Invalido");
    }

    return 0;
}
