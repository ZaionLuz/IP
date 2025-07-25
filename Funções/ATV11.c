#include <stdio.h>

double calcular_soma(int N) {
    double soma = 0;
    for (int i = 1; i <= N; i++) {
        soma += (i * i + 1.0) / (i + 3);
    }
    return soma;
}

int main() {
    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    
    double resultado = calcular_soma(N);
    printf("O valor da soma S para N = %d e: %lf\n", N, resultado);
    
    return 0;
}
