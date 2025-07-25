#include <stdio.h>
#include <string.h>
int main()
{
    char frase[100];
    int i;
    printf("Digite uma frase\n");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';
    int tamanho = strlen(frase);
    for (i = 0; i < tamanho; i++)
    {
        if (!(frase[i] == 'a' || frase[i] == 'A' ||
              frase[i] == 'e' || frase[i] == 'E' ||
              frase[i] == 'i' || frase[i] == 'I' ||
              frase[i] == 'o' || frase[i] == 'O' ||
              frase[i] == 'u' || frase[i] == 'U' ||
              frase[i] == ' '))
        {
            frase[i] = '#';
        }
    }
    for (i = tamanho - 1; i >= 0; i--)
    {
        printf("%c", frase[i]);
    }
    return 0;
}