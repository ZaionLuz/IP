#include <stdio.h>
#define tamanho 20
int main()
{
    int i, v1[tamanho], v2[tamanho], v3[tamanho], v4[tamanho], v5[tamanho];
    printf("Digite 20 valores inteiros\n");
    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &v1[i]);
    }
    printf("Digite outros 20 valores inteiros\n");
    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &v2[i]);
    }
    for (i = 0; i < tamanho; i++)
    {
        v3[i] = v1[i] - v2[i];
    }
    for (i = 0; i < tamanho; i++)
    {
        v4[i] = v1[i] + v2[i];
    }
    for (i = 0; i < tamanho; i++)
    {
        v5[i] = v1[i] * v2[i];
    }
    printf("\nVetor Subtracao\n");
    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", v3[i]);
    }
    printf("\nVetor Soma\n");
    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", v4[i]);
    }
    printf("\nVetor Multiplicacao\n");
    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", v5[i]);
    }
    return 0;
}