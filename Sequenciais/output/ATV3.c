#include <stdio.h>
int main()
{
    int n1, n2, calculo;
    printf("Digite os 2 numeros que serao divididos ");
    scanf("%d %d", &n1, &n2);
    calculo = (n1 / n2);
    printf("A divisao dos 2 numeros da %d", calculo);
    return 0;
}