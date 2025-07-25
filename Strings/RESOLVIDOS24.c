#include <stdio.h>
#include <string.h>

int main()
{
    int tamanho;
    char verbo[50];
    printf("Digite um verbo no infinitivo (terminado em 'AR')\n");
    fgets(verbo, 50, stdin);
    printf("A conjugacao do verbo no tempo presente e:\n");
    verbo[strcspn(verbo, "\n")] = '\0';
    tamanho=strlen(verbo);
    if(tamanho>2)
    {
        verbo[tamanho-2]='\0';
    }

    printf("Eu %so\nTu %sas\nEle %sa\nNos %samos\nVois %sais\n(Eles/Elas) %sam", verbo, verbo, verbo, verbo, verbo, verbo);
    return 0;
}