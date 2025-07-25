#include <stdio.h>
int main()
{
    int i, j, matriz[3][5], elementos=0;
    printf("Digite os elementos inteiros da matris 3X5\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Digite o elemento %dx%d ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] >= 15 && matriz[i][j] <= 20)
            {
                elementos++;
            }
        }
    }
    printf("\nQuantidade de elementos entre 15 e 20: %d", elementos);
    return 0;
}