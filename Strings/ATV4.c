#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100];
    int i, j = 0, palavras = 0;
    int dentro_palavra = 0;

    printf("Digite uma frase:\n");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    int tamanho = strlen(frase);

    int inicio = 0;
    while (frase[inicio] == ' ') {
        inicio++;
    }

    int fim = tamanho - 1;
    while (fim > inicio && frase[fim] == ' ') {
        fim--;
    }

    for (i = inicio; i <= fim; i++)
    {
        if (frase[i] != ' ') 
        {
            frase[j++] = frase[i];
            dentro_palavra = 1;
        }
        else if (dentro_palavra)
        {
            frase[j++] = ' ';
            dentro_palavra = 0;
            palavras++;
        }
    }

    frase[j] = '\0';

    if (j > 0 && frase[j - 1] != ' ') {
        palavras++;
    }

    printf("Frase corrigida: \"%s\"\n", frase);
    printf("Quantidade de palavras: %d\n", palavras);

    return 0;
}
