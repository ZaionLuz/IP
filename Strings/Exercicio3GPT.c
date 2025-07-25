#include <stdio.h>
#include <string.h>

/*Questão 3 dos exercícios do chat GPt:
Contagem de vogais: Leia uma frase e mostre quantas vogais (a, e, i, o, u) existem nela.*/

int main()
{
    char frase[100];
    int i, tamanho, vogais = 0;
    printf("Digite uma frase\n");
    fgets(frase, 100, stdin);
    tamanho = strlen(frase);
    for (i = 0; i < tamanho; i++)
    {
        if (frase[i] == 'a' || frase[i] == 'A' ||
            frase[i] == 'e' || frase[i] == 'E' ||
            frase[i] == 'i' || frase[i] == 'I' ||
            frase[i] == 'o' || frase[i] == 'O' ||
            frase[i] == 'u' || frase[i] == 'U')
        {
            vogais++;
        }
    }
    printf("A quantidade de vogais na frase %sEh: %d", frase, vogais);
    return 0;
}