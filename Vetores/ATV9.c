#include <stdio.h>

int main()
{
    int i;
    char nome[10][20];
    int codigo[10];
    float preco[10], novoPreco;

    printf("Digite os dados dos 10 produtos:\n");

    for (i = 0; i < 10; i++)
    {
        printf("\nProduto %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nome[i]);
        printf("Codigo: ");
        scanf("%d", &codigo[i]);
        printf("Preco: ");
        scanf("%f", &preco[i]);
    }

    printf("\nRelatorio dos produtos que sofreram aumento:\n");
    for (i = 0; i < 10; i++)
    {
        if (codigo[i] % 2 == 0 || preco[i] > 1000)
        {
            if (codigo[i] % 2 == 0 && preco[i] > 1000)
            {
                novoPreco = preco[i] * 1.2;
            }
            else if (codigo[i] % 2 == 0)
            {
                novoPreco = preco[i] * 1.15;
            }
            else
            {
                novoPreco = preco[i] * 1.1;
            }
            printf("\nNome: %s\n", nome[i]);
            printf("Codigo: %d\n", codigo[i]);
            printf("Preco original: %.2f\n", preco[i]);
            printf("Novo preco: %.2f\n", novoPreco);
        }
    }

    return 0;
}
