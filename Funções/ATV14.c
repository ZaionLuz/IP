#include <stdio.h>

void dividir_vetores(int X[30], int A[30], int B[30], int *tamA, int *tamB) {
    *tamA = 0;  // Inicializa o tamanho de A
    *tamB = 0;  // Inicializa o tamanho de B
    
    for (int i = 0; i < 30; i++) {
        if (X[i] > 0) {
            A[*tamA] = X[i];  // Adiciona ao vetor A se for maior que zero
            (*tamA)++;  // Incrementa o tamanho de A
        } else {
            B[*tamB] = X[i];  // Adiciona ao vetor B se for menor ou igual a zero
            (*tamB)++;  // Incrementa o tamanho de B
        }
    }
}

void imprimir_vetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int X[30], A[30], B[30];
    int tamA = 0, tamB = 0;

    // Lê os 30 elementos do vetor X
    printf("Digite 30 elementos inteiros para o vetor X:\n");
    for (int i = 0; i < 30; i++) {
        scanf("%d", &X[i]);
    }

    // Chama a função para dividir os elementos de X nos vetores A e B
    dividir_vetores(X, A, B, &tamA, &tamB);

    // Imprime os vetores A e B
    printf("Vetor A (elementos > 0): ");
    imprimir_vetor(A, tamA);

    printf("Vetor B (elementos <= 0): ");
    imprimir_vetor(B, tamB);

    return 0;
}
