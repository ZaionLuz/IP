#include <stdio.h>
#include <string.h>

/*Questão 6 dos exercícios do chat GPt:
Troca de vogais: Leia uma frase e substitua todas as vogais por '*'.*/

int main()
{
    char frase[100];
    int i;
    printf("Digite uma frase\n");
    fgets(frase, 100, stdin);
    printf("A frase %sCriptografada fica:\n", frase);
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
    }
    puts(frase);
    return 0;
}