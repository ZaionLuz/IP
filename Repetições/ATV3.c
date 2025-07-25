#include <stdio.h>

int main()
{
    int idade, faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0, faixa5 = 0;
    float porcentagemFaixa1, porcentagemFaixa5;
    int i;

    for (i = 1; i <= 8; i++)
    {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        if (idade <= 15)
        {
            faixa1++;
        }
        else if (idade >= 16 && idade <= 30)
        {
            faixa2++;
        }
        else if (idade >= 31 && idade <= 45)
        {
            faixa3++;
        }
        else if (idade >= 46 && idade <= 60)
        {
            faixa4++;
        }
        else
        {
            faixa5++;
        }
    }

    porcentagemFaixa1 = (faixa1 / 8.0) * 100;
    porcentagemFaixa5 = (faixa5 / 8.0) * 100;

    printf("\nQuantidade de pessoas em cada faixa etária:\n");
    printf("Ate 15 anos: %d\n", faixa1);
    printf("De 16 a 30 anos: %d\n", faixa2);
    printf("De 31 a 45 anos: %d\n", faixa3);
    printf("De 46 a 60 anos: %d\n", faixa4);
    printf("Acima de 60 anos: %d\n", faixa5);

    printf("\nPorcentagens:\n");
    printf("Ate 15 anos: %.2f%%\n", porcentagemFaixa1);
    printf("Acima de 60 anos: %.2f%%\n", porcentagemFaixa5);

    return 0;
}