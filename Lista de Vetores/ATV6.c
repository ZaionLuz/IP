#include <stdio.h>
int main()
{
    int i, x, j = 0, k = 0;
    printf("Digite quantos valores inteiros terao no vetor\n");
    scanf("%d", &x);
    int vetor[x], par[x], impar[x];
    printf("Agora digite os %d valores inteiros\n", x);
    for (i = 0; i < x; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < x; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            par[j++] = vetor[i];
        }
        else
        {
            impar[k++] = vetor[i];
        }
    }
    for (i = 0; i < j - 1; i++)
    {
        for (int l = 0; l < j - i - 1; l++)
        {
            if (par[l] > par[l + 1])
            {
                int temp = par[l];
                par[l] = par[l + 1];
                par[l + 1] = temp;
            }
        }
    }

    for (i = 0; i < k - 1; i++)
    {
        for (int l = 0; l < k - i - 1; l++)
        {
            if (impar[l] < impar[l + 1])
            {
                int temp = impar[l];
                impar[l] = impar[l + 1];
                impar[l + 1] = temp;
            }
        }
    }
    printf("\nPares\n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", par[i]);
    }
    printf("\nImpares\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", impar[i]);
    }
    return 0;
}