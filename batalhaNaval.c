#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro[10][10];

    // variáveis para loops
    int i, j;

    // inicializar o tabuleiro todo com água (0)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // criando navios (todos com tamanho 3)
     int navio_horizontal[3] = {3, 3, 3};
     int navio_vertical[3] = {3, 3, 3};

      // coordenadas iniciais dos navios
    int linha_inicial_h = 2; // linha para o navio horizontal
    int coluna_inicial_h = 1; // coluna para o navio horizontal

    // posicionar o navio horizontal (anda para o lado)
    for (i = 0; i < 3; i++) {
        tabuleiro[linha_inicial_h][coluna_inicial_h + i] = navio_horizontal[i];

         // posicionar o navio vertical (anda para baixo)
    for (i = 0; i < 3; i++) {
        tabuleiro[linha_inicial_v + i][coluna_inicial_v] = navio_vertical[i];
        
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    printf("Coordenadas do Navio Horizontal:\n");
    for (i = 0; i < 3; i++) {
        printf("(%d, %d)\n", linha_inicial_h, coluna_inicial_h + i);
    }

    printf("\nCoordenadas do Navio Vertical:\n");
    for (i = 0; i < 3; i++) {
        printf("(%d, %d)\n", linha_inicial_v + i, coluna_inicial_v);

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
