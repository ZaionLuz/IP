#include <stdio.h>

int main() {
    int primeiroVetor[10], segundoVetor[5], vetorResultante1 = 0, vetorResultante2[10];

    printf("Digite 10 numeros inteiros para o primeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &primeiroVetor[i]);
    }

    printf("Digite 5 numeros inteiros para o segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &segundoVetor[i]);
    }

    int somaPares = 0;
    for (int i = 0; i < 10; i++) {
        if (primeiroVetor[i] % 2 == 0) {
            somaPares += primeiroVetor[i];
        }
    }

    for (int i = 0; i < 5; i++) {
        somaPares += segundoVetor[i];
    }

    vetorResultante1 = somaPares;

    for (int i = 0; i < 10; i++) {
        vetorResultante2[i] = 0;
        if (primeiroVetor[i] % 2 != 0) {
            for (int j = 1; j <= primeiroVetor[i]; j++) {
                if (primeiroVetor[i] % j == 0) {
                    vetorResultante2[i]++;
                }
            }
        }
    }

    printf("Primeiro vetor resultante: %d\n", vetorResultante1);
    printf("Segundo vetor resultante: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetorResultante2[i]);
    }
    printf("\n");

    return 0;
}
