#include <stdio.h>
#include <string.h>

/*Questão 9 dos exercícios do chat GPt:
Primeira e última palavra: Leia uma frase e exiba apenas a primeira e a última palavra.*/

int main()
{
    char frase[100];
    int i = 0, ultima = 0;
    printf("Digite uma frase\n");
    fgets(frase, 100, stdin);
    frase[strcspn(frase, "\n")] = '\0';
    printf("Primeira palavra da frase:\n");
    while (frase[i] != ' ' && frase[i] != '\0')
    {
        printf("%c", frase[i]);
        i++;
    }

    printf("\nUltima palavra da frase:\n");
    for (i = strlen(frase) - 1; i >= 0; i--)
    {
        if (frase[i] == ' ')
        {
            ultima = i + 1;
            break;
        }
    }
    printf("%s", &frase[ultima]);
    return 0;
}
