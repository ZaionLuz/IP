#include <stdio.h>
int main()
{
    float n1, n2;
    int operacao;
    printf("Digite os 2 numeros inteiros\n");
    scanf("%f %f", &n1, &n2);
    printf("Agora escolha uma das 4 operacoes abaixo\n");
    printf("1- Media entre os numeros digitados\n");
    printf("2- Diferenca do maior pelo menor\n");
    printf("3- Produto entre os numeros digitados\n");
    printf("4- Divisao do primeiro pelo segundo\n");
    scanf("%d", &operacao);
    switch (operacao)
    {
    case 1:
        printf("Media entre os numeros digitados: %.1f", (n1 + n2) / 2);
        break;
    case 2:
        if (n1 > n2)
            printf("A diferenca do maior pelo menor e: %.0f\n", n1 - n2);
        else
            printf("A diferenca do maior pelo menor e: %.0f\n", n2 - n1);
        break;
    case 3:
        printf("Produto entre os numeros digitados: %.0f\n", (n1 * n2));
        break;
    case 4:
        if (n2 != 0)
            printf("Divisao do primeiro pelo segundo: %.2f\n", n1 / n2);
        else
            printf("Divisao por 0 nao e permitida\n");
    default:
        printf("Operacao invalida :/");
        break;
    }

    return 0;
}