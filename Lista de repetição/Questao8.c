#include <stdio.h>

int main()
{
    int n;

    printf("Digite um numero impar:");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Por favor, digite um numero impar.\n");
        return 1;
    }

    int meio = n / 2;

    for (int i = 0; i <= meio; i++)
    {
        for (int j = 0; j < meio - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = meio - 1; i >= 0; i--)
    {
        for (int j = 0; j < meio - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
