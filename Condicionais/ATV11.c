#include <stdio.h>
int main()
{
    float salario, aumento, nsalario;
    printf("Digite o salario em R$\n");
    scanf("%f", &salario);
    if (salario <= 300)
    {
        aumento = salario * 0.15;
    }
    else if (salario > 300 && salario < 600)
    {
        aumento = salario * 0.10;
    }
    else if (salario >= 600 && salario <= 900)
    {
        aumento = salario * 0.05;
    }
    else
    {
        aumento = 0;
    }
    nsalario = salario + aumento;
    printf("O aumento sera de : %.0fR$, e o novo salario sera de %.0fR$\n", aumento, nsalario);
    return 0;
}