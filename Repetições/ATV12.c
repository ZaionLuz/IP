#include <stdio.h>
int main()
{
    int i, primos, n;
    printf("Digite 10 numeros inteiros\n");
    for (i = 0; i < 10; i++)
    {
        printf("Digite o numero %d ", i + 1);
        scanf("%d", &n);
        if (n % n == 0)
        {
            primos++;
        }
    }
    printf("Quantidade de numeros primos: %d", primos);

    return 0;
}