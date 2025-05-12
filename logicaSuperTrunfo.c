#include <stdio.h>
#include <string.h> // manipular as variaveis tipo strings

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado[2];
    char codigo[4];
    char nome[20];
    unsigned long int populacao;
    float area;
    float pib;
    int numeroPontoTuristico;
    float densidadePopulacional;
    float pibPerCapital;
    float superPoder;


    char estado2[2];
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

    //Essa parte de variaveis e cadastro das cartas eu havia pegado do codigo anterior já que estava comentado que poderia fazer isso.
    /*Mas como agora no nivel Aventureiro estava escrito que poderia usar as cartas cadastradas no nivel anteior por motivos de
    simplificação("Você pode usar as cartas que já foram cadastradas no desafio anterior. Não é necessário implementar o cadastro novamente neste nível.")
    Eu interpretei que não precisava do sistema de cadastro, então vou declarar as variaveis direto no codigo. */

    strcpy(nome, "São Paulo"); // strcpy serve pra manipular variaveis tipo string.
    strcpy(codigo, "01"); // em todas as variaveis tipo char tive que usar strcpy pra definir as variaveis.
    strcpy(estado, "A");
    populacao = 11451999;
    area = 1521;
    pib = 3500000000000;
    numeroPontoTuristico = 37;

    densidadePopulacional = populacao / area;

    pibPerCapital = pib / populacao;

    superPoder = (float)populacao + area + pib + numeroPontoTuristico + pibPerCapital + densidadePopulacional;

    printf("\n Carta 01 tem os seguintes dados: \n");
    printf("Estado: %s \n", estado);
    printf("Codigo: %s%s \n", estado, codigo);
    printf("Nome: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Area: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Quantidade de pontos turisticos: %d \n", numeroPontoTuristico);
    printf("Densidade Populacional: %f \n", densidadePopulacional);
    printf("PIB Per Capital: %f \n", pibPerCapital);
    printf("Super Poder: %.2f \n", superPoder);
    
    strcpy(nome2, "Rio De Janeiro"); // aqui definimos as variaveis da segunda carta do mesmo jeito que a primeira
    strcpy(codigo2, "02");
    strcpy(estado2, "B");
    populacao2 = 6211000;
    area2 = 43696;
    pib2 = 1153000000000;
    numeroPontoTuristico2 = 120;

    densidadePopulacional2 = populacao2 / area2;

    pibPerCapital2 = pib2 / populacao2;

    superPoder2 = (float)populacao2 + area2 + pib2 + numeroPontoTuristico2 + pibPerCapital2 + densidadePopulacional2;
    
    printf("\n Carta 02 tem os seguintes dados: \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s%s \n", estado2, codigo2);
    printf("Nome: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Area: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Quantidade de pontos turisticos: %d \n", numeroPontoTuristico2);
    printf("Densidade Populacional: %f \n", densidadePopulacional2);
    printf("PIB Per Capital: %f \n", pibPerCapital2);
    printf("Super Poder: %.2f \n", superPoder2);
    /*
    Agora pra parte de escolher um atributo pra batalhar, to pensando em criar uma variavel que armazene o atributo escolhido.
    Eu dou uma opção numerica pro usuario, ele escolhe um numero e usando if e else, ele determina o vencedor da batalha que o
    usuario escolheu. o nome da variavel será 'batalha', vou registrala como unsigned int no inicio.
    */

    printf("\n\nEscolha um atributo(de 1 a 7) para batalhar: \n");
    printf("%s Contra %s \n", nome, nome2);
    printf("\n (1) População; \n (2) Area; \n (3) PIB; \n (4) Numero de Pontos Turisticos; \n (5) Densidade Populacional; \n (6) PIB Per Capital; \n (7) Super Poder; \n");
    scanf("%u", &batalha);

    //Aqui vou usar switch e if..else aninhados: Em um if comparo os valores de 'batalha' e dentro desse if eu coloco outro para definir o vencedor
    
    switch (batalha)
    {
    case 1:
        if (populacao > populacao2){
            printf("Carta 1 - %s: População = %u \n", nome, populacao);
            printf("Carta 2 - %s: População = %u \n", nome2, populacao2);
            printf("População de %s(%u) venceu \n", nome, populacao);
            } else if (populacao == populacao2){
                printf("Carta 1 - %s: População = %u \n", nome, populacao);
                printf("Carta 2 - %s: População = %u \n", nome2, populacao2);
                printf("EMPATE!\n");
            } else{
                printf("Carta 1 - %s: População = %u \n", nome, populacao);
                printf("Carta 2 - %s: População = %u \n", nome2, populacao2);
                printf("População de %s(%u) venceu \n", nome2, populacao2);
            }
        break;
    case 2:
        if (area > area2){
            printf("Carta 1 - %s: Area = %f \n", nome, area);
            printf("Carta 2 - %s: Area = %f \n", nome2, area2);
            printf("Area de %s(%f) venceu \n", nome, area);
        } else if (area == area2){
            printf("Carta 1 - %s: Area = %f \n", nome, area);
            printf("Carta 2 - %s: Area = %f \n", nome2, area2);
            printf("EMPATE!\n");
        } else{
            printf("Carta 1 - %s: Area = %f \n", nome, area);
            printf("Carta 2 - %s: Area = %f \n", nome2, area2);
            printf("Area de %s(%f) venceu \n", nome2, area);
        }
        break;
    case 3:
        if (pib > pib2){
            printf("Carta 1 - %s: PIB = %f \n", nome, pib);
            printf("Carta 2 - %s: PIB = %f \n", nome2, pib2);
            printf("PIB de %s(%f) venceu \n", nome, pib);
        } else if (pib == pib2){
            printf("Carta 1 - %s: PIB = %f \n", nome, pib);
            printf("Carta 2 - %s: PIB = %f \n", nome2, pib2);
            printf("EMPATE!\n");
        } else{
            printf("Carta 1 - %s: PIB = %f \n", nome, pib);
            printf("Carta 2 - %s: PIB = %f \n", nome2, pib2);
            printf("PIB de %s(%f) venceu \n", nome2, pib2);
        }
        break;
    case 4:
       if (numeroPontoTuristico > numeroPontoTuristico2){
            printf("Carta 1 - %s: Numero De Pontos Turisticos = %u \n", nome, populacao);
            printf("Carta 2 - %s: Numero De Pontos Turisticos = %u \n", nome2, populacao2);
            printf("Quantidade de pontos turisticos de %s(%u) \n", nome, numeroPontoTuristico);
        } else if(numeroPontoTuristico == numeroPontoTuristico2){
            printf("Carta 1 - %s: Numero De Pontos Turisticos = %u \n", nome, populacao);
            printf("Carta 2 - %s: Numero De Pontos Turisticos = %u \n", nome2, populacao2);
            printf("EMPATE!\n");
        } else{
            printf("Carta 1 - %s: Numero De Pontos Turisticos = %u \n", nome, populacao);
            printf("Carta 2 - %s: Numero De Pontos Turisticos = %u \n", nome2, populacao2);
            printf("Quantidade de Pontos Turisticos de %s(%u) \n", nome2, numeroPontoTuristico2);
        }
        break;
    case 5:
         if (densidadePopulacional < densidadePopulacional2){
            printf("Carta 1 - %s: Densidade Populacional = %u \n", nome, populacao);
            printf("Carta 2 - %s: Densidade Populacional = %u \n", nome2, populacao2);
            printf("Densidade populacional de %s(%u) \n", nome, densidadePopulacional);
        } else if(densidadePopulacional == densidadePopulacional2){
            printf("Carta 1 - %s: Densidade Populacional = %u \n", nome, populacao);
            printf("Carta 2 - %s: Densidade Populacional = %u \n", nome2, populacao2);
            printf("EMPATE!\n");
        } else{
            printf("Carta 1 - %s: Densidade Populacional = %u \n", nome, populacao);
            printf("Carta 2 - %s: Densidade Populacional = %u \n", nome2, populacao2);
            printf("Densidade populacional de %s(%u) \n", nome2, densidadePopulacional2);
        }
        break;
    case 6:
          if (pibPerCapital > pibPerCapital2){
            printf("Carta 1 - %s: PIB Per Capital = %u \n", nome, populacao);
            printf("Carta 2 - %s: PIB Per Capital = %u \n", nome2, populacao2);
            printf("PIB per capital de %s(%f) venceu \n", nome, pibPerCapital);
        } else if(pibPerCapital == pibPerCapital2){
            printf("Carta 1 - %s: PIB Per Capital = %u \n", nome, populacao);
            printf("Carta 2 - %s: PIB Per Capital = %u \n", nome2, populacao2);
            printf("EMPATE!\n");
        } else{
            printf("Carta 1 - %s: PIB Per Capital = %u \n", nome, populacao);
            printf("Carta 2 - %s: PIB Per Capital = %u \n", nome2, populacao2);
            printf("PIB per capital de %s(%f) venceu \n", nome2, pibPerCapital2);
        }
        break;
    case 7:
         if (superPoder > superPoder2){
            printf("Carta 1 - %s: Super Poder = %u \n", nome, populacao);
            printf("Carta 2 - %s: Super Poder = %u \n", nome2, populacao2);
            printf("O Super Poder de %s(%f) venceu \n", nome, superPoder);
        } else if(superPoder == superPoder2){
            printf("Carta 1 - %s: Super Poder = %u \n", nome, populacao);
            printf("Carta 2 - %s: Super Poder = %u \n", nome2, populacao2);
            printf("EMPATE!\n");
        } else{
            printf("Carta 1 - %s: Super Poder = %u \n", nome, populacao);
            printf("Carta 2 - %s: Super Poder = %u \n", nome2, populacao2);
            printf("O Super Poder de %s(%f) venceu \n", nome2, superPoder2);
        }
        break;
    default:
    printf("Erro: Numero Invalido, opção (%d) não encontrada, tente novamente", batalha);
        break;
    }

    return 0;
}
