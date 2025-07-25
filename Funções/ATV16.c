#include <stdio.h>

int soma(int n, float *vet);

int main(void)
{
    int i, n;
    printf("Digite o tamanho do vetor de reais\n");
    scanf("%d", &n);
    float retorno, vet[n];
    printf("Digite os elementos do vetor de reais\n");
    for (i = 0; i < n; i++)
    {
        printf("Digite o elemento %d ", i + 1);
        scanf("%f", &vet[i]);
    }
    retorno = soma(n, vet);
    printf("\nSoma de todos os elementos do vetor: %.2f", retorno);
}

int soma(int n, float *vet)
{
    int i;
    float soma = 0;
    for (i = 0; i < n; i++)
    {
        soma += vet[i];
    }
    return soma;
}