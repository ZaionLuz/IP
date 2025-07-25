#include <stdio.h>
#include <math.h>

void raizEpotencia(double x, double *raiz, double *quadrado);

int main(void)
{
    double x, raiz, quadrado;
    printf("Digite um numero para saber a sua raiz quadrada e o seu quadrado\n");
    scanf("%lf", &x);
    raizEpotencia(x, &raiz, &quadrado);
    printf("Raiz: %.2lf\nQuadrado: %.2lf", raiz, quadrado);
}

void raizEpotencia(double x, double *raiz, double *quadrado)
{
    *raiz = sqrt(x);
    *quadrado = x * x;
}