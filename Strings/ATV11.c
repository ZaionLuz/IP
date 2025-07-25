#include <stdio.h>
#include <string.h>
int main()
{
    char frase[100];
    int i, j, k, cont, tam;
    printf("Digite uma frase: ");
    fgets(frase,100,stdin);
    frase[strcspn(frase, "\n")] = 0;
    cont = 1;
    j = 0;
    tam = strlen(frase);
    for (i = 0; i < tam; i++)
    {
        if (frase[i] == ' ')
        {
            cont++;
        }
    }
    char palavras[cont][tam];
    cont = 0;
    for (i = 0; i < tam; i++)
    {
        if (frase[i] != ' ')
        {
            palavras[cont][j] = frase[i];
            j++;
        }
        else
        {
            palavras[cont][j] = '\0';
            cont++;
            j = 0;
        }
    }
    palavras[cont][j] = '\0';
    for (i = 0; i <= cont; i++)
    {
        k = 1;
        if (palavras[i][0] != '\0')
        {
            for (j = i + 1; j <= cont; j++)
            {
                if (strcmp(palavras[i], palavras[j]) == 0)
                {
                    k++;
                    palavras[j][0] = '\0';
                }
            }
            printf("A palavra %s aparece %d vezes.\n", palavras[i], k);
        }
    }

    return 0;
}