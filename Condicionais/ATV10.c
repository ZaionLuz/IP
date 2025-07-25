#include <stdio.h>
int main()
{
    float custo_de_fabrica, distribuidor, imposto, preco_final;
    printf("Digite o custo de fabrica do carro em R$\n");
    scanf("%f", &custo_de_fabrica);
    if (custo_de_fabrica <= 12000 && custo_de_fabrica > 0)
    {
        distribuidor = (custo_de_fabrica * 0.05);
        imposto = 0;
    }
    if (custo_de_fabrica <= 25000 && custo_de_fabrica > 12000)
    {
        distribuidor = (custo_de_fabrica * 0.10);
        imposto = (custo_de_fabrica * 0.15);
    }
    if (custo_de_fabrica > 25000)
    {
        distribuidor = (custo_de_fabrica * 0.15);
        imposto = (custo_de_fabrica * 0.20);
    }
    preco_final = (custo_de_fabrica + distribuidor + imposto);
    printf("O preco final do carro sera de: %.2fR$", preco_final);
    return 0;
}