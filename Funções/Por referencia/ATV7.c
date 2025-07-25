#include <stdio.h>

void contaParesImpares(int *vet, int n, int *pares, int *impares);

int main(void)
{
    int n, i, pares=0, impares=0;
    printf("Digite o tamanho do vetor de inteiros\n");
    scanf("%d", &n);
    int vet[n];
    for (i = 0; i < n; i++)
    {
        printf("Digite o elemento %d ", i + 1);
        scanf("%d", &vet[i]);
    }
    contaParesImpares(vet, n, &pares, &impares);
    printf("Pares no vetor: %d\nImpares no vetor: %d", pares, impares);
}

void contaParesImpares(int *vet, int n, int *pares, int *impares)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (vet[i] % 2 == 0)
        {
            (*pares)++;
        }
        else
        {
            (*impares)++;
        }
    }
}