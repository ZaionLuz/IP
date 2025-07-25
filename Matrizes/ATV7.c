#include <stdio.h>
int main()
{
    int i, j, k, m[4][6], n[6][4], resultado[4][4];
    printf("Digite os elementos da matriz M\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("Elemento %dx%d da matriz M ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
    printf("\nAgora digite os elementos da matriz N\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Elemento %dx%d da matriz N ", i + 1, j + 1);
            scanf("%d", &n[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            resultado[i][j] = 0;
            for (k = 0; k < 6; k++)
            {
                resultado[i][j] += m[i][k] + n[k][j];
            }
        }
    }
    printf("\nResultado da soma das linhas de M pelas colunas de N:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}