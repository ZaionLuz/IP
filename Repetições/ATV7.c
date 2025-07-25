#include <stdio.h>
int main()
{
    int idade, i, pessoas = 0, magros = 0, velhos = 0;
    float altura, peso, media = 0, porcentagem = 0;
    printf("Digite a idade, altura e o peso de 5 pessoas\n");
    for (i = 0; i < 5; i++)
    {
        printf("Pessoa %d ", i + 1);
        scanf("%d %f %f", &idade, &altura, &peso);
        if (idade >= 50)
        {
            velhos++;
        }
        if (idade >= 10 && idade <= 20)
        {
            pessoas++;
            media += altura;
        }
        if (peso <= 40)
        {
            magros++;
        }
    }
    if (pessoas == 0)
    {
        media = 0;
    }
    else
    {
        media = media / (float)pessoas;
    }
    porcentagem = (magros / (float)5) * 100;
    printf("\nQuantidade de pessoas com idade maior que 50: %d\n", velhos);
    printf("Media de altura das pessoas com idade entre 10 e 20: %.2f\n", media);
    printf("Porcentagem de pessoas com o peso menor ou igual a 40: %.2f%%", porcentagem);
    return 0;
}
