#include <stdio.h>
#define linhas 20
#define colunas 10
int main()
{
    int i, j, m1[linhas][colunas], soma[colunas] = {0}, m2[linhas][colunas];
    printf("Digite os elementos da matriz 20x10\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("Digite o elemento %dx%d ", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
            soma[j] += m1[i][j];
        }
    }
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            m2[i][j] = m1[i][j] * soma[j];
        }
    }
    printf("\nMatriz resultante:\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }
    return 0;
}