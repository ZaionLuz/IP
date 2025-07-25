#include <stdio.h>
#define tamanho 6
int main()
{
    int i, idade, vm = 0, baixos = 0, azul = 0, ruivos = 0;
    float peso, altura, media = 0, porcentagem = 0;
    char olho, cabelo;
    printf("Digite a idade, o peso, a altura, a cor dos olhos (A azul P preto V verde e C castanho) e a cor dos cabelos(P preto C castanho L louro e R ruivo) de seis pessoas\n");
    for (i = 0; i < tamanho; i++)
    {
        printf("Pessoa %d ", i + 1);
        scanf("%d %f %f %c %c", &idade, &peso, &altura, &olho, &cabelo);
        if (idade >= 50 && peso <= 60)
        {
            vm++;
        }
        if (altura <= 1.50)
        {
            media += idade;
            baixos++;
        }
        if (olho == 'a' || olho == 'A')
        {
            azul++;
        }
        if ((cabelo == 'r' || cabelo == 'R') && (olho != 'A' || olho != 'a'))
        {
            ruivos++;
        }
    }
    media = media / (float)baixos;
    porcentagem = (azul / (float)tamanho) * 100;
    printf("Quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg: %d\n", vm);
    printf("Media das idades das pessoas com altura inferior a 1,50 m: %.2f\n", media);
    printf("Porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas: %.2f\n", porcentagem);
    printf("quantidade de pessoas ruivas e que nao possuem olhos azuis: %d", ruivos);

    return 0;
}