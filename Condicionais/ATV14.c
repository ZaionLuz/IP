#include <stdio.h>
int main()
{
    float salario, nsalario;
    printf("Digite o salario do funcionario em R$\n");
    scanf("%f", &salario);
    if (salario <= 300)
    {
        nsalario = salario + (salario * 0.5);
    }
    else if (salario > 300 && salario <= 500)
    {
        nsalario = salario + (salario * 0.4);
    }
    else if (salario > 500 && salario <= 700)
    {
        nsalario = salario + (salario * 0.3);
    }
    else if (salario > 700 && salario <= 800)
    {
        nsalario = salario + (salario * 0.2);
    }
    else if (salario > 800 && salario <= 1000)
    {
        nsalario = salario + (salario * 0.1);
    }
    else
    {
        nsalario = salario + (salario * 0.05);
    }
    printf("O novo salario do funcionario sera de: %.0fR$\n", nsalario);
    return 0;
}