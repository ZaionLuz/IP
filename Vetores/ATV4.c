#include <stdio.h>

int main()
{
    int vetor[15], i, encontrou = 0;

    printf("Digite 15 numeros inteiros:\n");
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("O numero 30 aparece nas posicoes: ");
    for (i = 0; i < 15; i++)
    {
        if (vetor[i] == 30)
        {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (!encontrou)
    {
        printf("Nenhuma");
    }

    printf("\n");
    return 0;
}
