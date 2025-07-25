#include <stdio.h>
void potencia(float x, float z)
{
    float y = 1;
    for (int i = 1; i <= z; i++)
    {
        y *= x;
    }
    printf("%.2f", y);
}
int main()
{
    float x, z;
    printf("Digite dois valores, o primeiro sendo a base e o segundo o expoente\n");
    scanf("%f %f", &x, &z);
    potencia(x, z);
    return 0;
}