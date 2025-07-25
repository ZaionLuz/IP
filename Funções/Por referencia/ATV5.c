#include <stdio.h>

void inverte(int *vet, int n);

int main(void)
{
    int i, n;
    printf("Digite o tamanho do vetor\n");
    scanf("%d", &n);
    int vet[n];
    for (i = 0; i < n; i++)
    {
        printf("Digite o elemento %d ", i + 1);
        scanf("%d", &vet[i]);
    }
    inverte(vet, n);
    printf("\nVetor invertido\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", vet[i]);
    }
}

void inverte(int *vet, int n)
{
    int i, aux;
    for (i = 0; i < n / 2; i++)
    {
        aux = vet[i];
        vet[i] = vet[n - 1 - i];
        vet[n - 1 - i] = aux;
    }
}
