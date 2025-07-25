#include <stdio.h>
int main()
{
    char nomes[10][50];
    float vendas[10], comissao[10], valores[10], totalVendas = 0, maior, menor;
    int i, indiceMaior = 0, indiceMenor = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Nome do vendedor %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Total de vendas: ");
        scanf("%f", &vendas[i]);
        printf("Percentual de comissao: ");
        scanf("%f", &comissao[i]);
        valores[i] = vendas[i] * (comissao[i] / 100);
        totalVendas += vendas[i];
    }

    maior = menor = valores[0];

    for (i = 1; i < 10; i++)
    {
        if (valores[i] > maior)
        {
            maior = valores[i];
            indiceMaior = i;
        }
        if (valores[i] < menor)
        {
            menor = valores[i];
            indiceMenor = i;
        }
    }

    printf("\nRelatorio de comissoes:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%s: R$ %.2f\n", nomes[i], valores[i]);
    }

    printf("\nTotal de vendas: R$ %.2f\n", totalVendas);
    printf("Maior comissao: %s - R$ %.2f\n", nomes[indiceMaior], maior);
    printf("Menor comissao: %s - R$ %.2f\n", nomes[indiceMenor], menor);

    return 0;
}
