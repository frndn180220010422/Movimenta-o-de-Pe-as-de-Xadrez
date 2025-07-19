#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita usando for
    int casas_torre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal cima-direita usando while
    int casas_bispo = 5;
    int i = 1;
    printf("\nMovimento do Bispo:\n");
    while (i <= casas_bispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // Movimento da Rainha: 8 casas para a esquerda usando do-while
    int casas_rainha = 8;
    int j = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casas_rainha);

    return 0;
}
