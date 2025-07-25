#include <stdio.h>
int main()
{
    int v1[10], v2[10], v3[10], i, tamanho1 = 0, tamanho2 = 0;
    printf("Digite 10 numeros inteiros\n");
    for (i = 0; i < 10; i++)
    {
        printf("Digite o numero %d ", i + 1);
        scanf("%d", &v1[i]);
        if (v1[i] % 2 == 0)
        {
            v2[tamanho1++] = v1[i];
        }
        else
        {
            v3[tamanho2++] = v1[i];
        }
    }
    printf("\nVetor de pares:\n");
    for (i = 0; i < tamanho1; i++)
    {
        printf("%d ", v2[i]);
    }
    printf("\nVetor de impares:\n");
    for (i = 0; i < tamanho2; i++)
    {
        printf("%d ", v3[i]);
    }
    return 0;
}