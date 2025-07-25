#include <stdio.h>
#define linhas 5
#define colunas 5
int main()
{
    int m1[linhas][colunas], i, j, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    printf("Digite os elementos da matriz 5x5\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("Digite o elemento %dx%d ", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            s5 += m1[i][j];
            if (i == 3)
            {
                s1 += m1[i][j];
            }
            if (j == 2)
            {
                s2 += m1[i][j];
            }
            if (i == j)
            {
                s3 += m1[i][j];
            }
            if (i + j == 4)
            {
                s4 += m1[i][j];
            }
        }
    }
    printf("\nSoma dos elementos da linha 4: %d\n", s1);
    printf("Soma dos elementos da coluna 2: %d\n", s2);
    printf("Soma dos elementos da diagonal principal: %d\n", s3);
    printf("Soma dos elementos da diagonal secundária: %d\n", s4);
    printf("Soma de todos os elementos da matriz: %d\n", s5);

    return 0;
}