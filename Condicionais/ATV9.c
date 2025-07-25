#include <stdio.h>
int main()
{
    float saldo, saldo_ajustado, credito;
    printf("Digite o valor do saldo do cliente em R$\n");
    scanf("%f", &saldo);
    if (saldo > 400)
    {
        credito = saldo * 0.30;
    }
    if (saldo <= 400 && saldo > 300)
    {
        credito = saldo * 0.25;
    }
    if (saldo <= 300 && saldo > 200)
    {
        credito = saldo * 0.20;
    }
    if (saldo <= 200 && saldo > 0)
    {
        credito = saldo * 0.10;
    }

    saldo_ajustado = (saldo + credito);
    printf("O valor do saldo medio sera de %.2fR$ com o acrescimo do credito de %.2fR$\n", saldo_ajustado, credito);
    return 0;
}