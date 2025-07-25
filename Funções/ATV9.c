#include <stdio.h>
int potencia(int n1, int n2)
{
    int potencia=1, i;
    for (i = 0; i < n2; i++)
    {
        potencia *= n1;
    }
    return potencia;
}
int main()
{
    int n1, n2, valor;
    printf("Digite 2 numeros inteiros sendo o primeiro a base e o segundo a potencia\n");
    scanf("%d %d", &n1, &n2);
    valor = potencia(n1, n2);
    printf("%d", valor);
    return 0;
}