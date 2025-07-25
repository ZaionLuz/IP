#include <stdio.h>

int main() {
    int i, j, diferentes = 0;
    char frase[100];
    
    printf("Digite uma frase qualquer: ");
    fgets(frase, sizeof(frase), stdin);

    // Percorre todos os caracteres da string
    for (i = 0; frase[i] != '\0'; i++) {
        // Ignora quebras de linha e espaços
        if (frase[i] != '\n' && frase[i] != ' ') {
            int jaContado = 0;

            // Verifica se o caractere já foi contado antes
            for (j = 0; j < i; j++) {
                if (frase[i] == frase[j]) {
                    jaContado = 1;
                    break;
                }
            }

            // Se o caractere não foi contado antes, incrementa o contador
            if (!jaContado) {
                diferentes++;
            }
        }
    }

    // Exibe o número total de letras diferentes
    printf("Existem %d letras diferentes na frase.\n", diferentes);

    return 0;
}
