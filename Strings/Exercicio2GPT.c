#include <stdio.h>
#include <string.h>

/*Questão 2 dos exercícios do chat GPt:
Último caractere: Peça ao usuário uma palavra e exiba o último caractere dela.*/

int main()
{
    char frase[100];
    int tamanho;
    printf("Digite uma frase\n");
    fgets(frase, 100, stdin);
    frase[strcspn(frase, "\n")] = '\0';
    tamanho = strlen(frase);
    if (tamanho > 0)
    {
        printf("O ultimo caractere e: %c\n", frase[tamanho - 1]);
    }
    else
    {
        printf("Nenhuma entrada valida.\n");
    }
    return 0;
}