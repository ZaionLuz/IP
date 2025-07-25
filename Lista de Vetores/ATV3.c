#include <stdio.h>
int main()
{
    int i, vetor[10], vetor2[10];
    printf("Digite os 10 valores inteiros POSITIVOS\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            vetor2[i] = vetor[i] / 2;
        }
        else
        {
            vetor2[i] = vetor[i] * 3;
        }
    }
    printf("\nVetor Normal\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\nVetor com as regras aplicadas\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor2[i]);
    }
    return 0;
}