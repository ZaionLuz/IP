#include <stdio.h>
int main()
{
    float valor;
    int opcao;
    printf("Digite o valor e depois escolha um dos 2 tipos de investimento\n");
    scanf("%f", &valor);
    printf("1- Poupanca 2-Fundos de renda fixa\n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("O valor apos um mes com investimento na poupanca sera de %0.fR$", valor + (valor * 0.03));
        break;
    case 2:
        printf("O valor apos um mes com investimento em fundos de renda fixa sera de %0.fR$", valor + (valor * 0.04));
        break;
    default:
        printf("Opcao invalida :(");
        break;
    }
    return 0;
}