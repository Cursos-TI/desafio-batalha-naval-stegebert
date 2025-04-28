#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro[10][10];  // Criando um tabuleiro 10x10

    // Variáveis para os loops
    int i, j;

    // Inicializando o tabuleiro com água (0)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;  // Preenche todo o tabuleiro com água
        }
    }

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Definindo posições para os navios
    // Navio horizontal (tamanho 3)
    int linha_inicial_h = 2;
    int coluna_inicial_h = 1;

    // Navio vertical (tamanho 3)
    int linha_inicial_v = 5;
    int coluna_inicial_v = 7;

    // Posicionando o navio horizontal (3 posições)
    for (i = 0; i < 3; i++) {
        tabuleiro[linha_inicial_h][coluna_inicial_h + i] = 3;  // Marca a posição do navio horizontal
    }

    // Posicionando o navio vertical (3 posições)
    for (i = 0; i < 3; i++) {
        tabuleiro[linha_inicial_v + i][coluna_inicial_v] = 3;  // Marca a posição do navio vertical
    }

    // Sugestão: Utilize printf para exibir as coordenadas de cada parte dos navios.
    // Coordenadas do navio horizontal
    printf("Coordenadas do Navio Horizontal:\n");
    for (i = 0; i < 3; i++) {
        printf("(%d, %d)\n", linha_inicial_h, coluna_inicial_h + i);
    }

    // Coordenadas do navio vertical
    printf("\nCoordenadas do Navio Vertical:\n");
    for (i = 0; i < 3; i++) {
        printf("(%d, %d)\n", linha_inicial_v + i, coluna_inicial_v);
    }

    return 0;
}
