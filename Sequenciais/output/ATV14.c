#include <stdio.h>
int main()
{
    int ano, ano_pessoa;
    printf("Digite o ano da pessoa ");
    scanf("%d", &ano);
    ano_pessoa = (2024 - ano);
    printf("A pessoa tem %d anos, %d meses, %d dias e %d semanas.", ano_pessoa, ano_pessoa * 12, ano_pessoa * 365, ano_pessoa * 52);
    return 0;
}