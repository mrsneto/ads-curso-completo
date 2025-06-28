#include <stdio.h>

/*
@author leo neto
14) Escreva um algoritmo que receba a quantidade de moedas que Astrogilda possui
    (de R$ 0.25, R$ 0.50 e R$ 1.00) e apresente o valor total em reais.
*/

int main() {
    int qtd_25, qtd_50, qtd_1;
    float total;

    printf("Digite a quantidade de moedas de R$ 0.25: ");
    scanf("%d", &qtd_25);

    printf("Digite a quantidade de moedas de R$ 0.50: ");
    scanf("%d", &qtd_50);

    printf("Digite a quantidade de moedas de R$ 1.00: ");
    scanf("%d", &qtd_1);

    total = qtd_25 * 0.25 + qtd_50 * 0.50 + qtd_1 * 1.00;

    printf("\nAstrogilda possui um total de R$ %.2f\n", total);

    return 0;
}
