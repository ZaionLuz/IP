#include <stdio.h>
int main()
{
    int i, vetor[10], vetor_inverso[10];
    printf("Digite os 10 elementos\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++)
    {
        vetor_inverso[i] = vetor[i];
    }
    printf("\nVetor Normal\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\nVetor Inverso\n");
    for (i = 9; i >= 0; i--)
    {
        printf("%d ", vetor_inverso[i]);
    }
    return 0;
}