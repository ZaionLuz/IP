#include <stdio.h>
int main()
{
    int n1, n2, calculo;
    printf("Digite os 2 numeros ");
    scanf("%d %d", &n1, &n2);
    calculo = (n1 - n2);
    printf("A subtracao do numero 1 pelo numero 2 e %d", calculo);
    return 0;
}