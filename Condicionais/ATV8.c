#include <stdio.h>
int main()
{
    float salario, salario_ajustado1, salario_ajustado2;
    printf("Digite o salario do funcionario em R$ \n");
    scanf("%f", &salario);
    salario_ajustado1 = (salario + salario * 0.35);
    salario_ajustado2 = (salario + salario * 0.15);
    if (salario <= 300)
    {
        printf("O salario ajustado ficara no valor de %.2fR$", salario_ajustado1);
    }
    if (salario > 300)
    {
        printf("O salario ajustado ficara no valor de %.2fR$", salario_ajustado2);
    }
    return 0;
}