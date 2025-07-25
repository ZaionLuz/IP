#include <stdio.h>
int main()
{
    int n, valor, fatorial;
    printf("Digite a quantidade de valores a serem lidos\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("Digite o %d valor\n", i);
        scanf("%d", &valor);
        fatorial = 1;
        for (int j = 1; j <= valor; j++)
        {
            fatorial *= j;
        }
        printf("Valor:     fatorial:\n ");
        printf("%d          %d\n", valor, fatorial);
    }
    return 0;
}