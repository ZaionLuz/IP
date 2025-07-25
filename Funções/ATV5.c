#include <stdio.h>
int proximoDivisor(int num1, int num2) {
    if (num1 % num2 == 0) {
        return 0;
    }
    
    for (int i = num2 + 1; i <= num1; i++) {
        if (num1 % i == 0) {
            return i;
        }
    }
    
    return num1;  // Se não encontrar outro divisor, retorna o próprio número
}
#include <stdio.h>

int proximoDivisor(int num1, int num2);

int main() {
    int num1, num2, resultado;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    resultado = proximoDivisor(num1, num2);
    
    if (resultado == 0) {
        printf("O numero %d é divisivel por %d.\n", num1, num2);
    } else {
        printf("O proximo divisor de %d apos %d e %d.\n", num1, num2, resultado);
    }

    return 0;
}
