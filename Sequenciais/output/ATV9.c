#include <stdio.h>
int main()
{
    float baseM, basem, altura, area;
    printf("Digite a base maior, a menor e a altura do trapezio em cm ");
    scanf("%f %f %f", &baseM, &basem, &altura);
    area = ((baseM + basem)*altura) / 2;
    printf("A ara do trapezio em cm e de %.2fcm", area);
    return 0;
}