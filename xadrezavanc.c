#include <stdio.h>

void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverBispoAninhado(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Diagonal (Cima Direita)\n");
        }
    }
}

void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverCavalo() {
    int cima = 2;
    int direita = 1;

    for (int i = 0, j = cima; i < cima || j > 0; i++, j--) {
        if (i < cima)
            printf("Cima\n");
        else if (j <= direita)
            printf("Direita\n");

        if (i == 1 && j == 1) break;
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo (recursivo):\n");
    moverBispoRecursivo(5);

    printf("\nMovimento do Bispo (aninhado):\n");
    moverBispoAninhado(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
