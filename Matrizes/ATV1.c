#include <stdio.h>

int main()
{
    int i, j, matriz[2][4], elementos = 0, soma = 0, pares = 0;
    float media = 0;
    printf("Digite os elementos da matriz 2x4\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite o elemento %d da matriz: %d\n", j + 1, i + 1);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] >= 12 && matriz[i][j] <= 20)
            {
                elementos++;
            }
        }
    }
    printf("\nQuantidade de elementos entre 12 e 20:\n");
    printf("%d\n", elementos);
    printf("Media dos elementos pares da Matriz\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                soma += matriz[i][j];
                pares++;
            }
        }
    }
    media = soma / (float)pares;
    printf("%.2f", media);
    return 0;
}
