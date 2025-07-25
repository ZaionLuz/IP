#include <stdio.h>

void troca(int *a, int *b);

int main(void)
{
    int a, b;
    printf("Digite dois valores inteiros quaisquer\n");
    scanf("%d %d", &a, &b);
    troca(&a, &b);
    printf("Valores trocados a: %d b: %d", a, b);
}

void troca(int *a, int *b)
{
    int aux = 0;
    aux = *a;
    *a = *b;
    *b = aux;
}