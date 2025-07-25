#include <stdio.h>

void media(float n1, float n2, float n3, float *resultado);

int main(void)
{
    float n1, n2, n3, resultado;
    printf("Digite as 3 notas pra saber a media aritmetica\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    media(n1, n2, n3, &resultado);
    printf("Media: %.2f", resultado);
}

void media(float n1, float n2, float n3, float *resultado)
{
    *resultado = (n1 + n2 + n3) / 3;
}