#include <stdio.h>

/*
@author leo neto
7) Escreva um algoritmo que receba o valor do produto e calcule o novo valor com:
   - 10% de desconto para pagamento em dinheiro
   - 5% de desconto para pagamento no cartão
*/

int main() {
    float valor, novo_valor;
    int forma_pagamento;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);

    printf("Forma de pagamento:\n");
    printf("1 - Dinheiro (10%% de desconto)\n");
    printf("2 - Cartão   (5%% de desconto)\n");
    printf("Escolha uma opção (1 ou 2): ");
    scanf("%d", &forma_pagamento);

    if (forma_pagamento == 1) {
        novo_valor = valor * 0.90;
        printf("Pagamento em dinheiro. Valor com desconto: R$ %.2f\n", novo_valor);
    } else if (forma_pagamento == 2) {
        novo_valor = valor * 0.95;
        printf("Pagamento no cartão. Valor com desconto: R$ %.2f\n", novo_valor);
    } else {
        printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}
