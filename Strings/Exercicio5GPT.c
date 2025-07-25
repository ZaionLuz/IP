#include <stdio.h>
#include <string.h>

/*Questão 5 dos exercícios do chat GPt:
Contagem de espaços: Leia uma frase e mostre quantos espaços em branco ela possui.*/

int main()
{
    char frase[100];
    int i, espacos = 0;
    printf("Digite uma frase\n");
    fgets(frase, 100, stdin);
    for (i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == ' ')
        {
            espacos++;
        }
    }
    printf("A frase %sTem: %d espaco(s)", frase, espacos);
    return 0;
}