#include <stdio.h>
int main()
{
    float salario_funcionario, salario_minimo, salarios_minimos;
    printf("Digite o valor do salario que o funcionario recebe e o valor atual do salario minimo ");
    scanf("%f %f", &salario_funcionario, &salario_minimo);
    salarios_minimos = (salario_funcionario / salario_minimo);
    printf("O funcionario recebe em torno de %2.f salarios minimos", salarios_minimos);
    return 0;
}