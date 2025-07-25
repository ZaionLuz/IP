#include <stdio.h>
int main()
{
    int i, v[6], pares = 0, impares = 0;
    for (i = 0; i < 6; i++)
    {
        printf("Digite o %d elemento inteiro do vetor\n", i + 1);
        scanf("%d", &v[i]);
    }
    printf("\nPares\n");
    for (i = 0; i < 6; i++)
    {
        if (v[i] % 2 == 0)
        {
            printf("%d ", v[i]);
            pares++;
        }
    }
    printf("\nImpares\n");
    for (i = 0; i < 6; i++)
    {
        if (v[i] % 2 != 0)
        {
            printf("%d ", v[i]);
            impares++;
        }
    }
    printf("\nQuantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);
}