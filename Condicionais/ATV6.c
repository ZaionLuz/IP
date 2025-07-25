#include <stdio.h>
#include <math.h>

int main()
{
    double num1, num2;
    int opcao;

    printf("Digite dois numeros:\n");
    scanf("%lf %lf", &num1, &num2);

    printf("Escolha uma das operacoes a seguir:\n");
    printf("1 - O primeiro numero elevado ao segundo numero\n");
    printf("2 - Raiz quadrada de cada um dos numeros\n");
    printf("3 - Raiz cubica de cada um dos numeros\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("O numero %.2f elevado a %.2f e: %.2f\n", num1, num2, pow(num1, num2));
        break;

    case 2:
        if (num1 < 0 || num2 < 0)
        {
            printf("Erro: Nao e possivel calcular a raiz quadrada de numero negativo.\n");
        }
        else
        {
            printf("A raiz quadrada de %.2f e: %.2f\n", num1, sqrt(num1));
            printf("A raiz quadrada de %.2f e: %.2f\n", num2, sqrt(num2));
        }
        break;

    case 3:
        printf("A raiz cubica de %.2f e: %.2f\n", num1, cbrt(num1));
        printf("A raiz cubica de %.2f e: %.2f\n", num2, cbrt(num2));
        break;

    default:
        printf("Opcao invalida. Encerrando o programa.\n");
        break;
    }

    return 0;
}
