#include <stdio.h>
int main()
{
    int matriz[6][3], i, j, maior, menor, linha_maior, linha_menor, coluna_maior, coluna_menor;
    printf("Preencha a matriz 6x3 com seus elementos\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Elemento %dx%d ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            if (i == 0 && j == 0)
            {
                maior = menor = matriz[i][j];
                linha_maior = linha_menor = i;
                coluna_maior = coluna_menor = j;
            }
            else
            {
                if (matriz[i][j] > maior)
                {
                    maior = matriz[i][j];
                    linha_maior = i;
                    coluna_maior = j;
                }
                if (matriz[i][j] < menor)
                {
                    menor = matriz[i][j];
                    linha_menor = i;
                    coluna_menor = j;
                }
            }
        }
    }
    printf("\nMaior elemento: %d, na posicao [%d][%d]\n", maior, linha_maior + 1, coluna_maior + 1);
    printf("Menor elemento: %d, na posicao [%d][%d]\n", menor, linha_menor + 1, coluna_menor + 1);
    return 0;
}