#include <stdio.h>

int main()
{
    float preco, npreco, aumento;

    printf("Digite o preco do produto em R$\n");
    scanf("%f", &preco);

    if (preco < 50)
    {
        aumento = 0.05;
    }
    else if (preco >= 50 && preco <= 100)
    {
        aumento = 0.10;
    }
    else
    {
        aumento = 0.15;
    }

    npreco = preco + (preco * aumento);

    if (npreco < 80)
    {
        printf("O novo preco sera de : %.0f e a classificacao sera: Barato", npreco);
    }
    else if (npreco > 80 && npreco <= 120)
    {
        printf("O novo preco sera de : %.0f e a classificacao sera: Normal", npreco);
    }
    else if (npreco > 120 && npreco <= 200)
    {
        printf("O novo preco sera de : %.0f e a classificacao sera: Caro", npreco);
    }
    else
    {
        printf("O novo preco sera de : %.0f e a classificacao sera: Muito caro", npreco);
    }

    return 0;
}
