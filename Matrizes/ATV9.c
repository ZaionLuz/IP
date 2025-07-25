#include <stdio.h>
int main()
{
    int i, j;
    float matriz[3][3], n1;
    printf("Digite os elementos da matriz 3x3\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o elemento %dx%d ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("\nDigite o numero que ira multiplicar cada elemento da matriz\n");
    scanf("%f", &n1);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matriz[i][j] = matriz[i][j] * n1;
            printf("Elemento %dx%d multiplicado pelo numero: %.2f ", i + 1, j + 1, matriz[i][j]);
        }
    }

    return 0;
}