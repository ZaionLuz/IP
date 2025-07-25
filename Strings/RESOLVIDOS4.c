#include <stdio.h>  // Biblioteca padrão para entrada e saída

int main() {
    char frase[100];  // String para armazenar a frase digitada
    int i, j;  // Variáveis para percorrer a string
    int contador[256] = {0};  // Array para contar a frequência de cada caractere ASCII

    // Solicita ao usuário que digite uma frase
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);  // Usa fgets para ler a frase, permitindo espaços

    // Conta a frequência de cada caractere na string
    for (i = 0; frase[i] != '\n' && frase[i] != '\0'; i++) {
        if ((frase[i] >= 'A' && frase[i] <= 'Z') || (frase[i] >= 'a' && frase[i] <= 'z')) {
            contador[(unsigned char)frase[i]]++;  // Incrementa a contagem da letra
        }
    }

    // Exibe as letras que se repetem
    printf("Letras que se repetem:\n");
    for (j = 0; j < 256; j++) {
        if (contador[j] > 1) {  // Se a letra aparece mais de uma vez, exibe
            printf("'%c' aparece %d vezes\n", j, contador[j]);
        }
    }

    return 0;  // Retorna 0 indicando que o programa foi executado com sucesso
}
