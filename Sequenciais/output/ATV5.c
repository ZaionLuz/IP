#include <stdio.h>
int main()
{
    float preco, preco_novo;
    printf("Digite o preco antigo do produto em reais ");
    scanf("%f", &preco);
    preco_novo=(preco - preco * 0.10);
    printf("O novo preco do produto apos o desconto e de %.2fR$", preco_novo);
    return 0;
}