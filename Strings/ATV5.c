#include <stdio.h>
#include <string.h>
int main()
{
    char frase1[100], frase2[100];
    int i, j, achou = 0;
    printf("Digite uma frase:\n");
    fgets(frase1, sizeof(frase1), stdin);
    frase1[strcspn(frase1, "\n")] = '\0';
    printf("Digite outra frase\n");
    fgets(frase2, sizeof(frase2), stdin);
    frase2[strcspn(frase2, "\n")] = '\0';
    int tamanho1 = strlen(frase1), tamanho2 = strlen(frase2);
    if (tamanho1 != tamanho2)
    {
        printf("A segunda frase NAO e permutacao da primeira.\n");
        return 0;
    }
    for (i = 0; i < tamanho1; i++)
    {
        achou = 0;
        for (j = 0; j < tamanho2; j++)
        {
            if (frase1[i] == frase2[j])
            {
                frase2[j] = '*';
                achou = 1;
                break;
            }
        }
        if (!achou)
        {
            printf("A segunda frase NAO e permutacao da primeira.\n");
            return 0;
        }
    }

    printf("A segunda frase E permutacao da primeira.\n");
    return 0;
}