#include <stdio.h>
int main()
{
    int i, j;
    float matriz[12][4], total_mes[12], total_semana[4], total_ano = 0;
    char *meses[12] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    printf("Digite quanto foi vendido na loja em cada mes do ano em cada semana do mes\n");
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Mes: %d semana: %d ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("\nTotal vendido em cada mes do ano:\n");
    for (i = 0; i < 12; i++)
    {
        total_mes[i] = 0;
        for (j = 0; j < 4; j++)
        {
            total_mes[i] += matriz[i][j];
        }
        printf("%s: R$ %.2f\n", meses[i], total_mes[i]);
        total_ano += total_mes[i];
    }
    printf("\nTotal vendido em cada semana durante todo o ano:\n");
    for (j = 0; j < 4; j++)
    {
        total_semana[j] = 0;
        for (i = 0; i < 12; i++)
        {
            total_semana[j] += matriz[i][j];
        }
        printf("Semana %d: R$ %.2f\n", j + 1, total_semana[j]);
    }
    printf("\nTotal vendido pela loja no ano: R$ %.2f\n", total_ano);

    return 0;
}