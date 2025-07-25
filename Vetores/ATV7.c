#include <stdio.h>
int main()
{
    int negativos = 0, i;
    float n[10], pares = 0;
    printf("Digite 10 numeros reais\n");
    for (i = 0; i < 10; i++)
    {
        printf("Digite o numero %d ", i + 1);
        scanf("%f", &n[i]);
        if (n[i] > 0)
        {
            pares += n[i];
        }
        else
        {
            negativos++;
        }
    }
    printf("\nSoma dos positivos %.2f\n", pares);
    printf("Quantidade de negativos %d", negativos);
    return 0;
}