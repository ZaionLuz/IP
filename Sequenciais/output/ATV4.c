#include <stdio.h>
int main()
{
    float n1, n2, calculo;
    printf(" Digite as 2 notas ");
    scanf("%f %f", &n1, &n2);
    calculo = (n1 * 2 + n2 * 3) / 5;
    printf("A media ponderada das duas notas e %.1f", calculo);
    return 0;
}