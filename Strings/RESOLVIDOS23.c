#include <stdio.h>
#include <string.h>

/*Faça um programa para criptografar uma frase em que cada caractere deverá ser substituído pelo caractere que está três posições à sua frente na tabela ASCII.
Os três últimos caracteres da tabela ASCII deverão ser substituídos pelos três primeiros.
Exemplo:

 BONECO ZABUMBA
 ERQHFR cDEXPED

 Solução:
- Digitar uma frase.
- Pegar o tamanho da frase.
- Percorrer toda a frase, convertendo cada caractere para ASCII, acrescentando três e convertendo novamente para caractere.
- Copiar o novo caractere para a frase criptografada.*/

int main()
{
    char frase[100], criptografado;
    int i;
    printf("Digite uma frase\n");
    fgets(frase, 100, stdin);
    frase[strcspn(frase, "\n")] = '\0';
    printf("A frase (%s) Criptografada fica:\n", frase);
    for (i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == ' ')
        {
            printf(" ");
        }

        else if (frase[i] >= 'A' && frase[i] <= 'Z')
        {
            if (frase[i] + 3 > 'Z')
            {
                criptografado = (frase[i] + 3 - 'Z' - 1) + 'a';
                printf("%c", criptografado);
            }

            else
            {
                printf("%c", frase[i] + 3);
            }
        }
        else if (frase[i] >= 'a' && frase[i] <= 'z')
        {
            if (frase[i] + 3 > 'z')
            {
                criptografado = (frase[i] + 3 - 'z' - 1) + 'A';
                printf("%c", criptografado);
            }
            else
            {
                printf("%c", frase[i] + 3);
            }
        }
        else
        {
            printf("%c", frase[i] + 3);
        }
    }
    return 0;
}