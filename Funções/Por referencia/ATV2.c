#include <stdio.h>

void dobrar(int *n);

int main(void)
{
    int n;
    printf("Digite um numero para saber o seu valor dobrado\n");
    scanf("%d", &n);
    dobrar(&n);
    printf("Valor dobrado: %d", n);
}

void dobrar(int *n)
{
    *n = *n * 2;
}