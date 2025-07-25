#include <stdio.h>

int main()
{
    int v1[10], v2[10], uniao[20], i, j, tamanho1 = 0, aux, diferenca[10], tamanho2 = 0, soma[10], mult[10], inter[10], tamanho5 = 0;

    printf("Digite os 10 elementos do vetor 1\n");
    for (i = 0; i < 10; i++)
    {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &v1[i]);
    }

    printf("Digite os 10 elementos do vetor 2\n");
    for (i = 0; i < 10; i++)
    {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &v2[i]);
    }

    for (i = 0; i < 10; i++)
    {
        uniao[tamanho1++] = v1[i];
    }
    for (i = 0; i < 10; i++)
    {
        aux = 0;
        for (j = 0; j < tamanho1; j++)
        {
            if (v2[i] == uniao[j])
            {
                aux = 1;
                break;
            }
        }
        if (!aux)
        {
            uniao[tamanho1++] = v2[i];
        }
    }

    for (i = 0; i < 10; i++)
    {
        aux = 0;
        for (j = 0; j < 10; j++)
        {
            if (v1[i] == v2[j])
            {
                aux = 1;
                break;
            }
        }
        if (!aux)
        {
            diferenca[tamanho2++] = v1[i];
        }
    }

    for (i = 0; i < 10; i++)
    {
        soma[i] = v1[i] + v2[i];
        mult[i] = v1[i] * v2[i];
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (v1[i] == v2[j])
            {
                aux = 0;
                for (int k = 0; k < tamanho5; k++)
                {
                    if (inter[k] == v1[i])
                    {
                        aux = 1;
                        break;
                    }
                }
                if (!aux)
                {
                    inter[tamanho5++] = v1[i];
                }
            }
        }
    }

    printf("\nUNIAO\n");
    for (i = 0; i < tamanho1; i++)
    {
        printf("%d ", uniao[i]);
    }

    printf("\nDIFERENCA\n");
    for (i = 0; i < tamanho2; i++)
    {
        printf("%d ", diferenca[i]);
    }

    printf("\nSOMA\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", soma[i]);
    }

    printf("\nMULTIPLICACAO\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", mult[i]);
    }

    printf("\nINTERSECAO\n");
    for (i = 0; i < tamanho5; i++)
    {
        printf("%d ", inter[i]);
    }

    return 0;
}
