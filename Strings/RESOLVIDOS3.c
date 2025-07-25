#include <stdio.h>  // Biblioteca padrão para entrada e saída

int main() {
    char frase[100];  // String para armazenar a frase digitada
    int i = 0, contador = 0;  // i para percorrer a string, contador para contar palavras
    int dentro_palavra = 0;  // Variável para indicar se estamos dentro de uma palavra

    // Solicita ao usuário que digite uma frase
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);  // Usa fgets para ler a frase com espaços

    // Percorre a string até encontrar '\n' (nova linha) ou '\0' (fim da string)
    while (frase[i] != '\n' && frase[i] != '\0') {
        // Verifica se o caractere atual é um espaço ou um caractere especial
        if (frase[i] == ' ' || frase[i] == '\t') {
            dentro_palavra = 0;  // Sai de uma palavra quando encontra espaço/tabulação
        } else if (dentro_palavra == 0) {  
            // Se o caractere atual não for espaço e antes era espaço, é uma nova palavra
            dentro_palavra = 1;
            contador++;  // Conta uma nova palavra
        }
        i++;  // Avança para o próximo caractere da string
    }

    // Exibe a quantidade de palavras encontradas na frase digitada
    printf("Quantidade de palavras: %d\n", contador);

    return 0;  // Retorna 0 indicando que o programa foi executado com sucesso
}
