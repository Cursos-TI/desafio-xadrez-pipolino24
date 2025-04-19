#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Função recursiva para movimentar o Bispo
void moverBispoRecursivo(int passos) {
    if (passos == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(passos - 1);
}

// Função para movimentar o Bispo com loops aninhados
void moverBispoComLoops(int passos) {
    for (int i = 0; i < passos; i++) {
        for (int j = 0; j < 1; j++) { // Loop interno para simular movimento horizontal
            printf("Cima Direita\n");
        }
    }
}

int main(void) {
    // Constantes para o número de passos de cada peça
    const int PASSOS_TORRE  = 5;
    const int PASSOS_BISPO  = 5;
    const int PASSOS_RAINHA = 8;

    // Movimento da Torre: 5 passos para a direita (recursivo)
    printf("Movimento da Torre:\n");
    moverTorre(PASSOS_TORRE);

    // Movimento do Bispo: 5 passos na diagonal superior direita (recursivo)
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(PASSOS_BISPO);

    // Movimento do Bispo: 5 passos na diagonal superior direita (loops aninhados)
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoComLoops(PASSOS_BISPO);

    // Movimento da Rainha: 8 passos para a esquerda (recursivo)
    printf("\nMovimento da Rainha:\n");
    moverRainha(PASSOS_RAINHA);

    // Movimento do Cavalo: 1 vez em L (2 para cima, 1 para a direita) com loops complexos
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 1; i++) { // Loop externo para agrupar o movimento
        for (int j = 0; j < 2; j++) { // 2 passos para cima
            printf("Cima\n");
        }
        for (int k = 0; k < 1; k++) { // 1 passo para a direita
            if (k == 0) {
                printf("Direita\n");
                break; // Exemplo de uso de break
            }
        }
    }

    return 0;
}
