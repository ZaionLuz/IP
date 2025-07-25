#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*Faça um programa que receba um nome e gere um login e uma senha. O login deverá ser composto
pela primeira letra de cada nome em letras maiúsculas e as mesmas letras minúsculas; a senha será
composta pela representação AII de cada letra do login.
Exemplo:
Nome: Ana Beatriz costa
login: ABabc
senha: 656667979899*/

int main()
{
    char nome[100], login[20] = "", senha[50] = "";
    int i, j = 0;

    printf("Digite um nome:\n");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove o \n do fgets

    // Pegar a primeira letra do nome e colocar em maiúscula no login
    if (isalpha(nome[0])) // Verifica se é uma letra
    {
        login[j++] = toupper(nome[0]);
    }

    // Percorrer o nome e pegar a primeira letra após cada espaço
    for (i = 1; nome[i] != '\0'; i++)
    {
        if (nome[i] == ' ' && isalpha(nome[i + 1])) // Se for espaço e a próxima for letra
        {
            login[j++] = toupper(nome[i + 1]);
        }
    }

    // Adicionar as letras minúsculas ao login
    for (i = 0; i < j; i++)
    {
        login[j + i] = tolower(login[i]);
    }
    login[j * 2] = '\0'; // Adicionar o final da string

    // Gerar a senha convertendo cada caractere do login para ASCII
    for (i = 0; login[i] != '\0'; i++)
    {
        char ascii[5];
        sprintf(ascii, "%d", login[i]); // Converte para número ASCII
        strcat(senha, ascii); // Adiciona na senha
    }

    // Exibir resultado
    printf("Login: %s\n", login);
    printf("Senha: %s\n", senha);

    return 0;
}
