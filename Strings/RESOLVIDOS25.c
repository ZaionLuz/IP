#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100];
    int i, tamanho, verbos = 0;

    printf("Digite uma frase com verbos:\n");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    tamanho = strlen(frase);

    for (i = 0; i < tamanho; i++)
    {
        if (frase[i] == ' ')
        {
            if (i > 0 && (frase[i - 1] == 'r' || frase[i - 1] == 'R'))
            {
                verbos++;
            }
        }
    }
    if (tamanho > 0 && (frase[tamanho - 1] == 'r' || frase[tamanho - 1] == 'R'))
    {
        verbos++;
    }

    printf("A frase: \"%s\"\nTem: %d verbo(s).\n", frase, verbos);
    return 0;
}
