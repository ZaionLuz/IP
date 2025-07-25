#include <stdio.h>
int main()
{
    int i, v[7], tamanho1 = 0, tamanho2 = 0, tamanho3 = 0, mult2[tamanho1], mult3[tamanho2], multiplos[tamanho3];
    printf("Digite 7 numeros inteiros\n");
    for (i = 0; i < 7; i++)
    {
        printf("Digite o numero %d ", i + 1);
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0)
        {
            mult2[tamanho1++] = v[i];
            ;
        }
        if (v[i] % 3 == 0)
        {
            mult3[tamanho2++] = v[i];
        }
        if (v[i] % 2 == 0 && v[i] % 3 == 0)
        {
            multiplos[tamanho3++] = v[i];
        }
    }
    for (i = 0; i < tamanho1; i++)
    {
        printf("Multiplos de 2 %d\n", mult2[i]);
    }
    for (i = 0; i < tamanho2; i++)
    {
        printf("Multiplos de 3 %d\n", mult3[i]);
    }
    for (i = 0; i < tamanho3; i++)
    {
        printf("Multiplos de 2 e de 3 %d", multiplos[i]);
    }
    return 0;
}