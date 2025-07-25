#include <stdio.h>

int main() {
    int codigos[10], estoque[10], cliente, codProduto, quantidade, i, encontrado, indice;

    for (i = 0; i < 10; i++) {
        printf("Digite o codigo do produto %d: ", i + 1);
        scanf("%d", &codigos[i]);
        printf("Digite o estoque do produto %d: ", i + 1);
        scanf("%d", &estoque[i]);
    }

    while (1) {
        printf("Digite o codigo do cliente (0 para sair): ");
        scanf("%d", &cliente);
        if (cliente == 0) break;

        printf("Digite o codigo do produto desejado: ");
        scanf("%d", &codProduto);
        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidade);

        encontrado = 0;
        for (i = 0; i < 10; i++) {
            if (codigos[i] == codProduto) {
                encontrado = 1;
                indice = i;
                break;
            }
        }

        if (!encontrado) {
            printf("Codigo inexistente\n");
        } else if (estoque[indice] < quantidade) {
            printf("Nao temos estoque suficiente dessa mercadoria.\n");
        } else {
            estoque[indice] -= quantidade;
            printf("Pedido atendido. Obrigado e volte sempre.\n");
        }
    }

    printf("Estoque atualizado:\n");
    for (i = 0; i < 10; i++) {
        printf("Codigo: %d - Estoque: %d\n", codigos[i], estoque[i]);
    }

    return 0;
}
