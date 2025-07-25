#include <stdio.h>
#include <string.h>

/*Questão 8 dos exercícios do chat GPt:
Maiúsculas e minúsculas: Leia uma frase e converta todas as letras minúsculas para maiúsculas.*/

int main()
{
    char frase[100];
    int i;
    printf("Digite uma frase\n");
    fgets(frase, 100, stdin);
    printf("A frase %sMudada fica:\n",frase);
    for (i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] >= 'a' && frase[i] <= 'z')
        {
            frase[i] -= 32;
        }
    }
    puts(frase);
    return 0;
}