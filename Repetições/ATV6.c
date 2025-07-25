#include <stdio.h>

int main()
{
    char codigo;
    float valor, total_vista = 0, total_prazo = 0, total_compras = 0, primeira_prestacao = 0;
    printf("Digite o codigo da transacao (V para a vista, P para a prazo) e o valor:\n ");
    for (int i = 0; i < 15; i++)
    {
        printf("Transacao %d : ", i + 1);

        scanf(" %c %f", &codigo, &valor);

        if (codigo == 'V' || codigo == 'v')
        {
            total_vista += valor;
        }
        else if (codigo == 'P' || codigo == 'p')
        {
            total_prazo += valor;
            primeira_prestacao += valor / 3;
        }
        else
        {
            printf("Codigo invalido! Por favor, use V ou P.\n");
            i--; // Repetir a iteracao para corrigir a entrada invalida.
        }
    }

    total_compras = total_vista + total_prazo;

    printf("\nResumo das compras:\n");
    printf("Total das compras a vista: R$ %.2f\n", total_vista);
    printf("Total das compras a prazo: R$ %.2f\n", total_prazo);
    printf("Total geral das compras: R$ %.2f\n", total_compras);
    printf("Valor da primeira prestacao das compras a prazo: R$ %.2f\n", primeira_prestacao);

    return 0;
}
