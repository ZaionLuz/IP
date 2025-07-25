#include <stdio.h>
#define linhas 3
#define colunas 8
int main()
{
    int i, j, m1[linhas][colunas], m2[linhas][colunas], soma[linhas][colunas] = {0}, diferenca[linhas][colunas] = {0};
    printf("Digite os elementos da primeira matriz 3x8\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("Digite o elemento %dx%d ", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Digite os elementos da segunda matriz 3x8\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("Digite o elemento %dx%d ", i + 1, j + 1);
            scanf("%d", &m2[i][j]);
        }
    }
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            soma[i][j] = m1[i][j] + m2[i][j];
            diferenca[i][j] = m1[i][j] - m2[i][j];
        }
    }
    printf("\nSOMA\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
    printf("\nDIFERENCA\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("%d ", diferenca[i][j]);
        }
        printf("\n");
    }
    return 0;
}