#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nome[100], sobrenome[50] = "", iniciais[50] = "";
    int i, tamanho, ultimo_espaco = -1;

    // Ler o nome
    printf("Digite o nome completo:\n");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove o '\n' do fgets

    tamanho = strlen(nome);

    // Percorrer do final para encontrar o último sobrenome
    for (i = tamanho - 1; i >= 0; i--)
    {
        if (nome[i] == ' ')
        {
            ultimo_espaco = i;
            break;
        }
    }

    // Copiar o sobrenome
    if (ultimo_espaco != -1)
    {
        strcpy(sobrenome, &nome[ultimo_espaco + 1]);
    }
    else
    {
        strcpy(sobrenome, nome);
    }

    // Pegar as iniciais
    iniciais[0] = nome[0]; // Primeira inicial
    int j = 1;
    for (i = 1; i < ultimo_espaco; i++)
    {
        if (nome[i] == ' ' && isalpha(nome[i + 1]))
        {
            iniciais[j++] = nome[i + 1];
        }
    }
    iniciais[j] = '\0';

    // Exibir resultado formatado
    printf("Saida: %s, ", sobrenome);
    for (i = 0; i < j; i++)
    {
        printf("%c. ", toupper(iniciais[i]));
    }
    printf("\n");

    return 0;
}
