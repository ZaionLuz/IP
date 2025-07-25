#include <stdio.h>

void somaproduto(int a, int b, int *soma, int *produto);

int main(void)
{
    int a, b, soma, produto;
    printf("Digite 2 numeros pra saber sua soma e seu produto\n");
    scanf("%d %d", &a, &b);
    somaproduto(a, b, &soma, &produto);
    printf("Soma: %d\nProduto: %d", soma, produto);
}

void somaproduto(int a, int b, int *soma, int *produto)
{
    *soma = a + b;
    *produto = a * b;
}