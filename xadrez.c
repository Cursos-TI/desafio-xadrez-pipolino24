#include <stdio.h>

int main(void) {
    // Constantes para o número de passos de cada peça
    const int PASSOS_TORRE  = 5;
    const int PASSOS_BISPO  = 5;
    const int PASSOS_RAINHA = 8;

    // Movimento da Torre: 5 passos para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < PASSOS_TORRE; i++)
        printf("Direita\n");

    // Movimento do Bispo: 5 passos na diagonal superior direita
    printf("\nMovimento do Bispo:\n");
    int b = 0;
    while (b < PASSOS_BISPO) {
        printf("Cima Direita\n");
        b++;
    }

    // Movimento da Rainha: 8 passos para a esquerda
    printf("\nMovimento da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < PASSOS_RAINHA);

    // Movimento do Cavalo: 2 passos para baixo e 1 para a esquerda
    printf("\nMovimento do Cavalo:\n");
    for (int grupo = 0; grupo < 1; grupo++) {
        for (int i = 0; i < 2; i++) // 2 passos para baixo
            printf("Baixo\n");

        int w = 0;
        while (w < 1) { // 1 passo para a esquerda
            printf("Esquerda\n");
            w++;
        }
    }

    return 0;
}
