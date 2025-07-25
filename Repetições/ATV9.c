#include <stdio.h>
#define tamanho 10
int main()
{
    int idade, i, aberracao = 0, bizarro = 0;
    float peso, altura, media = 0;
    printf("Digite as 10 idades pesos e alturas\n");
    for (i = 0; i < tamanho; i++)
    {
        printf("Pessoa %d ", i + 1);
        scanf("%d %f %f", &idade, &peso, &altura);
        media += idade;
        if (peso >= 90 && altura <= 1.50)
        {
            aberracao++;
        }
        if (altura >= 1.90 && (idade >= 10 && idade <= 30))
        {
            bizarro++;
        }
    }
    media = media / (float)tamanho;
    printf("\nMedia das idades: %.2f\n", media);
    printf("Pessoas com peso maior igual a 90 e altura menor igual a 1.50: %d\n", bizarro);
    printf("Pessoas com altura maior igual a 1.90 e idade entre 10 e 30: %d", bizarro);
    return 0;
}