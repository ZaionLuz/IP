#include <stdio.h>
#define tamanho 15
void pares(int *vetor)
{
    int soma = 0, i;
    printf("Digite os elementos do vetor\n");

    for (i = 0; i < tamanho; i++)
    {

        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < tamanho; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            soma++;
        }
    }
    printf("Quantidade de numeros pares no vetor: %d ", soma);
}
int main()

{
    int vetor[tamanho];
    pares(vetor);
    return 0;
}