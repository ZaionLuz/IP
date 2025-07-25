#include <stdio.h>
#define tamanho 12
int main()
{
    int i, barato = 0, normal = 0, caro = 0;
    float preco[tamanho], estocagem[tamanho], imposto[tamanho], precof[tamanho], media = 0, impostof = 0, maior = -3, menor = 1000;
    char refrigeracao[tamanho], categoria[tamanho];
    printf("Digite o preco unitario, a refrigeracao caso o produto tenha e a sua categoria\n");
    for (i = 0; i < tamanho; i++)
    {
        printf("Produto %d ", i + 1);
        scanf("%f %c %c", &preco[i], &refrigeracao[i], &categoria[i]);
    }
    for (i = 0; i < tamanho; i++)
    {
        if (preco[i] < 20 && (categoria[i] == 'a' || categoria[i] == 'A'))
        {
            estocagem[i] = 2;
        }
        else if (preco[i] < 20 && (categoria[i] == 'l' || categoria[i] == 'L'))
        {
            estocagem[i] = 3;
        }
        else if (preco[i] < 20 && (categoria[i] == 'v' || categoria[i] == 'V'))
        {
            estocagem[i] = 4;
        }
        else if (preco[i] >= 20 && preco[i] <= 50 && (refrigeracao[i] == 's' || refrigeracao[i] == 'S'))
        {
            estocagem[i] = 6;
        }
        else if (preco[i] >= 20 && preco[i] <= 50 && (refrigeracao[i] == 'n' || refrigeracao[i] == 'N'))
        {
            estocagem[i] = 0;
        }
        else if (preco[i] > 50 && (refrigeracao[i] == 's' || refrigeracao[i] == 'S') && (categoria[i] == 'a' || categoria[i] == 'A'))
        {
            estocagem[i] = 5;
        }
        else if (preco[i] > 50 && (refrigeracao[i] == 's' || refrigeracao[i] == 'S') && (categoria[i] == 'l' || categoria[i] == 'L'))
        {
            estocagem[i] = 2;
        }
        else if (preco[i] > 50 && (refrigeracao[i] == 's' || refrigeracao[i] == 'S') && (categoria[i] == 'v' || categoria[i] == 'V'))
        {
            estocagem[i] = 4;
        }
        else if (preco[i] > 50 && (refrigeracao[i] == 'n' || refrigeracao[i] == 'N') && (categoria[i] == 'v' || categoria[i] == 'V' || categoria[i] == 'a' || categoria[i] == 'A'))
        {
            estocagem[i] = 0;
        }
        else if (preco[i] > 50 && (refrigeracao[i] == 'n' || refrigeracao[i] == 'N') && (categoria[i] == 'l' || categoria[i] == 'L'))
        {
            estocagem[i] = 1;
        }
        if ((categoria[i] == 'a' || categoria[i] == 'A') && (refrigeracao[i] == 's' || refrigeracao[i] == 'S'))
        {
            imposto[i] = (preco[i] * 0.04);
        }
        else
        {
            imposto[i] = (preco[i] * 0.02);
        }
        precof[i] = preco[i] + estocagem[i] + imposto[i];
    }

    for (i = 0; i < tamanho; i++)
    {
        if (precof[i] < 20)
        {
            printf("\nProduto Barato\n");
            barato++;
        }
        else if (precof[i] >= 20 && precof[i] <= 100)
        {
            printf("\nProduto Normal\n");
            normal++;
        }
        else if (precof[i] > 100)
        {
            printf("\nProduto Caro\n");
            caro++;
        }
        media += estocagem[i] + imposto[i];
        if (maior < precof[i])
        {
            maior = precof[i];
        }
        if (menor > precof[i])
        {
            menor = precof[i];
        }
        impostof += imposto[i];
    }
    media = media / tamanho;
    printf("Media dos valores adicionais: %.2f\n", media);
    printf("Maior preco final e menor preco final %.2f  %.2f\n", maior, menor);
    printf("Total de impostos %.2f\n", impostof);
    printf("Quantidade de produtos baratos: %d\nQuantidade de produtos normais: %d\nQuantidade de produtos Caros: %d", barato, normal, caro);
    return 0;
}
