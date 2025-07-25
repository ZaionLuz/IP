#include <stdio.h>
int main()
{
    int i, x, iguais = 1;
    printf("Digite o tamanho dos 2 vetores\n");
    scanf("%d", &x);
    int v1[x], v2[x];
    printf("Digite os elementos dos 2 vetores\n");
    for (i = 0; i < x; i++)
    {
        printf("Vetor 1, posicao %d: ", i + 1);
        scanf("%d", &v1[i]);
        printf("Vetor 2, posicao %d: ", i + 1);
        scanf("%d", &v2[i]);
    }
    for (i = 0; i < x; i++)
    {
        if (v1[i] != v2[i])
        {
            iguais = 0;
            break;
        }
    }
    if (iguais == 1)
    {
        printf("Os vetores sao iguais");
    }
    else
    {
        printf("Os vetores nao sao iguais");
    }
    return 0;
}