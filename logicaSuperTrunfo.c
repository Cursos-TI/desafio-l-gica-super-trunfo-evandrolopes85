#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado; 
    char codigoDaCarta[3]; 
    char nomeDaCidade[1];
    int populacao;
    float area;
    float pib;
    int numeroPontosTuristicos;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    printf("Digite os dados da primeira carta");

    printf("Digite o estado:\n");
    scanf("%c", estado);

    printf("Digite o codigo da carta:\n");
    scanf("%c", codigoDaCarta);

    printf("Digite o nome da cidade:\n");
    scanf("%c", nomeDaCidade);

    printf("Digite a quantidade de pessoas da cidade:\n");
    scanf("%d", populacao);

    printf("Digite a area da cidade:\n");
    scanf("%f", area);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &numeroPontosTuristicos);
    // 
    // (Repita para cada propriedade)
    printf("Digite os dados da segunda carta");

    printf("Digite o estado:\n");
    scanf("%c", estado);

    printf("Digite o codigo da carta:\n");
    scanf("%c", codigoDaCarta);

    printf("Digite o nome da cidade:\n");
    scanf("%c", nomeDaCidade);

    printf("Digite a quantidade de pessoas da cidade:\n");
    scanf("%d", populacao);

    printf("Digite a area da cidade:\n");
    scanf("%f", area);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &numeroPontosTuristicos);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
