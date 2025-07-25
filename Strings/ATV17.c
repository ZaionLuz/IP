#include <stdio.h>
#include <string.h>
int main()
{
    char frase[100];
    int i;
    printf("Digite uma frase\n");
    fgets(frase, 100, stdin);
    puts(frase);
    return 0;
}