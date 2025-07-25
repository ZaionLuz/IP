#include <stdio.h>

int main()
{
    int i, maior, menor, valor;
    printf("Digite os 50 valores\n");
    scanf("%d", &maior);
    menor = maior;

    for (i = 1; i < 50; i++)
    {
        scanf("%d", &valor);

        if (valor > maior)
        {
            maior = valor;
        }
        if (valor < menor)
        {
            menor = valor;
        }
    }

    printf("O maior valor e: %d, e o menor valor e %d\n", maior, menor);

    return 0;
}