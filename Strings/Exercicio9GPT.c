#include <stdio.h>
#include <string.h>

/*Questão 9 dos exercícios do chat GPt:
Comparação de strings: Peça duas palavras ao usuário e informe se elas são iguais ou diferentes.*/

int main()
{
    int cmp = 0;
    char frase1[100], frase2[100];
    printf("Digite uma frase\n");
    fgets(frase1, 100, stdin);
    printf("Digite uma outra frase\n");
    fgets(frase2, 100, stdin);
    cmp = strcmp(frase1, frase2);
    if (cmp == 0)
    {
        printf("As frases sao iguais\n");
    }
    else
    {
        printf("As frases nao sao iguais");
    }

    return 0;
}