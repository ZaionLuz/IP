#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Digite os 3 numeros inteiros \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n3 >= n2 && n3 >= n1)
    {
        printf("O maior numero e o terceiro: %d ", n3);
    }
    if (n1 >= n2 && n1 >= n3)
    {
        printf("O maior numero e o primeiro: %d ", n1);
    }
    if (n2 >= n1 && n2 >= n3)
    {
        printf("O maior numero e o segundo: %d ", n2);
    }
    else if (n1 == n2 && n1 == n3)
    {
        printf("Os numeros sao iguais");
    }
    return 0;
}