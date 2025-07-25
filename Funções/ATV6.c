#include <stdio.h>
void pon(int n)
{
    if (n > 0)
    {
        printf("Numero positivo");
    }
    else
    {
        printf("Numero negativo");
    }
}
int main()
{
    int n;
    printf("Digite um numero inteiro pra ver se ele e negativo ou positvo\n");
    scanf("%d", &n);
    pon(n);

    return 0;
}