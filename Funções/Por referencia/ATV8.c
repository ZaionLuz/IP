#include <stdio.h>

void zeraNegativos(int *vet, int n);

int main(void)
{
    int i, n;
    printf("Digite o tamanho do vetor de inteiros\n");
    scanf("%d", &n);
    int vet[n];
    for (i = 0; i < n; i++)
    {
        printf("Digite o elemento %d ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("\nVetor corrigido\n");
    zeraNegativos(vet, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", vet[i]);
    }
}

void zeraNegativos(int *vet, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (vet[i] < 0)
        {
            vet[i] = 0;
        }
        else
        {
            continue;
        }
    }
}