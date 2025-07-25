#include <stdio.h>
int pares(int x[15])
{
    int i, pares = 0;
    for (i = 0; i < 15; i++)
    {
        if (x[i] % 2 == 0)
        {
            pares++;
        }
    }
    return pares;
}
int main()
{
    int x[15], i, retorno;
    printf("Digite os 15 elementos do vetor x\n");
    for (i = 0; i < 15; i++)
    {
        printf("Digite o elemento %d ", i + 1);
        scanf("%d", &x[i]);
    }
    retorno = pares(x);
    printf("\nQuantidade de pares: %d", retorno);
    return 0;
}