#include <stdio.h>

int main()
{
    float salario, conta1, conta2, multa1, multa2, totalContas, totalMulta, totalPagar, saldoRestante;

    printf("Digite o valor do salario: R$ ");
    scanf("%f", &salario);

    printf("Digite o valor da conta 1: R$ ");
    scanf("%f", &conta1);

    printf("Digite o valor da conta 2: R$ ");
    scanf("%f", &conta2);

    multa1 = conta1 * 0.02;
    multa2 = conta2 * 0.02;

    totalContas = conta1 + conta2;
    totalMulta = multa1 + multa2;
    totalPagar = totalContas + totalMulta;
    saldoRestante = salario - totalPagar;

    printf("Total a pagar: R$ %.2f\n", totalPagar);
    printf("Saldo restante: R$ %.2f\n", saldoRestante);
    return 0;
}