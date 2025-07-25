#include <stdio.h>

int main()
{
    int i, j, matriz[3][5], elementos = 0;
    printf("Digite os elementos da matriz 3x5\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Digite o elemento %d da matriz: %d\n", j + 1, i + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (matriz[i][j] >= 15 && matriz[i][j] <= 20)
            {
                elementos++;
            }
        }
    }
    printf("\nSao %d elementos entre 15 e 20\n", elementos);
    return 0;
}
