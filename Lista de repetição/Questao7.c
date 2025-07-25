#include <stdio.h>
int main()
{
    int n, i, fibo = 0, t1 = 0, t2 = 1;

    printf("Digite um numero inteiro\n");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("O n-esimo termo da serie de Fibonacci e: 0\n");
        return 0;
    }

    for (i = 1; i < n; i++)
    { 
        fibo = t1 + t2;
        t1 = t2;
        t2 = fibo;
    }

    printf("O n-esimo termo da serie de Fibonacci e: %d\n", t1);

    return 0;
}
