#include <stdio.h>
int main()
{
    int n1, n2, n3, calculo;
    printf("Digite os 3 numeros ");
    scanf("%d %d %d", &n1, &n2, &n3);
    calculo = (n1 * n2 * n3);
    printf("A multiplicacao dos 3 numeros da o resultado %d", calculo);
    return 0;
}