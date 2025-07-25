#include <stdio.h>  // Biblioteca padrão para entrada e saída

int main() {
    char frase[100];  // String para armazenar a frase digitada
    int i = 0, contador = 0;  // i para percorrer a string, contador para contar consoantes

    // Solicita ao usuário que digite uma frase
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);  // Usa fgets para ler a frase com espaços

    // Percorre a string até encontrar '\n' (nova linha) ou '\0' (fim da string)
    while (frase[i] != '\n' && frase[i] != '\0') {
        // Verifica se o caractere atual é uma letra do alfabeto
        if ((frase[i] >= 'A' && frase[i] <= 'Z') || (frase[i] >= 'a' && frase[i] <= 'z')) {
            // Verifica se **não** é uma vogal (logo, é uma consoante)
            if (!(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
                  frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')) {
                contador++;  // Se for consoante, incrementa o contador
            }
        }
        i++;  // Avança para o próximo caractere da string
    }

    // Exibe a quantidade de consoantes encontradas na frase digitada
    printf("Quantidade de consoantes: %d\n", contador);

    return 0;  // Retorna 0 indicando que o programa foi executado com sucesso
}
