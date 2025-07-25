#include <stdio.h>
int main()
{
    float salario, vendas, comissao, salario_novo;
    printf("Digite o valor do salario e das vendas ");
    scanf("%f %f", &salario, &vendas);
    comissao = (vendas + vendas * 0.04);
    salario_novo = salario + comissao;
    printf("O salario novo com o acressimo da comissao e de %.2fR$", salario_novo);
    return 0;
}