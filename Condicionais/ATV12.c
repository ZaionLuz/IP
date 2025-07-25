#include <stdio.h>
int main()
{
    float salariobruto, gratificacao, imposto, salariofinal;
    printf("Digite o salario bruto \n");
    scanf("%f", &salariobruto);
    imposto = salariobruto * 0.07;
    if (salariobruto <= 350)
    {
        gratificacao = 100;
    }
    else if (salariobruto > 350 && salariobruto < 650)
    {
        gratificacao = 75;
    }
    else if (salariobruto >= 650 && salariobruto <= 900)
    {
        gratificacao = 50;
    }
    else
    {
        gratificacao = 35;
    }
    salariofinal = salariobruto + gratificacao - imposto;
    printf("O salario final sera de : %.0fR$\n", salariofinal);
    return 0;
}