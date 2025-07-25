#include <stdio.h>
int main()
{
    float salario, salario_reajustado;
    printf("Digite o salario do funcionario em R$ \n");
    scanf("%f", &salario);
    salario_reajustado = (salario + salario * 0.3);
    if (salario > 500)
    {
        printf("Infelizmente seu salario nao atende os requisitos minimos para o aumento :(");
    }
    if (salario <= 500)
    {
        printf("O seu salario teve um aumento de 30 porcento, passando para o valor total de %.2fR$",salario_reajustado);
    }
    return 0;
}