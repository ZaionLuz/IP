#include <stdio.h>
#include <string.h>
int main()
{
    char frase[100];
    int i;
    printf("Digite uma frase\n");
    fgets(frase, 100, stdin);
    frase[strcspn(frase, "\n")] = '\0';
    printf("Frase criptografada:\n");
    for (i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == 'a' || frase[i] == 'A' ||
            frase[i] == 'e' || frase[i] == 'E' ||
            frase[i] == 'i' || frase[i] == 'I' ||
            frase[i] == 'o' || frase[i] == 'O' ||
            frase[i] == 'u' || frase[i] == 'U')
        {
            frase[i] = '*';
        }
        else
        {
            continue;
        }
    }
    puts(frase);
    return 0;
}