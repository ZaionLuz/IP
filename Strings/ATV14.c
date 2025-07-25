#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100];
    int i;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    for (i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
            frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')
        {
            if (frase[i] >= 'a' && frase[i] <= 'z')
            {
                frase[i] -= 32;
            }
        }
        else if ((frase[i] >= 'b' && frase[i] <= 'z' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u') ||
                 (frase[i] >= 'B' && frase[i] <= 'Z' && frase[i] != 'E' && frase[i] != 'I' && frase[i] != 'O' && frase[i] != 'U'))
        {
            if (frase[i] >= 'A' && frase[i] <= 'Z')
            {
                frase[i] += 32;
            }
        }
    }

    printf("Frase convertida: %s\n", frase);

    return 0;
}
