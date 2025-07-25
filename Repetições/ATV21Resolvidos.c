#include <stdio.h>
int main()
{
    int i, quantidade, soma=0, maior = 0, menor = 10000, pares = 0, qntdpares = 0, qntdimpares = 0;
    float media = 0, mediap = 0, porcentagem = 0;
    printf("Digite a quantidade de numeros q serao usados\n");
    scanf("%d", &quantidade);
    int n[quantidade];
    for (i = 0; i < quantidade; i++)
    {
        printf("Digite o numero %d ", i + 1);
        scanf("%d", &n[i]);
        soma += n[i];
        if (maior < n[i])
        {
            maior = n[i];
        }
        if (menor > n[i])
        {
            menor = n[i];
        }
        if (n[i] % 2 == 0)
        {
            qntdpares++;
            pares += n[i];
        }
        else
        {
            qntdimpares++;
        }
        media = soma / (float)quantidade;
        mediap = pares / (float)qntdpares;
        porcentagem = ((float)qntdimpares / quantidade)*100;
    }
    printf("\nSoma dos numeros digitados: %d\n", soma);
    printf("Quantidade de numeros digitados: %d\n", quantidade);
    printf("Media dos numeros digitados: %.2f\n", media);
    printf("Maior numero digitado: %d\n", maior);
    printf("Menor numero digitado: %d\n", menor);
    printf("Media dos numeros pares: %.2f\n", mediap);
    printf("Porcentagem dos numeros impares entre tds os numeros digitados: %.2f", porcentagem);
    return 0;
}