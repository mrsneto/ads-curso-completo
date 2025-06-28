#include <stdio.h>

/*
@author leo neto
Lê um conjunto de pedidos e calcula o total da compra.
Encerra ao digitar número do pedido 0.
*/

int main() {
    int numero_pedido, quantidade, total_pedidos = 0;
    float preco_unitario, valor_total, soma_total = 0.0;

    printf("Digite os pedidos (digite 0 no número do pedido para encerrar).\n");

    while (1) {
        printf("\nNúmero do pedido: ");
        scanf("%d", &numero_pedido);

        if (numero_pedido == 0) {
            break;
        }

        printf("Preço unitário: R$ ");
        scanf("%f", &preco_unitario);

        printf("Quantidade: ");
        scanf("%d", &quantidade);

        valor_total = preco_unitario * quantidade;
        printf("Valor total do pedido %d: R$ %.2f\n", numero_pedido, valor_total);

        soma_total += valor_total;
        total_pedidos++;
    }

    printf("\nTotal de pedidos: %d\n", total_pedidos);
    printf("Valor total arrecadado: R$ %.2f\n", soma_total);

    return 0;
}
