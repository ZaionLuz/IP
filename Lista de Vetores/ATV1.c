#include <stdio.h>
int main()
{
    int vetor[10], i;
    printf("Digite 10 numeros inteiros\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("\nVetor em ordem normal\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\nVetor em ordem inversa\n");
    for (i = 9; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }
    return 0;
}