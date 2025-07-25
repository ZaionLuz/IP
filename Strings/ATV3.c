#include <stdio.h>
#include <string.h>
int main()
{
    char frase[100];
    int i, j = 0;
    printf("Digite uma frase\n");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    int tamanho = strlen(frase);
    for (i = 0; i < tamanho; i++)
    {
        if (frase[i] != ' ')
        {
            frase[j++] = frase[i];
        }
    }
    frase[j] = '\0';
    printf("String sem espacos:\n%s\n", frase);
    return 0;
}