#include <stdio.h>
#include <math.h>
int main()
{
    float cateto1, cateto2, hipotenusa;
    printf("Digite o valor dos 2 catetos em cm ");
    scanf("%f %f", &cateto1, &cateto2);
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    printf("A hipotenusa do triangulo e %2.fcm", hipotenusa);
    return 0;
}