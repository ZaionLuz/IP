#include <stdio.h>
int divisores(int n)
{
    int soma = 0, i;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            soma += i;
        }
    }
    return soma;
}
int main()
{
    int n1, sd;
    printf("Digite um numero inteiro\n");
    scanf("%d", &n1);
    sd = divisores(n1);
    printf("Soma dos divisores de %d: %d ", n1, sd);
    return 0;
}