#include <stdio.h>
int menu()
{
    int opcao;
    printf("Escolha uma das opcoes\n");
    printf("1- Soma\n2- Subtracao\n3- Multiplicacao\n4- Divisao\n");
    scanf("%d", &opcao);
    return opcao;
}
void soma(float *n1, float *n2)
{
    *n1 = *n1 + *n2;
}
void subtracao(float *n1, float *n2)
{
    *n1 = *n1 - *n2;
}
void multiplicacao(float *n1, float *n2)
{
    *n1 = (*n1) * (*n2);
}
void divisao(float *n1, float *n2)
{
    *n1 = (*n1) / (*n2);
}

int main()
{
    float n1, n2;
    int retorno;
    printf("Digite 2 numeros\n");
    scanf("%f %f", &n1, &n2);
    retorno = menu();
    switch (retorno)
    {
    case 1:
        soma(&n1, &n2);
        break;
    case 2:
        subtracao(&n1, &n2);
        break;
    case 3:
        multiplicacao(&n1, &n2);
        break;
    case 4:
        if (n2 == 0)
        {
            printf("Erro: Divisao por zero nao permitida!\n");
            return 1;
        }
        else
        {
            divisao(&n1, &n2);
        }
        break;
    default:
        printf("OPCAO INVALIDA!\n");
        return 1;
    }
    printf("Resultado: %.2f\n", n1);
    return 0;
}