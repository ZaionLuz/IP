#include <stdio.h>
int main()
{
    int i, vetora[10], vetorb[10], vetorc[10];
    printf("Digite os 10 elementos inteiros do vetor A\n");
    for (i = 0; i < 10; i++)
    {
        printf("Digite o elemento: %d ", i + 1);
        scanf("%d", &vetora[i]);
    }
    printf("\nDigite os 10 elementos inteiros do vetor B\n");
    for (i = 0; i < 10; i++)
    {
        printf("Digite o elemento: %d ", i + 1);
        scanf("%d", &vetorb[i]);
    }
    printf("\nVetor C:\n");
    for (i = 0; i < 10; i++)
    {
        vetorc[i] = vetora[i] + vetorb[i];
        printf("%d ", vetorc[i]);
    }

    return 0;
}