#include <stdio.h>
int main()
{
    float lado1, lado2, area;
    printf("Digite o tamanho dos 2 lados do quadrado em cm ");
    scanf("%f %f", &lado1, &lado2);
    area = (lado1 * lado2);
    printf("A area do quadrado e de %.2fcm", area);
    return 0;
}