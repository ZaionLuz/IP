#include <stdio.h>
#include <string.h>

/*Questão 7 dos exercícios do chat GPt:
Remover espaços extras: Leia uma frase e remova os espaços extras entre as palavras.*/

int main() {
    char frase[100];
    int i, j = 0, espaco = 1;

    printf("Digite uma frase:\n");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ' || !espaco) {
            frase[j++] = frase[i];
        }
        espaco = (frase[i] == ' ');
    }

    if (j > 0 && frase[j - 1] == ' ') j--;
    frase[j] = '\0';

    printf("Frase sem espacos extras:\n%s\n", frase);
    return 0;
}
