#include <stdio.h>
#include <string.h>

/*Questão 4 dos exercícios do chat GPt:
String invertida: Leia uma palavra e exiba ela ao contrário.*/

int main()
{
    char frase[100];
    int i, tamanho;
    printf("Digite uma frase\n");
    fgets(frase, 100, stdin);
    tamanho = strlen(frase);
    printf("A frase invertida fica:");
    for (i = tamanho - 1; i >= 0; i--)
    {
        printf("%c", frase[i]);
    }
    return 0;
}