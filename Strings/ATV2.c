#include <stdio.h>
int main()
{
    char frase[100];
    printf("Digite uma frase qualquer\n");
    fgets(frase, sizeof(frase), stdin);
    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == ' ')
        {
            printf("\n");
        }
        else if (frase[i] != '\n')
        {
            printf("%c", frase[i]);
        }
    }
    return 0;
}