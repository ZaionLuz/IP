#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Função para contar quantas palavras existem na frase
int contarPalavras(const char *frase) {
    int contador = 0;
    int dentroPalavra = 0;

    while (*frase) {
        if (*frase == ' ') {
            dentroPalavra = 0;
        } else if (!dentroPalavra) {
            dentroPalavra = 1;
            contador++;
        }
        frase++;
    }

    return contador;
}

// Função para extrair palavras de uma frase e armazenar em um array
void extrairPalavras(const char *frase, char **palavras, int maxPalavras) {
    int i = 0;
    char *copia = strdup(frase); // Cria uma cópia da frase para não modificar a original
    char *token = strtok(copia, " ");

    while (token != NULL && i < maxPalavras) {
        palavras[i] = strdup(token); // Armazena cada palavra
        token = strtok(NULL, " ");
        i++;
    }

    free(copia); // Libera a cópia da frase
}

int main() {
    char frase1[100], frase2[100];

    printf("Digite a primeira frase: ");
    fgets(frase1, sizeof(frase1), stdin);
    frase1[strcspn(frase1, "\n")] = '\0'; // Remove o '\n' do final

    printf("Digite a segunda frase: ");
    fgets(frase2, sizeof(frase2), stdin);
    frase2[strcspn(frase2, "\n")] = '\0'; // Remove o '\n' do final

    // Conta quantas palavras tem em cada frase
    int numPalavras1 = contarPalavras(frase1);
    int numPalavras2 = contarPalavras(frase2);

    // Aloca memória para armazenar as palavras de cada frase
    char **palavras1 = (char **)malloc(numPalavras1 * sizeof(char *));
    char **palavras2 = (char **)malloc(numPalavras2 * sizeof(char *));

    // Extrai as palavras das frases
    extrairPalavras(frase1, palavras1, numPalavras1);
    extrairPalavras(frase2, palavras2, numPalavras2);

    // Combina as palavras alternadamente
    int maxPalavras = (numPalavras1 > numPalavras2) ? numPalavras1 : numPalavras2;
    for (int i = 0; i < maxPalavras; i++) {
        if (i < numPalavras1) {
            printf("%s ", palavras1[i]);
        }
        if (i < numPalavras2) {
            printf("%s ", palavras2[i]);
        }
    }
    printf("\n");

    // Libera a memória alocada para as palavras
    for (int i = 0; i < numPalavras1; i++) {
        free(palavras1[i]);
    }
    free(palavras1);

    for (int i = 0; i < numPalavras2; i++) {
        free(palavras2[i]);
    }
    free(palavras2);

    return 0;
}