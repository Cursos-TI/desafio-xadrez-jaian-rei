#include <stdio.h>

#include <stdio.h>

#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

// Função para movimentar o bispo
void moverBispo() {
    for (int i = 0; i < MOVIMENTO_BISPO; i++) {
        printf("Diagonal superior direita\n");  // Movimento do bispo
    }
}

// Função para movimentar a torre
void moverTorre() {
    for (int i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Direita\n");  // Movimento da torre
    }
}

// Função para movimentar a rainha
void moverRainha() {
    for (int i = 0; i < MOVIMENTO_RAINHA; i++) {
        printf("Esquerda\n");  // Movimento da rainha
    }
}

int main() {
    // Movimentar o bispo
    printf("Movimentando o Bispo:\n");
    moverBispo();
    printf("\n");

    // Movimentar a torre
    printf("Movimentando a Torre:\n");
    moverTorre();
    printf("\n");

    // Movimentar a rainha
    printf("Movimentando a Rainha:\n");
    moverRainha();
    printf("\n");

    return 0;
}
