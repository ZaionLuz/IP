#include <stdio.h>
#define tam 3
int main()
{
    int i, j, aux, pares = 0, impares = 0, qntd_impares = 0, vetor[tam];
    float media;
    printf("Digite os 15 elementos inteiros do vetor\n");
    for (i = 0; i < tam; i++)
    {
        printf("Digite o elemento %d ", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            qntd_impares++;
            impares += vetor[i];
        }
    }
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    printf("\nMaior elemento do vetor: %d\n", vetor[2]);
    printf("Quantidade de pares: %d\n", pares);
    media = (float)impares / qntd_impares;
    printf("Media dos impares: %2.f", media);
    return 0;
}