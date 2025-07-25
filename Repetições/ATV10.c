#include <stdio.h>

int main()
{
    int i, pares = 0, primos = 0, n, j, ehPrimo;

    printf("Digite 10 numeros inteiros\n");

    for (i = 0; i < 10; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            pares += n;
        }

        if (n < 2)
        {
            ehPrimo = 0;
        }
        else
        {
            ehPrimo = 1;
            for (j = 2; j * j <= n; j++)
            {
                if (n % j == 0)
                {
                    ehPrimo = 0;
                    break;
                }
            }
        }

        if (ehPrimo)
        {
            primos += n;
        }
    }

    printf("Soma dos pares: %d\n", pares);
    printf("Soma dos primos: %d\n", primos);

    return 0;
}
