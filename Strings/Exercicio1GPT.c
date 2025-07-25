#include <stdio.h>
#include <string.h>

/*Questão 1 das questões que o chat gpt me deu pra fazer:
Tamanho da string: Peça ao usuário para digitar uma palavra e mostre quantos caracteres ela possui (sem contar \0).*/

int main()
{
    char frase[100];
    int i, caracteres = 0;
    printf("Digite uma frase\n");
    fgets(frase, 100, stdin);
    for (i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] != ' ' && frase[i] != '\n')
        {
            caracteres++;
        }
    }
    printf("A frase: %sTem: %d caracteres", frase, caracteres);

    return 0;
}