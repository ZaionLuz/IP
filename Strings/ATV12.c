#include <stdio.h>

int main()
{
    int dia, mes, ano;
    char *meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
                     "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    printf("Digite uma data no formato DD/MM/AAAA: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if (mes < 1 || mes > 12 || dia < 1 || dia > 31)
    {
        printf("Data inválida!\n");
    }
    else
    {
        printf("%02d de %s de %d\n", dia, meses[mes - 1], ano);
    }

    return 0;
}
