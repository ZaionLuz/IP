#include <stdio.h>
int soma(int n)
{
    int soma = n + 1;
    return soma;
}
int main()
{
    int n, ns;
    printf("Digite um numero inteiro aleatorio\n");
    scanf("%d", &n);
    ns = soma(n);
    printf("%d", ns);
    return 0;
}